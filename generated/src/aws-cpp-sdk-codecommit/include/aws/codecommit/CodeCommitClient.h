/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codecommit/CodeCommitServiceClientModel.h>

namespace Aws
{
namespace CodeCommit
{
  /**
   * <fullname>CodeCommit</fullname> <p>This is the <i>CodeCommit API Reference</i>.
   * This reference provides descriptions of the operations and data types for
   * CodeCommit API along with usage examples.</p> <p>You can use the CodeCommit API
   * to work with the following objects:</p> <p>Repositories, by calling the
   * following:</p> <ul> <li> <p> <a>BatchGetRepositories</a>, which returns
   * information about one or more repositories associated with your Amazon Web
   * Services account.</p> </li> <li> <p> <a>CreateRepository</a>, which creates an
   * CodeCommit repository.</p> </li> <li> <p> <a>DeleteRepository</a>, which deletes
   * an CodeCommit repository.</p> </li> <li> <p> <a>GetRepository</a>, which returns
   * information about a specified repository.</p> </li> <li> <p>
   * <a>ListRepositories</a>, which lists all CodeCommit repositories associated with
   * your Amazon Web Services account.</p> </li> <li> <p>
   * <a>UpdateRepositoryDescription</a>, which sets or updates the description of the
   * repository.</p> </li> <li> <p> <a>UpdateRepositoryEncryptionKey</a>, which
   * updates the Key Management Service encryption key used to encrypt and decrypt a
   * repository.</p> </li> <li> <p> <a>UpdateRepositoryName</a>, which changes the
   * name of the repository. If you change the name of a repository, no other users
   * of that repository can access it until you send them the new HTTPS or SSH URL to
   * use.</p> </li> </ul> <p>Branches, by calling the following:</p> <ul> <li> <p>
   * <a>CreateBranch</a>, which creates a branch in a specified repository.</p> </li>
   * <li> <p> <a>DeleteBranch</a>, which deletes the specified branch in a repository
   * unless it is the default branch.</p> </li> <li> <p> <a>GetBranch</a>, which
   * returns information about a specified branch.</p> </li> <li> <p>
   * <a>ListBranches</a>, which lists all branches for a specified repository.</p>
   * </li> <li> <p> <a>UpdateDefaultBranch</a>, which changes the default branch for
   * a repository.</p> </li> </ul> <p>Files, by calling the following:</p> <ul> <li>
   * <p> <a>DeleteFile</a>, which deletes the content of a specified file from a
   * specified branch.</p> </li> <li> <p> <a>GetBlob</a>, which returns the base-64
   * encoded content of an individual Git blob object in a repository.</p> </li> <li>
   * <p> <a>GetFile</a>, which returns the base-64 encoded content of a specified
   * file.</p> </li> <li> <p> <a>GetFolder</a>, which returns the contents of a
   * specified folder or directory.</p> </li> <li> <p> <a>ListFileCommitHistory</a>,
   * which retrieves a list of commits and changes to a specified file. </p> </li>
   * <li> <p> <a>PutFile</a>, which adds or modifies a single file in a specified
   * repository and branch.</p> </li> </ul> <p>Commits, by calling the following:</p>
   * <ul> <li> <p> <a>BatchGetCommits</a>, which returns information about one or
   * more commits in a repository.</p> </li> <li> <p> <a>CreateCommit</a>, which
   * creates a commit for changes to a repository.</p> </li> <li> <p>
   * <a>GetCommit</a>, which returns information about a commit, including commit
   * messages and author and committer information.</p> </li> <li> <p>
   * <a>GetDifferences</a>, which returns information about the differences in a
   * valid commit specifier (such as a branch, tag, HEAD, commit ID, or other fully
   * qualified reference).</p> </li> </ul> <p>Merges, by calling the following:</p>
   * <ul> <li> <p> <a>BatchDescribeMergeConflicts</a>, which returns information
   * about conflicts in a merge between commits in a repository.</p> </li> <li> <p>
   * <a>CreateUnreferencedMergeCommit</a>, which creates an unreferenced commit
   * between two branches or commits for the purpose of comparing them and
   * identifying any potential conflicts.</p> </li> <li> <p>
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
   * the squash merge option.</p> </li> <li> <p> <a>MergePullRequestByThreeWay</a>,
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
   * associated with a repository, CodeCommit creates approval rules that match the
   * template conditions on every pull request created in the specified
   * repository.</p> </li> <li> <p>
   * <a>BatchAssociateApprovalRuleTemplateWithRepositories</a>, which associates a
   * template with one or more specified repositories. After the template is
   * associated with a repository, CodeCommit creates approval rules that match the
   * template conditions on every pull request created in the specified
   * repositories.</p> </li> <li> <p>
   * <a>BatchDisassociateApprovalRuleTemplateFromRepositories</a>, which removes the
   * association between a template and specified repositories so that approval rules
   * based on the template are not automatically created when pull requests are
   * created in those repositories.</p> </li> <li> <p>
   * <a>CreateApprovalRuleTemplate</a>, which creates a template for approval rules
   * that can then be associated with one or more repositories in your Amazon Web
   * Services account.</p> </li> <li> <p> <a>DeleteApprovalRuleTemplate</a>, which
   * deletes the specified template. It does not remove approval rules on pull
   * requests already created with the template.</p> </li> <li> <p>
   * <a>DisassociateApprovalRuleTemplateFromRepository</a>, which removes the
   * association between a template and a repository so that approval rules based on
   * the template are not automatically created when pull requests are created in the
   * specified repository.</p> </li> <li> <p> <a>GetApprovalRuleTemplate</a>, which
   * returns information about an approval rule template.</p> </li> <li> <p>
   * <a>ListApprovalRuleTemplates</a>, which lists all approval rule templates in the
   * Amazon Web Services Region in your Amazon Web Services account.</p> </li> <li>
   * <p> <a>ListAssociatedApprovalRuleTemplatesForRepository</a>, which lists all
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
   * resources in CodeCommit (not Git tags), by calling the following:</p> <ul> <li>
   * <p> <a>ListTagsForResource</a>, which gets information about Amazon Web
   * Servicestags for a specified Amazon Resource Name (ARN) in CodeCommit.</p> </li>
   * <li> <p> <a>TagResource</a>, which adds or updates tags for a resource in
   * CodeCommit.</p> </li> <li> <p> <a>UntagResource</a>, which removes tags for a
   * resource in CodeCommit.</p> </li> </ul> <p>Triggers, by calling the
   * following:</p> <ul> <li> <p> <a>GetRepositoryTriggers</a>, which returns
   * information about triggers configured for a repository.</p> </li> <li> <p>
   * <a>PutRepositoryTriggers</a>, which replaces all triggers for a repository and
   * can be used to create or delete triggers.</p> </li> <li> <p>
   * <a>TestRepositoryTriggers</a>, which tests the functionality of a repository
   * trigger by sending data to the trigger target.</p> </li> </ul> <p>For
   * information about how to use CodeCommit, see the <a
   * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">CodeCommit
   * User Guide</a>.</p>
   */
  class AWS_CODECOMMIT_API CodeCommitClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeCommitClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeCommitClientConfiguration ClientConfigurationType;
      typedef CodeCommitEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::CodeCommit::CodeCommitClientConfiguration& clientConfiguration = Aws::CodeCommit::CodeCommitClientConfiguration(),
                         std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CodeCommit::CodeCommitClientConfiguration& clientConfiguration = Aws::CodeCommit::CodeCommitClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeCommitClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider = nullptr,
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
         * A Callable wrapper for AssociateApprovalRuleTemplateWithRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateApprovalRuleTemplateWithRepositoryRequestT = Model::AssociateApprovalRuleTemplateWithRepositoryRequest>
        Model::AssociateApprovalRuleTemplateWithRepositoryOutcomeCallable AssociateApprovalRuleTemplateWithRepositoryCallable(const AssociateApprovalRuleTemplateWithRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::AssociateApprovalRuleTemplateWithRepository, request);
        }

