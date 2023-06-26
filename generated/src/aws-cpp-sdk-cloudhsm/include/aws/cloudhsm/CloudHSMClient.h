/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsm/CloudHSMServiceClientModel.h>

namespace Aws
{
namespace CloudHSM
{
  /**
   * <fullname>AWS CloudHSM Service</fullname> <p>This is documentation for <b>AWS
   * CloudHSM Classic</b>. For more information, see <a
   * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
   * FAQs</a>, the <a
   * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
   * Classic User Guide</a>, and the <a
   * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
   * Classic API Reference</a>.</p> <p> <b>For information about the current version
   * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
   * CloudHSM</a>, the <a
   * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
   * Guide</a>, and the <a
   * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
   * API Reference</a>.</p>
   */
  class AWS_CLOUDHSM_API CloudHSMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudHSMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef CloudHSMClientConfiguration ClientConfigurationType;
      typedef CloudHSMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::CloudHSM::CloudHSMClientConfiguration& clientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration(),
                       std::shared_ptr<CloudHSMEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudHSMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<CloudHSMEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudHSMEndpointProvider>(ALLOCATION_TAG),
                       const Aws::CloudHSM::CloudHSMClientConfiguration& clientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<CloudHSMEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudHSMEndpointProvider>(ALLOCATION_TAG),
                       const Aws::CloudHSM::CloudHSMClientConfiguration& clientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudHSMClient();

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Adds or overwrites one or more tags for the specified
         * AWS CloudHSM resource.</p> <p>Each tag consists of a key and a value. Tag keys
         * must be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Creates a high-availability partition group. A
         * high-availability partition group is a group of partitions that spans multiple
         * physical HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHapgOutcome CreateHapg(const Model::CreateHapgRequest& request) const;

