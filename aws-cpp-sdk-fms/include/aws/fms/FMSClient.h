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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fms/model/GetAdminAccountResult.h>
#include <aws/fms/model/GetComplianceDetailResult.h>
#include <aws/fms/model/GetNotificationChannelResult.h>
#include <aws/fms/model/GetPolicyResult.h>
#include <aws/fms/model/GetProtectionStatusResult.h>
#include <aws/fms/model/ListComplianceStatusResult.h>
#include <aws/fms/model/ListMemberAccountsResult.h>
#include <aws/fms/model/ListPoliciesResult.h>
#include <aws/fms/model/PutPolicyResult.h>
#include <aws/core/NoResult.h>
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

namespace FMS
{

namespace Model
{
        class AssociateAdminAccountRequest;
        class DeleteNotificationChannelRequest;
        class DeletePolicyRequest;
        class DisassociateAdminAccountRequest;
        class GetAdminAccountRequest;
        class GetComplianceDetailRequest;
        class GetNotificationChannelRequest;
        class GetPolicyRequest;
        class GetProtectionStatusRequest;
        class ListComplianceStatusRequest;
        class ListMemberAccountsRequest;
        class ListPoliciesRequest;
        class PutNotificationChannelRequest;
        class PutPolicyRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<FMSErrors>> AssociateAdminAccountOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<FMSErrors>> DeleteNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<FMSErrors>> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<FMSErrors>> DisassociateAdminAccountOutcome;
        typedef Aws::Utils::Outcome<GetAdminAccountResult, Aws::Client::AWSError<FMSErrors>> GetAdminAccountOutcome;
        typedef Aws::Utils::Outcome<GetComplianceDetailResult, Aws::Client::AWSError<FMSErrors>> GetComplianceDetailOutcome;
        typedef Aws::Utils::Outcome<GetNotificationChannelResult, Aws::Client::AWSError<FMSErrors>> GetNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<FMSErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetProtectionStatusResult, Aws::Client::AWSError<FMSErrors>> GetProtectionStatusOutcome;
        typedef Aws::Utils::Outcome<ListComplianceStatusResult, Aws::Client::AWSError<FMSErrors>> ListComplianceStatusOutcome;
        typedef Aws::Utils::Outcome<ListMemberAccountsResult, Aws::Client::AWSError<FMSErrors>> ListMemberAccountsOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesResult, Aws::Client::AWSError<FMSErrors>> ListPoliciesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<FMSErrors>> PutNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<PutPolicyResult, Aws::Client::AWSError<FMSErrors>> PutPolicyOutcome;

        typedef std::future<AssociateAdminAccountOutcome> AssociateAdminAccountOutcomeCallable;
        typedef std::future<DeleteNotificationChannelOutcome> DeleteNotificationChannelOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DisassociateAdminAccountOutcome> DisassociateAdminAccountOutcomeCallable;
        typedef std::future<GetAdminAccountOutcome> GetAdminAccountOutcomeCallable;
        typedef std::future<GetComplianceDetailOutcome> GetComplianceDetailOutcomeCallable;
        typedef std::future<GetNotificationChannelOutcome> GetNotificationChannelOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetProtectionStatusOutcome> GetProtectionStatusOutcomeCallable;
        typedef std::future<ListComplianceStatusOutcome> ListComplianceStatusOutcomeCallable;
        typedef std::future<ListMemberAccountsOutcome> ListMemberAccountsOutcomeCallable;
        typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
        typedef std::future<PutNotificationChannelOutcome> PutNotificationChannelOutcomeCallable;
        typedef std::future<PutPolicyOutcome> PutPolicyOutcomeCallable;
} // namespace Model

  class FMSClient;

