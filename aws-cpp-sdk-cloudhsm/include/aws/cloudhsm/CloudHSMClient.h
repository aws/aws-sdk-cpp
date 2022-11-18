/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsm/CloudHSMServiceClientModel.h>
#include <aws/cloudhsm/CloudHSMLegacyAsyncMacros.h>

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
  class AWS_CLOUDHSM_API CloudHSMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudHSMEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CloudHSMClientConfiguration& clientConfiguration);

      CloudHSMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudHSMEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudHSM
} // namespace Aws
