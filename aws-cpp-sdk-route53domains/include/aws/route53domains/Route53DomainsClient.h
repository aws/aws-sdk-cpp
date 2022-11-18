/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53domains/Route53DomainsServiceClientModel.h>
#include <aws/route53domains/Route53DomainsLegacyAsyncMacros.h>

namespace Aws
{
namespace Route53Domains
{
  /**
   * <p>Amazon Route 53 API actions let you register domain names and perform related
   * operations.</p>
   */
  class AWS_ROUTE53DOMAINS_API Route53DomainsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Aws::Route53Domains::Route53DomainsClientConfiguration& clientConfiguration = Aws::Route53Domains::Route53DomainsClientConfiguration(),
                             std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::Route53Domains::Route53DomainsClientConfiguration& clientConfiguration = Aws::Route53Domains::Route53DomainsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53DomainsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<Route53DomainsEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53DomainsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::Route53Domains::Route53DomainsClientConfiguration& clientConfiguration = Aws::Route53Domains::Route53DomainsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53DomainsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53DomainsClient();


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
         * <p>Accepts the transfer of a domain from another Amazon Web Services account to
         * the currentAmazon Web Services account. You initiate a transfer between Amazon
         * Web Services accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.</p>
         * <p>If you use the CLI command at <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/route53domains/accept-domain-transfer-from-another-aws-account.html">accept-domain-transfer-from-another-aws-account</a>,
         * use JSON format as input instead of text because otherwise CLI will throw an
         * error from domain transfer input that includes single quotes.</p> <p>Use either
         * <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/AcceptDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptDomainTransferFromAnotherAwsAccountOutcome AcceptDomainTransferFromAnotherAwsAccount(const Model::AcceptDomainTransferFromAnotherAwsAccountRequest& request) const;