    typedef std::function<void(const FMSClient*, const Model::AssociateAdminAccountRequest&, const Model::AssociateAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteNotificationChannelRequest&, const Model::DeleteNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DisassociateAdminAccountRequest&, const Model::DisassociateAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetAdminAccountRequest&, const Model::GetAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetComplianceDetailRequest&, const Model::GetComplianceDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetNotificationChannelRequest&, const Model::GetNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetProtectionStatusRequest&, const Model::GetProtectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtectionStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListComplianceStatusRequest&, const Model::ListComplianceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListMemberAccountsRequest&, const Model::ListMemberAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMemberAccountsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutNotificationChannelRequest&, const Model::PutNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutPolicyRequest&, const Model::PutPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPolicyResponseReceivedHandler;

  /**
   * <fullname>AWS Firewall Manager</fullname> <p>This is the <i>AWS Firewall Manager
   * API Reference</i>. This guide is for developers who need detailed information
   * about the AWS Firewall Manager API actions, data types, and errors. For detailed
   * information about AWS Firewall Manager features, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS
   * Firewall Manager Developer Guide</a>.</p>
   */
  class AWS_FMS_API FMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FMSClient();

        inline virtual const char* GetServiceClientName() const override { return "FMS"; }


        /**
         * <p>Sets the AWS Firewall Manager administrator account. AWS Firewall Manager
         * must be associated with the master account your AWS organization or associated
         * with a member account that has the appropriate permissions. If the account ID
         * that you submit is not an AWS Organizations master account, AWS Firewall Manager
         * will set the appropriate permissions for the given member account.</p> <p>The
         * account that you associate with AWS Firewall Manager is called the AWS Firewall
         * Manager administrator account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AssociateAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAdminAccountOutcome AssociateAdminAccount(const Model::AssociateAdminAccountRequest& request) const;

        /**
         * <p>Sets the AWS Firewall Manager administrator account. AWS Firewall Manager
         * must be associated with the master account your AWS organization or associated
         * with a member account that has the appropriate permissions. If the account ID
         * that you submit is not an AWS Organizations master account, AWS Firewall Manager
         * will set the appropriate permissions for the given member account.</p> <p>The
         * account that you associate with AWS Firewall Manager is called the AWS Firewall
         * Manager administrator account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AssociateAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAdminAccountOutcomeCallable AssociateAdminAccountCallable(const Model::AssociateAdminAccountRequest& request) const;

        /**
         * <p>Sets the AWS Firewall Manager administrator account. AWS Firewall Manager
         * must be associated with the master account your AWS organization or associated
         * with a member account that has the appropriate permissions. If the account ID
         * that you submit is not an AWS Organizations master account, AWS Firewall Manager
         * will set the appropriate permissions for the given member account.</p> <p>The
         * account that you associate with AWS Firewall Manager is called the AWS Firewall
         * Manager administrator account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AssociateAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAdminAccountAsync(const Model::AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Firewall Manager association with the IAM role and the Amazon
         * Simple Notification Service (SNS) topic that is used to record AWS Firewall
         * Manager SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationChannelOutcome DeleteNotificationChannel(const Model::DeleteNotificationChannelRequest& request) const;

        /**
         * <p>Deletes an AWS Firewall Manager association with the IAM role and the Amazon
         * Simple Notification Service (SNS) topic that is used to record AWS Firewall
         * Manager SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteNotificationChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationChannelOutcomeCallable DeleteNotificationChannelCallable(const Model::DeleteNotificationChannelRequest& request) const;

        /**
         * <p>Deletes an AWS Firewall Manager association with the IAM role and the Amazon
         * Simple Notification Service (SNS) topic that is used to record AWS Firewall
         * Manager SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteNotificationChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationChannelAsync(const Model::DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an AWS Firewall Manager policy. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Permanently deletes an AWS Firewall Manager policy. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Permanently deletes an AWS Firewall Manager policy. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the account that has been set as the AWS Firewall Manager
         * administrator account. To set a different account as the administrator account,
         * you must submit an <code>AssociateAdminAccount</code> request .</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DisassociateAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAdminAccountOutcome DisassociateAdminAccount(const Model::DisassociateAdminAccountRequest& request) const;

        /**
         * <p>Disassociates the account that has been set as the AWS Firewall Manager
         * administrator account. To set a different account as the administrator account,
         * you must submit an <code>AssociateAdminAccount</code> request .</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DisassociateAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAdminAccountOutcomeCallable DisassociateAdminAccountCallable(const Model::DisassociateAdminAccountRequest& request) const;

        /**
         * <p>Disassociates the account that has been set as the AWS Firewall Manager
         * administrator account. To set a different account as the administrator account,
         * you must submit an <code>AssociateAdminAccount</code> request .</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DisassociateAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAdminAccountAsync(const Model::DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the AWS Organizations master account that is associated with AWS
         * Firewall Manager as the AWS Firewall Manager administrator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdminAccountOutcome GetAdminAccount(const Model::GetAdminAccountRequest& request) const;

        /**
         * <p>Returns the AWS Organizations master account that is associated with AWS
         * Firewall Manager as the AWS Firewall Manager administrator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdminAccountOutcomeCallable GetAdminAccountCallable(const Model::GetAdminAccountRequest& request) const;

        /**
         * <p>Returns the AWS Organizations master account that is associated with AWS
         * Firewall Manager as the AWS Firewall Manager administrator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdminAccountAsync(const Model::GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed compliance information about the specified member account.
         * Details include resources that are in and out of compliance with the specified
         * policy. Resources are considered non-compliant if the specified policy has not
         * been applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetComplianceDetail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailOutcome GetComplianceDetail(const Model::GetComplianceDetailRequest& request) const;

        /**
         * <p>Returns detailed compliance information about the specified member account.
         * Details include resources that are in and out of compliance with the specified
         * policy. Resources are considered non-compliant if the specified policy has not
         * been applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetComplianceDetail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceDetailOutcomeCallable GetComplianceDetailCallable(const Model::GetComplianceDetailRequest& request) const;

        /**
         * <p>Returns detailed compliance information about the specified member account.
         * Details include resources that are in and out of compliance with the specified
         * policy. Resources are considered non-compliant if the specified policy has not
         * been applied to them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetComplianceDetail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceDetailAsync(const Model::GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the Amazon Simple Notification Service (SNS) topic
         * that is used to record AWS Firewall Manager SNS logs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationChannelOutcome GetNotificationChannel(const Model::GetNotificationChannelRequest& request) const;

        /**
         * <p>Returns information about the Amazon Simple Notification Service (SNS) topic
         * that is used to record AWS Firewall Manager SNS logs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetNotificationChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNotificationChannelOutcomeCallable GetNotificationChannelCallable(const Model::GetNotificationChannelRequest& request) const;

        /**
         * <p>Returns information about the Amazon Simple Notification Service (SNS) topic
         * that is used to record AWS Firewall Manager SNS logs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetNotificationChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNotificationChannelAsync(const Model::GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified AWS Firewall Manager
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns information about the specified AWS Firewall Manager
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetPolicy">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns information about the specified AWS Firewall Manager
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetPolicy">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If you created a Shield Advanced policy, returns policy-level attack summary
         * information in the event of a potential DDoS attack.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetProtectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProtectionStatusOutcome GetProtectionStatus(const Model::GetProtectionStatusRequest& request) const;

        /**
         * <p>If you created a Shield Advanced policy, returns policy-level attack summary
         * information in the event of a potential DDoS attack.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetProtectionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProtectionStatusOutcomeCallable GetProtectionStatusCallable(const Model::GetProtectionStatusRequest& request) const;

        /**
         * <p>If you created a Shield Advanced policy, returns policy-level attack summary
         * information in the event of a potential DDoS attack.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetProtectionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProtectionStatusAsync(const Model::GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>PolicyComplianceStatus</code> objects in the
         * response. Use <code>PolicyComplianceStatus</code> to get a summary of which
         * member accounts are protected by the specified policy. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListComplianceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceStatusOutcome ListComplianceStatus(const Model::ListComplianceStatusRequest& request) const;

        /**
         * <p>Returns an array of <code>PolicyComplianceStatus</code> objects in the
         * response. Use <code>PolicyComplianceStatus</code> to get a summary of which
         * member accounts are protected by the specified policy. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListComplianceStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComplianceStatusOutcomeCallable ListComplianceStatusCallable(const Model::ListComplianceStatusRequest& request) const;

        /**
         * <p>Returns an array of <code>PolicyComplianceStatus</code> objects in the
         * response. Use <code>PolicyComplianceStatus</code> to get a summary of which
         * member accounts are protected by the specified policy. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListComplianceStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComplianceStatusAsync(const Model::ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>MemberAccounts</code> object that lists the member accounts
         * in the administrator's AWS organization.</p> <p>The
         * <code>ListMemberAccounts</code> must be submitted by the account that is set as
         * the AWS Firewall Manager administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListMemberAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemberAccountsOutcome ListMemberAccounts(const Model::ListMemberAccountsRequest& request) const;

        /**
         * <p>Returns a <code>MemberAccounts</code> object that lists the member accounts
         * in the administrator's AWS organization.</p> <p>The
         * <code>ListMemberAccounts</code> must be submitted by the account that is set as
         * the AWS Firewall Manager administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListMemberAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMemberAccountsOutcomeCallable ListMemberAccountsCallable(const Model::ListMemberAccountsRequest& request) const;

        /**
         * <p>Returns a <code>MemberAccounts</code> object that lists the member accounts
         * in the administrator's AWS organization.</p> <p>The
         * <code>ListMemberAccounts</code> must be submitted by the account that is set as
         * the AWS Firewall Manager administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListMemberAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMemberAccountsAsync(const Model::ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>PolicySummary</code> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Returns an array of <code>PolicySummary</code> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Returns an array of <code>PolicySummary</code> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates the IAM role and Amazon Simple Notification Service (SNS) topic
         * that AWS Firewall Manager uses to record SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutNotificationChannelOutcome PutNotificationChannel(const Model::PutNotificationChannelRequest& request) const;

        /**
         * <p>Designates the IAM role and Amazon Simple Notification Service (SNS) topic
         * that AWS Firewall Manager uses to record SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutNotificationChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutNotificationChannelOutcomeCallable PutNotificationChannelCallable(const Model::PutNotificationChannelRequest& request) const;

        /**
         * <p>Designates the IAM role and Amazon Simple Notification Service (SNS) topic
         * that AWS Firewall Manager uses to record SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutNotificationChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutNotificationChannelAsync(const Model::PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS Firewall Manager policy.</p> <p>Firewall Manager provides two
         * types of policies: A Shield Advanced policy, which applies Shield Advanced
         * protection to specified accounts and resources, or a WAF policy, which contains
         * a rule group and defines which resources are to be protected by that rule group.
         * A policy is specific to either WAF or Shield Advanced. If you want to enforce
         * both WAF rules and Shield Advanced protection across accounts, you can create
         * multiple policies. You can create one or more policies for WAF rules, and one or
         * more policies for Shield Advanced.</p> <p>You must be subscribed to Shield
         * Advanced to create a Shield Advanced policy. For more information on subscribing
         * to Shield Advanced, see <a
         * href="https://docs.aws.amazon.com/waf/latest/DDOSAPIReference/API_CreateSubscription.html">CreateSubscription</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::PutPolicyOutcome PutPolicy(const Model::PutPolicyRequest& request) const;

        /**
         * <p>Creates an AWS Firewall Manager policy.</p> <p>Firewall Manager provides two
         * types of policies: A Shield Advanced policy, which applies Shield Advanced
         * protection to specified accounts and resources, or a WAF policy, which contains
         * a rule group and defines which resources are to be protected by that rule group.
         * A policy is specific to either WAF or Shield Advanced. If you want to enforce
         * both WAF rules and Shield Advanced protection across accounts, you can create
         * multiple policies. You can create one or more policies for WAF rules, and one or
         * more policies for Shield Advanced.</p> <p>You must be subscribed to Shield
         * Advanced to create a Shield Advanced policy. For more information on subscribing
         * to Shield Advanced, see <a
         * href="https://docs.aws.amazon.com/waf/latest/DDOSAPIReference/API_CreateSubscription.html">CreateSubscription</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutPolicy">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPolicyOutcomeCallable PutPolicyCallable(const Model::PutPolicyRequest& request) const;

        /**
         * <p>Creates an AWS Firewall Manager policy.</p> <p>Firewall Manager provides two
         * types of policies: A Shield Advanced policy, which applies Shield Advanced
         * protection to specified accounts and resources, or a WAF policy, which contains
         * a rule group and defines which resources are to be protected by that rule group.
         * A policy is specific to either WAF or Shield Advanced. If you want to enforce
         * both WAF rules and Shield Advanced protection across accounts, you can create
         * multiple policies. You can create one or more policies for WAF rules, and one or
         * more policies for Shield Advanced.</p> <p>You must be subscribed to Shield
         * Advanced to create a Shield Advanced policy. For more information on subscribing
         * to Shield Advanced, see <a
         * href="https://docs.aws.amazon.com/waf/latest/DDOSAPIReference/API_CreateSubscription.html">CreateSubscription</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutPolicy">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPolicyAsync(const Model::PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAdminAccountAsyncHelper(const Model::AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationChannelAsyncHelper(const Model::DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAdminAccountAsyncHelper(const Model::DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAdminAccountAsyncHelper(const Model::GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceDetailAsyncHelper(const Model::GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNotificationChannelAsyncHelper(const Model::GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProtectionStatusAsyncHelper(const Model::GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComplianceStatusAsyncHelper(const Model::ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMemberAccountsAsyncHelper(const Model::ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutNotificationChannelAsyncHelper(const Model::PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPolicyAsyncHelper(const Model::PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FMS
} // namespace Aws
