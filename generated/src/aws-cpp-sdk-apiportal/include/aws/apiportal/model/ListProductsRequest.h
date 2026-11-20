/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ResourceOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace APIPortal {
namespace Model {

/**
 */
class ListProductsRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API ListProductsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListProducts"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  AWS_APIPORTAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of results to return in one page, from 1 to 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListProductsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token returned by a previous call. Omit it to get the first
   * page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProductsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whose products to return: <code>SELF</code> for your own,
   * <code>OTHER_ACCOUNTS</code> for products shared with you, or <code>ALL</code>.
   * Defaults to <code>ALL</code>, or to <code>SELF</code> when
   * <code>managedApiId</code> is supplied.</p>
   */
  inline ResourceOwner GetResourceOwner() const { return m_resourceOwner; }
  inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
  inline void SetResourceOwner(ResourceOwner value) {
    m_resourceOwnerHasBeenSet = true;
    m_resourceOwner = value;
  }
  inline ListProductsRequest& WithResourceOwner(ResourceOwner value) {
    SetResourceOwner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter: when supplied, only Products this Managed API is associated
   * with are returned.</p>
   */
  inline const Aws::String& GetManagedApiId() const { return m_managedApiId; }
  inline bool ManagedApiIdHasBeenSet() const { return m_managedApiIdHasBeenSet; }
  template <typename ManagedApiIdT = Aws::String>
  void SetManagedApiId(ManagedApiIdT&& value) {
    m_managedApiIdHasBeenSet = true;
    m_managedApiId = std::forward<ManagedApiIdT>(value);
  }
  template <typename ManagedApiIdT = Aws::String>
  ListProductsRequest& WithManagedApiId(ManagedApiIdT&& value) {
    SetManagedApiId(std::forward<ManagedApiIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  ResourceOwner m_resourceOwner{ResourceOwner::NOT_SET};

  Aws::String m_managedApiId;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_resourceOwnerHasBeenSet = false;
  bool m_managedApiIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
