/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/finspace-data/model/CreateChangesetResult.h>
#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsResult.h>
#include <aws/finspace-data/model/GetWorkingLocationResult.h>
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

namespace FinSpaceData
{

namespace Model
{
        class CreateChangesetRequest;
        class GetProgrammaticAccessCredentialsRequest;
        class GetWorkingLocationRequest;

        typedef Aws::Utils::Outcome<CreateChangesetResult, FinSpaceDataError> CreateChangesetOutcome;
        typedef Aws::Utils::Outcome<GetProgrammaticAccessCredentialsResult, FinSpaceDataError> GetProgrammaticAccessCredentialsOutcome;
        typedef Aws::Utils::Outcome<GetWorkingLocationResult, FinSpaceDataError> GetWorkingLocationOutcome;

        typedef std::future<CreateChangesetOutcome> CreateChangesetOutcomeCallable;
        typedef std::future<GetProgrammaticAccessCredentialsOutcome> GetProgrammaticAccessCredentialsOutcomeCallable;
        typedef std::future<GetWorkingLocationOutcome> GetWorkingLocationOutcomeCallable;
} // namespace Model

  class FinSpaceDataClient;

    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateChangesetRequest&, const Model::CreateChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetProgrammaticAccessCredentialsRequest&, const Model::GetProgrammaticAccessCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProgrammaticAccessCredentialsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetWorkingLocationRequest&, const Model::GetWorkingLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkingLocationResponseReceivedHandler;

  /**
   * <p> The FinSpace APIs let you take actions inside the FinSpace environment. </p>
   */
  class AWS_FINSPACEDATA_API FinSpaceDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinSpaceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FinSpaceDataClient();


        /**
         * <p>Creates a new changeset in a FinSpace dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChangesetOutcome CreateChangeset(const Model::CreateChangesetRequest& request) const;

        /**
         * <p>Creates a new changeset in a FinSpace dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateChangeset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChangesetOutcomeCallable CreateChangesetCallable(const Model::CreateChangesetRequest& request) const;

        /**
         * <p>Creates a new changeset in a FinSpace dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateChangeset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChangesetAsync(const Model::CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request programmatic credentials to use with Habanero SDK.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetProgrammaticAccessCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProgrammaticAccessCredentialsOutcome GetProgrammaticAccessCredentials(const Model::GetProgrammaticAccessCredentialsRequest& request) const;

        /**
         * <p>Request programmatic credentials to use with Habanero SDK.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetProgrammaticAccessCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProgrammaticAccessCredentialsOutcomeCallable GetProgrammaticAccessCredentialsCallable(const Model::GetProgrammaticAccessCredentialsRequest& request) const;

        /**
         * <p>Request programmatic credentials to use with Habanero SDK.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetProgrammaticAccessCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProgrammaticAccessCredentialsAsync(const Model::GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A temporary Amazon S3 location to copy your files from a source location to
         * stage or use as a scratch space in Habanero notebook.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetWorkingLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkingLocationOutcome GetWorkingLocation(const Model::GetWorkingLocationRequest& request) const;

        /**
         * <p>A temporary Amazon S3 location to copy your files from a source location to
         * stage or use as a scratch space in Habanero notebook.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetWorkingLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkingLocationOutcomeCallable GetWorkingLocationCallable(const Model::GetWorkingLocationRequest& request) const;

        /**
         * <p>A temporary Amazon S3 location to copy your files from a source location to
         * stage or use as a scratch space in Habanero notebook.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetWorkingLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkingLocationAsync(const Model::GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateChangesetAsyncHelper(const Model::CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProgrammaticAccessCredentialsAsyncHelper(const Model::GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkingLocationAsyncHelper(const Model::GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FinSpaceData
} // namespace Aws
