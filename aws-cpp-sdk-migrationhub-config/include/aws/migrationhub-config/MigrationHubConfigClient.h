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
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/MigrationHubConfigErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhub-config/model/CreateHomeRegionControlResult.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsResult.h>
#include <aws/migrationhub-config/model/GetHomeRegionResult.h>
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

namespace MigrationHubConfig
{

namespace Model
{
        class CreateHomeRegionControlRequest;
        class DescribeHomeRegionControlsRequest;
        class GetHomeRegionRequest;

        typedef Aws::Utils::Outcome<CreateHomeRegionControlResult, Aws::Client::AWSError<MigrationHubConfigErrors>> CreateHomeRegionControlOutcome;
        typedef Aws::Utils::Outcome<DescribeHomeRegionControlsResult, Aws::Client::AWSError<MigrationHubConfigErrors>> DescribeHomeRegionControlsOutcome;
        typedef Aws::Utils::Outcome<GetHomeRegionResult, Aws::Client::AWSError<MigrationHubConfigErrors>> GetHomeRegionOutcome;

        typedef std::future<CreateHomeRegionControlOutcome> CreateHomeRegionControlOutcomeCallable;
        typedef std::future<DescribeHomeRegionControlsOutcome> DescribeHomeRegionControlsOutcomeCallable;
        typedef std::future<GetHomeRegionOutcome> GetHomeRegionOutcomeCallable;
} // namespace Model

  class MigrationHubConfigClient;

    typedef std::function<void(const MigrationHubConfigClient*, const Model::CreateHomeRegionControlRequest&, const Model::CreateHomeRegionControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHomeRegionControlResponseReceivedHandler;
    typedef std::function<void(const MigrationHubConfigClient*, const Model::DescribeHomeRegionControlsRequest&, const Model::DescribeHomeRegionControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHomeRegionControlsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubConfigClient*, const Model::GetHomeRegionRequest&, const Model::GetHomeRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHomeRegionResponseReceivedHandler;

  /**
   * <p>The AWS Migration Hub home region APIs are available specifically for working
   * with your Migration Hub home region. You can use these APIs to determine a home
   * region, as well as to create and work with controls that describe the home
   * region.</p> <p>You can use these APIs within your home region only. If you call
   * these APIs from outside your home region, your calls are rejected, except for
   * the ability to register your agents and connectors. </p> <p> You must call
   * <code>GetHomeRegion</code> at least once before you call any other AWS
   * Application Discovery Service and AWS Migration Hub APIs, to obtain the
   * account's Migration Hub home region.</p> <p>The <code>StartDataCollection</code>
   * API call in AWS Application Discovery Service allows your agents and connectors
   * to begin collecting data that flows directly into the home region, and it will
   * prevent you from enabling data collection information to be sent outside the
   * home region. </p> <p>For specific API usage, see the sections that follow in
   * this AWS Migration Hub Home Region API reference. </p> <note> <p>The Migration
   * Hub Home Region APIs do not support AWS Organizations.</p> </note>
   */
  class AWS_MIGRATIONHUBCONFIG_API MigrationHubConfigClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MigrationHubConfigClient();

        inline virtual const char* GetServiceClientName() const override { return "MigrationHub Config"; }


        /**
         * <p>This API sets up the home region for the calling account only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/CreateHomeRegionControl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHomeRegionControlOutcome CreateHomeRegionControl(const Model::CreateHomeRegionControlRequest& request) const;

        /**
         * <p>This API sets up the home region for the calling account only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/CreateHomeRegionControl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHomeRegionControlOutcomeCallable CreateHomeRegionControlCallable(const Model::CreateHomeRegionControlRequest& request) const;

        /**
         * <p>This API sets up the home region for the calling account only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/CreateHomeRegionControl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHomeRegionControlAsync(const Model::CreateHomeRegionControlRequest& request, const CreateHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API permits filtering on the <code>ControlId</code>,
         * <code>HomeRegion</code>, and <code>RegionControlScope</code>
         * fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/DescribeHomeRegionControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHomeRegionControlsOutcome DescribeHomeRegionControls(const Model::DescribeHomeRegionControlsRequest& request) const;

        /**
         * <p>This API permits filtering on the <code>ControlId</code>,
         * <code>HomeRegion</code>, and <code>RegionControlScope</code>
         * fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/DescribeHomeRegionControls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHomeRegionControlsOutcomeCallable DescribeHomeRegionControlsCallable(const Model::DescribeHomeRegionControlsRequest& request) const;

        /**
         * <p>This API permits filtering on the <code>ControlId</code>,
         * <code>HomeRegion</code>, and <code>RegionControlScope</code>
         * fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/DescribeHomeRegionControls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHomeRegionControlsAsync(const Model::DescribeHomeRegionControlsRequest& request, const DescribeHomeRegionControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the calling account’s home region, if configured. This API is used by
         * other AWS services to determine the regional endpoint for calling AWS
         * Application Discovery Service and Migration Hub. You must call
         * <code>GetHomeRegion</code> at least once before you call any other AWS
         * Application Discovery Service and AWS Migration Hub APIs, to obtain the
         * account's Migration Hub home region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/GetHomeRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHomeRegionOutcome GetHomeRegion(const Model::GetHomeRegionRequest& request) const;

        /**
         * <p>Returns the calling account’s home region, if configured. This API is used by
         * other AWS services to determine the regional endpoint for calling AWS
         * Application Discovery Service and Migration Hub. You must call
         * <code>GetHomeRegion</code> at least once before you call any other AWS
         * Application Discovery Service and AWS Migration Hub APIs, to obtain the
         * account's Migration Hub home region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/GetHomeRegion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHomeRegionOutcomeCallable GetHomeRegionCallable(const Model::GetHomeRegionRequest& request) const;

        /**
         * <p>Returns the calling account’s home region, if configured. This API is used by
         * other AWS services to determine the regional endpoint for calling AWS
         * Application Discovery Service and Migration Hub. You must call
         * <code>GetHomeRegion</code> at least once before you call any other AWS
         * Application Discovery Service and AWS Migration Hub APIs, to obtain the
         * account's Migration Hub home region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/GetHomeRegion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHomeRegionAsync(const Model::GetHomeRegionRequest& request, const GetHomeRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateHomeRegionControlAsyncHelper(const Model::CreateHomeRegionControlRequest& request, const CreateHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHomeRegionControlsAsyncHelper(const Model::DescribeHomeRegionControlsRequest& request, const DescribeHomeRegionControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHomeRegionAsyncHelper(const Model::GetHomeRegionRequest& request, const GetHomeRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MigrationHubConfig
} // namespace Aws