        /**
         * A Callable wrapper for CreateHapg that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHapgRequestT = Model::CreateHapgRequest>
        Model::CreateHapgOutcomeCallable CreateHapgCallable(const CreateHapgRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::CreateHapg, request);
        }

        /**
         * An Async wrapper for CreateHapg that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHapgRequestT = Model::CreateHapgRequest>
        void CreateHapgAsync(const CreateHapgRequestT& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::CreateHapg, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Creates an uninitialized HSM instance.</p> <p>There is
         * an upfront fee charged for each HSM instance that you create with the
         * <code>CreateHsm</code> operation. If you accidentally provision an HSM and want
         * to request a refund, delete the instance using the <a>DeleteHsm</a> operation,
         * go to the <a href="https://console.aws.amazon.com/support/home">AWS Support
         * Center</a>, create a new case, and select <b>Account and Billing
         * Support</b>.</p>  <p>It can take up to 20 minutes to create and
         * provision an HSM. You can monitor the status of the HSM with the
         * <a>DescribeHsm</a> operation. The HSM is ready to be initialized when the status
         * changes to <code>RUNNING</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHsmOutcome CreateHsm(const Model::CreateHsmRequest& request) const;

        /**
         * A Callable wrapper for CreateHsm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHsmRequestT = Model::CreateHsmRequest>
        Model::CreateHsmOutcomeCallable CreateHsmCallable(const CreateHsmRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::CreateHsm, request);
        }

        /**
         * An Async wrapper for CreateHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHsmRequestT = Model::CreateHsmRequest>
        void CreateHsmAsync(const CreateHsmRequestT& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::CreateHsm, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Creates an HSM client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLunaClientOutcome CreateLunaClient(const Model::CreateLunaClientRequest& request) const;

        /**
         * A Callable wrapper for CreateLunaClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLunaClientRequestT = Model::CreateLunaClientRequest>
        Model::CreateLunaClientOutcomeCallable CreateLunaClientCallable(const CreateLunaClientRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::CreateLunaClient, request);
        }

        /**
         * An Async wrapper for CreateLunaClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLunaClientRequestT = Model::CreateLunaClientRequest>
        void CreateLunaClientAsync(const CreateLunaClientRequestT& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::CreateLunaClient, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Deletes a high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHapgOutcome DeleteHapg(const Model::DeleteHapgRequest& request) const;

        /**
         * A Callable wrapper for DeleteHapg that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHapgRequestT = Model::DeleteHapgRequest>
        Model::DeleteHapgOutcomeCallable DeleteHapgCallable(const DeleteHapgRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::DeleteHapg, request);
        }

        /**
         * An Async wrapper for DeleteHapg that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHapgRequestT = Model::DeleteHapgRequest>
        void DeleteHapgAsync(const DeleteHapgRequestT& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::DeleteHapg, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Deletes an HSM. After completion, this operation
         * cannot be undone and your key material cannot be recovered.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHsmOutcome DeleteHsm(const Model::DeleteHsmRequest& request) const;

        /**
         * A Callable wrapper for DeleteHsm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHsmRequestT = Model::DeleteHsmRequest>
        Model::DeleteHsmOutcomeCallable DeleteHsmCallable(const DeleteHsmRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::DeleteHsm, request);
        }

        /**
         * An Async wrapper for DeleteHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHsmRequestT = Model::DeleteHsmRequest>
        void DeleteHsmAsync(const DeleteHsmRequestT& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::DeleteHsm, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Deletes a client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLunaClientOutcome DeleteLunaClient(const Model::DeleteLunaClientRequest& request) const;

        /**
         * A Callable wrapper for DeleteLunaClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLunaClientRequestT = Model::DeleteLunaClientRequest>
        Model::DeleteLunaClientOutcomeCallable DeleteLunaClientCallable(const DeleteLunaClientRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::DeleteLunaClient, request);
        }

        /**
         * An Async wrapper for DeleteLunaClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLunaClientRequestT = Model::DeleteLunaClientRequest>
        void DeleteLunaClientAsync(const DeleteLunaClientRequestT& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::DeleteLunaClient, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Retrieves information about a high-availability
         * partition group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHapgOutcome DescribeHapg(const Model::DescribeHapgRequest& request) const;

        /**
         * A Callable wrapper for DescribeHapg that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHapgRequestT = Model::DescribeHapgRequest>
        Model::DescribeHapgOutcomeCallable DescribeHapgCallable(const DescribeHapgRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::DescribeHapg, request);
        }

        /**
         * An Async wrapper for DescribeHapg that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHapgRequestT = Model::DescribeHapgRequest>
        void DescribeHapgAsync(const DescribeHapgRequestT& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::DescribeHapg, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Retrieves information about an HSM. You can identify
         * the HSM by its ARN or its serial number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHsmOutcome DescribeHsm(const Model::DescribeHsmRequest& request) const;

        /**
         * A Callable wrapper for DescribeHsm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHsmRequestT = Model::DescribeHsmRequest>
        Model::DescribeHsmOutcomeCallable DescribeHsmCallable(const DescribeHsmRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::DescribeHsm, request);
        }

        /**
         * An Async wrapper for DescribeHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHsmRequestT = Model::DescribeHsmRequest>
        void DescribeHsmAsync(const DescribeHsmRequestT& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::DescribeHsm, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Retrieves information about an HSM
         * client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLunaClientOutcome DescribeLunaClient(const Model::DescribeLunaClientRequest& request) const;

        /**
         * A Callable wrapper for DescribeLunaClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLunaClientRequestT = Model::DescribeLunaClientRequest>
        Model::DescribeLunaClientOutcomeCallable DescribeLunaClientCallable(const DescribeLunaClientRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::DescribeLunaClient, request);
        }

        /**
         * An Async wrapper for DescribeLunaClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLunaClientRequestT = Model::DescribeLunaClientRequest>
        void DescribeLunaClientAsync(const DescribeLunaClientRequestT& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::DescribeLunaClient, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Gets the configuration files necessary to connect to
         * all high availability partition groups the client is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/GetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigOutcome GetConfig(const Model::GetConfigRequest& request) const;

        /**
         * A Callable wrapper for GetConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigRequestT = Model::GetConfigRequest>
        Model::GetConfigOutcomeCallable GetConfigCallable(const GetConfigRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::GetConfig, request);
        }

        /**
         * An Async wrapper for GetConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigRequestT = Model::GetConfigRequest>
        void GetConfigAsync(const GetConfigRequestT& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::GetConfig, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Lists the Availability Zones that have available AWS
         * CloudHSM capacity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListAvailableZones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableZonesOutcome ListAvailableZones(const Model::ListAvailableZonesRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableZones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableZonesRequestT = Model::ListAvailableZonesRequest>
        Model::ListAvailableZonesOutcomeCallable ListAvailableZonesCallable(const ListAvailableZonesRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ListAvailableZones, request);
        }

        /**
         * An Async wrapper for ListAvailableZones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableZonesRequestT = Model::ListAvailableZonesRequest>
        void ListAvailableZonesAsync(const ListAvailableZonesRequestT& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ListAvailableZones, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Lists the high-availability partition groups for the
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHapgs</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHapgs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHapgsOutcome ListHapgs(const Model::ListHapgsRequest& request) const;

        /**
         * A Callable wrapper for ListHapgs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHapgsRequestT = Model::ListHapgsRequest>
        Model::ListHapgsOutcomeCallable ListHapgsCallable(const ListHapgsRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ListHapgs, request);
        }

        /**
         * An Async wrapper for ListHapgs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHapgsRequestT = Model::ListHapgsRequest>
        void ListHapgsAsync(const ListHapgsRequestT& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ListHapgs, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Retrieves the identifiers of all of the HSMs
         * provisioned for the current customer.</p> <p>This operation supports pagination
         * with the use of the <code>NextToken</code> member. If more results are
         * available, the <code>NextToken</code> member of the response contains a token
         * that you pass in the next call to <code>ListHsms</code> to retrieve the next set
         * of items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHsms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHsmsOutcome ListHsms(const Model::ListHsmsRequest& request) const;

        /**
         * A Callable wrapper for ListHsms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHsmsRequestT = Model::ListHsmsRequest>
        Model::ListHsmsOutcomeCallable ListHsmsCallable(const ListHsmsRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ListHsms, request);
        }

        /**
         * An Async wrapper for ListHsms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHsmsRequestT = Model::ListHsmsRequest>
        void ListHsmsAsync(const ListHsmsRequestT& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ListHsms, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Lists all of the clients.</p> <p>This operation
         * supports pagination with the use of the <code>NextToken</code> member. If more
         * results are available, the <code>NextToken</code> member of the response
         * contains a token that you pass in the next call to <code>ListLunaClients</code>
         * to retrieve the next set of items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListLunaClients">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLunaClientsOutcome ListLunaClients(const Model::ListLunaClientsRequest& request) const;

        /**
         * A Callable wrapper for ListLunaClients that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLunaClientsRequestT = Model::ListLunaClientsRequest>
        Model::ListLunaClientsOutcomeCallable ListLunaClientsCallable(const ListLunaClientsRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ListLunaClients, request);
        }

        /**
         * An Async wrapper for ListLunaClients that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLunaClientsRequestT = Model::ListLunaClientsRequest>
        void ListLunaClientsAsync(const ListLunaClientsRequestT& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ListLunaClients, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Returns a list of all tags for the specified AWS
         * CloudHSM resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Modifies an existing high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyHapgOutcome ModifyHapg(const Model::ModifyHapgRequest& request) const;

        /**
         * A Callable wrapper for ModifyHapg that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyHapgRequestT = Model::ModifyHapgRequest>
        Model::ModifyHapgOutcomeCallable ModifyHapgCallable(const ModifyHapgRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ModifyHapg, request);
        }

        /**
         * An Async wrapper for ModifyHapg that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyHapgRequestT = Model::ModifyHapgRequest>
        void ModifyHapgAsync(const ModifyHapgRequestT& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ModifyHapg, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Modifies an HSM.</p>  <p>This operation can
         * result in the HSM being offline for up to 15 minutes while the AWS CloudHSM
         * service is reconfigured. If you are modifying a production HSM, you should
         * ensure that your AWS CloudHSM service is configured for high availability, and
         * consider executing this operation during a maintenance window.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyHsmOutcome ModifyHsm(const Model::ModifyHsmRequest& request) const;

        /**
         * A Callable wrapper for ModifyHsm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyHsmRequestT = Model::ModifyHsmRequest>
        Model::ModifyHsmOutcomeCallable ModifyHsmCallable(const ModifyHsmRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ModifyHsm, request);
        }

        /**
         * An Async wrapper for ModifyHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyHsmRequestT = Model::ModifyHsmRequest>
        void ModifyHsmAsync(const ModifyHsmRequestT& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ModifyHsm, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Modifies the certificate used by the client.</p>
         * <p>This action can potentially start a workflow to install the new certificate
         * on the client's HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLunaClientOutcome ModifyLunaClient(const Model::ModifyLunaClientRequest& request) const;

        /**
         * A Callable wrapper for ModifyLunaClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyLunaClientRequestT = Model::ModifyLunaClientRequest>
        Model::ModifyLunaClientOutcomeCallable ModifyLunaClientCallable(const ModifyLunaClientRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::ModifyLunaClient, request);
        }

        /**
         * An Async wrapper for ModifyLunaClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyLunaClientRequestT = Model::ModifyLunaClientRequest>
        void ModifyLunaClientAsync(const ModifyLunaClientRequestT& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::ModifyLunaClient, request, handler, context);
        }

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
         * API Reference</a>.</p> <p>Removes one or more tags from the specified AWS
         * CloudHSM resource.</p> <p>To remove a tag, specify only the tag key to remove
         * (not the value). To overwrite the value for an existing tag, use
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&CloudHSMClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMClient::RemoveTagsFromResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudHSMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudHSMClient>;
      void init(const CloudHSMClientConfiguration& clientConfiguration);

      CloudHSMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudHSMEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudHSM
} // namespace Aws
