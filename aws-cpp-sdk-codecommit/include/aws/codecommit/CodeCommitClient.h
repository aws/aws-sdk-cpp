/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codecommit/CodeCommitServiceClientModel.h>
#include <aws/codecommit/CodeCommitLegacyAsyncMacros.h>

namespace Aws
{
namespace CodeCommit
{
  /**
   * <fullname>AWS CodeCommit</fullname> <p>This is the <i>AWS CodeCommit API
   * Reference</i>. This reference provides descriptions of the operations and data
   * types for AWS CodeCommit API along with usage examples.</p> <p>You can use the
   * AWS CodeCommit API to work with the following objects:</p> <p>Repositories, by
   * calling the following:</p> <ul> <li> <p> <a>BatchGetRepositories</a>, which
   * returns information about one or more repositories associated with your AWS
   * account.</p> </li> <li> <p> <a>CreateRepository</a>, which creates an AWS
   * CodeCommit repository.</p> </li> <li> <p> <a>DeleteRepository</a>, which deletes
   * an AWS CodeCommit repository.</p> </li> <li> <p> <a>GetRepository</a>, which
   * returns information about a specified repository.</p> </li> <li> <p>
   * <a>ListRepositories</a>, which lists all AWS CodeCommit repositories associated
   * with your AWS account.</p> </li> <li> <p> <a>UpdateRepositoryDescription</a>,
   * which sets or updates the description of the repository.</p> </li> <li> <p>
   * <a>UpdateRepositoryName</a>, which changes the name of the repository. If you
   * change the name of a repository, no other users of that repository can access it
   * until you send them the new HTTPS or SSH URL to use.</p> </li> </ul>
   * <p>Branches, by calling the following:</p> <ul> <li> <p> <a>CreateBranch</a>,
   * which creates a branch in a specified repository.</p> </li> <li> <p>
   * <a>DeleteBranch</a>, which deletes the specified branch in a repository unless
   * it is the default branch.</p> </li> <li> <p> <a>GetBranch</a>, which returns
   * information about a specified branch.</p> </li> <li> <p> <a>ListBranches</a>,
   * which lists all branches for a specified repository.</p> </li> <li> <p>
   * <a>UpdateDefaultBranch</a>, which changes the default branch for a
   * repository.</p> </li> </ul> <p>Files, by calling the following:</p> <ul> <li>
   * <p> <a>DeleteFile</a>, which deletes the content of a specified file from a
   * specified branch.</p> </li> <li> <p> <a>GetBlob</a>, which returns the base-64
   * encoded content of an individual Git blob object in a repository.</p> </li> <li>
   * <p> <a>GetFile</a>, which returns the base-64 encoded content of a specified
   * file.</p> </li> <li> <p> <a>GetFolder</a>, which returns the contents of a
   * specified folder or directory.</p> </li> <li> <p> <a>PutFile</a>, which adds or
   * modifies a single file in a specified repository and branch.</p> </li> </ul>
   * <p>Commits, by calling the following:</p> <ul> <li> <p> <a>BatchGetCommits</a>,
   * which returns information about one or more commits in a repository.</p> </li>
   * <li> <p> <a>CreateCommit</a>, which creates a commit for changes to a
   * repository.</p> </li> <li> <p> <a>GetCommit</a>, which returns information about
   * a commit, including commit messages and author and committer information.</p>
   * </li> <li> <p> <a>GetDifferences</a>, which returns information about the
   * differences in a valid commit specifier (such as a branch, tag, HEAD, commit ID,
   * or other fully qualified reference).</p> </li> </ul> <p>Merges, by calling the
   * following:</p> <ul> <li> <p> <a>BatchDescribeMergeConflicts</a>, which returns
   * information about conflicts in a merge between commits in a repository.</p>
   * </li> <li> <p> <a>CreateUnreferencedMergeCommit</a>, which creates an
   * unreferenced commit between two branches or commits for the purpose of comparing
   * them and identifying any potential conflicts.</p> </li> <li> <p>
   * <a>DescribeMergeConflicts</a>, which returns information about merge conflicts
   * between the base, source, and destination versions of a file in a potential
   * merge.</p> </li> <li> <p> <a>GetMergeCommit</a>, which returns information about
   * the merge between a source and destination commit. </p> </li> <li> <p>
   * <a>GetMergeConflicts</a>, which returns information about merge conflicts
   * between the source and destination branch in a pull request.</p> </li> <li> <p>
   * <a>GetMergeOptions</a>, which returns information about the available merge
   * options between two branches or commit specifiers.</p> </li> <li> <p>
   * <a>MergeBranchesByFastForward</a>, which merges two branches using the
   * fast-forward merge option.</p> </li> <li> <p> <a>MergeBranchesBySquash</a>,
   * which merges two branches using the squash merge option.</p> </li> <li> <p>
   * <a>MergeBranchesByThreeWay</a>, which merges two branches using the three-way
   * merge option.</p> </li> </ul> <p>Pull requests, by calling the following:</p>
   * <ul> <li> <p> <a>CreatePullRequest</a>, which creates a pull request in a
   * specified repository.</p> </li> <li> <p> <a>CreatePullRequestApprovalRule</a>,
   * which creates an approval rule for a specified pull request.</p> </li> <li> <p>
   * <a>DeletePullRequestApprovalRule</a>, which deletes an approval rule for a
   * specified pull request.</p> </li> <li> <p> <a>DescribePullRequestEvents</a>,
   * which returns information about one or more pull request events.</p> </li> <li>
   * <p> <a>EvaluatePullRequestApprovalRules</a>, which evaluates whether a pull
   * request has met all the conditions specified in its associated approval
   * rules.</p> </li> <li> <p> <a>GetCommentsForPullRequest</a>, which returns
   * information about comments on a specified pull request.</p> </li> <li> <p>
   * <a>GetPullRequest</a>, which returns information about a specified pull
   * request.</p> </li> <li> <p> <a>GetPullRequestApprovalStates</a>, which returns
   * information about the approval states for a specified pull request.</p> </li>
   * <li> <p> <a>GetPullRequestOverrideState</a>, which returns information about
   * whether approval rules have been set aside (overriden) for a pull request, and
   * if so, the Amazon Resource Name (ARN) of the user or identity that overrode the
   * rules and their requirements for the pull request.</p> </li> <li> <p>
   * <a>ListPullRequests</a>, which lists all pull requests for a repository.</p>
   * </li> <li> <p> <a>MergePullRequestByFastForward</a>, which merges the source
   * destination branch of a pull request into the specified destination branch for
   * that pull request using the fast-forward merge option.</p> </li> <li> <p>
   * <a>MergePullRequestBySquash</a>, which merges the source destination branch of a
   * pull request into the specified destination branch for that pull request using
   * the squash merge option.</p> </li> <li> <p> <a>MergePullRequestByThreeWay</a>.
   * which merges the source destination branch of a pull request into the specified
   * destination branch for that pull request using the three-way merge option.</p>
   * </li> <li> <p> <a>OverridePullRequestApprovalRules</a>, which sets aside all
   * approval rule requirements for a pull request.</p> </li> <li> <p>
   * <a>PostCommentForPullRequest</a>, which posts a comment to a pull request at the
   * specified line, file, or request.</p> </li> <li> <p>
   * <a>UpdatePullRequestApprovalRuleContent</a>, which updates the structure of an
   * approval rule for a pull request.</p> </li> <li> <p>
   * <a>UpdatePullRequestApprovalState</a>, which updates the state of an approval on
   * a pull request.</p> </li> <li> <p> <a>UpdatePullRequestDescription</a>, which
   * updates the description of a pull request.</p> </li> <li> <p>
   * <a>UpdatePullRequestStatus</a>, which updates the status of a pull request.</p>
   * </li> <li> <p> <a>UpdatePullRequestTitle</a>, which updates the title of a pull
   * request.</p> </li> </ul> <p>Approval rule templates, by calling the
   * following:</p> <ul> <li> <p> <a>AssociateApprovalRuleTemplateWithRepository</a>,
   * which associates a template with a specified repository. After the template is
   * associated with a repository, AWS CodeCommit creates approval rules that match
   * the template conditions on every pull request created in the specified
   * repository.</p> </li> <li> <p>
   * <a>BatchAssociateApprovalRuleTemplateWithRepositories</a>, which associates a
   * template with one or more specified repositories. After the template is
   * associated with a repository, AWS CodeCommit creates approval rules that match
   * the template conditions on every pull request created in the specified
   * repositories.</p> </li> <li> <p>
   * <a>BatchDisassociateApprovalRuleTemplateFromRepositories</a>, which removes the
   * association between a template and specified repositories so that approval rules
   * based on the template are not automatically created when pull requests are
   * created in those repositories.</p> </li> <li> <p>
   * <a>CreateApprovalRuleTemplate</a>, which creates a template for approval rules
   * that can then be associated with one or more repositories in your AWS
   * account.</p> </li> <li> <p> <a>DeleteApprovalRuleTemplate</a>, which deletes the
   * specified template. It does not remove approval rules on pull requests already
   * created with the template.</p> </li> <li> <p>
   * <a>DisassociateApprovalRuleTemplateFromRepository</a>, which removes the
   * association between a template and a repository so that approval rules based on
   * the template are not automatically created when pull requests are created in the
   * specified repository.</p> </li> <li> <p> <a>GetApprovalRuleTemplate</a>, which
   * returns information about an approval rule template.</p> </li> <li> <p>
   * <a>ListApprovalRuleTemplates</a>, which lists all approval rule templates in the
   * AWS Region in your AWS account.</p> </li> <li> <p>
   * <a>ListAssociatedApprovalRuleTemplatesForRepository</a>, which lists all
   * approval rule templates that are associated with a specified repository.</p>
   * </li> <li> <p> <a>ListRepositoriesForApprovalRuleTemplate</a>, which lists all
   * repositories associated with the specified approval rule template.</p> </li>
   * <li> <p> <a>UpdateApprovalRuleTemplateDescription</a>, which updates the
   * description of an approval rule template.</p> </li> <li> <p>
   * <a>UpdateApprovalRuleTemplateName</a>, which updates the name of an approval
   * rule template.</p> </li> <li> <p> <a>UpdateApprovalRuleTemplateContent</a>,
   * which updates the content of an approval rule template.</p> </li> </ul>
   * <p>Comments in a repository, by calling the following:</p> <ul> <li> <p>
   * <a>DeleteCommentContent</a>, which deletes the content of a comment on a commit
   * in a repository.</p> </li> <li> <p> <a>GetComment</a>, which returns information
   * about a comment on a commit.</p> </li> <li> <p> <a>GetCommentReactions</a>,
   * which returns information about emoji reactions to comments.</p> </li> <li> <p>
   * <a>GetCommentsForComparedCommit</a>, which returns information about comments on
   * the comparison between two commit specifiers in a repository.</p> </li> <li> <p>
   * <a>PostCommentForComparedCommit</a>, which creates a comment on the comparison
   * between two commit specifiers in a repository.</p> </li> <li> <p>
   * <a>PostCommentReply</a>, which creates a reply to a comment.</p> </li> <li> <p>
   * <a>PutCommentReaction</a>, which creates or updates an emoji reaction to a
   * comment.</p> </li> <li> <p> <a>UpdateComment</a>, which updates the content of a
   * comment on a commit in a repository.</p> </li> </ul> <p>Tags used to tag
   * resources in AWS CodeCommit (not Git tags), by calling the following:</p> <ul>
   * <li> <p> <a>ListTagsForResource</a>, which gets information about AWS tags for a
   * specified Amazon Resource Name (ARN) in AWS CodeCommit.</p> </li> <li> <p>
   * <a>TagResource</a>, which adds or updates tags for a resource in AWS
   * CodeCommit.</p> </li> <li> <p> <a>UntagResource</a>, which removes tags for a
   * resource in AWS CodeCommit.</p> </li> </ul> <p>Triggers, by calling the
   * following:</p> <ul> <li> <p> <a>GetRepositoryTriggers</a>, which returns
   * information about triggers configured for a repository.</p> </li> <li> <p>
   * <a>PutRepositoryTriggers</a>, which replaces all triggers for a repository and
   * can be used to create or delete triggers.</p> </li> <li> <p>
   * <a>TestRepositoryTriggers</a>, which tests the functionality of a repository
   * trigger by sending data to the trigger target.</p> </li> </ul> <p>For
   * information about how to use AWS CodeCommit, see the <a
   * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
   * CodeCommit User Guide</a>.</p>
   */
  class AWS_CODECOMMIT_API CodeCommitClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::CodeCommit::CodeCommitClientConfiguration& clientConfiguration = Aws::CodeCommit::CodeCommitClientConfiguration(),
                         std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CodeCommit::CodeCommitClientConfiguration& clientConfiguration = Aws::CodeCommit::CodeCommitClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeCommitClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CodeCommit::CodeCommitClientConfiguration& clientConfiguration = Aws::CodeCommit::CodeCommitClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeCommitClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeCommitClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates an association between an approval rule template and a specified
         * repository. Then, the next time a pull request is created in the repository
         * where the destination reference (if specified) matches the destination reference
         * (branch) for the pull request, an approval rule that matches the template
         * conditions is automatically created for that pull request. If no destination
         * references are specified in the template, an approval rule that matches the
         * template contents is created for all pull requests in that
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/AssociateApprovalRuleTemplateWithRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApprovalRuleTemplateWithRepositoryOutcome AssociateApprovalRuleTemplateWithRepository(const Model::AssociateApprovalRuleTemplateWithRepositoryRequest& request) const;


