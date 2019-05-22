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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/worklink/model/AssociateDomainResult.h>
#include <aws/worklink/model/AssociateWebsiteAuthorizationProviderResult.h>
#include <aws/worklink/model/AssociateWebsiteCertificateAuthorityResult.h>
#include <aws/worklink/model/CreateFleetResult.h>
#include <aws/worklink/model/DeleteFleetResult.h>
#include <aws/worklink/model/DescribeAuditStreamConfigurationResult.h>
#include <aws/worklink/model/DescribeCompanyNetworkConfigurationResult.h>
#include <aws/worklink/model/DescribeDeviceResult.h>
#include <aws/worklink/model/DescribeDevicePolicyConfigurationResult.h>
#include <aws/worklink/model/DescribeDomainResult.h>
#include <aws/worklink/model/DescribeFleetMetadataResult.h>
#include <aws/worklink/model/DescribeIdentityProviderConfigurationResult.h>
#include <aws/worklink/model/DescribeWebsiteCertificateAuthorityResult.h>
#include <aws/worklink/model/DisassociateDomainResult.h>
#include <aws/worklink/model/DisassociateWebsiteAuthorizationProviderResult.h>
#include <aws/worklink/model/DisassociateWebsiteCertificateAuthorityResult.h>
#include <aws/worklink/model/ListDevicesResult.h>
#include <aws/worklink/model/ListDomainsResult.h>
#include <aws/worklink/model/ListFleetsResult.h>
#include <aws/worklink/model/ListWebsiteAuthorizationProvidersResult.h>
#include <aws/worklink/model/ListWebsiteCertificateAuthoritiesResult.h>
#include <aws/worklink/model/RestoreDomainAccessResult.h>
#include <aws/worklink/model/RevokeDomainAccessResult.h>
#include <aws/worklink/model/SignOutUserResult.h>
#include <aws/worklink/model/UpdateAuditStreamConfigurationResult.h>
#include <aws/worklink/model/UpdateCompanyNetworkConfigurationResult.h>
#include <aws/worklink/model/UpdateDevicePolicyConfigurationResult.h>
#include <aws/worklink/model/UpdateDomainMetadataResult.h>
#include <aws/worklink/model/UpdateFleetMetadataResult.h>
#include <aws/worklink/model/UpdateIdentityProviderConfigurationResult.h>
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

namespace WorkLink
{

namespace Model
{
        class AssociateDomainRequest;
        class AssociateWebsiteAuthorizationProviderRequest;
        class AssociateWebsiteCertificateAuthorityRequest;
        class CreateFleetRequest;
        class DeleteFleetRequest;
        class DescribeAuditStreamConfigurationRequest;
        class DescribeCompanyNetworkConfigurationRequest;
        class DescribeDeviceRequest;
        class DescribeDevicePolicyConfigurationRequest;
        class DescribeDomainRequest;
        class DescribeFleetMetadataRequest;
        class DescribeIdentityProviderConfigurationRequest;
        class DescribeWebsiteCertificateAuthorityRequest;
        class DisassociateDomainRequest;
        class DisassociateWebsiteAuthorizationProviderRequest;
        class DisassociateWebsiteCertificateAuthorityRequest;
        class ListDevicesRequest;
        class ListDomainsRequest;
        class ListFleetsRequest;
        class ListWebsiteAuthorizationProvidersRequest;
        class ListWebsiteCertificateAuthoritiesRequest;
        class RestoreDomainAccessRequest;
        class RevokeDomainAccessRequest;
        class SignOutUserRequest;
        class UpdateAuditStreamConfigurationRequest;
        class UpdateCompanyNetworkConfigurationRequest;
        class UpdateDevicePolicyConfigurationRequest;
        class UpdateDomainMetadataRequest;
        class UpdateFleetMetadataRequest;
        class UpdateIdentityProviderConfigurationRequest;

