/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntimeRequest.h>
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace AccountAccessRuntime {
namespace Model {

/**
 */
class ListRolesRequest : public AccountAccessRuntimeRequest {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API ListRolesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRoles"; }

  AWS_ACCOUNTACCESSRUNTIME_API Aws::String SerializePayload() const override;

  AWS_ACCOUNTACCESSRUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the tenant whose roles you want to list. A tenant ID begins
   * with <code>aa-</code> and is 3 to 24 characters long. It can contain lowercase
   * letters, numbers, and hyphens.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  ListRolesRequest& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of roles to return in a single response. If more roles are
   * available than the specified value, the response includes a
   * <code>nextToken</code> value that you can use to retrieve the next page of
   * results. If you don't specify a value, the service uses a default page size.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRolesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from a previous <code>ListRoles</code> response. Use it
   * to retrieve the next page of results. Omit this parameter on the first call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRolesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_tenantIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
