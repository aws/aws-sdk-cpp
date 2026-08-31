/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ScheduleConfiguration.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class PutSegmentSubscriptionRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API PutSegmentSubscriptionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutSegmentSubscription"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  PutSegmentSubscriptionRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the segment definition. </p>
   */
  inline const Aws::String& GetSegmentDefinitionName() const { return m_segmentDefinitionName; }
  inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
  template <typename SegmentDefinitionNameT = Aws::String>
  void SetSegmentDefinitionName(SegmentDefinitionNameT&& value) {
    m_segmentDefinitionNameHasBeenSet = true;
    m_segmentDefinitionName = std::forward<SegmentDefinitionNameT>(value);
  }
  template <typename SegmentDefinitionNameT = Aws::String>
  PutSegmentSubscriptionRequest& WithSegmentDefinitionName(SegmentDefinitionNameT&& value) {
    SetSegmentDefinitionName(std::forward<SegmentDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional schedule configuration that controls how often membership
   * snapshots are run. If not provided, the subscription defaults to a 24-hour
   * interval. </p>
   */
  inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
  inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  void SetScheduleConfiguration(ScheduleConfigurationT&& value) {
    m_scheduleConfigurationHasBeenSet = true;
    m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value);
  }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  PutSegmentSubscriptionRequest& WithScheduleConfiguration(ScheduleConfigurationT&& value) {
    SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_segmentDefinitionName;

  ScheduleConfiguration m_scheduleConfiguration;
  bool m_domainNameHasBeenSet = false;
  bool m_segmentDefinitionNameHasBeenSet = false;
  bool m_scheduleConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
