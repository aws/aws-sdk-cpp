/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryResult.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationResult.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryResult.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CodeGuruReviewer
{

namespace Model
{
        class AssociateRepositoryRequest;
        class DescribeRepositoryAssociationRequest;
        class DisassociateRepositoryRequest;
        class ListRepositoryAssociationsRequest;

        typedef Aws::Utils::Outcome<AssociateRepositoryResult, Aws::Client::AWSError<CodeGuruReviewerErrors>> AssociateRepositoryOutcome;
        typedef Aws::Utils::Outcome<DescribeRepositoryAssociationResult, Aws::Client::AWSError<CodeGuruReviewerErrors>> DescribeRepositoryAssociationOutcome;
        typedef Aws::Utils::Outcome<DisassociateRepositoryResult, Aws::Client::AWSError<CodeGuruReviewerErrors>> DisassociateRepositoryOutcome;
        typedef Aws::Utils::Outcome<ListRepositoryAssociationsResult, Aws::Client::AWSError<CodeGuruReviewerErrors>> ListRepositoryAssociationsOutcome;

        typedef std::future<AssociateRepositoryOutcome> AssociateRepositoryOutcomeCallable;
        typedef std::future<DescribeRepositoryAssociationOutcome> DescribeRepositoryAssociationOutcomeCallable;
        typedef std::future<DisassociateRepositoryOutcome> DisassociateRepositoryOutcomeCallable;
        typedef std::future<ListRepositoryAssociationsOutcome> ListRepositoryAssociationsOutcomeCallable;
} // namespace Model

  class CodeGuruReviewerClient;

    typedef std::function<void(const CodeGuruReviewerClient*, const Model::AssociateRepositoryRequest&, const Model::AssociateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::DescribeRepositoryAssociationRequest&, const Model::DescribeRepositoryAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoryAssociationResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::DisassociateRepositoryRequest&, const Model::DisassociateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::ListRepositoryAssociationsRequest&, const Model::ListRepositoryAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoryAssociationsResponseReceivedHandler;

  /**
   * <p>This section provides documentation for the Amazon CodeGuru Reviewer API
   * operations.</p>
   */
  class AWS_CODEGURUREVIEWER_API CodeGuruReviewerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruReviewerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeGuruReviewerClient();

        inline virtual const char* GetServiceClientName() const override { return "CodeGuru Reviewer"; }


        /**
         * <p>Associates an AWS CodeCommit repository with Amazon CodeGuru Reviewer. When
         * you associate an AWS CodeCommit repository with Amazon CodeGuru Reviewer, Amazon
         * CodeGuru Reviewer will provide recommendations for each pull request. You can
         * view recommendations in the AWS CodeCommit repository.</p> <p>You can associate
         * a GitHub repository using the Amazon CodeGuru Reviewer console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRepositoryOutcome AssociateRepository(const Model::AssociateRepositoryRequest& request) const;

        /**
         * <p>Associates an AWS CodeCommit repository with Amazon CodeGuru Reviewer. When
         * you associate an AWS CodeCommit repository with Amazon CodeGuru Reviewer, Amazon
         * CodeGuru Reviewer will provide recommendations for each pull request. You can
         * view recommendations in the AWS CodeCommit repository.</p> <p>You can associate
         * a GitHub repository using the Amazon CodeGuru Reviewer console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRepositoryOutcomeCallable AssociateRepositoryCallable(const Model::AssociateRepositoryRequest& request) const;

        /**
         * <p>Associates an AWS CodeCommit repository with Amazon CodeGuru Reviewer. When
         * you associate an AWS CodeCommit repository with Amazon CodeGuru Reviewer, Amazon
         * CodeGuru Reviewer will provide recommendations for each pull request. You can
         * view recommendations in the AWS CodeCommit repository.</p> <p>You can associate
         * a GitHub repository using the Amazon CodeGuru Reviewer console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRepositoryAsync(const Model::AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a repository association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoryAssociationOutcome DescribeRepositoryAssociation(const Model::DescribeRepositoryAssociationRequest& request) const;

        /**
         * <p>Describes a repository association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoryAssociationOutcomeCallable DescribeRepositoryAssociationCallable(const Model::DescribeRepositoryAssociationRequest& request) const;

        /**
         * <p>Describes a repository association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRepositoryAssociationAsync(const Model::DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRepositoryOutcome DisassociateRepository(const Model::DisassociateRepositoryRequest& request) const;

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRepositoryOutcomeCallable DisassociateRepositoryCallable(const Model::DisassociateRepositoryRequest& request) const;

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRepositoryAsync(const Model::DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists repository associations. You can optionally filter on one or more of
         * the following recommendation properties: provider types, states, names, and
         * owners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoryAssociationsOutcome ListRepositoryAssociations(const Model::ListRepositoryAssociationsRequest& request) const;

        /**
         * <p>Lists repository associations. You can optionally filter on one or more of
         * the following recommendation properties: provider types, states, names, and
         * owners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoryAssociationsOutcomeCallable ListRepositoryAssociationsCallable(const Model::ListRepositoryAssociationsRequest& request) const;

        /**
         * <p>Lists repository associations. You can optionally filter on one or more of
         * the following recommendation properties: provider types, states, names, and
         * owners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoryAssociationsAsync(const Model::ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateRepositoryAsyncHelper(const Model::AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRepositoryAssociationAsyncHelper(const Model::DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRepositoryAsyncHelper(const Model::DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoryAssociationsAsyncHelper(const Model::ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeGuruReviewer
} // namespace Aws
