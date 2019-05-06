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
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/importexport/ImportExportErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/importexport/model/CancelJobResult.h>
#include <aws/importexport/model/CreateJobResult.h>
#include <aws/importexport/model/GetShippingLabelResult.h>
#include <aws/importexport/model/GetStatusResult.h>
#include <aws/importexport/model/ListJobsResult.h>
#include <aws/importexport/model/UpdateJobResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace ImportExport
{

namespace Model
{
        class CancelJobRequest;
        class CreateJobRequest;
        class GetShippingLabelRequest;
        class GetStatusRequest;
        class ListJobsRequest;
        class UpdateJobRequest;

        typedef Aws::Utils::Outcome<CancelJobResult, Aws::Client::AWSError<ImportExportErrors>> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, Aws::Client::AWSError<ImportExportErrors>> CreateJobOutcome;
        typedef Aws::Utils::Outcome<GetShippingLabelResult, Aws::Client::AWSError<ImportExportErrors>> GetShippingLabelOutcome;
        typedef Aws::Utils::Outcome<GetStatusResult, Aws::Client::AWSError<ImportExportErrors>> GetStatusOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<ImportExportErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<UpdateJobResult, Aws::Client::AWSError<ImportExportErrors>> UpdateJobOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<GetShippingLabelOutcome> GetShippingLabelOutcomeCallable;
        typedef std::future<GetStatusOutcome> GetStatusOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
} // namespace Model

  class ImportExportClient;

    typedef std::function<void(const ImportExportClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::GetShippingLabelRequest&, const Model::GetShippingLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetShippingLabelResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::GetStatusRequest&, const Model::GetStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStatusResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;

  /**
   * <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates
   * transferring large amounts of data between the AWS cloud and portable storage
   * devices that you mail to us. AWS Import/Export transfers data directly onto and
   * off of your storage devices using Amazon's high-speed internal network and
   * bypassing the Internet. For large data sets, AWS Import/Export is often faster
   * than Internet transfer and more cost effective than upgrading your connectivity.
   */
  class AWS_IMPORTEXPORT_API ImportExportClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImportExportClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImportExportClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImportExportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ImportExportClient();

        inline virtual const char* GetServiceClientName() const override { return "importexport"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * This operation cancels a specified job. Only the job owner can cancel it. The
         * operation fails if the job has already started or is complete.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * This operation cancels a specified job. Only the job owner can cancel it. The
         * operation fails if the job has already started or is complete.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CancelJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * This operation cancels a specified job. Only the job owner can cancel it. The
         * operation fails if the job has already started or is complete.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CancelJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation initiates the process of scheduling an upload or download of your
         * data. You include in the request a manifest that describes the data transfer
         * specifics. The response to the request includes a job ID, which you can use in
         * other operations, a signature that you use to identify your storage device, and
         * the address where you should ship your storage device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * This operation initiates the process of scheduling an upload or download of your
         * data. You include in the request a manifest that describes the data transfer
         * specifics. The response to the request includes a job ID, which you can use in
         * other operations, a signature that you use to identify your storage device, and
         * the address where you should ship your storage device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CreateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * This operation initiates the process of scheduling an upload or download of your
         * data. You include in the request a manifest that describes the data transfer
         * specifics. The response to the request includes a job ID, which you can use in
         * other operations, a signature that you use to identify your storage device, and
         * the address where you should ship your storage device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CreateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation generates a pre-paid UPS shipping label that you will use to ship
         * your device to AWS for processing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetShippingLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetShippingLabelOutcome GetShippingLabel(const Model::GetShippingLabelRequest& request) const;

        /**
         * This operation generates a pre-paid UPS shipping label that you will use to ship
         * your device to AWS for processing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetShippingLabel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetShippingLabelOutcomeCallable GetShippingLabelCallable(const Model::GetShippingLabelRequest& request) const;

        /**
         * This operation generates a pre-paid UPS shipping label that you will use to ship
         * your device to AWS for processing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetShippingLabel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetShippingLabelAsync(const Model::GetShippingLabelRequest& request, const GetShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation returns information about a job, including where the job is in
         * the processing pipeline, the status of the results, and the signature value
         * associated with the job. You can only return information about jobs you
         * own.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatusOutcome GetStatus(const Model::GetStatusRequest& request) const;

        /**
         * This operation returns information about a job, including where the job is in
         * the processing pipeline, the status of the results, and the signature value
         * associated with the job. You can only return information about jobs you
         * own.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStatusOutcomeCallable GetStatusCallable(const Model::GetStatusRequest& request) const;

        /**
         * This operation returns information about a job, including where the job is in
         * the processing pipeline, the status of the results, and the signature value
         * associated with the job. You can only return information about jobs you
         * own.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStatusAsync(const Model::GetStatusRequest& request, const GetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation returns the jobs associated with the requester. AWS Import/Export
         * lists the jobs in reverse chronological order based on the date of creation. For
         * example if Job Test1 was created 2009Dec30 and Test2 was created 2010Feb05, the
         * ListJobs operation would return Test2 followed by Test1.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * This operation returns the jobs associated with the requester. AWS Import/Export
         * lists the jobs in reverse chronological order based on the date of creation. For
         * example if Job Test1 was created 2009Dec30 and Test2 was created 2010Feb05, the
         * ListJobs operation would return Test2 followed by Test1.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * This operation returns the jobs associated with the requester. AWS Import/Export
         * lists the jobs in reverse chronological order based on the date of creation. For
         * example if Job Test1 was created 2009Dec30 and Test2 was created 2010Feb05, the
         * ListJobs operation would return Test2 followed by Test1.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * You use this operation to change the parameters specified in the original
         * manifest file by supplying a new manifest file. The manifest file attached to
         * this request replaces the original manifest file. You can only use the operation
         * after a CreateJob request but before the data transfer starts and you can only
         * use it on jobs you own.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/UpdateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * You use this operation to change the parameters specified in the original
         * manifest file by supplying a new manifest file. The manifest file attached to
         * this request replaces the original manifest file. You can only use the operation
         * after a CreateJob request but before the data transfer starts and you can only
         * use it on jobs you own.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/UpdateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * You use this operation to change the parameters specified in the original
         * manifest file by supplying a new manifest file. The manifest file attached to
         * this request replaces the original manifest file. You can only use the operation
         * after a CreateJob request but before the data transfer starts and you can only
         * use it on jobs you own.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/UpdateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetShippingLabelAsyncHelper(const Model::GetShippingLabelRequest& request, const GetShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStatusAsyncHelper(const Model::GetStatusRequest& request, const GetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobAsyncHelper(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ImportExport
} // namespace Aws