        /**
         * An Async wrapper for AssociateApprovalRuleTemplateWithRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateApprovalRuleTemplateWithRepositoryRequestT = Model::AssociateApprovalRuleTemplateWithRepositoryRequest>
        void AssociateApprovalRuleTemplateWithRepositoryAsync(const AssociateApprovalRuleTemplateWithRepositoryRequestT& request, const AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::AssociateApprovalRuleTemplateWithRepository, request, handler, context);
        }

        /**
         * <p>Creates an association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchAssociateApprovalRuleTemplateWithRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome BatchAssociateApprovalRuleTemplateWithRepositories(const Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateApprovalRuleTemplateWithRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAssociateApprovalRuleTemplateWithRepositoriesRequestT = Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest>
        Model::BatchAssociateApprovalRuleTemplateWithRepositoriesOutcomeCallable BatchAssociateApprovalRuleTemplateWithRepositoriesCallable(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories, request);
        }

        /**
         * An Async wrapper for BatchAssociateApprovalRuleTemplateWithRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateApprovalRuleTemplateWithRepositoriesRequestT = Model::BatchAssociateApprovalRuleTemplateWithRepositoriesRequest>
        void BatchAssociateApprovalRuleTemplateWithRepositoriesAsync(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequestT& request, const BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories, request, handler, context);
        }

        /**
         * <p>Returns information about one or more merge conflicts in the attempted merge
         * of two commit specifiers using the squash or three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeMergeConflictsOutcome BatchDescribeMergeConflicts(const Model::BatchDescribeMergeConflictsRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeMergeConflicts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDescribeMergeConflictsRequestT = Model::BatchDescribeMergeConflictsRequest>
        Model::BatchDescribeMergeConflictsOutcomeCallable BatchDescribeMergeConflictsCallable(const BatchDescribeMergeConflictsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::BatchDescribeMergeConflicts, request);
        }

        /**
         * An Async wrapper for BatchDescribeMergeConflicts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDescribeMergeConflictsRequestT = Model::BatchDescribeMergeConflictsRequest>
        void BatchDescribeMergeConflictsAsync(const BatchDescribeMergeConflictsRequestT& request, const BatchDescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::BatchDescribeMergeConflicts, request, handler, context);
        }

        /**
         * <p>Removes the association between an approval rule template and one or more
         * specified repositories. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDisassociateApprovalRuleTemplateFromRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome BatchDisassociateApprovalRuleTemplateFromRepositories(const Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateApprovalRuleTemplateFromRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestT = Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest>
        Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcomeCallable BatchDisassociateApprovalRuleTemplateFromRepositoriesCallable(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories, request);
        }

        /**
         * An Async wrapper for BatchDisassociateApprovalRuleTemplateFromRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestT = Model::BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest>
        void BatchDisassociateApprovalRuleTemplateFromRepositoriesAsync(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestT& request, const BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories, request, handler, context);
        }

        /**
         * <p>Returns information about the contents of one or more commits in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetCommits">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCommitsOutcome BatchGetCommits(const Model::BatchGetCommitsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCommits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetCommitsRequestT = Model::BatchGetCommitsRequest>
        Model::BatchGetCommitsOutcomeCallable BatchGetCommitsCallable(const BatchGetCommitsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::BatchGetCommits, request);
        }

        /**
         * An Async wrapper for BatchGetCommits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCommitsRequestT = Model::BatchGetCommitsRequest>
        void BatchGetCommitsAsync(const BatchGetCommitsRequestT& request, const BatchGetCommitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::BatchGetCommits, request, handler, context);
        }

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
         * A Callable wrapper for BatchGetRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetRepositoriesRequestT = Model::BatchGetRepositoriesRequest>
        Model::BatchGetRepositoriesOutcomeCallable BatchGetRepositoriesCallable(const BatchGetRepositoriesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::BatchGetRepositories, request);
        }

        /**
         * An Async wrapper for BatchGetRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetRepositoriesRequestT = Model::BatchGetRepositoriesRequest>
        void BatchGetRepositoriesAsync(const BatchGetRepositoriesRequestT& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::BatchGetRepositories, request, handler, context);
        }

        /**
         * <p>Creates a template for approval rules that can then be associated with one or
         * more repositories in your Amazon Web Services account. When you associate a
         * template with a repository, CodeCommit creates an approval rule that matches the
         * conditions of the template for all pull requests that meet the conditions of the
         * template. For more information, see
         * <a>AssociateApprovalRuleTemplateWithRepository</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApprovalRuleTemplateOutcome CreateApprovalRuleTemplate(const Model::CreateApprovalRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateApprovalRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApprovalRuleTemplateRequestT = Model::CreateApprovalRuleTemplateRequest>
        Model::CreateApprovalRuleTemplateOutcomeCallable CreateApprovalRuleTemplateCallable(const CreateApprovalRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreateApprovalRuleTemplate, request);
        }

        /**
         * An Async wrapper for CreateApprovalRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApprovalRuleTemplateRequestT = Model::CreateApprovalRuleTemplateRequest>
        void CreateApprovalRuleTemplateAsync(const CreateApprovalRuleTemplateRequestT& request, const CreateApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreateApprovalRuleTemplate, request, handler, context);
        }

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
         * A Callable wrapper for CreateBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBranchRequestT = Model::CreateBranchRequest>
        Model::CreateBranchOutcomeCallable CreateBranchCallable(const CreateBranchRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreateBranch, request);
        }

        /**
         * An Async wrapper for CreateBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBranchRequestT = Model::CreateBranchRequest>
        void CreateBranchAsync(const CreateBranchRequestT& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreateBranch, request, handler, context);
        }

        /**
         * <p>Creates a commit for a repository on the tip of a specified
         * branch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCommitOutcome CreateCommit(const Model::CreateCommitRequest& request) const;

        /**
         * A Callable wrapper for CreateCommit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCommitRequestT = Model::CreateCommitRequest>
        Model::CreateCommitOutcomeCallable CreateCommitCallable(const CreateCommitRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreateCommit, request);
        }

        /**
         * An Async wrapper for CreateCommit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCommitRequestT = Model::CreateCommitRequest>
        void CreateCommitAsync(const CreateCommitRequestT& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreateCommit, request, handler, context);
        }

        /**
         * <p>Creates a pull request in the specified repository.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullRequestOutcome CreatePullRequest(const Model::CreatePullRequestRequest& request) const;

        /**
         * A Callable wrapper for CreatePullRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePullRequestRequestT = Model::CreatePullRequestRequest>
        Model::CreatePullRequestOutcomeCallable CreatePullRequestCallable(const CreatePullRequestRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreatePullRequest, request);
        }

        /**
         * An Async wrapper for CreatePullRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePullRequestRequestT = Model::CreatePullRequestRequest>
        void CreatePullRequestAsync(const CreatePullRequestRequestT& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreatePullRequest, request, handler, context);
        }

        /**
         * <p>Creates an approval rule for a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreatePullRequestApprovalRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullRequestApprovalRuleOutcome CreatePullRequestApprovalRule(const Model::CreatePullRequestApprovalRuleRequest& request) const;

        /**
         * A Callable wrapper for CreatePullRequestApprovalRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePullRequestApprovalRuleRequestT = Model::CreatePullRequestApprovalRuleRequest>
        Model::CreatePullRequestApprovalRuleOutcomeCallable CreatePullRequestApprovalRuleCallable(const CreatePullRequestApprovalRuleRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreatePullRequestApprovalRule, request);
        }

        /**
         * An Async wrapper for CreatePullRequestApprovalRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePullRequestApprovalRuleRequestT = Model::CreatePullRequestApprovalRuleRequest>
        void CreatePullRequestApprovalRuleAsync(const CreatePullRequestApprovalRuleRequestT& request, const CreatePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreatePullRequestApprovalRule, request, handler, context);
        }

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRepositoryRequestT = Model::CreateRepositoryRequest>
        Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const CreateRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreateRepository, request);
        }

        /**
         * An Async wrapper for CreateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRepositoryRequestT = Model::CreateRepositoryRequest>
        void CreateRepositoryAsync(const CreateRepositoryRequestT& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreateRepository, request, handler, context);
        }

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
         * A Callable wrapper for CreateUnreferencedMergeCommit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUnreferencedMergeCommitRequestT = Model::CreateUnreferencedMergeCommitRequest>
        Model::CreateUnreferencedMergeCommitOutcomeCallable CreateUnreferencedMergeCommitCallable(const CreateUnreferencedMergeCommitRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::CreateUnreferencedMergeCommit, request);
        }

        /**
         * An Async wrapper for CreateUnreferencedMergeCommit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUnreferencedMergeCommitRequestT = Model::CreateUnreferencedMergeCommitRequest>
        void CreateUnreferencedMergeCommitAsync(const CreateUnreferencedMergeCommitRequestT& request, const CreateUnreferencedMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::CreateUnreferencedMergeCommit, request, handler, context);
        }

        /**
         * <p>Deletes a specified approval rule template. Deleting a template does not
         * remove approval rules on pull requests already created with the
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApprovalRuleTemplateOutcome DeleteApprovalRuleTemplate(const Model::DeleteApprovalRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteApprovalRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApprovalRuleTemplateRequestT = Model::DeleteApprovalRuleTemplateRequest>
        Model::DeleteApprovalRuleTemplateOutcomeCallable DeleteApprovalRuleTemplateCallable(const DeleteApprovalRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DeleteApprovalRuleTemplate, request);
        }

        /**
         * An Async wrapper for DeleteApprovalRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApprovalRuleTemplateRequestT = Model::DeleteApprovalRuleTemplateRequest>
        void DeleteApprovalRuleTemplateAsync(const DeleteApprovalRuleTemplateRequestT& request, const DeleteApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DeleteApprovalRuleTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a branch from a repository, unless that branch is the default branch
         * for the repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;

        /**
         * A Callable wrapper for DeleteBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBranchRequestT = Model::DeleteBranchRequest>
        Model::DeleteBranchOutcomeCallable DeleteBranchCallable(const DeleteBranchRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DeleteBranch, request);
        }

        /**
         * An Async wrapper for DeleteBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBranchRequestT = Model::DeleteBranchRequest>
        void DeleteBranchAsync(const DeleteBranchRequestT& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DeleteBranch, request, handler, context);
        }

        /**
         * <p>Deletes the content of a comment made on a change, file, or commit in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteCommentContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCommentContentOutcome DeleteCommentContent(const Model::DeleteCommentContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteCommentContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCommentContentRequestT = Model::DeleteCommentContentRequest>
        Model::DeleteCommentContentOutcomeCallable DeleteCommentContentCallable(const DeleteCommentContentRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DeleteCommentContent, request);
        }

        /**
         * An Async wrapper for DeleteCommentContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCommentContentRequestT = Model::DeleteCommentContentRequest>
        void DeleteCommentContentAsync(const DeleteCommentContentRequestT& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DeleteCommentContent, request, handler, context);
        }

        /**
         * <p>Deletes a specified file from a specified branch. A commit is created on the
         * branch that contains the revision. The file still exists in the commits earlier
         * to the commit that contains the deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteFile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileOutcome DeleteFile(const Model::DeleteFileRequest& request) const;

        /**
         * A Callable wrapper for DeleteFile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFileRequestT = Model::DeleteFileRequest>
        Model::DeleteFileOutcomeCallable DeleteFileCallable(const DeleteFileRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DeleteFile, request);
        }

        /**
         * An Async wrapper for DeleteFile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFileRequestT = Model::DeleteFileRequest>
        void DeleteFileAsync(const DeleteFileRequestT& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DeleteFile, request, handler, context);
        }

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
         * A Callable wrapper for DeletePullRequestApprovalRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePullRequestApprovalRuleRequestT = Model::DeletePullRequestApprovalRuleRequest>
        Model::DeletePullRequestApprovalRuleOutcomeCallable DeletePullRequestApprovalRuleCallable(const DeletePullRequestApprovalRuleRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DeletePullRequestApprovalRule, request);
        }

        /**
         * An Async wrapper for DeletePullRequestApprovalRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePullRequestApprovalRuleRequestT = Model::DeletePullRequestApprovalRuleRequest>
        void DeletePullRequestApprovalRuleAsync(const DeletePullRequestApprovalRuleRequestT& request, const DeletePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DeletePullRequestApprovalRule, request, handler, context);
        }

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
         * A Callable wrapper for DeleteRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRepositoryRequestT = Model::DeleteRepositoryRequest>
        Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const DeleteRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DeleteRepository, request);
        }

        /**
         * An Async wrapper for DeleteRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryRequestT = Model::DeleteRepositoryRequest>
        void DeleteRepositoryAsync(const DeleteRepositoryRequestT& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DeleteRepository, request, handler, context);
        }

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
         * A Callable wrapper for DescribeMergeConflicts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMergeConflictsRequestT = Model::DescribeMergeConflictsRequest>
        Model::DescribeMergeConflictsOutcomeCallable DescribeMergeConflictsCallable(const DescribeMergeConflictsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DescribeMergeConflicts, request);
        }

        /**
         * An Async wrapper for DescribeMergeConflicts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMergeConflictsRequestT = Model::DescribeMergeConflictsRequest>
        void DescribeMergeConflictsAsync(const DescribeMergeConflictsRequestT& request, const DescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DescribeMergeConflicts, request, handler, context);
        }

        /**
         * <p>Returns information about one or more pull request events.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DescribePullRequestEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePullRequestEventsOutcome DescribePullRequestEvents(const Model::DescribePullRequestEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribePullRequestEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePullRequestEventsRequestT = Model::DescribePullRequestEventsRequest>
        Model::DescribePullRequestEventsOutcomeCallable DescribePullRequestEventsCallable(const DescribePullRequestEventsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DescribePullRequestEvents, request);
        }

        /**
         * An Async wrapper for DescribePullRequestEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePullRequestEventsRequestT = Model::DescribePullRequestEventsRequest>
        void DescribePullRequestEventsAsync(const DescribePullRequestEventsRequestT& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DescribePullRequestEvents, request, handler, context);
        }

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
         * A Callable wrapper for DisassociateApprovalRuleTemplateFromRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateApprovalRuleTemplateFromRepositoryRequestT = Model::DisassociateApprovalRuleTemplateFromRepositoryRequest>
        Model::DisassociateApprovalRuleTemplateFromRepositoryOutcomeCallable DisassociateApprovalRuleTemplateFromRepositoryCallable(const DisassociateApprovalRuleTemplateFromRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository, request);
        }

        /**
         * An Async wrapper for DisassociateApprovalRuleTemplateFromRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateApprovalRuleTemplateFromRepositoryRequestT = Model::DisassociateApprovalRuleTemplateFromRepositoryRequest>
        void DisassociateApprovalRuleTemplateFromRepositoryAsync(const DisassociateApprovalRuleTemplateFromRepositoryRequestT& request, const DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository, request, handler, context);
        }

        /**
         * <p>Evaluates whether a pull request has met all the conditions specified in its
         * associated approval rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/EvaluatePullRequestApprovalRules">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluatePullRequestApprovalRulesOutcome EvaluatePullRequestApprovalRules(const Model::EvaluatePullRequestApprovalRulesRequest& request) const;

        /**
         * A Callable wrapper for EvaluatePullRequestApprovalRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EvaluatePullRequestApprovalRulesRequestT = Model::EvaluatePullRequestApprovalRulesRequest>
        Model::EvaluatePullRequestApprovalRulesOutcomeCallable EvaluatePullRequestApprovalRulesCallable(const EvaluatePullRequestApprovalRulesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::EvaluatePullRequestApprovalRules, request);
        }

        /**
         * An Async wrapper for EvaluatePullRequestApprovalRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EvaluatePullRequestApprovalRulesRequestT = Model::EvaluatePullRequestApprovalRulesRequest>
        void EvaluatePullRequestApprovalRulesAsync(const EvaluatePullRequestApprovalRulesRequestT& request, const EvaluatePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::EvaluatePullRequestApprovalRules, request, handler, context);
        }

        /**
         * <p>Returns information about a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApprovalRuleTemplateOutcome GetApprovalRuleTemplate(const Model::GetApprovalRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetApprovalRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApprovalRuleTemplateRequestT = Model::GetApprovalRuleTemplateRequest>
        Model::GetApprovalRuleTemplateOutcomeCallable GetApprovalRuleTemplateCallable(const GetApprovalRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetApprovalRuleTemplate, request);
        }

        /**
         * An Async wrapper for GetApprovalRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApprovalRuleTemplateRequestT = Model::GetApprovalRuleTemplateRequest>
        void GetApprovalRuleTemplateAsync(const GetApprovalRuleTemplateRequestT& request, const GetApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetApprovalRuleTemplate, request, handler, context);
        }

        /**
         * <p>Returns the base-64 encoded content of an individual blob in a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlobOutcome GetBlob(const Model::GetBlobRequest& request) const;

        /**
         * A Callable wrapper for GetBlob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlobRequestT = Model::GetBlobRequest>
        Model::GetBlobOutcomeCallable GetBlobCallable(const GetBlobRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetBlob, request);
        }

        /**
         * An Async wrapper for GetBlob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlobRequestT = Model::GetBlobRequest>
        void GetBlobAsync(const GetBlobRequestT& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetBlob, request, handler, context);
        }

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;

        /**
         * A Callable wrapper for GetBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBranchRequestT = Model::GetBranchRequest>
        Model::GetBranchOutcomeCallable GetBranchCallable(const GetBranchRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetBranch, request);
        }

        /**
         * An Async wrapper for GetBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBranchRequestT = Model::GetBranchRequest>
        void GetBranchAsync(const GetBranchRequestT& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetBranch, request, handler, context);
        }

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
         * A Callable wrapper for GetComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCommentRequestT = Model::GetCommentRequest>
        Model::GetCommentOutcomeCallable GetCommentCallable(const GetCommentRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetComment, request);
        }

        /**
         * An Async wrapper for GetComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCommentRequestT = Model::GetCommentRequest>
        void GetCommentAsync(const GetCommentRequestT& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetComment, request, handler, context);
        }

        /**
         * <p>Returns information about reactions to a specified comment ID. Reactions from
         * users who have been deleted will not be included in the count.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommentReactions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommentReactionsOutcome GetCommentReactions(const Model::GetCommentReactionsRequest& request) const;

        /**
         * A Callable wrapper for GetCommentReactions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCommentReactionsRequestT = Model::GetCommentReactionsRequest>
        Model::GetCommentReactionsOutcomeCallable GetCommentReactionsCallable(const GetCommentReactionsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetCommentReactions, request);
        }

        /**
         * An Async wrapper for GetCommentReactions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCommentReactionsRequestT = Model::GetCommentReactionsRequest>
        void GetCommentReactionsAsync(const GetCommentReactionsRequestT& request, const GetCommentReactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetCommentReactions, request, handler, context);
        }

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
         * A Callable wrapper for GetCommentsForComparedCommit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCommentsForComparedCommitRequestT = Model::GetCommentsForComparedCommitRequest>
        Model::GetCommentsForComparedCommitOutcomeCallable GetCommentsForComparedCommitCallable(const GetCommentsForComparedCommitRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetCommentsForComparedCommit, request);
        }

        /**
         * An Async wrapper for GetCommentsForComparedCommit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCommentsForComparedCommitRequestT = Model::GetCommentsForComparedCommitRequest>
        void GetCommentsForComparedCommitAsync(const GetCommentsForComparedCommitRequestT& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetCommentsForComparedCommit, request, handler, context);
        }

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
         * A Callable wrapper for GetCommentsForPullRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCommentsForPullRequestRequestT = Model::GetCommentsForPullRequestRequest>
        Model::GetCommentsForPullRequestOutcomeCallable GetCommentsForPullRequestCallable(const GetCommentsForPullRequestRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetCommentsForPullRequest, request);
        }

        /**
         * An Async wrapper for GetCommentsForPullRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCommentsForPullRequestRequestT = Model::GetCommentsForPullRequestRequest>
        void GetCommentsForPullRequestAsync(const GetCommentsForPullRequestRequestT& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetCommentsForPullRequest, request, handler, context);
        }

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommitOutcome GetCommit(const Model::GetCommitRequest& request) const;

        /**
         * A Callable wrapper for GetCommit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCommitRequestT = Model::GetCommitRequest>
        Model::GetCommitOutcomeCallable GetCommitCallable(const GetCommitRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetCommit, request);
        }

        /**
         * An Async wrapper for GetCommit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCommitRequestT = Model::GetCommitRequest>
        void GetCommitAsync(const GetCommitRequestT& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetCommit, request, handler, context);
        }

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID, or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDifferencesOutcome GetDifferences(const Model::GetDifferencesRequest& request) const;

        /**
         * A Callable wrapper for GetDifferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDifferencesRequestT = Model::GetDifferencesRequest>
        Model::GetDifferencesOutcomeCallable GetDifferencesCallable(const GetDifferencesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetDifferences, request);
        }

        /**
         * An Async wrapper for GetDifferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDifferencesRequestT = Model::GetDifferencesRequest>
        void GetDifferencesAsync(const GetDifferencesRequestT& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetDifferences, request, handler, context);
        }

        /**
         * <p>Returns the base-64 encoded contents of a specified file and its
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFileOutcome GetFile(const Model::GetFileRequest& request) const;

        /**
         * A Callable wrapper for GetFile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFileRequestT = Model::GetFileRequest>
        Model::GetFileOutcomeCallable GetFileCallable(const GetFileRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetFile, request);
        }

        /**
         * An Async wrapper for GetFile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFileRequestT = Model::GetFileRequest>
        void GetFileAsync(const GetFileRequestT& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetFile, request, handler, context);
        }

        /**
         * <p>Returns the contents of a specified folder in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;

        /**
         * A Callable wrapper for GetFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFolderRequestT = Model::GetFolderRequest>
        Model::GetFolderOutcomeCallable GetFolderCallable(const GetFolderRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetFolder, request);
        }

        /**
         * An Async wrapper for GetFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFolderRequestT = Model::GetFolderRequest>
        void GetFolderAsync(const GetFolderRequestT& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetFolder, request, handler, context);
        }

        /**
         * <p>Returns information about a specified merge commit.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeCommitOutcome GetMergeCommit(const Model::GetMergeCommitRequest& request) const;

        /**
         * A Callable wrapper for GetMergeCommit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMergeCommitRequestT = Model::GetMergeCommitRequest>
        Model::GetMergeCommitOutcomeCallable GetMergeCommitCallable(const GetMergeCommitRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetMergeCommit, request);
        }

        /**
         * An Async wrapper for GetMergeCommit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMergeCommitRequestT = Model::GetMergeCommitRequest>
        void GetMergeCommitAsync(const GetMergeCommitRequestT& request, const GetMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetMergeCommit, request, handler, context);
        }

        /**
         * <p>Returns information about merge conflicts between the before and after commit
         * IDs for a pull request in a repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeConflicts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeConflictsOutcome GetMergeConflicts(const Model::GetMergeConflictsRequest& request) const;

        /**
         * A Callable wrapper for GetMergeConflicts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMergeConflictsRequestT = Model::GetMergeConflictsRequest>
        Model::GetMergeConflictsOutcomeCallable GetMergeConflictsCallable(const GetMergeConflictsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetMergeConflicts, request);
        }

        /**
         * An Async wrapper for GetMergeConflicts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMergeConflictsRequestT = Model::GetMergeConflictsRequest>
        void GetMergeConflictsAsync(const GetMergeConflictsRequestT& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetMergeConflicts, request, handler, context);
        }

        /**
         * <p>Returns information about the merge options available for merging two
         * specified branches. For details about why a merge option is not available, use
         * GetMergeConflicts or DescribeMergeConflicts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetMergeOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMergeOptionsOutcome GetMergeOptions(const Model::GetMergeOptionsRequest& request) const;

        /**
         * A Callable wrapper for GetMergeOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMergeOptionsRequestT = Model::GetMergeOptionsRequest>
        Model::GetMergeOptionsOutcomeCallable GetMergeOptionsCallable(const GetMergeOptionsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetMergeOptions, request);
        }

        /**
         * An Async wrapper for GetMergeOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMergeOptionsRequestT = Model::GetMergeOptionsRequest>
        void GetMergeOptionsAsync(const GetMergeOptionsRequestT& request, const GetMergeOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetMergeOptions, request, handler, context);
        }

        /**
         * <p>Gets information about a pull request in a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestOutcome GetPullRequest(const Model::GetPullRequestRequest& request) const;

        /**
         * A Callable wrapper for GetPullRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPullRequestRequestT = Model::GetPullRequestRequest>
        Model::GetPullRequestOutcomeCallable GetPullRequestCallable(const GetPullRequestRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetPullRequest, request);
        }

        /**
         * An Async wrapper for GetPullRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPullRequestRequestT = Model::GetPullRequestRequest>
        void GetPullRequestAsync(const GetPullRequestRequestT& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetPullRequest, request, handler, context);
        }

        /**
         * <p>Gets information about the approval states for a specified pull request.
         * Approval states only apply to pull requests that have one or more approval rules
         * applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetPullRequestApprovalStates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPullRequestApprovalStatesOutcome GetPullRequestApprovalStates(const Model::GetPullRequestApprovalStatesRequest& request) const;

        /**
         * A Callable wrapper for GetPullRequestApprovalStates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPullRequestApprovalStatesRequestT = Model::GetPullRequestApprovalStatesRequest>
        Model::GetPullRequestApprovalStatesOutcomeCallable GetPullRequestApprovalStatesCallable(const GetPullRequestApprovalStatesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetPullRequestApprovalStates, request);
        }

        /**
         * An Async wrapper for GetPullRequestApprovalStates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPullRequestApprovalStatesRequestT = Model::GetPullRequestApprovalStatesRequest>
        void GetPullRequestApprovalStatesAsync(const GetPullRequestApprovalStatesRequestT& request, const GetPullRequestApprovalStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetPullRequestApprovalStates, request, handler, context);
        }

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
         * A Callable wrapper for GetPullRequestOverrideState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPullRequestOverrideStateRequestT = Model::GetPullRequestOverrideStateRequest>
        Model::GetPullRequestOverrideStateOutcomeCallable GetPullRequestOverrideStateCallable(const GetPullRequestOverrideStateRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetPullRequestOverrideState, request);
        }

        /**
         * An Async wrapper for GetPullRequestOverrideState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPullRequestOverrideStateRequestT = Model::GetPullRequestOverrideStateRequest>
        void GetPullRequestOverrideStateAsync(const GetPullRequestOverrideStateRequestT& request, const GetPullRequestOverrideStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetPullRequestOverrideState, request, handler, context);
        }

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
         * A Callable wrapper for GetRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRepositoryRequestT = Model::GetRepositoryRequest>
        Model::GetRepositoryOutcomeCallable GetRepositoryCallable(const GetRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetRepository, request);
        }

        /**
         * An Async wrapper for GetRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositoryRequestT = Model::GetRepositoryRequest>
        void GetRepositoryAsync(const GetRepositoryRequestT& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetRepository, request, handler, context);
        }

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryTriggersOutcome GetRepositoryTriggers(const Model::GetRepositoryTriggersRequest& request) const;

        /**
         * A Callable wrapper for GetRepositoryTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRepositoryTriggersRequestT = Model::GetRepositoryTriggersRequest>
        Model::GetRepositoryTriggersOutcomeCallable GetRepositoryTriggersCallable(const GetRepositoryTriggersRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::GetRepositoryTriggers, request);
        }

        /**
         * An Async wrapper for GetRepositoryTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositoryTriggersRequestT = Model::GetRepositoryTriggersRequest>
        void GetRepositoryTriggersAsync(const GetRepositoryTriggersRequestT& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::GetRepositoryTriggers, request, handler, context);
        }

        /**
         * <p>Lists all approval rule templates in the specified Amazon Web Services Region
         * in your Amazon Web Services account. If an Amazon Web Services Region is not
         * specified, the Amazon Web Services Region where you are signed in is
         * used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListApprovalRuleTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovalRuleTemplatesOutcome ListApprovalRuleTemplates(const Model::ListApprovalRuleTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListApprovalRuleTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApprovalRuleTemplatesRequestT = Model::ListApprovalRuleTemplatesRequest>
        Model::ListApprovalRuleTemplatesOutcomeCallable ListApprovalRuleTemplatesCallable(const ListApprovalRuleTemplatesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListApprovalRuleTemplates, request);
        }

        /**
         * An Async wrapper for ListApprovalRuleTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApprovalRuleTemplatesRequestT = Model::ListApprovalRuleTemplatesRequest>
        void ListApprovalRuleTemplatesAsync(const ListApprovalRuleTemplatesRequestT& request, const ListApprovalRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListApprovalRuleTemplates, request, handler, context);
        }

        /**
         * <p>Lists all approval rule templates that are associated with a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListAssociatedApprovalRuleTemplatesForRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedApprovalRuleTemplatesForRepositoryOutcome ListAssociatedApprovalRuleTemplatesForRepository(const Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const;

        /**
         * A Callable wrapper for ListAssociatedApprovalRuleTemplatesForRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociatedApprovalRuleTemplatesForRepositoryRequestT = Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest>
        Model::ListAssociatedApprovalRuleTemplatesForRepositoryOutcomeCallable ListAssociatedApprovalRuleTemplatesForRepositoryCallable(const ListAssociatedApprovalRuleTemplatesForRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository, request);
        }

        /**
         * An Async wrapper for ListAssociatedApprovalRuleTemplatesForRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociatedApprovalRuleTemplatesForRepositoryRequestT = Model::ListAssociatedApprovalRuleTemplatesForRepositoryRequest>
        void ListAssociatedApprovalRuleTemplatesForRepositoryAsync(const ListAssociatedApprovalRuleTemplatesForRepositoryRequestT& request, const ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository, request, handler, context);
        }

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;

        /**
         * A Callable wrapper for ListBranches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBranchesRequestT = Model::ListBranchesRequest>
        Model::ListBranchesOutcomeCallable ListBranchesCallable(const ListBranchesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListBranches, request);
        }

        /**
         * An Async wrapper for ListBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBranchesRequestT = Model::ListBranchesRequest>
        void ListBranchesAsync(const ListBranchesRequestT& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListBranches, request, handler, context);
        }

        /**
         * <p>Retrieves a list of commits and changes to a specified file.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListFileCommitHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFileCommitHistoryOutcome ListFileCommitHistory(const Model::ListFileCommitHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListFileCommitHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFileCommitHistoryRequestT = Model::ListFileCommitHistoryRequest>
        Model::ListFileCommitHistoryOutcomeCallable ListFileCommitHistoryCallable(const ListFileCommitHistoryRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListFileCommitHistory, request);
        }

        /**
         * An Async wrapper for ListFileCommitHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFileCommitHistoryRequestT = Model::ListFileCommitHistoryRequest>
        void ListFileCommitHistoryAsync(const ListFileCommitHistoryRequestT& request, const ListFileCommitHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListFileCommitHistory, request, handler, context);
        }

        /**
         * <p>Returns a list of pull requests for a specified repository. The return list
         * can be refined by pull request status or pull request author ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListPullRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPullRequestsOutcome ListPullRequests(const Model::ListPullRequestsRequest& request) const;

        /**
         * A Callable wrapper for ListPullRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPullRequestsRequestT = Model::ListPullRequestsRequest>
        Model::ListPullRequestsOutcomeCallable ListPullRequestsCallable(const ListPullRequestsRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListPullRequests, request);
        }

        /**
         * An Async wrapper for ListPullRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPullRequestsRequestT = Model::ListPullRequestsRequest>
        void ListPullRequestsAsync(const ListPullRequestsRequestT& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListPullRequests, request, handler, context);
        }

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRepositoriesRequestT = Model::ListRepositoriesRequest>
        Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const ListRepositoriesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListRepositories, request);
        }

        /**
         * An Async wrapper for ListRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositoriesRequestT = Model::ListRepositoriesRequest>
        void ListRepositoriesAsync(const ListRepositoriesRequestT& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListRepositories, request, handler, context);
        }

        /**
         * <p>Lists all repositories associated with the specified approval rule
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesForApprovalRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesForApprovalRuleTemplateOutcome ListRepositoriesForApprovalRuleTemplate(const Model::ListRepositoriesForApprovalRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for ListRepositoriesForApprovalRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRepositoriesForApprovalRuleTemplateRequestT = Model::ListRepositoriesForApprovalRuleTemplateRequest>
        Model::ListRepositoriesForApprovalRuleTemplateOutcomeCallable ListRepositoriesForApprovalRuleTemplateCallable(const ListRepositoriesForApprovalRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListRepositoriesForApprovalRuleTemplate, request);
        }

        /**
         * An Async wrapper for ListRepositoriesForApprovalRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositoriesForApprovalRuleTemplateRequestT = Model::ListRepositoriesForApprovalRuleTemplateRequest>
        void ListRepositoriesForApprovalRuleTemplateAsync(const ListRepositoriesForApprovalRuleTemplateRequestT& request, const ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListRepositoriesForApprovalRuleTemplate, request, handler, context);
        }

        /**
         * <p>Gets information about Amazon Web Servicestags for a specified Amazon
         * Resource Name (ARN) in CodeCommit. For a list of valid resources in CodeCommit,
         * see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the<i> CodeCommit User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Merges two branches using the fast-forward merge strategy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByFastForward">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesByFastForwardOutcome MergeBranchesByFastForward(const Model::MergeBranchesByFastForwardRequest& request) const;

        /**
         * A Callable wrapper for MergeBranchesByFastForward that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MergeBranchesByFastForwardRequestT = Model::MergeBranchesByFastForwardRequest>
        Model::MergeBranchesByFastForwardOutcomeCallable MergeBranchesByFastForwardCallable(const MergeBranchesByFastForwardRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::MergeBranchesByFastForward, request);
        }

        /**
         * An Async wrapper for MergeBranchesByFastForward that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergeBranchesByFastForwardRequestT = Model::MergeBranchesByFastForwardRequest>
        void MergeBranchesByFastForwardAsync(const MergeBranchesByFastForwardRequestT& request, const MergeBranchesByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::MergeBranchesByFastForward, request, handler, context);
        }

        /**
         * <p>Merges two branches using the squash merge strategy.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesBySquash">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesBySquashOutcome MergeBranchesBySquash(const Model::MergeBranchesBySquashRequest& request) const;

        /**
         * A Callable wrapper for MergeBranchesBySquash that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MergeBranchesBySquashRequestT = Model::MergeBranchesBySquashRequest>
        Model::MergeBranchesBySquashOutcomeCallable MergeBranchesBySquashCallable(const MergeBranchesBySquashRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::MergeBranchesBySquash, request);
        }

        /**
         * An Async wrapper for MergeBranchesBySquash that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergeBranchesBySquashRequestT = Model::MergeBranchesBySquashRequest>
        void MergeBranchesBySquashAsync(const MergeBranchesBySquashRequestT& request, const MergeBranchesBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::MergeBranchesBySquash, request, handler, context);
        }

        /**
         * <p>Merges two specified branches using the three-way merge
         * strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeBranchesByThreeWay">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeBranchesByThreeWayOutcome MergeBranchesByThreeWay(const Model::MergeBranchesByThreeWayRequest& request) const;

        /**
         * A Callable wrapper for MergeBranchesByThreeWay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MergeBranchesByThreeWayRequestT = Model::MergeBranchesByThreeWayRequest>
        Model::MergeBranchesByThreeWayOutcomeCallable MergeBranchesByThreeWayCallable(const MergeBranchesByThreeWayRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::MergeBranchesByThreeWay, request);
        }

        /**
         * An Async wrapper for MergeBranchesByThreeWay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergeBranchesByThreeWayRequestT = Model::MergeBranchesByThreeWayRequest>
        void MergeBranchesByThreeWayAsync(const MergeBranchesByThreeWayRequestT& request, const MergeBranchesByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::MergeBranchesByThreeWay, request, handler, context);
        }

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
         * A Callable wrapper for MergePullRequestByFastForward that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MergePullRequestByFastForwardRequestT = Model::MergePullRequestByFastForwardRequest>
        Model::MergePullRequestByFastForwardOutcomeCallable MergePullRequestByFastForwardCallable(const MergePullRequestByFastForwardRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::MergePullRequestByFastForward, request);
        }

        /**
         * An Async wrapper for MergePullRequestByFastForward that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergePullRequestByFastForwardRequestT = Model::MergePullRequestByFastForwardRequest>
        void MergePullRequestByFastForwardAsync(const MergePullRequestByFastForwardRequestT& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::MergePullRequestByFastForward, request, handler, context);
        }

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
         * A Callable wrapper for MergePullRequestBySquash that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MergePullRequestBySquashRequestT = Model::MergePullRequestBySquashRequest>
        Model::MergePullRequestBySquashOutcomeCallable MergePullRequestBySquashCallable(const MergePullRequestBySquashRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::MergePullRequestBySquash, request);
        }

        /**
         * An Async wrapper for MergePullRequestBySquash that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergePullRequestBySquashRequestT = Model::MergePullRequestBySquashRequest>
        void MergePullRequestBySquashAsync(const MergePullRequestBySquashRequestT& request, const MergePullRequestBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::MergePullRequestBySquash, request, handler, context);
        }

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
         * A Callable wrapper for MergePullRequestByThreeWay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MergePullRequestByThreeWayRequestT = Model::MergePullRequestByThreeWayRequest>
        Model::MergePullRequestByThreeWayOutcomeCallable MergePullRequestByThreeWayCallable(const MergePullRequestByThreeWayRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::MergePullRequestByThreeWay, request);
        }

        /**
         * An Async wrapper for MergePullRequestByThreeWay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergePullRequestByThreeWayRequestT = Model::MergePullRequestByThreeWayRequest>
        void MergePullRequestByThreeWayAsync(const MergePullRequestByThreeWayRequestT& request, const MergePullRequestByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::MergePullRequestByThreeWay, request, handler, context);
        }

        /**
         * <p>Sets aside (overrides) all approval rule requirements for a specified pull
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/OverridePullRequestApprovalRules">AWS
         * API Reference</a></p>
         */
        virtual Model::OverridePullRequestApprovalRulesOutcome OverridePullRequestApprovalRules(const Model::OverridePullRequestApprovalRulesRequest& request) const;