        /**
         * <p>Creates an association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchAssociateApprovalRuleTemplateWithRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome BatchAssociateApprovalRuleTemplateWithRepositories(const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const;


        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeMergeConflictsOutcome BatchDescribeMergeConflicts(const Model::BatchDescribeMergeConflictsRequest& request) const;


        /**
         * <p>Removes the association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDisassociateApprovalRuleTemplateFromRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome BatchDisassociateApprovalRuleTemplateFromRepositories(const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const;


        /**
         * <p>Returns information about the contents of one or more commits in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetCommits">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCommitsOutcome BatchGetCommits(const Model::BatchGetCommitsRequest& request) const;


        /**
         * <p>Returns information about one or more repositories.</p>  <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRepositoriesOutcome BatchGetRepositories(const Model::BatchGetRepositoriesRequest& request) const;


        /**
         * <p>Creates a template for approval rules that can then be associated with one or
         * more repositories in your AWS account. When you associate a template with a
         * repository, AWS CodeCommit creates an approval rule that matches the conditions
         * of the template for all pull requests that meet the conditions of the template.
         * For more information, see
         * <a>AssociateApprovalRuleTemplateWithRepository</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApprovalRuleTemplateOutcome CreateApprovalRuleTemplate(const Model::CreateApprovalRuleTemplateRequest& request) const;


        /**
         * <p>Creates a branch in a repository and points the branch to a commit.</p>
         *  <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;


        /**
         * <p>Creates a commit for a repository on the tip of a specified
         * branch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCommitOutcome CreateCommit(const Model::CreateCommitRequest& request) const;


        /**
         * <p>Creates a pull request in the specified repository.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullRequestOutcome CreatePullRequest(const Model::CreatePullRequestRequest& request) const;


        /**
         * <p>Creates an approval rule for a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequestApprovalRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullRequestApprovalRuleOutcome CreatePullRequestApprovalRule(const Model::CreatePullRequestApprovalRuleRequest& request) const;


        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;


        /**
         * <p>Creates an unreferenced commit that represents the result of merging two
         * branches using a specified merge strategy. This can help you determine the
         * outcome of a potential merge. This API cannot be used with the fast-forward
         * merge strategy because that strategy does not create a merge commit.</p> 
         * <p>This unreferenced merge commit can only be accessed using the GetCommit API
         * or through git commands such as git fetch. To retrieve this commit, you must
         * specify its commit ID or otherwise reference it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateUnreferencedMergeCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUnreferencedMergeCommitOutcome CreateUnreferencedMergeCommit(const Model::CreateUnreferencedMergeCommitRequest& request) const;


        /**
         * <p>Deletes a specified approval rule template. Deleting a template does not
         * remove approval rules on pull requests already created with the
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApprovalRuleTemplateOutcome DeleteApprovalRuleTemplate(const Model::DeleteApprovalRuleTemplateRequest& request) const;


        /**
         * <p>Deletes a branch from a repository, unless that branch is the default branch
         * for the repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;


        /**
         * <p>Deletes the content of a comment made on a change, file, or commit in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteCommentContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCommentContentOutcome DeleteCommentContent(const Model::DeleteCommentContentRequest& request) const;


        /**
         * <p>Deletes a specified file from a specified branch. A commit is created on the
         * branch that contains the revision. The file still exists in the commits earlier
         * to the commit that contains the deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteFile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileOutcome DeleteFile(const Model::DeleteFileRequest& request) const;


        /**
         * <p>Deletes an approval rule from a specified pull request. Approval rules can be
         * deleted from a pull request only if the pull request is open, and if the
         * approval rule was created specifically for a pull request and not generated from
         * an approval rule template associated with the repository where the pull request
         * was created. You cannot delete an approval rule from a merged or closed pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeletePullRequestApprovalRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePullRequestApprovalRuleOutcome DeletePullRequestApprovalRule(const Model::DeletePullRequestApprovalRuleRequest& request) const;


        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID is returned.</p>  <p>Deleting a repository also deletes
         * all associated objects and metadata. After a repository is deleted, all future
         * push calls to the deleted repository fail.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;


        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge strategy. If the
         * merge option for the attempted merge is specified as FAST_FORWARD_MERGE, an
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribeMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMergeConflictsOutcome DescribeMergeConflicts(const Model::DescribeMergeConflictsRequest& request) const;


        /**
         * <p>Returns information about one or more pull request events.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribePullRequestEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePullRequestEventsOutcome DescribePullRequestEvents(const Model::DescribePullRequestEventsRequest& request) const;


        /**
         * <p>Removes the association between a template and a repository so that approval
         * rules based on the template are not automatically created when pull requests are
         * created in the specified repository. This does not delete any approval rules
         * previously created for pull requests through the template
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DisassociateApprovalRuleTemplateFromRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApprovalRuleTemplateFromRepositoryOutcome DisassociateApprovalRuleTemplateFromRepository(const Model::DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const;


        /**
         * <p>Evaluates whether a pull request has met all the conditions specified in its
         * associated approval rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/EvaluatePullRequestApprovalRules">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluatePullRequestApprovalRulesOutcome EvaluatePullRequestApprovalRules(const Model::EvaluatePullRequestApprovalRulesRequest& request) const;


        /**
         * <p>Returns information about a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApprovalRuleTemplateOutcome GetApprovalRuleTemplate(const Model::GetApprovalRuleTemplateRequest& request) const;


        /**
         * <p>Returns the base-64 encoded content of an individual blob in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlobOutcome GetBlob(const Model::GetBlobRequest& request) const;


        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;


        /**
         * <p>Returns the content of a comment made on a change, file, or commit in a
         * repository. </p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetComment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentOutcome GetComment(const Model::GetCommentRequest& request) const;


        /**
         * <p>Returns information about reactions to a specified comment ID. Reactions from
         * users who have been deleted will not be included in the count.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentReactions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentReactionsOutcome GetCommentReactions(const Model::GetCommentReactionsRequest& request) const;


        /**
         * <p>Returns information about comments made on the comparison between two
         * commits.</p>  <p>Reaction counts might include numbers from user
         * identities who were deleted after the reaction was made. For a count of
         * reactions from active identities, use GetCommentReactions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForComparedCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentsForComparedCommitOutcome GetCommentsForComparedCommit(const Model::GetCommentsForComparedCommitRequest& request) const;


        /**
         * <p>Returns comments made on a pull request.</p>  <p>Reaction counts might
         * include numbers from user identities who were deleted after the reaction was
         * made. For a count of reactions from active identities, use
         * GetCommentReactions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentsForPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentsForPullRequestOutcome GetCommentsForPullRequest(const Model::GetCommentsForPullRequestRequest& request) const;


        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommitOutcome GetCommit(const Model::GetCommitRequest& request) const;


        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID, or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDifferencesOutcome GetDifferences(const Model::GetDifferencesRequest& request) const;


        /**
         * <p>Returns the base-64 encoded contents of a specified file and its
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFileOutcome GetFile(const Model::GetFileRequest& request) const;


        /**
         * <p>Returns the contents of a specified folder in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;


        /**
         * <p>Returns information about a specified merge commit.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeCommitOutcome GetMergeCommit(const Model::GetMergeCommitRequest& request) const;


        /**
         * <p>Returns information about merge conflicts between the before and after commit
         * IDs for a pull request in a repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeConflictsOutcome GetMergeConflicts(const Model::GetMergeConflictsRequest& request) const;


        /**
         * <p>Returns information about the merge options available for merging two
         * specified branches. For details about why a merge option is not available, use
         * GetMergeConflicts or DescribeMergeConflicts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeOptionsOutcome GetMergeOptions(const Model::GetMergeOptionsRequest& request) const;


        /**
         * <p>Gets information about a pull request in a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestOutcome GetPullRequest(const Model::GetPullRequestRequest& request) const;


        /**
         * <p>Gets information about the approval states for a specified pull request.
         * Approval states only apply to pull requests that have one or more approval rules
         * applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestApprovalStates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestApprovalStatesOutcome GetPullRequestApprovalStates(const Model::GetPullRequestApprovalStatesRequest& request) const;


        /**
         * <p>Returns information about whether approval rules have been set aside
         * (overridden) for a pull request, and if so, the Amazon Resource Name (ARN) of
         * the user or identity that overrode the rules and their requirements for the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestOverrideState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestOverrideStateOutcome GetPullRequestOverrideState(const Model::GetPullRequestOverrideStateRequest& request) const;


        /**
         * <p>Returns information about a repository.</p>  <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a webpage
         * can expose users to potentially malicious code. Make sure that you HTML-encode
         * the description field in any application that uses this API to display the
         * repository description on a webpage.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryOutcome GetRepository(const Model::GetRepositoryRequest& request) const;


        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryTriggersOutcome GetRepositoryTriggers(const Model::GetRepositoryTriggersRequest& request) const;


        /**
         * <p>Lists all approval rule templates in the specified AWS Region in your AWS
         * account. If an AWS Region is not specified, the AWS Region where you are signed
         * in is used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListApprovalRuleTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovalRuleTemplatesOutcome ListApprovalRuleTemplates(const Model::ListApprovalRuleTemplatesRequest& request) const;


        /**
         * <p>Lists all approval rule templates that are associated with a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListAssociatedApprovalRuleTemplatesForRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedApprovalRuleTemplatesForRepositoryOutcome ListAssociatedApprovalRuleTemplatesForRepository(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const;


        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;


        /**
         * <p>Returns a list of pull requests for a specified repository. The return list
         * can be refined by pull request status or pull request author ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListPullRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPullRequestsOutcome ListPullRequests(const Model::ListPullRequestsRequest& request) const;


        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;


        /**
         * <p>Lists all repositories associated with the specified approval rule
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesForApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesForApprovalRuleTemplateOutcome ListRepositoriesForApprovalRuleTemplate(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request) const;


        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeCommit. For a list of valid resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the<i> AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Merges two branches using the fast-forward merge strategy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByFastForward">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesByFastForwardOutcome MergeBranchesByFastForward(const Model::MergeBranchesByFastForwardRequest& request) const;


        /**
         * <p>Merges two branches using the squash merge strategy.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesBySquash">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesBySquashOutcome MergeBranchesBySquash(const Model::MergeBranchesBySquashRequest& request) const;


        /**
         * <p>Merges two specified branches using the three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByThreeWay">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesByThreeWayOutcome MergeBranchesByThreeWay(const Model::MergeBranchesByThreeWayRequest& request) const;


        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * fast-forward merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByFastForward">AWS
         * API Reference</a></p>
         */
        virtual Model::MergePullRequestByFastForwardOutcome MergePullRequestByFastForward(const Model::MergePullRequestByFastForwardRequest& request) const;


        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * squash merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestBySquash">AWS
         * API Reference</a></p>
         */
        virtual Model::MergePullRequestBySquashOutcome MergePullRequestBySquash(const Model::MergePullRequestBySquashRequest& request) const;


