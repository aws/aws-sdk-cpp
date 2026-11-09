/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntimePaginationBase.h>
#include <aws/account-access-runtime/AccountAccessRuntimeServiceClientModel.h>
#include <aws/account-access-runtime/AccountAccessRuntimeWaiter.h>
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace AccountAccessRuntime {
/**
 * <p>Use the Account Access Runtime API to list the roles that you can access and
 * retrieve temporary Amazon Web Services credentials for those roles. You
 * authenticate with a bearer token from IAM Identity Center. Each request is
 * scoped to a tenant.</p>
 */
class AWS_ACCOUNTACCESSRUNTIME_API AccountAccessRuntimeClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<AccountAccessRuntimeClient>,
      public AccountAccessRuntimePaginationBase<AccountAccessRuntimeClient>,
      public AccountAccessRuntimeWaiter<AccountAccessRuntimeClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AccountAccessRuntimeClientConfiguration ClientConfigurationType;
  typedef AccountAccessRuntimeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use BearerTokenAuthSignerProvider, with default http client factory, and optional client config.
   */
  AccountAccessRuntimeClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                             std::shared_ptr<AccountAccessRuntimeEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::AccountAccessRuntime::AccountAccessRuntimeClientConfiguration& clientConfiguration =
                                 Aws::AccountAccessRuntime::AccountAccessRuntimeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use BearerTokenAuthSignerProvider, with default http client factory, and optional client config.
   */
  AccountAccessRuntimeClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AccountAccessRuntimeClient();

  /**
   * <p>Returns temporary Amazon Web Services credentials for a role that you are
   * entitled to assume within a tenant. You can use these credentials for
   * programmatic access with the CLI or an Amazon Web Services SDK. If you aren't
   * entitled to the role, the request fails with an
   * <code>AccessDeniedException</code> error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-runtime-2018-05-10/GetRoleCredentials">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRoleCredentialsOutcome GetRoleCredentials(const Model::GetRoleCredentialsRequest& request) const;

  /**
   * A Callable wrapper for GetRoleCredentials that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRoleCredentialsRequestT = Model::GetRoleCredentialsRequest>
  Model::GetRoleCredentialsOutcomeCallable GetRoleCredentialsCallable(const GetRoleCredentialsRequestT& request) const {
    return SubmitCallable(&AccountAccessRuntimeClient::GetRoleCredentials, request);
  }

  /**
   * An Async wrapper for GetRoleCredentials that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRoleCredentialsRequestT = Model::GetRoleCredentialsRequest>
  void GetRoleCredentialsAsync(const GetRoleCredentialsRequestT& request, const GetRoleCredentialsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessRuntimeClient::GetRoleCredentials, request, handler, context);
  }

  /**
   * <p>Returns the roles that you are entitled to access within a tenant. The
   * results are paginated. Use a returned role with <code>GetRoleCredentials</code>
   * to obtain temporary credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-runtime-2018-05-10/ListRoles">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRolesOutcome ListRoles(const Model::ListRolesRequest& request) const;

  /**
   * A Callable wrapper for ListRoles that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListRolesRequestT = Model::ListRolesRequest>
  Model::ListRolesOutcomeCallable ListRolesCallable(const ListRolesRequestT& request) const {
    return SubmitCallable(&AccountAccessRuntimeClient::ListRoles, request);
  }

  /**
   * An Async wrapper for ListRoles that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListRolesRequestT = Model::ListRolesRequest>
  void ListRolesAsync(const ListRolesRequestT& request, const ListRolesResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AccountAccessRuntimeClient::ListRoles, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AccountAccessRuntimeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AccountAccessRuntimeClient>;
  void init(const AccountAccessRuntimeClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AccountAccessRuntimeError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod, const char* signerName = Aws::Auth::SIGV4_SIGNER) const;

  AccountAccessRuntimeClientConfiguration m_clientConfiguration;
  std::shared_ptr<AccountAccessRuntimeEndpointProviderBase> m_endpointProvider;
};

}  // namespace AccountAccessRuntime
}  // namespace Aws