        /**
         * A Callable wrapper for OverridePullRequestApprovalRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename OverridePullRequestApprovalRulesRequestT = Model::OverridePullRequestApprovalRulesRequest>
        Model::OverridePullRequestApprovalRulesOutcomeCallable OverridePullRequestApprovalRulesCallable(const OverridePullRequestApprovalRulesRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::OverridePullRequestApprovalRules, request);
        }

        /**
         * An Async wrapper for OverridePullRequestApprovalRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename OverridePullRequestApprovalRulesRequestT = Model::OverridePullRequestApprovalRulesRequest>
        void OverridePullRequestApprovalRulesAsync(const OverridePullRequestApprovalRulesRequestT& request, const OverridePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::OverridePullRequestApprovalRules, request, handler, context);
        }

        /**
         * <p>Posts a comment on the comparison between two commits.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForComparedCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentForComparedCommitOutcome PostCommentForComparedCommit(const Model::PostCommentForComparedCommitRequest& request) const;

        /**
         * A Callable wrapper for PostCommentForComparedCommit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostCommentForComparedCommitRequestT = Model::PostCommentForComparedCommitRequest>
        Model::PostCommentForComparedCommitOutcomeCallable PostCommentForComparedCommitCallable(const PostCommentForComparedCommitRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::PostCommentForComparedCommit, request);
        }

        /**
         * An Async wrapper for PostCommentForComparedCommit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostCommentForComparedCommitRequestT = Model::PostCommentForComparedCommitRequest>
        void PostCommentForComparedCommitAsync(const PostCommentForComparedCommitRequestT& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::PostCommentForComparedCommit, request, handler, context);
        }

        /**
         * <p>Posts a comment on a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentForPullRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentForPullRequestOutcome PostCommentForPullRequest(const Model::PostCommentForPullRequestRequest& request) const;

        /**
         * A Callable wrapper for PostCommentForPullRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostCommentForPullRequestRequestT = Model::PostCommentForPullRequestRequest>
        Model::PostCommentForPullRequestOutcomeCallable PostCommentForPullRequestCallable(const PostCommentForPullRequestRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::PostCommentForPullRequest, request);
        }

        /**
         * An Async wrapper for PostCommentForPullRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostCommentForPullRequestRequestT = Model::PostCommentForPullRequestRequest>
        void PostCommentForPullRequestAsync(const PostCommentForPullRequestRequestT& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::PostCommentForPullRequest, request, handler, context);
        }

        /**
         * <p>Posts a comment in reply to an existing comment on a comparison between
         * commits or a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PostCommentReply">AWS
         * API Reference</a></p>
         */
        virtual Model::PostCommentReplyOutcome PostCommentReply(const Model::PostCommentReplyRequest& request) const;

