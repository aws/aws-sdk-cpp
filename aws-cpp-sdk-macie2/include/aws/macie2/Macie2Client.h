/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/macie2/Macie2ServiceClientModel.h>
#include <aws/macie2/Macie2LegacyAsyncMacros.h>

namespace Aws
{
namespace Macie2
{
  /**
   * <p>Amazon Macie is a fully managed data security and data privacy service that
   * uses machine learning and pattern matching to discover and protect your
   * sensitive data in AWS. Macie automates the discovery of sensitive data, such as
   * PII and intellectual property, to provide you with insight into the data that
   * your organization stores in AWS. Macie also provides an inventory of your Amazon
   * S3 buckets, which it continually monitors for you. If Macie detects sensitive
   * data or potential data access issues, it generates detailed findings for you to
   * review and act upon as necessary.</p>
   */
  class AWS_MACIE2_API Macie2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration(),
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Macie2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Macie2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Macie2Client();


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
         * <p>Accepts an Amazon Macie membership invitation that was received from a
         * specific account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;


        /**
         * <p>Retrieves information about one or more custom data
         * identifiers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BatchGetCustomDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCustomDataIdentifiersOutcome BatchGetCustomDataIdentifiers(const Model::BatchGetCustomDataIdentifiersRequest& request) const;


        /**
         * <p>Creates and defines the settings for an allow list.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAllowListOutcome CreateAllowList(const Model::CreateAllowListRequest& request) const;


        /**
         * <p>Creates and defines the settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClassificationJobOutcome CreateClassificationJob(const Model::CreateClassificationJobRequest& request) const;


        /**
         * <p>Creates and defines the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomDataIdentifierOutcome CreateCustomDataIdentifier(const Model::CreateCustomDataIdentifierRequest& request) const;


        /**
         * <p>Creates and defines the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingsFilterOutcome CreateFindingsFilter(const Model::CreateFindingsFilterRequest& request) const;


        /**
         * <p>Sends an Amazon Macie membership invitation to one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvitationsOutcome CreateInvitations(const Model::CreateInvitationsRequest& request) const;


        /**
         * <p>Associates an account with an Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;


        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;


        /**
         * <p>Declines Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;


        /**
         * <p>Deletes an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAllowListOutcome DeleteAllowList(const Model::DeleteAllowListRequest& request) const;


        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDataIdentifierOutcome DeleteCustomDataIdentifier(const Model::DeleteCustomDataIdentifierRequest& request) const;


        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingsFilterOutcome DeleteFindingsFilter(const Model::DeleteFindingsFilterRequest& request) const;


        /**
         * <p>Deletes Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;


        /**
         * <p>Deletes the association between an Amazon Macie administrator account and an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMemberOutcome DeleteMember(const Model::DeleteMemberRequest& request) const;


        /**
         * <p>Retrieves (queries) statistical data and other information about one or more
         * S3 buckets that Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBucketsOutcome DescribeBuckets(const Model::DescribeBucketsRequest& request) const;


        /**
         * <p>Retrieves the status and settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClassificationJobOutcome DescribeClassificationJob(const Model::DescribeClassificationJobRequest& request) const;


        /**
         * <p>Retrieves the Amazon Macie configuration settings for an organization in
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;


        /**
         * <p>Disables Amazon Macie and deletes all settings and resources for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMacieOutcome DisableMacie(const Model::DisableMacieRequest& request) const;


        /**
         * <p>Disables an account as the delegated Amazon Macie administrator account for
         * an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;


        /**
         * <p>Disassociates a member account from its Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;


        /**
         * <p>(Deprecated) Disassociates a member account from its Amazon Macie
         * administrator account. This operation has been replaced by the <link 
         * linkend="DisassociateFromAdministratorAccount">DisassociateFromAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;


        /**
         * <p>Disassociates an Amazon Macie administrator account from a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberOutcome DisassociateMember(const Model::DisassociateMemberRequest& request) const;


        /**
         * <p>Enables Amazon Macie and specifies the configuration settings for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMacieOutcome EnableMacie(const Model::EnableMacieRequest& request) const;


        /**
         * <p>Designates an account as the delegated Amazon Macie administrator account for
         * an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;


        /**
         * <p>Retrieves information about the Amazon Macie administrator account for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;


        /**
         * <p>Retrieves the settings and status of an allow list.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAllowListOutcome GetAllowList(const Model::GetAllowListRequest& request) const;


        /**
         * <p>Retrieves (queries) aggregated statistical data about S3 buckets that Amazon
         * Macie monitors and analyzes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetBucketStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketStatisticsOutcome GetBucketStatistics(const Model::GetBucketStatisticsRequest& request) const;


        /**
         * <p>Retrieves the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetClassificationExportConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassificationExportConfigurationOutcome GetClassificationExportConfiguration(const Model::GetClassificationExportConfigurationRequest& request) const;


        /**
         * <p>Retrieves the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomDataIdentifierOutcome GetCustomDataIdentifier(const Model::GetCustomDataIdentifierRequest& request) const;


        /**
         * <p>Retrieves (queries) aggregated statistical data about findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingStatisticsOutcome GetFindingStatistics(const Model::GetFindingStatisticsRequest& request) const;


        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;


        /**
         * <p>Retrieves the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsFilterOutcome GetFindingsFilter(const Model::GetFindingsFilterRequest& request) const;


        /**
         * <p>Retrieves the configuration settings for publishing findings to Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsPublicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsPublicationConfigurationOutcome GetFindingsPublicationConfiguration(const Model::GetFindingsPublicationConfigurationRequest& request) const;


        /**
         * <p>Retrieves the count of Amazon Macie membership invitations that were received
         * by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;


        /**
         * <p>Retrieves the current status and configuration settings for an Amazon Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMacieSessionOutcome GetMacieSession(const Model::GetMacieSessionRequest& request) const;


        /**
         * <p>(Deprecated) Retrieves information about the Amazon Macie administrator
         * account for an account. This operation has been replaced by the <link 
         * linkend="GetAdministratorAccount">GetAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;


        /**
         * <p>Retrieves information about an account that's associated with an Amazon Macie
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;


        /**
         * <p>Retrieves the status and configuration settings for retrieving occurrences of
         * sensitive data reported by findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetRevealConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevealConfigurationOutcome GetRevealConfiguration(const Model::GetRevealConfigurationRequest& request) const;


        /**
         * <p>Retrieves occurrences of sensitive data reported by a finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitiveDataOccurrences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitiveDataOccurrencesOutcome GetSensitiveDataOccurrences(const Model::GetSensitiveDataOccurrencesRequest& request) const;


        /**
         * <p>Checks whether occurrences of sensitive data can be retrieved for a
         * finding.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitiveDataOccurrencesAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitiveDataOccurrencesAvailabilityOutcome GetSensitiveDataOccurrencesAvailability(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request) const;


        /**
         * <p>Retrieves (queries) quotas and aggregated usage data for one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageStatisticsOutcome GetUsageStatistics(const Model::GetUsageStatisticsRequest& request) const;


        /**
         * <p>Retrieves (queries) aggregated usage data for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageTotals">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageTotalsOutcome GetUsageTotals(const Model::GetUsageTotalsRequest& request) const;


        /**
         * <p>Retrieves a subset of information about all the allow lists for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListAllowLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowListsOutcome ListAllowLists(const Model::ListAllowListsRequest& request) const;


        /**
         * <p>Retrieves a subset of information about one or more classification
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClassificationJobsOutcome ListClassificationJobs(const Model::ListClassificationJobsRequest& request) const;


        /**
         * <p>Retrieves a subset of information about all the custom data identifiers for
         * an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListCustomDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomDataIdentifiersOutcome ListCustomDataIdentifiers(const Model::ListCustomDataIdentifiersRequest& request) const;


        /**
         * <p>Retrieves a subset of information about one or more findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;


        /**
         * <p>Retrieves a subset of information about all the findings filters for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindingsFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsFiltersOutcome ListFindingsFilters(const Model::ListFindingsFiltersRequest& request) const;


        /**
         * <p>Retrieves information about the Amazon Macie membership invitations that were
         * received by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;


        /**
         * <p>Retrieves information about all the managed data identifiers that Amazon
         * Macie currently provides.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListManagedDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedDataIdentifiersOutcome ListManagedDataIdentifiers(const Model::ListManagedDataIdentifiersRequest& request) const;


        /**
         * <p>Retrieves information about the accounts that are associated with an Amazon
         * Macie administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;


        /**
         * <p>Retrieves information about the delegated Amazon Macie administrator account
         * for an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;


        /**
         * <p>Retrieves the tags (keys and values) that are associated with an Amazon Macie
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Creates or updates the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutClassificationExportConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutClassificationExportConfigurationOutcome PutClassificationExportConfiguration(const Model::PutClassificationExportConfigurationRequest& request) const;


        /**
         * <p>Updates the configuration settings for publishing findings to Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutFindingsPublicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFindingsPublicationConfigurationOutcome PutFindingsPublicationConfiguration(const Model::PutFindingsPublicationConfigurationRequest& request) const;


        /**
         * <p>Retrieves (queries) statistical data and other information about Amazon Web
         * Services resources that Amazon Macie monitors and analyzes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;


        /**
         * <p>Adds or updates one or more tags (keys and values) that are associated with
         * an Amazon Macie resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::TestCustomDataIdentifierOutcome TestCustomDataIdentifier(const Model::TestCustomDataIdentifierRequest& request) const;


        /**
         * <p>Removes one or more tags (keys and values) from an Amazon Macie
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the settings for an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAllowListOutcome UpdateAllowList(const Model::UpdateAllowListRequest& request) const;


        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassificationJobOutcome UpdateClassificationJob(const Model::UpdateClassificationJobRequest& request) const;


        /**
         * <p>Updates the criteria and other settings for a findings filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFilterOutcome UpdateFindingsFilter(const Model::UpdateFindingsFilterRequest& request) const;


        /**
         * <p>Suspends or re-enables Amazon Macie, or updates the configuration settings
         * for a Macie account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMacieSessionOutcome UpdateMacieSession(const Model::UpdateMacieSessionRequest& request) const;


        /**
         * <p>Enables an Amazon Macie administrator to suspend or re-enable Macie for a
         * member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMemberSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberSessionOutcome UpdateMemberSession(const Model::UpdateMemberSessionRequest& request) const;


        /**
         * <p>Updates the Amazon Macie configuration settings for an organization in
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;


        /**
         * <p>Updates the status and configuration settings for retrieving occurrences of
         * sensitive data reported by findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateRevealConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRevealConfigurationOutcome UpdateRevealConfiguration(const Model::UpdateRevealConfigurationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Macie2EndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Macie2ClientConfiguration& clientConfiguration);

      Macie2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Macie2EndpointProviderBase> m_endpointProvider;
  };

} // namespace Macie2
} // namespace Aws
