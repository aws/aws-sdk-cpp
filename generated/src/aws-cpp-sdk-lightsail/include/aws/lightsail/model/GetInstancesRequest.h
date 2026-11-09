/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Lightsail {
namespace Model {

/**
 */
class GetInstancesRequest : public LightsailRequest {
 public:
  AWS_LIGHTSAIL_API GetInstancesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetInstances"; }

  AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

  AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The token to advance to the next page of results from your request.</p> <p>To
   * get a page token, perform an initial <code>GetInstances</code> request. If your
   * results are paginated, the response will return a next page token that you can
   * specify as the page token in a subsequent request.</p>
   */
  inline const Aws::String& GetPageToken() const { return m_pageToken; }
  inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
  template <typename PageTokenT = Aws::String>
  void SetPageToken(PageTokenT&& value) {
    m_pageTokenHasBeenSet = true;
    m_pageToken = std::forward<PageTokenT>(value);
  }
  template <typename PageTokenT = Aws::String>
  GetInstancesRequest& WithPageToken(PageTokenT&& value) {
    SetPageToken(std::forward<PageTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include the instance health status checks of each
   * instance in the response of your request.</p> <p>When set to <code>true</code>,
   * the response includes the <code>instanceStatus</code> and
   * <code>systemStatus</code> of each instance. When omitted or set to
   * <code>false</code>, the response doesn't include them.</p>
   */
  inline bool GetIncludeHealthStatus() const { return m_includeHealthStatus; }
  inline bool IncludeHealthStatusHasBeenSet() const { return m_includeHealthStatusHasBeenSet; }
  inline void SetIncludeHealthStatus(bool value) {
    m_includeHealthStatusHasBeenSet = true;
    m_includeHealthStatus = value;
  }
  inline GetInstancesRequest& WithIncludeHealthStatus(bool value) {
    SetIncludeHealthStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_pageToken;

  bool m_includeHealthStatus{false};
  bool m_pageTokenHasBeenSet = false;
  bool m_includeHealthStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
