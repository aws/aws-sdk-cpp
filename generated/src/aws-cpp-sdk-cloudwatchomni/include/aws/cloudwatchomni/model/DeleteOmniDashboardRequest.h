/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class DeleteOmniDashboardRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API DeleteOmniDashboardRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteOmniDashboard"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  DeleteOmniDashboardRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the dashboard.</p>
   */
  inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
  inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
  template <typename DashboardIdT = Aws::String>
  void SetDashboardId(DashboardIdT&& value) {
    m_dashboardIdHasBeenSet = true;
    m_dashboardId = std::forward<DashboardIdT>(value);
  }
  template <typename DashboardIdT = Aws::String>
  DeleteOmniDashboardRequest& WithDashboardId(DashboardIdT&& value) {
    SetDashboardId(std::forward<DashboardIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_dashboardId;
  bool m_spaceIdHasBeenSet = false;
  bool m_dashboardIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
