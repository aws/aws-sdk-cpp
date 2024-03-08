/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/Inspector2ServiceClientModel.h>

namespace Aws
{
namespace Inspector2
{
  /**
   * <p>Amazon Inspector is a vulnerability discovery service that automates
   * continuous scanning for security vulnerabilities within your Amazon EC2, Amazon
   * ECR, and Amazon Web Services Lambda environments.</p>
   */
  class AWS_INSPECTOR2_API Inspector2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Inspector2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef Inspector2ClientConfiguration ClientConfigurationType;
      typedef Inspector2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Inspector2::Inspector2ClientConfiguration& clientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration(),
                         std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider = nullptr,
                         const Aws::Inspector2::Inspector2ClientConfiguration& clientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Inspector2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider = nullptr,
                         const Aws::Inspector2::Inspector2ClientConfiguration& clientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Inspector2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Inspector2Client();

        /**
         * <p>Associates an Amazon Web Services account with an Amazon Inspector delegated
         * administrator. An HTTP 200 response indicates the association was successfully
         * started, but doesn’t indicate whether it was completed. You can check if the
         * association completed by using <a
         * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_ListMembers.html">ListMembers</a>
         * for multiple accounts or <a
         * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_GetMember.html">GetMembers</a>
         * for a single account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AssociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberOutcome AssociateMember(const Model::AssociateMemberRequest& request) const;

        /**
         * A Callable wrapper for AssociateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberRequestT = Model::AssociateMemberRequest>
        Model::AssociateMemberOutcomeCallable AssociateMemberCallable(const AssociateMemberRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::AssociateMember, request);
        }

        /**
         * An Async wrapper for AssociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberRequestT = Model::AssociateMemberRequest>
        void AssociateMemberAsync(const AssociateMemberRequestT& request, const AssociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::AssociateMember, request, handler, context);
        }

        /**
         * <p>Retrieves the Amazon Inspector status of multiple Amazon Web Services
         * accounts within your environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAccountStatusOutcome BatchGetAccountStatus(const Model::BatchGetAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetAccountStatusRequestT = Model::BatchGetAccountStatusRequest>
        Model::BatchGetAccountStatusOutcomeCallable BatchGetAccountStatusCallable(const BatchGetAccountStatusRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::BatchGetAccountStatus, request);
        }

        /**
         * An Async wrapper for BatchGetAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetAccountStatusRequestT = Model::BatchGetAccountStatusRequest>
        void BatchGetAccountStatusAsync(const BatchGetAccountStatusRequestT& request, const BatchGetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::BatchGetAccountStatus, request, handler, context);
        }

        /**
         * <p>Retrieves code snippets from findings that Amazon Inspector detected code
         * vulnerabilities in.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetCodeSnippet">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCodeSnippetOutcome BatchGetCodeSnippet(const Model::BatchGetCodeSnippetRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCodeSnippet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetCodeSnippetRequestT = Model::BatchGetCodeSnippetRequest>
        Model::BatchGetCodeSnippetOutcomeCallable BatchGetCodeSnippetCallable(const BatchGetCodeSnippetRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::BatchGetCodeSnippet, request);
        }

        /**
         * An Async wrapper for BatchGetCodeSnippet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCodeSnippetRequestT = Model::BatchGetCodeSnippetRequest>
        void BatchGetCodeSnippetAsync(const BatchGetCodeSnippetRequestT& request, const BatchGetCodeSnippetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::BatchGetCodeSnippet, request, handler, context);
        }

        /**
         * <p>Gets vulnerability details for findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetFindingDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFindingDetailsOutcome BatchGetFindingDetails(const Model::BatchGetFindingDetailsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetFindingDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetFindingDetailsRequestT = Model::BatchGetFindingDetailsRequest>
        Model::BatchGetFindingDetailsOutcomeCallable BatchGetFindingDetailsCallable(const BatchGetFindingDetailsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::BatchGetFindingDetails, request);
        }

        /**
         * An Async wrapper for BatchGetFindingDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetFindingDetailsRequestT = Model::BatchGetFindingDetailsRequest>
        void BatchGetFindingDetailsAsync(const BatchGetFindingDetailsRequestT& request, const BatchGetFindingDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::BatchGetFindingDetails, request, handler, context);
        }

        /**
         * <p>Gets free trial status for multiple Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetFreeTrialInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFreeTrialInfoOutcome BatchGetFreeTrialInfo(const Model::BatchGetFreeTrialInfoRequest& request) const;

        /**
         * A Callable wrapper for BatchGetFreeTrialInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetFreeTrialInfoRequestT = Model::BatchGetFreeTrialInfoRequest>
        Model::BatchGetFreeTrialInfoOutcomeCallable BatchGetFreeTrialInfoCallable(const BatchGetFreeTrialInfoRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::BatchGetFreeTrialInfo, request);
        }

        /**
         * An Async wrapper for BatchGetFreeTrialInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetFreeTrialInfoRequestT = Model::BatchGetFreeTrialInfoRequest>
        void BatchGetFreeTrialInfoAsync(const BatchGetFreeTrialInfoRequestT& request, const BatchGetFreeTrialInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::BatchGetFreeTrialInfo, request, handler, context);
        }

        /**
         * <p>Retrieves Amazon Inspector deep inspection activation status of multiple
         * member accounts within your organization. You must be the delegated
         * administrator of an organization in Amazon Inspector to use this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetMemberEc2DeepInspectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetMemberEc2DeepInspectionStatusOutcome BatchGetMemberEc2DeepInspectionStatus(const Model::BatchGetMemberEc2DeepInspectionStatusRequest& request) const;

        /**
         * A Callable wrapper for BatchGetMemberEc2DeepInspectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetMemberEc2DeepInspectionStatusRequestT = Model::BatchGetMemberEc2DeepInspectionStatusRequest>
        Model::BatchGetMemberEc2DeepInspectionStatusOutcomeCallable BatchGetMemberEc2DeepInspectionStatusCallable(const BatchGetMemberEc2DeepInspectionStatusRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::BatchGetMemberEc2DeepInspectionStatus, request);
        }

        /**
         * An Async wrapper for BatchGetMemberEc2DeepInspectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetMemberEc2DeepInspectionStatusRequestT = Model::BatchGetMemberEc2DeepInspectionStatusRequest>
        void BatchGetMemberEc2DeepInspectionStatusAsync(const BatchGetMemberEc2DeepInspectionStatusRequestT& request, const BatchGetMemberEc2DeepInspectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::BatchGetMemberEc2DeepInspectionStatus, request, handler, context);
        }

        /**
         * <p>Activates or deactivates Amazon Inspector deep inspection for the provided
         * member accounts in your organization. You must be the delegated administrator of
         * an organization in Amazon Inspector to use this API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchUpdateMemberEc2DeepInspectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateMemberEc2DeepInspectionStatusOutcome BatchUpdateMemberEc2DeepInspectionStatus(const Model::BatchUpdateMemberEc2DeepInspectionStatusRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateMemberEc2DeepInspectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateMemberEc2DeepInspectionStatusRequestT = Model::BatchUpdateMemberEc2DeepInspectionStatusRequest>
        Model::BatchUpdateMemberEc2DeepInspectionStatusOutcomeCallable BatchUpdateMemberEc2DeepInspectionStatusCallable(const BatchUpdateMemberEc2DeepInspectionStatusRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::BatchUpdateMemberEc2DeepInspectionStatus, request);
        }

        /**
         * An Async wrapper for BatchUpdateMemberEc2DeepInspectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateMemberEc2DeepInspectionStatusRequestT = Model::BatchUpdateMemberEc2DeepInspectionStatusRequest>
        void BatchUpdateMemberEc2DeepInspectionStatusAsync(const BatchUpdateMemberEc2DeepInspectionStatusRequestT& request, const BatchUpdateMemberEc2DeepInspectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::BatchUpdateMemberEc2DeepInspectionStatus, request, handler, context);
        }

        /**
         * <p>Cancels the given findings report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CancelFindingsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelFindingsReportOutcome CancelFindingsReport(const Model::CancelFindingsReportRequest& request) const;

        /**
         * A Callable wrapper for CancelFindingsReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelFindingsReportRequestT = Model::CancelFindingsReportRequest>
        Model::CancelFindingsReportOutcomeCallable CancelFindingsReportCallable(const CancelFindingsReportRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::CancelFindingsReport, request);
        }

        /**
         * An Async wrapper for CancelFindingsReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelFindingsReportRequestT = Model::CancelFindingsReportRequest>
        void CancelFindingsReportAsync(const CancelFindingsReportRequestT& request, const CancelFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::CancelFindingsReport, request, handler, context);
        }

        /**
         * <p>Cancels a software bill of materials (SBOM) report.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CancelSbomExport">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSbomExportOutcome CancelSbomExport(const Model::CancelSbomExportRequest& request) const;

        /**
         * A Callable wrapper for CancelSbomExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSbomExportRequestT = Model::CancelSbomExportRequest>
        Model::CancelSbomExportOutcomeCallable CancelSbomExportCallable(const CancelSbomExportRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::CancelSbomExport, request);
        }

        /**
         * An Async wrapper for CancelSbomExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSbomExportRequestT = Model::CancelSbomExportRequest>
        void CancelSbomExportAsync(const CancelSbomExportRequestT& request, const CancelSbomExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::CancelSbomExport, request, handler, context);
        }

        /**
         * <p>Creates a CIS scan configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateCisScanConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCisScanConfigurationOutcome CreateCisScanConfiguration(const Model::CreateCisScanConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateCisScanConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCisScanConfigurationRequestT = Model::CreateCisScanConfigurationRequest>
        Model::CreateCisScanConfigurationOutcomeCallable CreateCisScanConfigurationCallable(const CreateCisScanConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::CreateCisScanConfiguration, request);
        }

        /**
         * An Async wrapper for CreateCisScanConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCisScanConfigurationRequestT = Model::CreateCisScanConfigurationRequest>
        void CreateCisScanConfigurationAsync(const CreateCisScanConfigurationRequestT& request, const CreateCisScanConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::CreateCisScanConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a filter resource using specified filter criteria. When the filter
         * action is set to <code>SUPPRESS</code> this action creates a suppression
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFilterRequestT = Model::CreateFilterRequest>
        Model::CreateFilterOutcomeCallable CreateFilterCallable(const CreateFilterRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::CreateFilter, request);
        }

        /**
         * An Async wrapper for CreateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFilterRequestT = Model::CreateFilterRequest>
        void CreateFilterAsync(const CreateFilterRequestT& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::CreateFilter, request, handler, context);
        }

        /**
         * <p>Creates a finding report. By default only <code>ACTIVE</code> findings are
         * returned in the report. To see <code>SUPRESSED</code> or <code>CLOSED</code>
         * findings you must specify a value for the <code>findingStatus</code> filter
         * criteria. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateFindingsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingsReportOutcome CreateFindingsReport(const Model::CreateFindingsReportRequest& request) const;

        /**
         * A Callable wrapper for CreateFindingsReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFindingsReportRequestT = Model::CreateFindingsReportRequest>
        Model::CreateFindingsReportOutcomeCallable CreateFindingsReportCallable(const CreateFindingsReportRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::CreateFindingsReport, request);
        }

        /**
         * An Async wrapper for CreateFindingsReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFindingsReportRequestT = Model::CreateFindingsReportRequest>
        void CreateFindingsReportAsync(const CreateFindingsReportRequestT& request, const CreateFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::CreateFindingsReport, request, handler, context);
        }

        /**
         * <p>Creates a software bill of materials (SBOM) report.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateSbomExport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSbomExportOutcome CreateSbomExport(const Model::CreateSbomExportRequest& request) const;

        /**
         * A Callable wrapper for CreateSbomExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSbomExportRequestT = Model::CreateSbomExportRequest>
        Model::CreateSbomExportOutcomeCallable CreateSbomExportCallable(const CreateSbomExportRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::CreateSbomExport, request);
        }

        /**
         * An Async wrapper for CreateSbomExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSbomExportRequestT = Model::CreateSbomExportRequest>
        void CreateSbomExportAsync(const CreateSbomExportRequestT& request, const CreateSbomExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::CreateSbomExport, request, handler, context);
        }

        /**
         * <p>Deletes a CIS scan configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DeleteCisScanConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCisScanConfigurationOutcome DeleteCisScanConfiguration(const Model::DeleteCisScanConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCisScanConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCisScanConfigurationRequestT = Model::DeleteCisScanConfigurationRequest>
        Model::DeleteCisScanConfigurationOutcomeCallable DeleteCisScanConfigurationCallable(const DeleteCisScanConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::DeleteCisScanConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteCisScanConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCisScanConfigurationRequestT = Model::DeleteCisScanConfigurationRequest>
        void DeleteCisScanConfigurationAsync(const DeleteCisScanConfigurationRequestT& request, const DeleteCisScanConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::DeleteCisScanConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a filter resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFilterRequestT = Model::DeleteFilterRequest>
        Model::DeleteFilterOutcomeCallable DeleteFilterCallable(const DeleteFilterRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::DeleteFilter, request);
        }

        /**
         * An Async wrapper for DeleteFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFilterRequestT = Model::DeleteFilterRequest>
        void DeleteFilterAsync(const DeleteFilterRequestT& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::DeleteFilter, request, handler, context);
        }

        /**
         * <p>Describe Amazon Inspector configuration settings for an Amazon Web Services
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::DescribeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        void DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequestT& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::DescribeOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Disables Amazon Inspector scans for one or more Amazon Web Services accounts.
         * Disabling all scan types in an account disables the Amazon Inspector
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Disable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOutcome Disable(const Model::DisableRequest& request) const;

        /**
         * A Callable wrapper for Disable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableRequestT = Model::DisableRequest>
        Model::DisableOutcomeCallable DisableCallable(const DisableRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::Disable, request);
        }

        /**
         * An Async wrapper for Disable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableRequestT = Model::DisableRequest>
        void DisableAsync(const DisableRequestT& request, const DisableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::Disable, request, handler, context);
        }

        /**
         * <p>Disables the Amazon Inspector delegated administrator for your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisableDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDelegatedAdminAccountOutcome DisableDelegatedAdminAccount(const Model::DisableDelegatedAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableDelegatedAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableDelegatedAdminAccountRequestT = Model::DisableDelegatedAdminAccountRequest>
        Model::DisableDelegatedAdminAccountOutcomeCallable DisableDelegatedAdminAccountCallable(const DisableDelegatedAdminAccountRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::DisableDelegatedAdminAccount, request);
        }

        /**
         * An Async wrapper for DisableDelegatedAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableDelegatedAdminAccountRequestT = Model::DisableDelegatedAdminAccountRequest>
        void DisableDelegatedAdminAccountAsync(const DisableDelegatedAdminAccountRequestT& request, const DisableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::DisableDelegatedAdminAccount, request, handler, context);
        }

        /**
         * <p>Disassociates a member account from an Amazon Inspector delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisassociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberOutcome DisassociateMember(const Model::DisassociateMemberRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberRequestT = Model::DisassociateMemberRequest>
        Model::DisassociateMemberOutcomeCallable DisassociateMemberCallable(const DisassociateMemberRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::DisassociateMember, request);
        }

        /**
         * An Async wrapper for DisassociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberRequestT = Model::DisassociateMemberRequest>
        void DisassociateMemberAsync(const DisassociateMemberRequestT& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::DisassociateMember, request, handler, context);
        }

        /**
         * <p>Enables Amazon Inspector scans for one or more Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Enable">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOutcome Enable(const Model::EnableRequest& request) const;

        /**
         * A Callable wrapper for Enable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableRequestT = Model::EnableRequest>
        Model::EnableOutcomeCallable EnableCallable(const EnableRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::Enable, request);
        }

        /**
         * An Async wrapper for Enable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableRequestT = Model::EnableRequest>
        void EnableAsync(const EnableRequestT& request, const EnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::Enable, request, handler, context);
        }

        /**
         * <p>Enables the Amazon Inspector delegated administrator for your Organizations
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EnableDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDelegatedAdminAccountOutcome EnableDelegatedAdminAccount(const Model::EnableDelegatedAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableDelegatedAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableDelegatedAdminAccountRequestT = Model::EnableDelegatedAdminAccountRequest>
        Model::EnableDelegatedAdminAccountOutcomeCallable EnableDelegatedAdminAccountCallable(const EnableDelegatedAdminAccountRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::EnableDelegatedAdminAccount, request);
        }

        /**
         * An Async wrapper for EnableDelegatedAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableDelegatedAdminAccountRequestT = Model::EnableDelegatedAdminAccountRequest>
        void EnableDelegatedAdminAccountAsync(const EnableDelegatedAdminAccountRequestT& request, const EnableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::EnableDelegatedAdminAccount, request, handler, context);
        }

        /**
         * <p>Retrieves a CIS scan report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetCisScanReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCisScanReportOutcome GetCisScanReport(const Model::GetCisScanReportRequest& request) const;

        /**
         * A Callable wrapper for GetCisScanReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCisScanReportRequestT = Model::GetCisScanReportRequest>
        Model::GetCisScanReportOutcomeCallable GetCisScanReportCallable(const GetCisScanReportRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetCisScanReport, request);
        }

        /**
         * An Async wrapper for GetCisScanReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCisScanReportRequestT = Model::GetCisScanReportRequest>
        void GetCisScanReportAsync(const GetCisScanReportRequestT& request, const GetCisScanReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetCisScanReport, request, handler, context);
        }

        /**
         * <p>Retrieves CIS scan result details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetCisScanResultDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCisScanResultDetailsOutcome GetCisScanResultDetails(const Model::GetCisScanResultDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetCisScanResultDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCisScanResultDetailsRequestT = Model::GetCisScanResultDetailsRequest>
        Model::GetCisScanResultDetailsOutcomeCallable GetCisScanResultDetailsCallable(const GetCisScanResultDetailsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetCisScanResultDetails, request);
        }

        /**
         * An Async wrapper for GetCisScanResultDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCisScanResultDetailsRequestT = Model::GetCisScanResultDetailsRequest>
        void GetCisScanResultDetailsAsync(const GetCisScanResultDetailsRequestT& request, const GetCisScanResultDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetCisScanResultDetails, request, handler, context);
        }

        /**
         * <p>Retrieves setting configurations for Inspector scans.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationOutcome GetConfiguration(const Model::GetConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationRequestT = Model::GetConfigurationRequest>
        Model::GetConfigurationOutcomeCallable GetConfigurationCallable(const GetConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetConfiguration, request);
        }

        /**
         * An Async wrapper for GetConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationRequestT = Model::GetConfigurationRequest>
        void GetConfigurationAsync(const GetConfigurationRequestT& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves information about the Amazon Inspector delegated administrator for
         * your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDelegatedAdminAccountOutcome GetDelegatedAdminAccount(const Model::GetDelegatedAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for GetDelegatedAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDelegatedAdminAccountRequestT = Model::GetDelegatedAdminAccountRequest>
        Model::GetDelegatedAdminAccountOutcomeCallable GetDelegatedAdminAccountCallable(const GetDelegatedAdminAccountRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetDelegatedAdminAccount, request);
        }

        /**
         * An Async wrapper for GetDelegatedAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDelegatedAdminAccountRequestT = Model::GetDelegatedAdminAccountRequest>
        void GetDelegatedAdminAccountAsync(const GetDelegatedAdminAccountRequestT& request, const GetDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetDelegatedAdminAccount, request, handler, context);
        }

        /**
         * <p>Retrieves the activation status of Amazon Inspector deep inspection and
         * custom paths associated with your account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetEc2DeepInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEc2DeepInspectionConfigurationOutcome GetEc2DeepInspectionConfiguration(const Model::GetEc2DeepInspectionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetEc2DeepInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEc2DeepInspectionConfigurationRequestT = Model::GetEc2DeepInspectionConfigurationRequest>
        Model::GetEc2DeepInspectionConfigurationOutcomeCallable GetEc2DeepInspectionConfigurationCallable(const GetEc2DeepInspectionConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetEc2DeepInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for GetEc2DeepInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEc2DeepInspectionConfigurationRequestT = Model::GetEc2DeepInspectionConfigurationRequest>
        void GetEc2DeepInspectionConfigurationAsync(const GetEc2DeepInspectionConfigurationRequestT& request, const GetEc2DeepInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetEc2DeepInspectionConfiguration, request, handler, context);
        }

        /**
         * <p>Gets an encryption key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEncryptionKeyOutcome GetEncryptionKey(const Model::GetEncryptionKeyRequest& request) const;

        /**
         * A Callable wrapper for GetEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEncryptionKeyRequestT = Model::GetEncryptionKeyRequest>
        Model::GetEncryptionKeyOutcomeCallable GetEncryptionKeyCallable(const GetEncryptionKeyRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetEncryptionKey, request);
        }

        /**
         * An Async wrapper for GetEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEncryptionKeyRequestT = Model::GetEncryptionKeyRequest>
        void GetEncryptionKeyAsync(const GetEncryptionKeyRequestT& request, const GetEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetEncryptionKey, request, handler, context);
        }

        /**
         * <p>Gets the status of a findings report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetFindingsReportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsReportStatusOutcome GetFindingsReportStatus(const Model::GetFindingsReportStatusRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsReportStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingsReportStatusRequestT = Model::GetFindingsReportStatusRequest>
        Model::GetFindingsReportStatusOutcomeCallable GetFindingsReportStatusCallable(const GetFindingsReportStatusRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetFindingsReportStatus, request);
        }

        /**
         * An Async wrapper for GetFindingsReportStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsReportStatusRequestT = Model::GetFindingsReportStatusRequest>
        void GetFindingsReportStatusAsync(const GetFindingsReportStatusRequestT& request, const GetFindingsReportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetFindingsReportStatus, request, handler, context);
        }

        /**
         * <p>Gets member information for your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * A Callable wrapper for GetMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMemberRequestT = Model::GetMemberRequest>
        Model::GetMemberOutcomeCallable GetMemberCallable(const GetMemberRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetMember, request);
        }

        /**
         * An Async wrapper for GetMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMemberRequestT = Model::GetMemberRequest>
        void GetMemberAsync(const GetMemberRequestT& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetMember, request, handler, context);
        }

        /**
         * <p>Gets details of a software bill of materials (SBOM) report.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetSbomExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSbomExportOutcome GetSbomExport(const Model::GetSbomExportRequest& request) const;

        /**
         * A Callable wrapper for GetSbomExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSbomExportRequestT = Model::GetSbomExportRequest>
        Model::GetSbomExportOutcomeCallable GetSbomExportCallable(const GetSbomExportRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::GetSbomExport, request);
        }

        /**
         * An Async wrapper for GetSbomExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSbomExportRequestT = Model::GetSbomExportRequest>
        void GetSbomExportAsync(const GetSbomExportRequestT& request, const GetSbomExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::GetSbomExport, request, handler, context);
        }

        /**
         * <p>Lists the permissions an account has to configure Amazon
         * Inspector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListAccountPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountPermissionsOutcome ListAccountPermissions(const Model::ListAccountPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountPermissionsRequestT = Model::ListAccountPermissionsRequest>
        Model::ListAccountPermissionsOutcomeCallable ListAccountPermissionsCallable(const ListAccountPermissionsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListAccountPermissions, request);
        }

        /**
         * An Async wrapper for ListAccountPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountPermissionsRequestT = Model::ListAccountPermissionsRequest>
        void ListAccountPermissionsAsync(const ListAccountPermissionsRequestT& request, const ListAccountPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListAccountPermissions, request, handler, context);
        }

        /**
         * <p>Lists CIS scan configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCisScanConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCisScanConfigurationsOutcome ListCisScanConfigurations(const Model::ListCisScanConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListCisScanConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCisScanConfigurationsRequestT = Model::ListCisScanConfigurationsRequest>
        Model::ListCisScanConfigurationsOutcomeCallable ListCisScanConfigurationsCallable(const ListCisScanConfigurationsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListCisScanConfigurations, request);
        }

        /**
         * An Async wrapper for ListCisScanConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCisScanConfigurationsRequestT = Model::ListCisScanConfigurationsRequest>
        void ListCisScanConfigurationsAsync(const ListCisScanConfigurationsRequestT& request, const ListCisScanConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListCisScanConfigurations, request, handler, context);
        }

        /**
         * <p>Lists scan results aggregated by checks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCisScanResultsAggregatedByChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCisScanResultsAggregatedByChecksOutcome ListCisScanResultsAggregatedByChecks(const Model::ListCisScanResultsAggregatedByChecksRequest& request) const;

        /**
         * A Callable wrapper for ListCisScanResultsAggregatedByChecks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCisScanResultsAggregatedByChecksRequestT = Model::ListCisScanResultsAggregatedByChecksRequest>
        Model::ListCisScanResultsAggregatedByChecksOutcomeCallable ListCisScanResultsAggregatedByChecksCallable(const ListCisScanResultsAggregatedByChecksRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListCisScanResultsAggregatedByChecks, request);
        }

        /**
         * An Async wrapper for ListCisScanResultsAggregatedByChecks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCisScanResultsAggregatedByChecksRequestT = Model::ListCisScanResultsAggregatedByChecksRequest>
        void ListCisScanResultsAggregatedByChecksAsync(const ListCisScanResultsAggregatedByChecksRequestT& request, const ListCisScanResultsAggregatedByChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListCisScanResultsAggregatedByChecks, request, handler, context);
        }

        /**
         * <p>Lists scan results aggregated by a target resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCisScanResultsAggregatedByTargetResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCisScanResultsAggregatedByTargetResourceOutcome ListCisScanResultsAggregatedByTargetResource(const Model::ListCisScanResultsAggregatedByTargetResourceRequest& request) const;

        /**
         * A Callable wrapper for ListCisScanResultsAggregatedByTargetResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCisScanResultsAggregatedByTargetResourceRequestT = Model::ListCisScanResultsAggregatedByTargetResourceRequest>
        Model::ListCisScanResultsAggregatedByTargetResourceOutcomeCallable ListCisScanResultsAggregatedByTargetResourceCallable(const ListCisScanResultsAggregatedByTargetResourceRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListCisScanResultsAggregatedByTargetResource, request);
        }

        /**
         * An Async wrapper for ListCisScanResultsAggregatedByTargetResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCisScanResultsAggregatedByTargetResourceRequestT = Model::ListCisScanResultsAggregatedByTargetResourceRequest>
        void ListCisScanResultsAggregatedByTargetResourceAsync(const ListCisScanResultsAggregatedByTargetResourceRequestT& request, const ListCisScanResultsAggregatedByTargetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListCisScanResultsAggregatedByTargetResource, request, handler, context);
        }

        /**
         * <p>Returns a CIS scan list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCisScans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCisScansOutcome ListCisScans(const Model::ListCisScansRequest& request) const;

        /**
         * A Callable wrapper for ListCisScans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCisScansRequestT = Model::ListCisScansRequest>
        Model::ListCisScansOutcomeCallable ListCisScansCallable(const ListCisScansRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListCisScans, request);
        }

        /**
         * An Async wrapper for ListCisScans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCisScansRequestT = Model::ListCisScansRequest>
        void ListCisScansAsync(const ListCisScansRequestT& request, const ListCisScansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListCisScans, request, handler, context);
        }

        /**
         * <p>Lists coverage details for you environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageOutcome ListCoverage(const Model::ListCoverageRequest& request) const;

        /**
         * A Callable wrapper for ListCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoverageRequestT = Model::ListCoverageRequest>
        Model::ListCoverageOutcomeCallable ListCoverageCallable(const ListCoverageRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListCoverage, request);
        }

        /**
         * An Async wrapper for ListCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoverageRequestT = Model::ListCoverageRequest>
        void ListCoverageAsync(const ListCoverageRequestT& request, const ListCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListCoverage, request, handler, context);
        }

        /**
         * <p>Lists Amazon Inspector coverage statistics for your
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCoverageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageStatisticsOutcome ListCoverageStatistics(const Model::ListCoverageStatisticsRequest& request) const;

        /**
         * A Callable wrapper for ListCoverageStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoverageStatisticsRequestT = Model::ListCoverageStatisticsRequest>
        Model::ListCoverageStatisticsOutcomeCallable ListCoverageStatisticsCallable(const ListCoverageStatisticsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListCoverageStatistics, request);
        }

        /**
         * An Async wrapper for ListCoverageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoverageStatisticsRequestT = Model::ListCoverageStatisticsRequest>
        void ListCoverageStatisticsAsync(const ListCoverageStatisticsRequestT& request, const ListCoverageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListCoverageStatistics, request, handler, context);
        }

        /**
         * <p>Lists information about the Amazon Inspector delegated administrator of your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListDelegatedAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedAdminAccountsOutcome ListDelegatedAdminAccounts(const Model::ListDelegatedAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListDelegatedAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDelegatedAdminAccountsRequestT = Model::ListDelegatedAdminAccountsRequest>
        Model::ListDelegatedAdminAccountsOutcomeCallable ListDelegatedAdminAccountsCallable(const ListDelegatedAdminAccountsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListDelegatedAdminAccounts, request);
        }

        /**
         * An Async wrapper for ListDelegatedAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDelegatedAdminAccountsRequestT = Model::ListDelegatedAdminAccountsRequest>
        void ListDelegatedAdminAccountsAsync(const ListDelegatedAdminAccountsRequestT& request, const ListDelegatedAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListDelegatedAdminAccounts, request, handler, context);
        }

        /**
         * <p>Lists the filters associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFiltersRequestT = Model::ListFiltersRequest>
        Model::ListFiltersOutcomeCallable ListFiltersCallable(const ListFiltersRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListFilters, request);
        }

        /**
         * An Async wrapper for ListFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFiltersRequestT = Model::ListFiltersRequest>
        void ListFiltersAsync(const ListFiltersRequestT& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListFilters, request, handler, context);
        }

        /**
         * <p>Lists aggregated finding data for your environment based on specific
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFindingAggregations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingAggregationsOutcome ListFindingAggregations(const Model::ListFindingAggregationsRequest& request) const;

        /**
         * A Callable wrapper for ListFindingAggregations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingAggregationsRequestT = Model::ListFindingAggregationsRequest>
        Model::ListFindingAggregationsOutcomeCallable ListFindingAggregationsCallable(const ListFindingAggregationsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListFindingAggregations, request);
        }

        /**
         * An Async wrapper for ListFindingAggregations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingAggregationsRequestT = Model::ListFindingAggregationsRequest>
        void ListFindingAggregationsAsync(const ListFindingAggregationsRequestT& request, const ListFindingAggregationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListFindingAggregations, request, handler, context);
        }

        /**
         * <p>Lists findings for your environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        Model::ListFindingsOutcomeCallable ListFindingsCallable(const ListFindingsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListFindings, request);
        }

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        void ListFindingsAsync(const ListFindingsRequestT& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListFindings, request, handler, context);
        }

        /**
         * <p>List members associated with the Amazon Inspector delegated administrator for
         * your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        Model::ListMembersOutcomeCallable ListMembersCallable(const ListMembersRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListMembers, request);
        }

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        void ListMembersAsync(const ListMembersRequestT& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListMembers, request, handler, context);
        }

        /**
         * <p>Lists all tags attached to a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Inspector usage totals over the last 30 days.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListUsageTotals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageTotalsOutcome ListUsageTotals(const Model::ListUsageTotalsRequest& request) const;

        /**
         * A Callable wrapper for ListUsageTotals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsageTotalsRequestT = Model::ListUsageTotalsRequest>
        Model::ListUsageTotalsOutcomeCallable ListUsageTotalsCallable(const ListUsageTotalsRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ListUsageTotals, request);
        }

        /**
         * An Async wrapper for ListUsageTotals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsageTotalsRequestT = Model::ListUsageTotalsRequest>
        void ListUsageTotalsAsync(const ListUsageTotalsRequestT& request, const ListUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ListUsageTotals, request, handler, context);
        }

        /**
         * <p>Resets an encryption key. After the key is reset your resources will be
         * encrypted by an Amazon Web Services owned key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResetEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetEncryptionKeyOutcome ResetEncryptionKey(const Model::ResetEncryptionKeyRequest& request) const;

        /**
         * A Callable wrapper for ResetEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetEncryptionKeyRequestT = Model::ResetEncryptionKeyRequest>
        Model::ResetEncryptionKeyOutcomeCallable ResetEncryptionKeyCallable(const ResetEncryptionKeyRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::ResetEncryptionKey, request);
        }

        /**
         * An Async wrapper for ResetEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetEncryptionKeyRequestT = Model::ResetEncryptionKeyRequest>
        void ResetEncryptionKeyAsync(const ResetEncryptionKeyRequestT& request, const ResetEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::ResetEncryptionKey, request, handler, context);
        }

        /**
         * <p>Lists Amazon Inspector coverage details for a specific
         * vulnerability.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/SearchVulnerabilities">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchVulnerabilitiesOutcome SearchVulnerabilities(const Model::SearchVulnerabilitiesRequest& request) const;

        /**
         * A Callable wrapper for SearchVulnerabilities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchVulnerabilitiesRequestT = Model::SearchVulnerabilitiesRequest>
        Model::SearchVulnerabilitiesOutcomeCallable SearchVulnerabilitiesCallable(const SearchVulnerabilitiesRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::SearchVulnerabilities, request);
        }

        /**
         * An Async wrapper for SearchVulnerabilities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchVulnerabilitiesRequestT = Model::SearchVulnerabilitiesRequest>
        void SearchVulnerabilitiesAsync(const SearchVulnerabilitiesRequestT& request, const SearchVulnerabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::SearchVulnerabilities, request, handler, context);
        }

        /**
         * <p> Sends a CIS session health. This API is used by the Amazon Inspector SSM
         * plugin to communicate with the Amazon Inspector service. The Amazon Inspector
         * SSM plugin calls this API to start a CIS scan session for the scan ID supplied
         * by the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/SendCisSessionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCisSessionHealthOutcome SendCisSessionHealth(const Model::SendCisSessionHealthRequest& request) const;

        /**
         * A Callable wrapper for SendCisSessionHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendCisSessionHealthRequestT = Model::SendCisSessionHealthRequest>
        Model::SendCisSessionHealthOutcomeCallable SendCisSessionHealthCallable(const SendCisSessionHealthRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::SendCisSessionHealth, request);
        }

        /**
         * An Async wrapper for SendCisSessionHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendCisSessionHealthRequestT = Model::SendCisSessionHealthRequest>
        void SendCisSessionHealthAsync(const SendCisSessionHealthRequestT& request, const SendCisSessionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::SendCisSessionHealth, request, handler, context);
        }

        /**
         * <p> Sends a CIS session telemetry. This API is used by the Amazon Inspector SSM
         * plugin to communicate with the Amazon Inspector service. The Amazon Inspector
         * SSM plugin calls this API to start a CIS scan session for the scan ID supplied
         * by the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/SendCisSessionTelemetry">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCisSessionTelemetryOutcome SendCisSessionTelemetry(const Model::SendCisSessionTelemetryRequest& request) const;

        /**
         * A Callable wrapper for SendCisSessionTelemetry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendCisSessionTelemetryRequestT = Model::SendCisSessionTelemetryRequest>
        Model::SendCisSessionTelemetryOutcomeCallable SendCisSessionTelemetryCallable(const SendCisSessionTelemetryRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::SendCisSessionTelemetry, request);
        }

        /**
         * An Async wrapper for SendCisSessionTelemetry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendCisSessionTelemetryRequestT = Model::SendCisSessionTelemetryRequest>
        void SendCisSessionTelemetryAsync(const SendCisSessionTelemetryRequestT& request, const SendCisSessionTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::SendCisSessionTelemetry, request, handler, context);
        }

        /**
         * <p> Starts a CIS session. This API is used by the Amazon Inspector SSM plugin to
         * communicate with the Amazon Inspector service. The Amazon Inspector SSM plugin
         * calls this API to start a CIS scan session for the scan ID supplied by the
         * service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StartCisSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCisSessionOutcome StartCisSession(const Model::StartCisSessionRequest& request) const;

        /**
         * A Callable wrapper for StartCisSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCisSessionRequestT = Model::StartCisSessionRequest>
        Model::StartCisSessionOutcomeCallable StartCisSessionCallable(const StartCisSessionRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::StartCisSession, request);
        }

        /**
         * An Async wrapper for StartCisSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCisSessionRequestT = Model::StartCisSessionRequest>
        void StartCisSessionAsync(const StartCisSessionRequestT& request, const StartCisSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::StartCisSession, request, handler, context);
        }

        /**
         * <p> Stops a CIS session. This API is used by the Amazon Inspector SSM plugin to
         * communicate with the Amazon Inspector service. The Amazon Inspector SSM plugin
         * calls this API to start a CIS scan session for the scan ID supplied by the
         * service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StopCisSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCisSessionOutcome StopCisSession(const Model::StopCisSessionRequest& request) const;

        /**
         * A Callable wrapper for StopCisSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopCisSessionRequestT = Model::StopCisSessionRequest>
        Model::StopCisSessionOutcomeCallable StopCisSessionCallable(const StopCisSessionRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::StopCisSession, request);
        }

        /**
         * An Async wrapper for StopCisSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCisSessionRequestT = Model::StopCisSessionRequest>
        void StopCisSessionAsync(const StopCisSessionRequestT& request, const StopCisSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::StopCisSession, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a CIS scan configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateCisScanConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCisScanConfigurationOutcome UpdateCisScanConfiguration(const Model::UpdateCisScanConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateCisScanConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCisScanConfigurationRequestT = Model::UpdateCisScanConfigurationRequest>
        Model::UpdateCisScanConfigurationOutcomeCallable UpdateCisScanConfigurationCallable(const UpdateCisScanConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateCisScanConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateCisScanConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCisScanConfigurationRequestT = Model::UpdateCisScanConfigurationRequest>
        void UpdateCisScanConfigurationAsync(const UpdateCisScanConfigurationRequestT& request, const UpdateCisScanConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateCisScanConfiguration, request, handler, context);
        }

        /**
         * <p>Updates setting configurations for your Amazon Inspector account. When you
         * use this API as an Amazon Inspector delegated administrator this updates the
         * setting for all accounts you manage. Member accounts in an organization cannot
         * update this setting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationRequestT = Model::UpdateConfigurationRequest>
        Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const UpdateConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationRequestT = Model::UpdateConfigurationRequest>
        void UpdateConfigurationAsync(const UpdateConfigurationRequestT& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateConfiguration, request, handler, context);
        }

        /**
         * <p>Activates, deactivates Amazon Inspector deep inspection, or updates custom
         * paths for your account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateEc2DeepInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEc2DeepInspectionConfigurationOutcome UpdateEc2DeepInspectionConfiguration(const Model::UpdateEc2DeepInspectionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateEc2DeepInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEc2DeepInspectionConfigurationRequestT = Model::UpdateEc2DeepInspectionConfigurationRequest>
        Model::UpdateEc2DeepInspectionConfigurationOutcomeCallable UpdateEc2DeepInspectionConfigurationCallable(const UpdateEc2DeepInspectionConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateEc2DeepInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateEc2DeepInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEc2DeepInspectionConfigurationRequestT = Model::UpdateEc2DeepInspectionConfigurationRequest>
        void UpdateEc2DeepInspectionConfigurationAsync(const UpdateEc2DeepInspectionConfigurationRequestT& request, const UpdateEc2DeepInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateEc2DeepInspectionConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an encryption key. A <code>ResourceNotFoundException</code> means
         * that an Amazon Web Services owned key is being used for
         * encryption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEncryptionKeyOutcome UpdateEncryptionKey(const Model::UpdateEncryptionKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEncryptionKeyRequestT = Model::UpdateEncryptionKeyRequest>
        Model::UpdateEncryptionKeyOutcomeCallable UpdateEncryptionKeyCallable(const UpdateEncryptionKeyRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateEncryptionKey, request);
        }

        /**
         * An Async wrapper for UpdateEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEncryptionKeyRequestT = Model::UpdateEncryptionKeyRequest>
        void UpdateEncryptionKeyAsync(const UpdateEncryptionKeyRequestT& request, const UpdateEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateEncryptionKey, request, handler, context);
        }

        /**
         * <p>Specifies the action that is to be applied to the findings that match the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFilterOutcome UpdateFilter(const Model::UpdateFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFilterRequestT = Model::UpdateFilterRequest>
        Model::UpdateFilterOutcomeCallable UpdateFilterCallable(const UpdateFilterRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateFilter, request);
        }

        /**
         * An Async wrapper for UpdateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFilterRequestT = Model::UpdateFilterRequest>
        void UpdateFilterAsync(const UpdateFilterRequestT& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateFilter, request, handler, context);
        }

        /**
         * <p>Updates the Amazon Inspector deep inspection custom paths for your
         * organization. You must be an Amazon Inspector delegated administrator to use
         * this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateOrgEc2DeepInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrgEc2DeepInspectionConfigurationOutcome UpdateOrgEc2DeepInspectionConfiguration(const Model::UpdateOrgEc2DeepInspectionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrgEc2DeepInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOrgEc2DeepInspectionConfigurationRequestT = Model::UpdateOrgEc2DeepInspectionConfigurationRequest>
        Model::UpdateOrgEc2DeepInspectionConfigurationOutcomeCallable UpdateOrgEc2DeepInspectionConfigurationCallable(const UpdateOrgEc2DeepInspectionConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateOrgEc2DeepInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateOrgEc2DeepInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrgEc2DeepInspectionConfigurationRequestT = Model::UpdateOrgEc2DeepInspectionConfigurationRequest>
        void UpdateOrgEc2DeepInspectionConfigurationAsync(const UpdateOrgEc2DeepInspectionConfigurationRequestT& request, const UpdateOrgEc2DeepInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateOrgEc2DeepInspectionConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the configurations for your Amazon Inspector
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&Inspector2Client::UpdateOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        void UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequestT& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Inspector2Client::UpdateOrganizationConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Inspector2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Inspector2Client>;
      void init(const Inspector2ClientConfiguration& clientConfiguration);

      Inspector2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Inspector2EndpointProviderBase> m_endpointProvider;
  };

} // namespace Inspector2
} // namespace Aws