        /**
         * A Callable wrapper for PostCommentReply that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostCommentReplyRequestT = Model::PostCommentReplyRequest>
        Model::PostCommentReplyOutcomeCallable PostCommentReplyCallable(const PostCommentReplyRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::PostCommentReply, request);
        }

        /**
         * An Async wrapper for PostCommentReply that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostCommentReplyRequestT = Model::PostCommentReplyRequest>
        void PostCommentReplyAsync(const PostCommentReplyRequestT& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::PostCommentReply, request, handler, context);
        }

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
         * A Callable wrapper for PutCommentReaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutCommentReactionRequestT = Model::PutCommentReactionRequest>
        Model::PutCommentReactionOutcomeCallable PutCommentReactionCallable(const PutCommentReactionRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::PutCommentReaction, request);
        }

        /**
         * An Async wrapper for PutCommentReaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutCommentReactionRequestT = Model::PutCommentReactionRequest>
        void PutCommentReactionAsync(const PutCommentReactionRequestT& request, const PutCommentReactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::PutCommentReaction, request, handler, context);
        }

        /**
         * <p>Adds or updates a file in a branch in an CodeCommit repository, and generates
         * a commit for the addition in the specified branch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFile">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFileOutcome PutFile(const Model::PutFileRequest& request) const;

        /**
         * A Callable wrapper for PutFile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutFileRequestT = Model::PutFileRequest>
        Model::PutFileOutcomeCallable PutFileCallable(const PutFileRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::PutFile, request);
        }

        /**
         * An Async wrapper for PutFile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFileRequestT = Model::PutFileRequest>
        void PutFileAsync(const PutFileRequestT& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::PutFile, request, handler, context);
        }

        /**
         * <p>Replaces all triggers for a repository. Used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryTriggersOutcome PutRepositoryTriggers(const Model::PutRepositoryTriggersRequest& request) const;

        /**
         * A Callable wrapper for PutRepositoryTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRepositoryTriggersRequestT = Model::PutRepositoryTriggersRequest>
        Model::PutRepositoryTriggersOutcomeCallable PutRepositoryTriggersCallable(const PutRepositoryTriggersRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::PutRepositoryTriggers, request);
        }

        /**
         * An Async wrapper for PutRepositoryTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRepositoryTriggersRequestT = Model::PutRepositoryTriggersRequest>
        void PutRepositoryTriggersAsync(const PutRepositoryTriggersRequestT& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::PutRepositoryTriggers, request, handler, context);
        }

        /**
         * <p>Adds or updates tags for a resource in CodeCommit. For a list of valid
         * resources in CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>CodeCommit User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::TagResource, request, handler, context);
        }

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
         * A Callable wrapper for TestRepositoryTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestRepositoryTriggersRequestT = Model::TestRepositoryTriggersRequest>
        Model::TestRepositoryTriggersOutcomeCallable TestRepositoryTriggersCallable(const TestRepositoryTriggersRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::TestRepositoryTriggers, request);
        }

        /**
         * An Async wrapper for TestRepositoryTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestRepositoryTriggersRequestT = Model::TestRepositoryTriggersRequest>
        void TestRepositoryTriggersAsync(const TestRepositoryTriggersRequestT& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::TestRepositoryTriggers, request, handler, context);
        }

        /**
         * <p>Removes tags for a resource in CodeCommit. For a list of valid resources in
         * CodeCommit, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/auth-and-access-control-iam-access-control-identity-based.html#arn-formats">CodeCommit
         * Resources and Operations</a> in the <i>CodeCommit User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the content of an approval rule template. You can change the number
         * of required approvals, the membership of the approval rule, and whether an
         * approval pool is defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateContentOutcome UpdateApprovalRuleTemplateContent(const Model::UpdateApprovalRuleTemplateContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateApprovalRuleTemplateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApprovalRuleTemplateContentRequestT = Model::UpdateApprovalRuleTemplateContentRequest>
        Model::UpdateApprovalRuleTemplateContentOutcomeCallable UpdateApprovalRuleTemplateContentCallable(const UpdateApprovalRuleTemplateContentRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateApprovalRuleTemplateContent, request);
        }

        /**
         * An Async wrapper for UpdateApprovalRuleTemplateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApprovalRuleTemplateContentRequestT = Model::UpdateApprovalRuleTemplateContentRequest>
        void UpdateApprovalRuleTemplateContentAsync(const UpdateApprovalRuleTemplateContentRequestT& request, const UpdateApprovalRuleTemplateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateApprovalRuleTemplateContent, request, handler, context);
        }

        /**
         * <p>Updates the description for a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateDescriptionOutcome UpdateApprovalRuleTemplateDescription(const Model::UpdateApprovalRuleTemplateDescriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateApprovalRuleTemplateDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApprovalRuleTemplateDescriptionRequestT = Model::UpdateApprovalRuleTemplateDescriptionRequest>
        Model::UpdateApprovalRuleTemplateDescriptionOutcomeCallable UpdateApprovalRuleTemplateDescriptionCallable(const UpdateApprovalRuleTemplateDescriptionRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateApprovalRuleTemplateDescription, request);
        }

        /**
         * An Async wrapper for UpdateApprovalRuleTemplateDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApprovalRuleTemplateDescriptionRequestT = Model::UpdateApprovalRuleTemplateDescriptionRequest>
        void UpdateApprovalRuleTemplateDescriptionAsync(const UpdateApprovalRuleTemplateDescriptionRequestT& request, const UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateApprovalRuleTemplateDescription, request, handler, context);
        }

        /**
         * <p>Updates the name of a specified approval rule template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateApprovalRuleTemplateName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalRuleTemplateNameOutcome UpdateApprovalRuleTemplateName(const Model::UpdateApprovalRuleTemplateNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateApprovalRuleTemplateName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApprovalRuleTemplateNameRequestT = Model::UpdateApprovalRuleTemplateNameRequest>
        Model::UpdateApprovalRuleTemplateNameOutcomeCallable UpdateApprovalRuleTemplateNameCallable(const UpdateApprovalRuleTemplateNameRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateApprovalRuleTemplateName, request);
        }

        /**
         * An Async wrapper for UpdateApprovalRuleTemplateName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApprovalRuleTemplateNameRequestT = Model::UpdateApprovalRuleTemplateNameRequest>
        void UpdateApprovalRuleTemplateNameAsync(const UpdateApprovalRuleTemplateNameRequestT& request, const UpdateApprovalRuleTemplateNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateApprovalRuleTemplateName, request, handler, context);
        }

        /**
         * <p>Replaces the contents of a comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateComment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCommentOutcome UpdateComment(const Model::UpdateCommentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCommentRequestT = Model::UpdateCommentRequest>
        Model::UpdateCommentOutcomeCallable UpdateCommentCallable(const UpdateCommentRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateComment, request);
        }

        /**
         * An Async wrapper for UpdateComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCommentRequestT = Model::UpdateCommentRequest>
        void UpdateCommentAsync(const UpdateCommentRequestT& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateComment, request, handler, context);
        }

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
         * A Callable wrapper for UpdateDefaultBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDefaultBranchRequestT = Model::UpdateDefaultBranchRequest>
        Model::UpdateDefaultBranchOutcomeCallable UpdateDefaultBranchCallable(const UpdateDefaultBranchRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateDefaultBranch, request);
        }

        /**
         * An Async wrapper for UpdateDefaultBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDefaultBranchRequestT = Model::UpdateDefaultBranchRequest>
        void UpdateDefaultBranchAsync(const UpdateDefaultBranchRequestT& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateDefaultBranch, request, handler, context);
        }

        /**
         * <p>Updates the structure of an approval rule created specifically for a pull
         * request. For example, you can change the number of required approvers and the
         * approval pool for approvers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalRuleContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestApprovalRuleContentOutcome UpdatePullRequestApprovalRuleContent(const Model::UpdatePullRequestApprovalRuleContentRequest& request) const;

        /**
         * A Callable wrapper for UpdatePullRequestApprovalRuleContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePullRequestApprovalRuleContentRequestT = Model::UpdatePullRequestApprovalRuleContentRequest>
        Model::UpdatePullRequestApprovalRuleContentOutcomeCallable UpdatePullRequestApprovalRuleContentCallable(const UpdatePullRequestApprovalRuleContentRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdatePullRequestApprovalRuleContent, request);
        }

        /**
         * An Async wrapper for UpdatePullRequestApprovalRuleContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePullRequestApprovalRuleContentRequestT = Model::UpdatePullRequestApprovalRuleContentRequest>
        void UpdatePullRequestApprovalRuleContentAsync(const UpdatePullRequestApprovalRuleContentRequestT& request, const UpdatePullRequestApprovalRuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdatePullRequestApprovalRuleContent, request, handler, context);
        }

        /**
         * <p>Updates the state of a user's approval on a pull request. The user is derived
         * from the signed-in account when the request is made.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestApprovalState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestApprovalStateOutcome UpdatePullRequestApprovalState(const Model::UpdatePullRequestApprovalStateRequest& request) const;

        /**
         * A Callable wrapper for UpdatePullRequestApprovalState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePullRequestApprovalStateRequestT = Model::UpdatePullRequestApprovalStateRequest>
        Model::UpdatePullRequestApprovalStateOutcomeCallable UpdatePullRequestApprovalStateCallable(const UpdatePullRequestApprovalStateRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdatePullRequestApprovalState, request);
        }

        /**
         * An Async wrapper for UpdatePullRequestApprovalState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePullRequestApprovalStateRequestT = Model::UpdatePullRequestApprovalStateRequest>
        void UpdatePullRequestApprovalStateAsync(const UpdatePullRequestApprovalStateRequestT& request, const UpdatePullRequestApprovalStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdatePullRequestApprovalState, request, handler, context);
        }

        /**
         * <p>Replaces the contents of the description of a pull request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestDescriptionOutcome UpdatePullRequestDescription(const Model::UpdatePullRequestDescriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePullRequestDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePullRequestDescriptionRequestT = Model::UpdatePullRequestDescriptionRequest>
        Model::UpdatePullRequestDescriptionOutcomeCallable UpdatePullRequestDescriptionCallable(const UpdatePullRequestDescriptionRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdatePullRequestDescription, request);
        }

        /**
         * An Async wrapper for UpdatePullRequestDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePullRequestDescriptionRequestT = Model::UpdatePullRequestDescriptionRequest>
        void UpdatePullRequestDescriptionAsync(const UpdatePullRequestDescriptionRequestT& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdatePullRequestDescription, request, handler, context);
        }

        /**
         * <p>Updates the status of a pull request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestStatusOutcome UpdatePullRequestStatus(const Model::UpdatePullRequestStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdatePullRequestStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePullRequestStatusRequestT = Model::UpdatePullRequestStatusRequest>
        Model::UpdatePullRequestStatusOutcomeCallable UpdatePullRequestStatusCallable(const UpdatePullRequestStatusRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdatePullRequestStatus, request);
        }

        /**
         * An Async wrapper for UpdatePullRequestStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePullRequestStatusRequestT = Model::UpdatePullRequestStatusRequest>
        void UpdatePullRequestStatusAsync(const UpdatePullRequestStatusRequestT& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdatePullRequestStatus, request, handler, context);
        }

        /**
         * <p>Replaces the title of a pull request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdatePullRequestTitle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullRequestTitleOutcome UpdatePullRequestTitle(const Model::UpdatePullRequestTitleRequest& request) const;

        /**
         * A Callable wrapper for UpdatePullRequestTitle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePullRequestTitleRequestT = Model::UpdatePullRequestTitleRequest>
        Model::UpdatePullRequestTitleOutcomeCallable UpdatePullRequestTitleCallable(const UpdatePullRequestTitleRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdatePullRequestTitle, request);
        }

        /**
         * An Async wrapper for UpdatePullRequestTitle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePullRequestTitleRequestT = Model::UpdatePullRequestTitleRequest>
        void UpdatePullRequestTitleAsync(const UpdatePullRequestTitleRequestT& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdatePullRequestTitle, request, handler, context);
        }

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
         * A Callable wrapper for UpdateRepositoryDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRepositoryDescriptionRequestT = Model::UpdateRepositoryDescriptionRequest>
        Model::UpdateRepositoryDescriptionOutcomeCallable UpdateRepositoryDescriptionCallable(const UpdateRepositoryDescriptionRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateRepositoryDescription, request);
        }

        /**
         * An Async wrapper for UpdateRepositoryDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRepositoryDescriptionRequestT = Model::UpdateRepositoryDescriptionRequest>
        void UpdateRepositoryDescriptionAsync(const UpdateRepositoryDescriptionRequestT& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateRepositoryDescription, request, handler, context);
        }

        /**
         * <p>Updates the Key Management Service encryption key used to encrypt and decrypt
         * a CodeCommit repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryEncryptionKeyOutcome UpdateRepositoryEncryptionKey(const Model::UpdateRepositoryEncryptionKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateRepositoryEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRepositoryEncryptionKeyRequestT = Model::UpdateRepositoryEncryptionKeyRequest>
        Model::UpdateRepositoryEncryptionKeyOutcomeCallable UpdateRepositoryEncryptionKeyCallable(const UpdateRepositoryEncryptionKeyRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateRepositoryEncryptionKey, request);
        }

        /**
         * An Async wrapper for UpdateRepositoryEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRepositoryEncryptionKeyRequestT = Model::UpdateRepositoryEncryptionKeyRequest>
        void UpdateRepositoryEncryptionKeyAsync(const UpdateRepositoryEncryptionKeyRequestT& request, const UpdateRepositoryEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateRepositoryEncryptionKey, request, handler, context);
        }

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * Amazon Web Services account. Repository names are limited to 100 alphanumeric,
         * dash, and underscore characters, and cannot include certain characters. The
         * suffix .git is prohibited. For more information about the limits on repository
         * names, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Quotas</a>
         * in the CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryNameOutcome UpdateRepositoryName(const Model::UpdateRepositoryNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateRepositoryName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRepositoryNameRequestT = Model::UpdateRepositoryNameRequest>
        Model::UpdateRepositoryNameOutcomeCallable UpdateRepositoryNameCallable(const UpdateRepositoryNameRequestT& request) const
        {
            return SubmitCallable(&CodeCommitClient::UpdateRepositoryName, request);
        }

        /**
         * An Async wrapper for UpdateRepositoryName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRepositoryNameRequestT = Model::UpdateRepositoryNameRequest>
        void UpdateRepositoryNameAsync(const UpdateRepositoryNameRequestT& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCommitClient::UpdateRepositoryName, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeCommitEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeCommitClient>;
      void init(const CodeCommitClientConfiguration& clientConfiguration);

      CodeCommitClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeCommitEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeCommit
} // namespace Aws
