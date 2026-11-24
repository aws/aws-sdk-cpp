/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoverySource.h>
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
class ListDiscoveryStatusesRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API ListDiscoveryStatusesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDiscoveryStatuses"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  AWS_APIPORTAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline DiscoverySource GetDiscoverySource() const { return m_discoverySource; }
  inline bool DiscoverySourceHasBeenSet() const { return m_discoverySourceHasBeenSet; }
  inline void SetDiscoverySource(DiscoverySource value) {
    m_discoverySourceHasBeenSet = true;
    m_discoverySource = value;
  }
  inline ListDiscoveryStatusesRequest& WithDiscoverySource(DiscoverySource value) {
    SetDiscoverySource(value);
    return *this;
  }
  ///@}

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
  inline ListDiscoveryStatusesRequest& WithMaxResults(int value) {
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
  ListDiscoveryStatusesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  DiscoverySource m_discoverySource{DiscoverySource::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_discoverySourceHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
