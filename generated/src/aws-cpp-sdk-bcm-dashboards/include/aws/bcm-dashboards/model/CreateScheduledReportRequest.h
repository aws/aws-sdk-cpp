/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsRequest.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/ResourceTag.h>
#include <aws/bcm-dashboards/model/ScheduledReportInput.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BCMDashboards {
namespace Model {

/**
 */
class CreateScheduledReportRequest : public BCMDashboardsRequest {
 public:
  AWS_BCMDASHBOARDS_API CreateScheduledReportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledReport"; }

  AWS_BCMDASHBOARDS_API Aws::String SerializePayload() const override;

  AWS_BCMDASHBOARDS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The configuration for the scheduled report, including the dashboard to report
   * on, the schedule, and the execution role that the service will use to generate
   * the dashboard snapshot.</p>
   */
  inline const ScheduledReportInput& GetScheduledReport() const { return m_scheduledReport; }
  inline bool ScheduledReportHasBeenSet() const { return m_scheduledReportHasBeenSet; }
  template <typename ScheduledReportT = ScheduledReportInput>
  void SetScheduledReport(ScheduledReportT&& value) {
    m_scheduledReportHasBeenSet = true;
    m_scheduledReport = std::forward<ScheduledReportT>(value);
  }
  template <typename ScheduledReportT = ScheduledReportInput>
  CreateScheduledReportRequest& WithScheduledReport(ScheduledReportT&& value) {
    SetScheduledReport(std::forward<ScheduledReportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the scheduled report resource for organization and
   * management.</p>
   */
  inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  CreateScheduledReportRequest& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = ResourceTag>
  CreateScheduledReportRequest& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateScheduledReportRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ScheduledReportInput m_scheduledReport;

  Aws::Vector<ResourceTag> m_resourceTags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_scheduledReportHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