        typedef Aws::Utils::Outcome<AssociateDomainResult, Aws::Client::AWSError<WorkLinkErrors>> AssociateDomainOutcome;
        typedef Aws::Utils::Outcome<AssociateWebsiteAuthorizationProviderResult, Aws::Client::AWSError<WorkLinkErrors>> AssociateWebsiteAuthorizationProviderOutcome;
        typedef Aws::Utils::Outcome<AssociateWebsiteCertificateAuthorityResult, Aws::Client::AWSError<WorkLinkErrors>> AssociateWebsiteCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, Aws::Client::AWSError<WorkLinkErrors>> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<DeleteFleetResult, Aws::Client::AWSError<WorkLinkErrors>> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DescribeAuditStreamConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeAuditStreamConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeCompanyNetworkConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeCompanyNetworkConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeDeviceResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeDeviceOutcome;
        typedef Aws::Utils::Outcome<DescribeDevicePolicyConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeDevicePolicyConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetMetadataResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeFleetMetadataOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityProviderConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeIdentityProviderConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeWebsiteCertificateAuthorityResult, Aws::Client::AWSError<WorkLinkErrors>> DescribeWebsiteCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<DisassociateDomainResult, Aws::Client::AWSError<WorkLinkErrors>> DisassociateDomainOutcome;
        typedef Aws::Utils::Outcome<DisassociateWebsiteAuthorizationProviderResult, Aws::Client::AWSError<WorkLinkErrors>> DisassociateWebsiteAuthorizationProviderOutcome;
        typedef Aws::Utils::Outcome<DisassociateWebsiteCertificateAuthorityResult, Aws::Client::AWSError<WorkLinkErrors>> DisassociateWebsiteCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, Aws::Client::AWSError<WorkLinkErrors>> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, Aws::Client::AWSError<WorkLinkErrors>> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, Aws::Client::AWSError<WorkLinkErrors>> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<ListWebsiteAuthorizationProvidersResult, Aws::Client::AWSError<WorkLinkErrors>> ListWebsiteAuthorizationProvidersOutcome;
        typedef Aws::Utils::Outcome<ListWebsiteCertificateAuthoritiesResult, Aws::Client::AWSError<WorkLinkErrors>> ListWebsiteCertificateAuthoritiesOutcome;
        typedef Aws::Utils::Outcome<RestoreDomainAccessResult, Aws::Client::AWSError<WorkLinkErrors>> RestoreDomainAccessOutcome;
        typedef Aws::Utils::Outcome<RevokeDomainAccessResult, Aws::Client::AWSError<WorkLinkErrors>> RevokeDomainAccessOutcome;
        typedef Aws::Utils::Outcome<SignOutUserResult, Aws::Client::AWSError<WorkLinkErrors>> SignOutUserOutcome;
        typedef Aws::Utils::Outcome<UpdateAuditStreamConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> UpdateAuditStreamConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateCompanyNetworkConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> UpdateCompanyNetworkConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateDevicePolicyConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> UpdateDevicePolicyConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainMetadataResult, Aws::Client::AWSError<WorkLinkErrors>> UpdateDomainMetadataOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetMetadataResult, Aws::Client::AWSError<WorkLinkErrors>> UpdateFleetMetadataOutcome;
        typedef Aws::Utils::Outcome<UpdateIdentityProviderConfigurationResult, Aws::Client::AWSError<WorkLinkErrors>> UpdateIdentityProviderConfigurationOutcome;

