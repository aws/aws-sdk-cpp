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
class UpdateOmniDashboardRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API UpdateOmniDashboardRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOmniDashboard"; }

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
  UpdateOmniDashboardRequest& WithSpaceId(SpaceIdT&& value) {
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
  UpdateOmniDashboardRequest& WithDashboardId(DashboardIdT&& value) {
    SetDashboardId(std::forward<DashboardIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the dashboard. Omit to leave unchanged.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateOmniDashboardRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description of the dashboard. Omit to leave unchanged.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateOmniDashboardRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new dashboard definition, as a JSON document. Maximum 1 MiB. Omit to
   * leave unchanged.</p>
   */
  inline const Aws::String& GetRequestBody() const { return m_requestBody; }
  inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
  template <typename RequestBodyT = Aws::String>
  void SetRequestBody(RequestBodyT&& value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody = std::forward<RequestBodyT>(value);
  }
  template <typename RequestBodyT = Aws::String>
  UpdateOmniDashboardRequest& WithRequestBody(RequestBodyT&& value) {
    SetRequestBody(std::forward<RequestBodyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_dashboardId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_requestBody;
  bool m_spaceIdHasBeenSet = false;
  bool m_dashboardIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_requestBodyHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