        /**
         * <p>Attempts to merge the source commit of a pull request into the specified
         * destination branch for that pull request at the specified commit using the
         * three-way merge strategy. If the merge is successful, it closes the pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergePullRequestByThreeWay">AWS
         * API Reference</a></p>
         */
        virtual Model::MergePullRequestByThreeWayOutcome MergePullRequestByThreeWay(const Model::MergePullRequestByThreeWayRequest& request) const;


        /**
         * <p>Sets aside (overrides) all approval rule requirements for a specified pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/OverridePullRequestApprovalRules">AWS
         * API Reference</a></p>
         */
        virtual Model::OverridePullRequestApprovalRulesOutcome OverridePullRequestApprovalRules(const Model::OverridePullRequestApprovalRulesRequest& request) const;


        /**
         * <p>Posts a comment on the comparison between two commits.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForComparedCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentForComparedCommitOutcome PostCommentForComparedCommit(const Model::PostCommentForComparedCommitRequest& request) const;


        /**
         * <p>Posts a comment on a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentForPullRequestOutcome PostCommentForPullRequest(const Model::PostCommentForPullRequestRequest& request) const;


        /**
         * <p>Posts a comment in reply to an existing comment on a comparison between
         * commits or a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentReply">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentReplyOutcome PostCommentReply(const Model::PostCommentReplyRequest& request) const;


        /**
         * <p>Adds or updates a reaction to a specified comment for the user whose identity
         * is used to make the request. You can only add or update a reaction for yourself.
         * You cannot add, modify, or delete a reaction for another user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutCommentReaction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCommentReactionOutcome PutCommentReaction(const Model::PutCommentReactionRequest& request) const;


        /**
         * <p>Adds or updates a file in a branch in an AWS CodeCommit repository, and
         * generates a commit for the addition in the specified branch.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFile">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFileOutcome PutFile(const Model::PutFileRequest& request) const;


        /**
         * <p>Replaces all triggers for a repository. Used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryTriggersOutcome PutRepositoryTriggers(const Model::PutRepositoryTriggersRequest& request) const;


        /**
         * <p>Adds or updates tags for a resource in AWS CodeCommit. For a list of valid
         * resources in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test sends data
         * from the last commit. If no data is available, sample data is
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRepositoryTriggersOutcome TestRepositoryTriggers(const Model::TestRepositoryTriggersRequest& request) const;


        /**
         * <p>Removes tags for a resource in AWS CodeCommit. For a list of valid resources
         * in AWS CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the content of an approval rule template. You can change the number
         * of required approvals, the membership of the approval rule, and whether an
         * approval pool is defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateContentOutcome UpdateApprovalRuleTemplateContent(const Model::UpdateApprovalRuleTemplateContentRequest& request) const;


        /**
         * <p>Updates the description for a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateDescriptionOutcome UpdateApprovalRuleTemplateDescription(const Model::UpdateApprovalRuleTemplateDescriptionRequest& request) const;


        /**
         * <p>Updates the name of a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateNameOutcome UpdateApprovalRuleTemplateName(const Model::UpdateApprovalRuleTemplateNameRequest& request) const;


        /**
         * <p>Replaces the contents of a comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateComment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCommentOutcome UpdateComment(const Model::UpdateCommentRequest& request) const;


        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         *  <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultBranchOutcome UpdateDefaultBranch(const Model::UpdateDefaultBranchRequest& request) const;


        /**
         * <p>Updates the structure of an approval rule created specifically for a pull
         * request. For example, you can change the number of required approvers and the
         * approval pool for approvers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalRuleContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestApprovalRuleContentOutcome UpdatePullRequestApprovalRuleContent(const Model::UpdatePullRequestApprovalRuleContentRequest& request) const;


        /**
         * <p>Updates the state of a user's approval on a pull request. The user is derived
         * from the signed-in account when the request is made.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestApprovalStateOutcome UpdatePullRequestApprovalState(const Model::UpdatePullRequestApprovalStateRequest& request) const;


        /**
         * <p>Replaces the contents of the description of a pull request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestDescriptionOutcome UpdatePullRequestDescription(const Model::UpdatePullRequestDescriptionRequest& request) const;


        /**
         * <p>Updates the status of a pull request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestStatusOutcome UpdatePullRequestStatus(const Model::UpdatePullRequestStatusRequest& request) const;


        /**
         * <p>Replaces the title of a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestTitle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestTitleOutcome UpdatePullRequestTitle(const Model::UpdatePullRequestTitleRequest& request) const;


        /**
         * <p>Sets or changes the comment or description for a repository.</p> 
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a webpage can expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a webpage.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryDescriptionOutcome UpdateRepositoryDescription(const Model::UpdateRepositoryDescriptionRequest& request) const;


        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. Repository names are limited to 100 alphanumeric, dash, and
         * underscore characters, and cannot include certain characters. The suffix .git is
         * prohibited. For more information about the limits on repository names, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryNameOutcome UpdateRepositoryName(const Model::UpdateRepositoryNameRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeCommitEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CodeCommitClientConfiguration& clientConfiguration);

      CodeCommitClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeCommitEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeCommit
} // namespace Aws
