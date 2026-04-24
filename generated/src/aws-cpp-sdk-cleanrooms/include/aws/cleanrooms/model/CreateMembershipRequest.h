/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MembershipJobLogStatus.h>
#include <aws/cleanrooms/model/MembershipPaymentConfiguration.h>
#include <aws/cleanrooms/model/MembershipProtectedJobResultConfiguration.h>
#include <aws/cleanrooms/model/MembershipProtectedQueryResultConfiguration.h>
#include <aws/cleanrooms/model/MembershipQueryLogStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class CreateMembershipRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API CreateMembershipRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMembership"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique ID for the associated collaboration.</p>
   */
  inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
  inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
  template <typename CollaborationIdentifierT = Aws::String>
  void SetCollaborationIdentifier(CollaborationIdentifierT&& value) {
    m_collaborationIdentifierHasBeenSet = true;
    m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value);
  }
  template <typename CollaborationIdentifierT = Aws::String>
  CreateMembershipRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) {
    SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An indicator as to whether query logging has been enabled or disabled for the
   * membership.</p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
   * queries run within this collaboration and those logs can be viewed in Amazon
   * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
   */
  inline MembershipQueryLogStatus GetQueryLogStatus() const { return m_queryLogStatus; }
  inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }
  inline void SetQueryLogStatus(MembershipQueryLogStatus value) {
    m_queryLogStatusHasBeenSet = true;
    m_queryLogStatus = value;
  }
  inline CreateMembershipRequest& WithQueryLogStatus(MembershipQueryLogStatus value) {
    SetQueryLogStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An indicator as to whether job logging has been enabled or disabled for the
   * collaboration. </p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
   * jobs run within this collaboration and those logs can be viewed in Amazon
   * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
   */
  inline MembershipJobLogStatus GetJobLogStatus() const { return m_jobLogStatus; }
  inline bool JobLogStatusHasBeenSet() const { return m_jobLogStatusHasBeenSet; }
  inline void SetJobLogStatus(MembershipJobLogStatus value) {
    m_jobLogStatusHasBeenSet = true;
    m_jobLogStatus = value;
  }
  inline CreateMembershipRequest& WithJobLogStatus(MembershipJobLogStatus value) {
    SetJobLogStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional label that you can assign to a resource when you create it. Each
   * tag consists of a key and an optional value, both of which you define. When you
   * use tagging, you can also use tag-based access control in IAM policies to
   * control access to this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateMembershipRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateMembershipRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default protected query result configuration as specified by the member
   * who can receive results.</p>
   */
  inline const MembershipProtectedQueryResultConfiguration& GetDefaultResultConfiguration() const { return m_defaultResultConfiguration; }
  inline bool DefaultResultConfigurationHasBeenSet() const { return m_defaultResultConfigurationHasBeenSet; }
  template <typename DefaultResultConfigurationT = MembershipProtectedQueryResultConfiguration>
  void SetDefaultResultConfiguration(DefaultResultConfigurationT&& value) {
    m_defaultResultConfigurationHasBeenSet = true;
    m_defaultResultConfiguration = std::forward<DefaultResultConfigurationT>(value);
  }
  template <typename DefaultResultConfigurationT = MembershipProtectedQueryResultConfiguration>
  CreateMembershipRequest& WithDefaultResultConfiguration(DefaultResultConfigurationT&& value) {
    SetDefaultResultConfiguration(std::forward<DefaultResultConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default job result configuration that determines how job results are
   * protected and managed within this membership. This configuration applies to all
   * jobs.</p>
   */
  inline const MembershipProtectedJobResultConfiguration& GetDefaultJobResultConfiguration() const {
    return m_defaultJobResultConfiguration;
  }
  inline bool DefaultJobResultConfigurationHasBeenSet() const { return m_defaultJobResultConfigurationHasBeenSet; }
  template <typename DefaultJobResultConfigurationT = MembershipProtectedJobResultConfiguration>
  void SetDefaultJobResultConfiguration(DefaultJobResultConfigurationT&& value) {
    m_defaultJobResultConfigurationHasBeenSet = true;
    m_defaultJobResultConfiguration = std::forward<DefaultJobResultConfigurationT>(value);
  }
  template <typename DefaultJobResultConfigurationT = MembershipProtectedJobResultConfiguration>
  CreateMembershipRequest& WithDefaultJobResultConfiguration(DefaultJobResultConfigurationT&& value) {
    SetDefaultJobResultConfiguration(std::forward<DefaultJobResultConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
   * required if the collaboration member has the member ability to run queries. </p>
   * <p>Required if the collaboration member doesn't have the member ability to run
   * queries but is configured as a payer by the collaboration creator. </p>
   */
  inline const MembershipPaymentConfiguration& GetPaymentConfiguration() const { return m_paymentConfiguration; }
  inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }
  template <typename PaymentConfigurationT = MembershipPaymentConfiguration>
  void SetPaymentConfiguration(PaymentConfigurationT&& value) {
    m_paymentConfigurationHasBeenSet = true;
    m_paymentConfiguration = std::forward<PaymentConfigurationT>(value);
  }
  template <typename PaymentConfigurationT = MembershipPaymentConfiguration>
  CreateMembershipRequest& WithPaymentConfiguration(PaymentConfigurationT&& value) {
    SetPaymentConfiguration(std::forward<PaymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An indicator as to whether Amazon CloudWatch metrics have been enabled or
   * disabled for the membership.</p> <p>Amazon CloudWatch metrics are only available
   * when the collaboration has metrics enabled. This option can be set by
   * collaboration members who have the ability to run queries (analysis runners) or
   * by members who are configured as payers.</p> <p>When <code>true</code>, metrics
   * about query execution are collected in Amazon CloudWatch. The default value is
   * <code>false</code>.</p>
   */
  inline bool GetIsMetricsEnabled() const { return m_isMetricsEnabled; }
  inline bool IsMetricsEnabledHasBeenSet() const { return m_isMetricsEnabledHasBeenSet; }
  inline void SetIsMetricsEnabled(bool value) {
    m_isMetricsEnabledHasBeenSet = true;
    m_isMetricsEnabled = value;
  }
  inline CreateMembershipRequest& WithIsMetricsEnabled(bool value) {
    SetIsMetricsEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_collaborationIdentifier;

  MembershipQueryLogStatus m_queryLogStatus{MembershipQueryLogStatus::NOT_SET};

  MembershipJobLogStatus m_jobLogStatus{MembershipJobLogStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  MembershipProtectedQueryResultConfiguration m_defaultResultConfiguration;

  MembershipProtectedJobResultConfiguration m_defaultJobResultConfiguration;

  MembershipPaymentConfiguration m_paymentConfiguration;

  bool m_isMetricsEnabled{false};
  bool m_collaborationIdentifierHasBeenSet = false;
  bool m_queryLogStatusHasBeenSet = false;
  bool m_jobLogStatusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_defaultResultConfigurationHasBeenSet = false;
  bool m_defaultJobResultConfigurationHasBeenSet = false;
  bool m_paymentConfigurationHasBeenSet = false;
  bool m_isMetricsEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
