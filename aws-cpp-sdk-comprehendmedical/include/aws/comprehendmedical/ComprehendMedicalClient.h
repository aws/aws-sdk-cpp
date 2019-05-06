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
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehendmedical/model/DetectEntitiesResult.h>
#include <aws/comprehendmedical/model/DetectPHIResult.h>
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

namespace ComprehendMedical
{

namespace Model
{
        class DetectEntitiesRequest;
        class DetectPHIRequest;

        typedef Aws::Utils::Outcome<DetectEntitiesResult, Aws::Client::AWSError<ComprehendMedicalErrors>> DetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<DetectPHIResult, Aws::Client::AWSError<ComprehendMedicalErrors>> DetectPHIOutcome;

        typedef std::future<DetectEntitiesOutcome> DetectEntitiesOutcomeCallable;
        typedef std::future<DetectPHIOutcome> DetectPHIOutcomeCallable;
} // namespace Model

  class ComprehendMedicalClient;

    typedef std::function<void(const ComprehendMedicalClient*, const Model::DetectEntitiesRequest&, const Model::DetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DetectPHIRequest&, const Model::DetectPHIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectPHIResponseReceivedHandler;

  /**
   * <p> Comprehend Medical extracts structured information from unstructured
   * clinical text. Use these actions to gain insight in your documents. </p>
   */
  class AWS_COMPREHENDMEDICAL_API ComprehendMedicalClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendMedicalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ComprehendMedicalClient();

        inline virtual const char* GetServiceClientName() const override { return "ComprehendMedical"; }


        /**
         * <p> Inspects the clinical text for a variety of medical entities and returns
         * specific information about them such as entity category, location, and
         * confidence score on that information .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectEntitiesOutcome DetectEntities(const Model::DetectEntitiesRequest& request) const;

        /**
         * <p> Inspects the clinical text for a variety of medical entities and returns
         * specific information about them such as entity category, location, and
         * confidence score on that information .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectEntitiesOutcomeCallable DetectEntitiesCallable(const Model::DetectEntitiesRequest& request) const;

        /**
         * <p> Inspects the clinical text for a variety of medical entities and returns
         * specific information about them such as entity category, location, and
         * confidence score on that information .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectEntitiesAsync(const Model::DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Inspects the clinical text for personal health information (PHI) entities
         * and entity category, location, and confidence score on that
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPHIOutcome DetectPHI(const Model::DetectPHIRequest& request) const;

        /**
         * <p> Inspects the clinical text for personal health information (PHI) entities
         * and entity category, location, and confidence score on that
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectPHIOutcomeCallable DetectPHICallable(const Model::DetectPHIRequest& request) const;

        /**
         * <p> Inspects the clinical text for personal health information (PHI) entities
         * and entity category, location, and confidence score on that
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectPHIAsync(const Model::DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DetectEntitiesAsyncHelper(const Model::DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectPHIAsyncHelper(const Model::DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ComprehendMedical
} // namespace Aws
