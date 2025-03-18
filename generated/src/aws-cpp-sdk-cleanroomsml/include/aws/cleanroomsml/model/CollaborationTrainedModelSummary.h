﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainedModelStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides summary information about a trained model in a
   * collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CollaborationTrainedModelSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationTrainedModelSummary
  {
  public:
    AWS_CLEANROOMSML_API CollaborationTrainedModelSummary() = default;
    AWS_CLEANROOMSML_API CollaborationTrainedModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API CollaborationTrainedModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the trained model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CollaborationTrainedModelSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    CollaborationTrainedModelSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    CollaborationTrainedModelSummary& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CollaborationTrainedModelSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CollaborationTrainedModelSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CollaborationTrainedModelSummary& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the trained
     * model.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    CollaborationTrainedModelSummary& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model.</p>
     */
    inline TrainedModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TrainedModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CollaborationTrainedModelSummary& WithStatus(TrainedModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that is used for this trained model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
    inline bool ConfiguredModelAlgorithmAssociationArnHasBeenSet() const { return m_configuredModelAlgorithmAssociationArnHasBeenSet; }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    CollaborationTrainedModelSummary& WithConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    CollaborationTrainedModelSummary& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    TrainedModelStatus m_status{TrainedModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_configuredModelAlgorithmAssociationArn;
    bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
