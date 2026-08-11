/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessPaginationBase.h>
#include <aws/account-access/AccountAccessServiceClientModel.h>
#include <aws/account-access/AccountAccessWaiter.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace AccountAccess {
/**
 * <p>Account access manager enables you to manage applications and entitlements
 * that grant IAM Identity Center principals access to IAM roles across
 * accounts.</p>
 */
class AWS_ACCOUNTACCESS_API AccountAccessClient : public Aws::Client::AWSJsonClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<AccountAccessClient>,
                                                  public AccountAccessPaginationBase<AccountAccessClient>,
                                                  public AccountAccessWaiter<AccountAccessClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AccountAccessClientConfiguration ClientConfigurationType;
  typedef AccountAccessEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AccountAccessClient(const Aws::AccountAccess::AccountAccessClientConfiguration& clientConfiguration =
                          Aws::AccountAccess::AccountAccessClientConfiguration(),
                      std::shared_ptr<AccountAccessEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AccountAccessClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AccountAccessEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AccountAccess::AccountAccessClientConfiguration& clientConfiguration =
                          Aws::AccountAccess::AccountAccessClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AccountAccessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AccountAccessEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AccountAccess::AccountAccessClientConfiguration& clientConfiguration =
                          Aws::AccountAccess::AccountAccessClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AccountAccessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AccountAccessClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AccountAccessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AccountAccessClient();

  /**
   * <p>Creates an account access manager instance and its Amazon Web Services
   * account access application in the associated IAM Identity Center instance. This
   * operation is idempotent; calling it multiple times with the same parameters
   * returns the existing application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/CreateApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

  /**
   * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::CreateApplication, request);
  }

  /**
   * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::CreateApplication, request, handler, context);
  }

  /**
   * <p>Creates an entitlement (assignment) in account access manager. An entitlement
   * (assignment) grants a principal (IAM Identity Center user or group) permission
   * to assume a specified IAM role in an Amazon Web Services account. This operation
   * is idempotent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/CreateEntitlement">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEntitlementOutcome CreateEntitlement(const Model::CreateEntitlementRequest& request) const;

  /**
   * A Callable wrapper for CreateEntitlement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateEntitlementRequestT = Model::CreateEntitlementRequest>
  Model::CreateEntitlementOutcomeCallable CreateEntitlementCallable(const CreateEntitlementRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::CreateEntitlement, request);
  }

  /**
   * An Async wrapper for CreateEntitlement that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateEntitlementRequestT = Model::CreateEntitlementRequest>
  void CreateEntitlementAsync(const CreateEntitlementRequestT& request, const CreateEntitlementResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::CreateEntitlement, request, handler, context);
  }

  /**
   * <p>Deletes an account access manager application. This operation is idempotent;
   * deleting an application that has already been deleted does not return an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/DeleteApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

  /**
   * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::DeleteApplication, request);
  }

  /**
   * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::DeleteApplication, request, handler, context);
  }

  /**
   * <p>Deletes an entitlement from an account access manager application. This
   * operation is idempotent; deleting an entitlement that has already been deleted
   * does not return an error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/DeleteEntitlement">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEntitlementOutcome DeleteEntitlement(const Model::DeleteEntitlementRequest& request) const;

  /**
   * A Callable wrapper for DeleteEntitlement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteEntitlementRequestT = Model::DeleteEntitlementRequest>
  Model::DeleteEntitlementOutcomeCallable DeleteEntitlementCallable(const DeleteEntitlementRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::DeleteEntitlement, request);
  }

  /**
   * An Async wrapper for DeleteEntitlement that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteEntitlementRequestT = Model::DeleteEntitlementRequest>
  void DeleteEntitlementAsync(const DeleteEntitlementRequestT& request, const DeleteEntitlementResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::DeleteEntitlement, request, handler, context);
  }

  /**
   * <p>Retrieves details about an account access manager application, including its
   * status, identity source, and tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/GetApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

  /**
   * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetApplicationRequestT = Model::GetApplicationRequest>
  Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::GetApplication, request);
  }

  /**
   * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetApplicationRequestT = Model::GetApplicationRequest>
  void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::GetApplication, request, handler, context);
  }

  /**
   * <p>Retrieves details about a specific entitlement for an account access manager
   * application, including the principal, IAM role, and target
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/GetEntitlement">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEntitlementOutcome GetEntitlement(const Model::GetEntitlementRequest& request) const;

  /**
   * A Callable wrapper for GetEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetEntitlementRequestT = Model::GetEntitlementRequest>
  Model::GetEntitlementOutcomeCallable GetEntitlementCallable(const GetEntitlementRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::GetEntitlement, request);
  }

  /**
   * An Async wrapper for GetEntitlement that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetEntitlementRequestT = Model::GetEntitlementRequest>
  void GetEntitlementAsync(const GetEntitlementRequestT& request, const GetEntitlementResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::GetEntitlement, request, handler, context);
  }

  /**
   * <p>Lists the account access manager applications in your account. Use pagination
   * to ensure that the operation returns quickly and successfully.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/ListApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request = {}) const {
    return SubmitCallable(&AccountAccessClient::ListApplications, request);
  }

  /**
   * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  void ListApplicationsAsync(const ListApplicationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListApplicationsRequestT& request = {}) const {
    return SubmitAsync(&AccountAccessClient::ListApplications, request, handler, context);
  }

  /**
   * <p>Lists the entitlements for a specified account access manager application.
   * You can filter results by principal, IAM role, or account. Use pagination to
   * ensure that the operation returns quickly and successfully.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/ListEntitlements">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEntitlementsOutcome ListEntitlements(const Model::ListEntitlementsRequest& request) const;

  /**
   * A Callable wrapper for ListEntitlements that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListEntitlementsRequestT = Model::ListEntitlementsRequest>
  Model::ListEntitlementsOutcomeCallable ListEntitlementsCallable(const ListEntitlementsRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::ListEntitlements, request);
  }

  /**
   * An Async wrapper for ListEntitlements that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListEntitlementsRequestT = Model::ListEntitlementsRequest>
  void ListEntitlementsAsync(const ListEntitlementsRequestT& request, const ListEntitlementsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::ListEntitlements, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with an account access manager
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Adds tags to an account access manager resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from an account access manager resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&AccountAccessClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AccountAccessEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AccountAccessClient>;
  void init(const AccountAccessClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AccountAccessError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  AccountAccessClientConfiguration m_clientConfiguration;
  std::shared_ptr<AccountAccessEndpointProviderBase> m_endpointProvider;
};

}  // namespace AccountAccess
}  // namespace Aws