        /**
         * <p>Cancels the transfer of a domain from the current Amazon Web Services account
         * to another Amazon Web Services account. You initiate a transfer betweenAmazon
         * Web Services accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p>  <p>You must cancel the transfer before the other Amazon Web
         * Services account accepts the transfer using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.</p>
         *  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CancelDomainTransferToAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDomainTransferToAnotherAwsAccountOutcome CancelDomainTransferToAnotherAwsAccount(const Model::CancelDomainTransferToAnotherAwsAccountRequest& request) const;


        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDomainAvailabilityOutcome CheckDomainAvailability(const Model::CheckDomainAvailabilityRequest& request) const;


        /**
         * <p>Checks whether a domain name can be transferred to Amazon Route 53.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDomainTransferabilityOutcome CheckDomainTransferability(const Model::CheckDomainTransferabilityRequest& request) const;


        /**
         * <p>This operation deletes the specified domain. This action is permanent. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-delete.html">Deleting
         * a domain name registration</a>.</p> <p>To transfer the domain registration to
         * another registrar, use the transfer process that’s provided by the registrar to
         * which you want to transfer the registration. Otherwise, the following apply:</p>
         * <ol> <li> <p>You can’t get a refund for the cost of a deleted domain
         * registration.</p> </li> <li> <p>The registry for the top-level domain might hold
         * the domain name for a brief time before releasing it for other users to register
         * (varies by registry). </p> </li> <li> <p>When the registration has been deleted,
         * we'll send you a confirmation to the registrant contact. The email will come
         * from <code>noreply@domainnameverification.net</code> or
         * <code>noreply@registrar.amazon.com</code>.</p> </li> </ol><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;


        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteTagsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsForDomainOutcome DeleteTagsForDomain(const Model::DeleteTagsForDomainRequest& request) const;


        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainAutoRenew">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDomainAutoRenewOutcome DisableDomainAutoRenew(const Model::DisableDomainAutoRenewRequest& request) const;


        /**
         * <p>This operation removes the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to allow domain transfers. We
         * recommend you refrain from performing this action unless you intend to transfer
         * the domain to a different registrar. Successful submission returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainTransferLock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDomainTransferLockOutcome DisableDomainTransferLock(const Model::DisableDomainTransferLockRequest& request) const;


        /**
         * <p>This operation configures Amazon Route 53 to automatically renew the
         * specified domain before the domain registration expires. The cost of renewing
         * your domain registration is billed to your Amazon Web Services account.</p>
         * <p>The period during which you can renew a domain name varies by TLD. For a list
         * of TLDs and their renewal policies, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
         * That You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>. Route 53 requires that you renew before the end of the
         * renewal period so we can complete processing before the deadline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainAutoRenew">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDomainAutoRenewOutcome EnableDomainAutoRenew(const Model::EnableDomainAutoRenewRequest& request) const;


        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainTransferLock">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDomainTransferLockOutcome EnableDomainTransferLock(const Model::EnableDomainTransferLockRequest& request) const;


        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetContactReachabilityStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactReachabilityStatusOutcome GetContactReachabilityStatus(const Model::GetContactReachabilityStatusRequest& request) const;


        /**
         * <p>This operation returns detailed information about a specified domain that is
         * associated with the current Amazon Web Services account. Contact information for
         * the domain is also returned as part of the output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainDetail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainDetailOutcome GetDomainDetail(const Model::GetDomainDetailRequest& request) const;


        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainSuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainSuggestionsOutcome GetDomainSuggestions(const Model::GetDomainSuggestionsRequest& request) const;


        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationDetailOutcome GetOperationDetail(const Model::GetOperationDetailRequest& request) const;


        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current Amazon Web Services account if no filtering conditions are
         * used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;


        /**
         * <p>Returns information about all of the operations that return an operation ID
         * and that have ever been performed on domains that were registered by the current
         * account. </p> <p>This command runs only in the us-east-1 Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;


        /**
         * <p>Lists the following prices for either all the TLDs supported by Route 53, or
         * the specified TLD:</p> <ul> <li> <p>Registration</p> </li> <li> <p>Transfer</p>
         * </li> <li> <p>Owner change</p> </li> <li> <p>Domain renewal</p> </li> <li>
         * <p>Domain restoration</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListPrices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPricesOutcome ListPrices(const Model::ListPricesRequest& request) const;


        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations might not immediately represent all issued operations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListTagsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForDomainOutcome ListTagsForDomain(const Model::ListTagsForDomainRequest& request) const;


        /**
         * <p>This operation registers a domain. Domains are registered either by Amazon
         * Registrar (for .com, .net, and .org domains) or by our registrar associate,
         * Gandi (for all other domains). For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li> <p>Creates a Route 53 hosted zone that has the
         * same name as the domain. Route 53 assigns four name servers to your hosted zone
         * and automatically updates your domain registration with the names of these name
         * servers.</p> </li> <li> <p>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</p> </li> <li>
         * <p>Optionally enables privacy protection, so WHOIS queries return contact
         * information either for Amazon Registrar (for .com, .net, and .org domains) or
         * for our registrar associate, Gandi (for all other TLDs). If you don't enable
         * privacy protection, WHOIS queries return the information that you entered for
         * the administrative, registrant, and technical contacts.</p>  <p>You must
         * specify the same privacy setting for the administrative, registrant, and
         * technical contacts.</p>  </li> <li> <p>If registration is successful,
         * returns an operation ID that you can use to track the progress and completion of
         * the action. If the request is not completed successfully, the domain registrant
         * is notified by email.</p> </li> <li> <p>Charges your Amazon Web Services account
         * an amount based on the top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RegisterDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDomainOutcome RegisterDomain(const Model::RegisterDomainRequest& request) const;


        /**
         * <p>Rejects the transfer of a domain from another Amazon Web Services account to
         * the current Amazon Web Services account. You initiate a transfer betweenAmazon
         * Web Services accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectDomainTransferFromAnotherAwsAccountOutcome RejectDomainTransferFromAnotherAwsAccount(const Model::RejectDomainTransferFromAnotherAwsAccountRequest& request) const;


        /**
         * <p>This operation renews a domain for the specified number of years. The cost of
         * renewing your domain is billed to your Amazon Web Services account.</p> <p>We
         * recommend that you renew your domain several weeks before the expiration date.
         * Some TLD registries delete domains before the expiration date if you haven't
         * renewed far enough in advance. For more information about renewing domain
         * registration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-renew.html">Renewing
         * Registration for a Domain</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RenewDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RenewDomainOutcome RenewDomain(const Model::RenewDomainRequest& request) const;


        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ResendContactReachabilityEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendContactReachabilityEmailOutcome ResendContactReachabilityEmail(const Model::ResendContactReachabilityEmailRequest& request) const;


        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RetrieveDomainAuthCode">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveDomainAuthCodeOutcome RetrieveDomainAuthCode(const Model::RetrieveDomainAuthCodeRequest& request) const;


        /**
         * <p>Transfers a domain from another registrar to Amazon Route 53. When the
         * transfer is complete, the domain is registered either with Amazon Registrar (for
         * .com, .net, and .org domains) or with our registrar associate, Gandi (for all
         * other TLDs).</p> <p>For more information about transferring domains, see the
         * following topics:</p> <ul> <li> <p>For transfer requirements, a detailed
         * procedure, and information about viewing the status of a domain that you're
         * transferring to Route 53, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> <li> <p>For information about how to transfer a
         * domain from one Amazon Web Services account to another, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>For information about how to transfer a domain to another
         * domain registrar, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-from-route-53.html">Transferring
         * a Domain from Amazon Route 53 to Another Registrar</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> </ul> <p>If the registrar for your domain is also
         * the DNS service provider for the domain, we highly recommend that you transfer
         * your DNS service to Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p>  <p>If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</p>  <p>If the transfer is
         * successful, this method returns an operation ID that you can use to track the
         * progress and completion of the action. If the transfer doesn't complete
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferDomainOutcome TransferDomain(const Model::TransferDomainRequest& request) const;


        /**
         * <p>Transfers a domain from the current Amazon Web Services account to another
         * Amazon Web Services account. Note the following:</p> <ul> <li> <p>The Amazon Web
         * Services account that you're transferring the domain to must accept the
         * transfer. If the other account doesn't accept the transfer within 3 days, we
         * cancel the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> <li> <p>You can cancel the transfer before the other account accepts
         * it. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_CancelDomainTransferToAnotherAwsAccount.html">CancelDomainTransferToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>The other account can reject the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_RejectDomainTransferFromAnotherAwsAccount.html">RejectDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> </ul>  <p>When you transfer a domain from one Amazon Web
         * Services account to another, Route 53 doesn't transfer the hosted zone that is
         * associated with the domain. DNS resolution isn't affected if the domain and the
         * hosted zone are owned by separate accounts, so transferring the hosted zone is
         * optional. For information about transferring the hosted zone to another Amazon
         * Web Services account, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/hosted-zones-migrating.html">Migrating
         * a Hosted Zone to a Different Amazon Web Services Account</a> in the <i>Amazon
         * Route 53 Developer Guide</i>.</p>  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainToAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferDomainToAnotherAwsAccountOutcome TransferDomainToAnotherAwsAccount(const Model::TransferDomainToAnotherAwsAccountRequest& request) const;


        /**
         * <p>This operation updates the contact information for a particular domain. You
         * must specify information for at least one contact: registrant, administrator, or
         * technical.</p> <p>If the update is successful, this method returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainContactOutcome UpdateDomainContact(const Model::UpdateDomainContactRequest& request) const;


        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * privacy protection is enabled, contact information such as email address is
         * replaced either with contact information for Amazon Registrar (for .com, .net,
         * and .org domains) or with contact information for our registrar associate,
         * Gandi.</p>  <p>You must specify the same privacy setting for the
         * administrative, registrant, and technical contacts.</p>  <p>This
         * operation affects only the contact information for the specified contact type
         * (administrative, registrant, or technical). If the request succeeds, Amazon
         * Route 53 returns an operation ID that you can use with <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to track the progress and completion of the action. If the request doesn't
         * complete successfully, the domain registrant will be notified by email.</p>
         *  <p>By disabling the privacy service via API, you consent to the
         * publication of the contact information provided for this domain via the public
         * WHOIS database. You certify that you are the registrant of this domain name and
         * have the authority to make this decision. You may withdraw your consent at any
         * time by enabling privacy protection using either
         * <code>UpdateDomainContactPrivacy</code> or the Route 53 console. Enabling
         * privacy protection removes the contact information provided for this domain from
         * the WHOIS database. For more information on our privacy practices, see <a
         * href="https://aws.amazon.com/privacy/">https://aws.amazon.com/privacy/</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactPrivacy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainContactPrivacyOutcome UpdateDomainContactPrivacy(const Model::UpdateDomainContactPrivacyRequest& request) const;


        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain.</p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainNameservers">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameserversOutcome UpdateDomainNameservers(const Model::UpdateDomainNameserversRequest& request) const;


        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateTagsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagsForDomainOutcome UpdateTagsForDomain(const Model::UpdateTagsForDomainRequest& request) const;


        /**
         * <p>Returns all the domain-related billing records for the current Amazon Web
         * Services account for a specified period</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBilling">AWS
         * API Reference</a></p>
         */
        virtual Model::ViewBillingOutcome ViewBilling(const Model::ViewBillingRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53DomainsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Route53DomainsClientConfiguration& clientConfiguration);

      Route53DomainsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53DomainsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53Domains
} // namespace Aws
