﻿/*
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
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationResult.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationResult.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsResult.h>
#include <aws/mediatailor/model/PutPlaybackConfigurationResult.h>
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

namespace MediaTailor
{

namespace Model
{
        class DeletePlaybackConfigurationRequest;
        class GetPlaybackConfigurationRequest;
        class ListPlaybackConfigurationsRequest;
        class PutPlaybackConfigurationRequest;

        typedef Aws::Utils::Outcome<DeletePlaybackConfigurationResult, Aws::Client::AWSError<MediaTailorErrors>> DeletePlaybackConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetPlaybackConfigurationResult, Aws::Client::AWSError<MediaTailorErrors>> GetPlaybackConfigurationOutcome;
        typedef Aws::Utils::Outcome<ListPlaybackConfigurationsResult, Aws::Client::AWSError<MediaTailorErrors>> ListPlaybackConfigurationsOutcome;
        typedef Aws::Utils::Outcome<PutPlaybackConfigurationResult, Aws::Client::AWSError<MediaTailorErrors>> PutPlaybackConfigurationOutcome;

        typedef std::future<DeletePlaybackConfigurationOutcome> DeletePlaybackConfigurationOutcomeCallable;
        typedef std::future<GetPlaybackConfigurationOutcome> GetPlaybackConfigurationOutcomeCallable;
        typedef std::future<ListPlaybackConfigurationsOutcome> ListPlaybackConfigurationsOutcomeCallable;
        typedef std::future<PutPlaybackConfigurationOutcome> PutPlaybackConfigurationOutcomeCallable;
} // namespace Model

  class MediaTailorClient;

    typedef std::function<void(const MediaTailorClient*, const Model::DeletePlaybackConfigurationRequest&, const Model::DeletePlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetPlaybackConfigurationRequest&, const Model::GetPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListPlaybackConfigurationsRequest&, const Model::ListPlaybackConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaybackConfigurationsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::PutPlaybackConfigurationRequest&, const Model::PutPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPlaybackConfigurationResponseReceivedHandler;

  /**
   * <p>Use the AWS Elemental MediaTailor SDK to configure scalable ad insertion for
   * your live and VOD content. With AWS Elemental MediaTailor, you can serve
   * targeted ads to viewers while maintaining broadcast quality in over-the-top
   * (OTT) video applications. For information about using the service, including
   * detailed information about the settings covered in this guide, see the AWS
   * Elemental MediaTailor User Guide.<p>Through the SDK, you manage AWS Elemental
   * MediaTailor configurations the same as you do through the console. For example,
   * you specify ad insertion behavior and mapping information for the origin server
   * and the ad decision server (ADS).</p>
   */
  class AWS_MEDIATAILOR_API MediaTailorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaTailorClient();

        inline virtual const char* GetServiceClientName() const override { return "MediaTailor"; }


        /**
         * <p>Deletes the configuration for the specified name. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackConfigurationOutcome DeletePlaybackConfiguration(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * <p>Deletes the configuration for the specified name. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaybackConfigurationOutcomeCallable DeletePlaybackConfigurationCallable(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * <p>Deletes the configuration for the specified name. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlaybackConfigurationAsync(const Model::DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration for the specified name. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaybackConfigurationOutcome GetPlaybackConfiguration(const Model::GetPlaybackConfigurationRequest& request) const;

        /**
         * <p>Returns the configuration for the specified name. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlaybackConfigurationOutcomeCallable GetPlaybackConfigurationCallable(const Model::GetPlaybackConfigurationRequest& request) const;

        /**
         * <p>Returns the configuration for the specified name. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlaybackConfigurationAsync(const Model::GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the configurations defined in AWS Elemental MediaTailor.
         * You can specify a max number of configurations to return at a time. The default
         * max is 50. Results are returned in pagefuls. If AWS Elemental MediaTailor has
         * more configurations than the specified max, it provides parameters in the
         * response that you can use to retrieve the next pageful. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaybackConfigurationsOutcome ListPlaybackConfigurations(const Model::ListPlaybackConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of the configurations defined in AWS Elemental MediaTailor.
         * You can specify a max number of configurations to return at a time. The default
         * max is 50. Results are returned in pagefuls. If AWS Elemental MediaTailor has
         * more configurations than the specified max, it provides parameters in the
         * response that you can use to retrieve the next pageful. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaybackConfigurationsOutcomeCallable ListPlaybackConfigurationsCallable(const Model::ListPlaybackConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of the configurations defined in AWS Elemental MediaTailor.
         * You can specify a max number of configurations to return at a time. The default
         * max is 50. Results are returned in pagefuls. If AWS Elemental MediaTailor has
         * more configurations than the specified max, it provides parameters in the
         * response that you can use to retrieve the next pageful. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlaybackConfigurationsAsync(const Model::ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new configuration to AWS Elemental MediaTailor.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPlaybackConfigurationOutcome PutPlaybackConfiguration(const Model::PutPlaybackConfigurationRequest& request) const;

        /**
         * <p>Adds a new configuration to AWS Elemental MediaTailor.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPlaybackConfigurationOutcomeCallable PutPlaybackConfigurationCallable(const Model::PutPlaybackConfigurationRequest& request) const;

        /**
         * <p>Adds a new configuration to AWS Elemental MediaTailor.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPlaybackConfigurationAsync(const Model::PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DeletePlaybackConfigurationAsyncHelper(const Model::DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlaybackConfigurationAsyncHelper(const Model::GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlaybackConfigurationsAsyncHelper(const Model::ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPlaybackConfigurationAsyncHelper(const Model::PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaTailor
} // namespace Aws