        typedef std::future<AssociateDomainOutcome> AssociateDomainOutcomeCallable;
        typedef std::future<AssociateWebsiteAuthorizationProviderOutcome> AssociateWebsiteAuthorizationProviderOutcomeCallable;
        typedef std::future<AssociateWebsiteCertificateAuthorityOutcome> AssociateWebsiteCertificateAuthorityOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DescribeAuditStreamConfigurationOutcome> DescribeAuditStreamConfigurationOutcomeCallable;
        typedef std::future<DescribeCompanyNetworkConfigurationOutcome> DescribeCompanyNetworkConfigurationOutcomeCallable;
        typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
        typedef std::future<DescribeDevicePolicyConfigurationOutcome> DescribeDevicePolicyConfigurationOutcomeCallable;
        typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
        typedef std::future<DescribeFleetMetadataOutcome> DescribeFleetMetadataOutcomeCallable;
        typedef std::future<DescribeIdentityProviderConfigurationOutcome> DescribeIdentityProviderConfigurationOutcomeCallable;
        typedef std::future<DescribeWebsiteCertificateAuthorityOutcome> DescribeWebsiteCertificateAuthorityOutcomeCallable;
        typedef std::future<DisassociateDomainOutcome> DisassociateDomainOutcomeCallable;
        typedef std::future<DisassociateWebsiteAuthorizationProviderOutcome> DisassociateWebsiteAuthorizationProviderOutcomeCallable;
        typedef std::future<DisassociateWebsiteCertificateAuthorityOutcome> DisassociateWebsiteCertificateAuthorityOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<ListWebsiteAuthorizationProvidersOutcome> ListWebsiteAuthorizationProvidersOutcomeCallable;
        typedef std::future<ListWebsiteCertificateAuthoritiesOutcome> ListWebsiteCertificateAuthoritiesOutcomeCallable;
        typedef std::future<RestoreDomainAccessOutcome> RestoreDomainAccessOutcomeCallable;
        typedef std::future<RevokeDomainAccessOutcome> RevokeDomainAccessOutcomeCallable;
        typedef std::future<SignOutUserOutcome> SignOutUserOutcomeCallable;
        typedef std::future<UpdateAuditStreamConfigurationOutcome> UpdateAuditStreamConfigurationOutcomeCallable;
        typedef std::future<UpdateCompanyNetworkConfigurationOutcome> UpdateCompanyNetworkConfigurationOutcomeCallable;
        typedef std::future<UpdateDevicePolicyConfigurationOutcome> UpdateDevicePolicyConfigurationOutcomeCallable;
        typedef std::future<UpdateDomainMetadataOutcome> UpdateDomainMetadataOutcomeCallable;
        typedef std::future<UpdateFleetMetadataOutcome> UpdateFleetMetadataOutcomeCallable;
        typedef std::future<UpdateIdentityProviderConfigurationOutcome> UpdateIdentityProviderConfigurationOutcomeCallable;
} // namespace Model

  class WorkLinkClient;

