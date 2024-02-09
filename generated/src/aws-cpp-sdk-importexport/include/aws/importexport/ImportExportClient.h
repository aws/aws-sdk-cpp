/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/importexport/ImportExportServiceClientModel.h>

namespace Aws
{
namespace ImportExport
{
  /**
   * <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates
   * transferring large amounts of data between the AWS cloud and portable storage
   * devices that you mail to us. AWS Import/Export transfers data directly onto and
   * off of your storage devices using Amazon's high-speed internal network and
   * bypassing the Internet. For large data sets, AWS Import/Export is often faster
   * than Internet transfer and more cost effective than upgrading your connectivity.
   */
  class AWS_IMPORTEXPORT_API ImportExportClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<ImportExportClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ImportExportClientConfiguration ClientConfigurationType;
      typedef ImportExportEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImportExportClient(const Aws::ImportExport::ImportExportClientConfiguration& clientConfiguration = Aws::ImportExport::ImportExportClientConfiguration(),
                           std::shared_ptr<ImportExportEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImportExportClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ImportExportEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ImportExport::ImportExportClientConfiguration& clientConfiguration = Aws::ImportExport::ImportExportClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImportExportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ImportExportEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ImportExport::ImportExportClientConfiguration& clientConfiguration = Aws::ImportExport::ImportExportClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImportExportClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImportExportClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImportExportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ImportExportClient();


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
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&ImportExportClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImportExportClient::CancelJob, request, handler, context);
        }

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
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&ImportExportClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImportExportClient::CreateJob, request, handler, context);
        }

        /**
         * This operation generates a pre-paid UPS shipping label that you will use to ship
         * your device to AWS for processing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetShippingLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetShippingLabelOutcome GetShippingLabel(const Model::GetShippingLabelRequest& request) const;

        /**
         * A Callable wrapper for GetShippingLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetShippingLabelRequestT = Model::GetShippingLabelRequest>
        Model::GetShippingLabelOutcomeCallable GetShippingLabelCallable(const GetShippingLabelRequestT& request) const
        {
            return SubmitCallable(&ImportExportClient::GetShippingLabel, request);
        }

        /**
         * An Async wrapper for GetShippingLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetShippingLabelRequestT = Model::GetShippingLabelRequest>
        void GetShippingLabelAsync(const GetShippingLabelRequestT& request, const GetShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImportExportClient::GetShippingLabel, request, handler, context);
        }

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
         * A Callable wrapper for GetStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStatusRequestT = Model::GetStatusRequest>
        Model::GetStatusOutcomeCallable GetStatusCallable(const GetStatusRequestT& request) const
        {
            return SubmitCallable(&ImportExportClient::GetStatus, request);
        }

        /**
         * An Async wrapper for GetStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStatusRequestT = Model::GetStatusRequest>
        void GetStatusAsync(const GetStatusRequestT& request, const GetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImportExportClient::GetStatus, request, handler, context);
        }

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
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&ImportExportClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImportExportClient::ListJobs, request, handler, context);
        }

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
         * A Callable wrapper for UpdateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        Model::UpdateJobOutcomeCallable UpdateJobCallable(const UpdateJobRequestT& request) const
        {
            return SubmitCallable(&ImportExportClient::UpdateJob, request);
        }

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        void UpdateJobAsync(const UpdateJobRequestT& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImportExportClient::UpdateJob, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<ImportExportEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<ImportExportClient>;
        void init(const ImportExportClientConfiguration& clientConfiguration);

        ImportExportClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<ImportExportEndpointProviderBase> m_endpointProvider;
  };

} // namespace ImportExport
} // namespace Aws
