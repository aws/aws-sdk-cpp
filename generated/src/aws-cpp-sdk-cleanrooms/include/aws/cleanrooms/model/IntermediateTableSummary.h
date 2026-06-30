/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableAnalysisRuleType.h>
#include <aws/cleanrooms/model/IntermediateTableStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains summary information about an intermediate table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableSummary">AWS
 * API Reference</a></p>
 */
class IntermediateTableSummary {
 public:
  AWS_CLEANROOMS_API IntermediateTableSummary() = default;
  AWS_CLEANROOMS_API IntermediateTableSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the intermediate table.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  IntermediateTableSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the intermediate table.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IntermediateTableSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the intermediate table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  IntermediateTableSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the intermediate table.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  IntermediateTableSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the membership that contains the
   * intermediate table.</p>
   */
  inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
  inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
  template <typename MembershipArnT = Aws::String>
  void SetMembershipArn(MembershipArnT&& value) {
    m_membershipArnHasBeenSet = true;
    m_membershipArn = std::forward<MembershipArnT>(value);
  }
  template <typename MembershipArnT = Aws::String>
  IntermediateTableSummary& WithMembershipArn(MembershipArnT&& value) {
    SetMembershipArn(std::forward<MembershipArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the membership that contains the intermediate
   * table.</p>
   */
  inline const Aws::String& GetMembershipId() const { return m_membershipId; }
  inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
  template <typename MembershipIdT = Aws::String>
  void SetMembershipId(MembershipIdT&& value) {
    m_membershipIdHasBeenSet = true;
    m_membershipId = std::forward<MembershipIdT>(value);
  }
  template <typename MembershipIdT = Aws::String>
  IntermediateTableSummary& WithMembershipId(MembershipIdT&& value) {
    SetMembershipId(std::forward<MembershipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the collaboration that contains the
   * intermediate table.</p>
   */
  inline const Aws::String& GetCollaborationArn() const { return m_collaborationArn; }
  inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
  template <typename CollaborationArnT = Aws::String>
  void SetCollaborationArn(CollaborationArnT&& value) {
    m_collaborationArnHasBeenSet = true;
    m_collaborationArn = std::forward<CollaborationArnT>(value);
  }
  template <typename CollaborationArnT = Aws::String>
  IntermediateTableSummary& WithCollaborationArn(CollaborationArnT&& value) {
    SetCollaborationArn(std::forward<CollaborationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the collaboration that contains the intermediate
   * table.</p>
   */
  inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
  inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
  template <typename CollaborationIdT = Aws::String>
  void SetCollaborationId(CollaborationIdT&& value) {
    m_collaborationIdHasBeenSet = true;
    m_collaborationId = std::forward<CollaborationIdT>(value);
  }
  template <typename CollaborationIdT = Aws::String>
  IntermediateTableSummary& WithCollaborationId(CollaborationIdT&& value) {
    SetCollaborationId(std::forward<CollaborationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the intermediate table was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  IntermediateTableSummary& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the intermediate table was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  IntermediateTableSummary& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the intermediate table.</p>
   */
  inline IntermediateTableStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IntermediateTableStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IntermediateTableSummary& WithStatus(IntermediateTableStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days that populated data is retained before expiring.</p>
   */
  inline int GetRetentionInDays() const { return m_retentionInDays; }
  inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }
  inline void SetRetentionInDays(int value) {
    m_retentionInDaysHasBeenSet = true;
    m_retentionInDays = value;
  }
  inline IntermediateTableSummary& WithRetentionInDays(int value) {
    SetRetentionInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of analysis rules associated with the intermediate table.</p>
   */
  inline const Aws::Vector<IntermediateTableAnalysisRuleType>& GetAnalysisRuleTypes() const { return m_analysisRuleTypes; }
  inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }
  template <typename AnalysisRuleTypesT = Aws::Vector<IntermediateTableAnalysisRuleType>>
  void SetAnalysisRuleTypes(AnalysisRuleTypesT&& value) {
    m_analysisRuleTypesHasBeenSet = true;
    m_analysisRuleTypes = std::forward<AnalysisRuleTypesT>(value);
  }
  template <typename AnalysisRuleTypesT = Aws::Vector<IntermediateTableAnalysisRuleType>>
  IntermediateTableSummary& WithAnalysisRuleTypes(AnalysisRuleTypesT&& value) {
    SetAnalysisRuleTypes(std::forward<AnalysisRuleTypesT>(value));
    return *this;
  }
  inline IntermediateTableSummary& AddAnalysisRuleTypes(IntermediateTableAnalysisRuleType value) {
    m_analysisRuleTypesHasBeenSet = true;
    m_analysisRuleTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_membershipArn;

  Aws::String m_membershipId;

  Aws::String m_collaborationArn;

  Aws::String m_collaborationId;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_updateTime{};

  IntermediateTableStatus m_status{IntermediateTableStatus::NOT_SET};

  int m_retentionInDays{0};

  Aws::Vector<IntermediateTableAnalysisRuleType> m_analysisRuleTypes;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_membershipArnHasBeenSet = false;
  bool m_membershipIdHasBeenSet = false;
  bool m_collaborationArnHasBeenSet = false;
  bool m_collaborationIdHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_retentionInDaysHasBeenSet = false;
  bool m_analysisRuleTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