    typedef std::function<void(const WorkLinkClient*, const Model::AssociateDomainRequest&, const Model::AssociateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDomainResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::AssociateWebsiteAuthorizationProviderRequest&, const Model::AssociateWebsiteAuthorizationProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWebsiteAuthorizationProviderResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::AssociateWebsiteCertificateAuthorityRequest&, const Model::AssociateWebsiteCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWebsiteCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeAuditStreamConfigurationRequest&, const Model::DescribeAuditStreamConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuditStreamConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeCompanyNetworkConfigurationRequest&, const Model::DescribeCompanyNetworkConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCompanyNetworkConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeDevicePolicyConfigurationRequest&, const Model::DescribeDevicePolicyConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDevicePolicyConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeFleetMetadataRequest&, const Model::DescribeFleetMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeIdentityProviderConfigurationRequest&, const Model::DescribeIdentityProviderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityProviderConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DescribeWebsiteCertificateAuthorityRequest&, const Model::DescribeWebsiteCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWebsiteCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DisassociateDomainRequest&, const Model::DisassociateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDomainResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DisassociateWebsiteAuthorizationProviderRequest&, const Model::DisassociateWebsiteAuthorizationProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWebsiteAuthorizationProviderResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::DisassociateWebsiteCertificateAuthorityRequest&, const Model::DisassociateWebsiteCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWebsiteCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::ListWebsiteAuthorizationProvidersRequest&, const Model::ListWebsiteAuthorizationProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebsiteAuthorizationProvidersResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::ListWebsiteCertificateAuthoritiesRequest&, const Model::ListWebsiteCertificateAuthoritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebsiteCertificateAuthoritiesResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::RestoreDomainAccessRequest&, const Model::RestoreDomainAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDomainAccessResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::RevokeDomainAccessRequest&, const Model::RevokeDomainAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeDomainAccessResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::SignOutUserRequest&, const Model::SignOutUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignOutUserResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::UpdateAuditStreamConfigurationRequest&, const Model::UpdateAuditStreamConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuditStreamConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::UpdateCompanyNetworkConfigurationRequest&, const Model::UpdateCompanyNetworkConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCompanyNetworkConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::UpdateDevicePolicyConfigurationRequest&, const Model::UpdateDevicePolicyConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevicePolicyConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::UpdateDomainMetadataRequest&, const Model::UpdateDomainMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::UpdateFleetMetadataRequest&, const Model::UpdateFleetMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkLinkClient*, const Model::UpdateIdentityProviderConfigurationRequest&, const Model::UpdateIdentityProviderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityProviderConfigurationResponseReceivedHandler;

  /**
   * <p>Amazon WorkLink is a cloud-based service that provides secure access to
   * internal websites and web apps from iOS phones. In a single step, your users,
   * such as employees, can access internal websites as efficiently as they access
   * any other public website. They enter a URL in their web browser, or choose a
   * link to an internal website in an email. Amazon WorkLink authenticates the
   * user's access and securely renders authorized internal web content in a secure
   * rendering service in the AWS cloud. Amazon WorkLink doesn't download or store
   * any internal web content on mobile devices.</p>
   */
  class AWS_WORKLINK_API WorkLinkClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkLinkClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkLinkClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkLinkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkLinkClient();

        inline virtual const char* GetServiceClientName() const override { return "WorkLink"; }


        /**
         * <p>Specifies a domain to be associated to Amazon WorkLink.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDomainOutcome AssociateDomain(const Model::AssociateDomainRequest& request) const;

        /**
         * <p>Specifies a domain to be associated to Amazon WorkLink.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDomainOutcomeCallable AssociateDomainCallable(const Model::AssociateDomainRequest& request) const;

        /**
         * <p>Specifies a domain to be associated to Amazon WorkLink.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDomainAsync(const Model::AssociateDomainRequest& request, const AssociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a website authorization provider with a specified fleet. This is
         * used to authorize users against associated websites in the company
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateWebsiteAuthorizationProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWebsiteAuthorizationProviderOutcome AssociateWebsiteAuthorizationProvider(const Model::AssociateWebsiteAuthorizationProviderRequest& request) const;

        /**
         * <p>Associates a website authorization provider with a specified fleet. This is
         * used to authorize users against associated websites in the company
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateWebsiteAuthorizationProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWebsiteAuthorizationProviderOutcomeCallable AssociateWebsiteAuthorizationProviderCallable(const Model::AssociateWebsiteAuthorizationProviderRequest& request) const;

        /**
         * <p>Associates a website authorization provider with a specified fleet. This is
         * used to authorize users against associated websites in the company
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateWebsiteAuthorizationProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWebsiteAuthorizationProviderAsync(const Model::AssociateWebsiteAuthorizationProviderRequest& request, const AssociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the root certificate of a certificate authority (CA) used to obtain
         * TLS certificates used by associated websites within the company
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWebsiteCertificateAuthorityOutcome AssociateWebsiteCertificateAuthority(const Model::AssociateWebsiteCertificateAuthorityRequest& request) const;

        /**
         * <p>Imports the root certificate of a certificate authority (CA) used to obtain
         * TLS certificates used by associated websites within the company
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWebsiteCertificateAuthorityOutcomeCallable AssociateWebsiteCertificateAuthorityCallable(const Model::AssociateWebsiteCertificateAuthorityRequest& request) const;

        /**
         * <p>Imports the root certificate of a certificate authority (CA) used to obtain
         * TLS certificates used by associated websites within the company
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/AssociateWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWebsiteCertificateAuthorityAsync(const Model::AssociateWebsiteCertificateAuthorityRequest& request, const AssociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a fleet. A fleet consists of resources and the configuration that
         * delivers associated websites to authorized users who download and set up the
         * Amazon WorkLink app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a fleet. A fleet consists of resources and the configuration that
         * delivers associated websites to authorized users who download and set up the
         * Amazon WorkLink app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/CreateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a fleet. A fleet consists of resources and the configuration that
         * delivers associated websites to authorized users who download and set up the
         * Amazon WorkLink app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/CreateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet. Prevents users from accessing previously associated
         * websites. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes a fleet. Prevents users from accessing previously associated
         * websites. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes a fleet. Prevents users from accessing previously associated
         * websites. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the configuration for delivering audit streams to the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeAuditStreamConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditStreamConfigurationOutcome DescribeAuditStreamConfiguration(const Model::DescribeAuditStreamConfigurationRequest& request) const;

        /**
         * <p>Describes the configuration for delivering audit streams to the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeAuditStreamConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditStreamConfigurationOutcomeCallable DescribeAuditStreamConfigurationCallable(const Model::DescribeAuditStreamConfigurationRequest& request) const;

        /**
         * <p>Describes the configuration for delivering audit streams to the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeAuditStreamConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditStreamConfigurationAsync(const Model::DescribeAuditStreamConfigurationRequest& request, const DescribeAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the networking configuration to access the internal websites
         * associated with the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeCompanyNetworkConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCompanyNetworkConfigurationOutcome DescribeCompanyNetworkConfiguration(const Model::DescribeCompanyNetworkConfigurationRequest& request) const;

        /**
         * <p>Describes the networking configuration to access the internal websites
         * associated with the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeCompanyNetworkConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCompanyNetworkConfigurationOutcomeCallable DescribeCompanyNetworkConfigurationCallable(const Model::DescribeCompanyNetworkConfigurationRequest& request) const;

        /**
         * <p>Describes the networking configuration to access the internal websites
         * associated with the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeCompanyNetworkConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCompanyNetworkConfigurationAsync(const Model::DescribeCompanyNetworkConfigurationRequest& request, const DescribeCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a user's device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * <p>Provides information about a user's device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * <p>Provides information about a user's device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the device policy configuration for the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDevicePolicyConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDevicePolicyConfigurationOutcome DescribeDevicePolicyConfiguration(const Model::DescribeDevicePolicyConfigurationRequest& request) const;

        /**
         * <p>Describes the device policy configuration for the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDevicePolicyConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDevicePolicyConfigurationOutcomeCallable DescribeDevicePolicyConfigurationCallable(const Model::DescribeDevicePolicyConfigurationRequest& request) const;

        /**
         * <p>Describes the device policy configuration for the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDevicePolicyConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDevicePolicyConfigurationAsync(const Model::DescribeDevicePolicyConfigurationRequest& request, const DescribeDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * <p>Provides information about the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * <p>Provides information about the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides basic information for the specified fleet, excluding identity
         * provider, networking, and device configuration details.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeFleetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetMetadataOutcome DescribeFleetMetadata(const Model::DescribeFleetMetadataRequest& request) const;

        /**
         * <p>Provides basic information for the specified fleet, excluding identity
         * provider, networking, and device configuration details.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeFleetMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetMetadataOutcomeCallable DescribeFleetMetadataCallable(const Model::DescribeFleetMetadataRequest& request) const;

        /**
         * <p>Provides basic information for the specified fleet, excluding identity
         * provider, networking, and device configuration details.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeFleetMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetMetadataAsync(const Model::DescribeFleetMetadataRequest& request, const DescribeFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the identity provider configuration of the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeIdentityProviderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityProviderConfigurationOutcome DescribeIdentityProviderConfiguration(const Model::DescribeIdentityProviderConfigurationRequest& request) const;

        /**
         * <p>Describes the identity provider configuration of the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeIdentityProviderConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityProviderConfigurationOutcomeCallable DescribeIdentityProviderConfigurationCallable(const Model::DescribeIdentityProviderConfigurationRequest& request) const;

        /**
         * <p>Describes the identity provider configuration of the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeIdentityProviderConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityProviderConfigurationAsync(const Model::DescribeIdentityProviderConfigurationRequest& request, const DescribeIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the certificate authority.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWebsiteCertificateAuthorityOutcome DescribeWebsiteCertificateAuthority(const Model::DescribeWebsiteCertificateAuthorityRequest& request) const;

        /**
         * <p>Provides information about the certificate authority.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWebsiteCertificateAuthorityOutcomeCallable DescribeWebsiteCertificateAuthorityCallable(const Model::DescribeWebsiteCertificateAuthorityRequest& request) const;

        /**
         * <p>Provides information about the certificate authority.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DescribeWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWebsiteCertificateAuthorityAsync(const Model::DescribeWebsiteCertificateAuthorityRequest& request, const DescribeWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a domain from Amazon WorkLink. End users lose the ability to
         * access the domain with Amazon WorkLink. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDomainOutcome DisassociateDomain(const Model::DisassociateDomainRequest& request) const;

        /**
         * <p>Disassociates a domain from Amazon WorkLink. End users lose the ability to
         * access the domain with Amazon WorkLink. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDomainOutcomeCallable DisassociateDomainCallable(const Model::DisassociateDomainRequest& request) const;

        /**
         * <p>Disassociates a domain from Amazon WorkLink. End users lose the ability to
         * access the domain with Amazon WorkLink. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDomainAsync(const Model::DisassociateDomainRequest& request, const DisassociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a website authorization provider from a specified fleet. After
         * the disassociation, users can't load any associated websites that require this
         * authorization provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateWebsiteAuthorizationProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWebsiteAuthorizationProviderOutcome DisassociateWebsiteAuthorizationProvider(const Model::DisassociateWebsiteAuthorizationProviderRequest& request) const;

        /**
         * <p>Disassociates a website authorization provider from a specified fleet. After
         * the disassociation, users can't load any associated websites that require this
         * authorization provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateWebsiteAuthorizationProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWebsiteAuthorizationProviderOutcomeCallable DisassociateWebsiteAuthorizationProviderCallable(const Model::DisassociateWebsiteAuthorizationProviderRequest& request) const;

        /**
         * <p>Disassociates a website authorization provider from a specified fleet. After
         * the disassociation, users can't load any associated websites that require this
         * authorization provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateWebsiteAuthorizationProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWebsiteAuthorizationProviderAsync(const Model::DisassociateWebsiteAuthorizationProviderRequest& request, const DisassociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a certificate authority (CA).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWebsiteCertificateAuthorityOutcome DisassociateWebsiteCertificateAuthority(const Model::DisassociateWebsiteCertificateAuthorityRequest& request) const;

        /**
         * <p>Removes a certificate authority (CA).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWebsiteCertificateAuthorityOutcomeCallable DisassociateWebsiteCertificateAuthorityCallable(const Model::DisassociateWebsiteCertificateAuthorityRequest& request) const;

        /**
         * <p>Removes a certificate authority (CA).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DisassociateWebsiteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWebsiteCertificateAuthorityAsync(const Model::DisassociateWebsiteCertificateAuthorityRequest& request, const DisassociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of devices registered with the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Retrieves a list of devices registered with the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Retrieves a list of devices registered with the specified
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of domains associated to a specified fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * <p>Retrieves a list of domains associated to a specified fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * <p>Retrieves a list of domains associated to a specified fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of fleets for the current account and Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a list of fleets for the current account and Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a list of fleets for the current account and Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListFleets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of website authorization providers associated with a
         * specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListWebsiteAuthorizationProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebsiteAuthorizationProvidersOutcome ListWebsiteAuthorizationProviders(const Model::ListWebsiteAuthorizationProvidersRequest& request) const;

        /**
         * <p>Retrieves a list of website authorization providers associated with a
         * specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListWebsiteAuthorizationProviders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebsiteAuthorizationProvidersOutcomeCallable ListWebsiteAuthorizationProvidersCallable(const Model::ListWebsiteAuthorizationProvidersRequest& request) const;

        /**
         * <p>Retrieves a list of website authorization providers associated with a
         * specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListWebsiteAuthorizationProviders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebsiteAuthorizationProvidersAsync(const Model::ListWebsiteAuthorizationProvidersRequest& request, const ListWebsiteAuthorizationProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of certificate authorities added for the current account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListWebsiteCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebsiteCertificateAuthoritiesOutcome ListWebsiteCertificateAuthorities(const Model::ListWebsiteCertificateAuthoritiesRequest& request) const;

        /**
         * <p>Retrieves a list of certificate authorities added for the current account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListWebsiteCertificateAuthorities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebsiteCertificateAuthoritiesOutcomeCallable ListWebsiteCertificateAuthoritiesCallable(const Model::ListWebsiteCertificateAuthoritiesRequest& request) const;

        /**
         * <p>Retrieves a list of certificate authorities added for the current account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/ListWebsiteCertificateAuthorities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebsiteCertificateAuthoritiesAsync(const Model::ListWebsiteCertificateAuthoritiesRequest& request, const ListWebsiteCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves a domain to ACTIVE status if it was in the INACTIVE
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/RestoreDomainAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDomainAccessOutcome RestoreDomainAccess(const Model::RestoreDomainAccessRequest& request) const;

        /**
         * <p>Moves a domain to ACTIVE status if it was in the INACTIVE
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/RestoreDomainAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDomainAccessOutcomeCallable RestoreDomainAccessCallable(const Model::RestoreDomainAccessRequest& request) const;

        /**
         * <p>Moves a domain to ACTIVE status if it was in the INACTIVE
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/RestoreDomainAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDomainAccessAsync(const Model::RestoreDomainAccessRequest& request, const RestoreDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves a domain to INACTIVE status if it was in the ACTIVE
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/RevokeDomainAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeDomainAccessOutcome RevokeDomainAccess(const Model::RevokeDomainAccessRequest& request) const;

        /**
         * <p>Moves a domain to INACTIVE status if it was in the ACTIVE
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/RevokeDomainAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeDomainAccessOutcomeCallable RevokeDomainAccessCallable(const Model::RevokeDomainAccessRequest& request) const;

        /**
         * <p>Moves a domain to INACTIVE status if it was in the ACTIVE
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/RevokeDomainAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeDomainAccessAsync(const Model::RevokeDomainAccessRequest& request, const RevokeDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs the user out from all of their devices. The user can sign in again if
         * they have valid credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/SignOutUser">AWS
         * API Reference</a></p>
         */
        virtual Model::SignOutUserOutcome SignOutUser(const Model::SignOutUserRequest& request) const;

        /**
         * <p>Signs the user out from all of their devices. The user can sign in again if
         * they have valid credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/SignOutUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignOutUserOutcomeCallable SignOutUserCallable(const Model::SignOutUserRequest& request) const;

        /**
         * <p>Signs the user out from all of their devices. The user can sign in again if
         * they have valid credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/SignOutUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignOutUserAsync(const Model::SignOutUserRequest& request, const SignOutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the audit stream configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateAuditStreamConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuditStreamConfigurationOutcome UpdateAuditStreamConfiguration(const Model::UpdateAuditStreamConfigurationRequest& request) const;

        /**
         * <p>Updates the audit stream configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateAuditStreamConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuditStreamConfigurationOutcomeCallable UpdateAuditStreamConfigurationCallable(const Model::UpdateAuditStreamConfigurationRequest& request) const;

        /**
         * <p>Updates the audit stream configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateAuditStreamConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuditStreamConfigurationAsync(const Model::UpdateAuditStreamConfigurationRequest& request, const UpdateAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the company network configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateCompanyNetworkConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCompanyNetworkConfigurationOutcome UpdateCompanyNetworkConfiguration(const Model::UpdateCompanyNetworkConfigurationRequest& request) const;

        /**
         * <p>Updates the company network configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateCompanyNetworkConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCompanyNetworkConfigurationOutcomeCallable UpdateCompanyNetworkConfigurationCallable(const Model::UpdateCompanyNetworkConfigurationRequest& request) const;

        /**
         * <p>Updates the company network configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateCompanyNetworkConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCompanyNetworkConfigurationAsync(const Model::UpdateCompanyNetworkConfigurationRequest& request, const UpdateCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device policy configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateDevicePolicyConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevicePolicyConfigurationOutcome UpdateDevicePolicyConfiguration(const Model::UpdateDevicePolicyConfigurationRequest& request) const;

        /**
         * <p>Updates the device policy configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateDevicePolicyConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDevicePolicyConfigurationOutcomeCallable UpdateDevicePolicyConfigurationCallable(const Model::UpdateDevicePolicyConfigurationRequest& request) const;

        /**
         * <p>Updates the device policy configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateDevicePolicyConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevicePolicyConfigurationAsync(const Model::UpdateDevicePolicyConfigurationRequest& request, const UpdateDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates domain metadata, such as DisplayName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateDomainMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainMetadataOutcome UpdateDomainMetadata(const Model::UpdateDomainMetadataRequest& request) const;

        /**
         * <p>Updates domain metadata, such as DisplayName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateDomainMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainMetadataOutcomeCallable UpdateDomainMetadataCallable(const Model::UpdateDomainMetadataRequest& request) const;

        /**
         * <p>Updates domain metadata, such as DisplayName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateDomainMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainMetadataAsync(const Model::UpdateDomainMetadataRequest& request, const UpdateDomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates fleet metadata, such as DisplayName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateFleetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetMetadataOutcome UpdateFleetMetadata(const Model::UpdateFleetMetadataRequest& request) const;

        /**
         * <p>Updates fleet metadata, such as DisplayName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateFleetMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetMetadataOutcomeCallable UpdateFleetMetadataCallable(const Model::UpdateFleetMetadataRequest& request) const;

        /**
         * <p>Updates fleet metadata, such as DisplayName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateFleetMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetMetadataAsync(const Model::UpdateFleetMetadataRequest& request, const UpdateFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the identity provider configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateIdentityProviderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderConfigurationOutcome UpdateIdentityProviderConfiguration(const Model::UpdateIdentityProviderConfigurationRequest& request) const;

        /**
         * <p>Updates the identity provider configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateIdentityProviderConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIdentityProviderConfigurationOutcomeCallable UpdateIdentityProviderConfigurationCallable(const Model::UpdateIdentityProviderConfigurationRequest& request) const;

        /**
         * <p>Updates the identity provider configuration for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/UpdateIdentityProviderConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityProviderConfigurationAsync(const Model::UpdateIdentityProviderConfigurationRequest& request, const UpdateIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateDomainAsyncHelper(const Model::AssociateDomainRequest& request, const AssociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWebsiteAuthorizationProviderAsyncHelper(const Model::AssociateWebsiteAuthorizationProviderRequest& request, const AssociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWebsiteCertificateAuthorityAsyncHelper(const Model::AssociateWebsiteCertificateAuthorityRequest& request, const AssociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFleetAsyncHelper(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAuditStreamConfigurationAsyncHelper(const Model::DescribeAuditStreamConfigurationRequest& request, const DescribeAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCompanyNetworkConfigurationAsyncHelper(const Model::DescribeCompanyNetworkConfigurationRequest& request, const DescribeCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeviceAsyncHelper(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDevicePolicyConfigurationAsyncHelper(const Model::DescribeDevicePolicyConfigurationRequest& request, const DescribeDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainAsyncHelper(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetMetadataAsyncHelper(const Model::DescribeFleetMetadataRequest& request, const DescribeFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityProviderConfigurationAsyncHelper(const Model::DescribeIdentityProviderConfigurationRequest& request, const DescribeIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWebsiteCertificateAuthorityAsyncHelper(const Model::DescribeWebsiteCertificateAuthorityRequest& request, const DescribeWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDomainAsyncHelper(const Model::DisassociateDomainRequest& request, const DisassociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWebsiteAuthorizationProviderAsyncHelper(const Model::DisassociateWebsiteAuthorizationProviderRequest& request, const DisassociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWebsiteCertificateAuthorityAsyncHelper(const Model::DisassociateWebsiteCertificateAuthorityRequest& request, const DisassociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsAsyncHelper(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWebsiteAuthorizationProvidersAsyncHelper(const Model::ListWebsiteAuthorizationProvidersRequest& request, const ListWebsiteAuthorizationProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWebsiteCertificateAuthoritiesAsyncHelper(const Model::ListWebsiteCertificateAuthoritiesRequest& request, const ListWebsiteCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDomainAccessAsyncHelper(const Model::RestoreDomainAccessRequest& request, const RestoreDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeDomainAccessAsyncHelper(const Model::RevokeDomainAccessRequest& request, const RevokeDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignOutUserAsyncHelper(const Model::SignOutUserRequest& request, const SignOutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAuditStreamConfigurationAsyncHelper(const Model::UpdateAuditStreamConfigurationRequest& request, const UpdateAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCompanyNetworkConfigurationAsyncHelper(const Model::UpdateCompanyNetworkConfigurationRequest& request, const UpdateCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDevicePolicyConfigurationAsyncHelper(const Model::UpdateDevicePolicyConfigurationRequest& request, const UpdateDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainMetadataAsyncHelper(const Model::UpdateDomainMetadataRequest& request, const UpdateDomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetMetadataAsyncHelper(const Model::UpdateFleetMetadataRequest& request, const UpdateFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIdentityProviderConfigurationAsyncHelper(const Model::UpdateIdentityProviderConfigurationRequest& request, const UpdateIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkLink
} // namespace Aws
