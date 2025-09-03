/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/MemberStatus.h>
#include <aws/cleanrooms/model/DataEncryptionMetadata.h>
#include <aws/cleanrooms/model/CollaborationQueryLogStatus.h>
#include <aws/cleanrooms/model/CollaborationJobLogStatus.h>
#include <aws/cleanrooms/model/AnalyticsEngine.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AutoApprovedChangeType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The multi-party data share environment. The collaboration contains metadata
   * about its purpose and participants.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/Collaboration">AWS
   * API Reference</a></p>
   */
  class Collaboration
  {
  public:
    AWS_CLEANROOMS_API Collaboration() = default;
    AWS_CLEANROOMS_API Collaboration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Collaboration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the collaboration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Collaboration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the collaboration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Collaboration& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Collaboration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Collaboration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    Collaboration& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name of the collaboration creator.</p>
     */
    inline const Aws::String& GetCreatorDisplayName() const { return m_creatorDisplayName; }
    inline bool CreatorDisplayNameHasBeenSet() const { return m_creatorDisplayNameHasBeenSet; }
    template<typename CreatorDisplayNameT = Aws::String>
    void SetCreatorDisplayName(CreatorDisplayNameT&& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = std::forward<CreatorDisplayNameT>(value); }
    template<typename CreatorDisplayNameT = Aws::String>
    Collaboration& WithCreatorDisplayName(CreatorDisplayNameT&& value) { SetCreatorDisplayName(std::forward<CreatorDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Collaboration& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Collaboration& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline MemberStatus GetMemberStatus() const { return m_memberStatus; }
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }
    inline void SetMemberStatus(MemberStatus value) { m_memberStatusHasBeenSet = true; m_memberStatus = value; }
    inline Collaboration& WithMemberStatus(MemberStatus value) { SetMemberStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for your membership within the collaboration.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    Collaboration& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for your membership within the collaboration.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    Collaboration& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for client-side encryption for cryptographic computing.</p>
     */
    inline const DataEncryptionMetadata& GetDataEncryptionMetadata() const { return m_dataEncryptionMetadata; }
    inline bool DataEncryptionMetadataHasBeenSet() const { return m_dataEncryptionMetadataHasBeenSet; }
    template<typename DataEncryptionMetadataT = DataEncryptionMetadata>
    void SetDataEncryptionMetadata(DataEncryptionMetadataT&& value) { m_dataEncryptionMetadataHasBeenSet = true; m_dataEncryptionMetadata = std::forward<DataEncryptionMetadataT>(value); }
    template<typename DataEncryptionMetadataT = DataEncryptionMetadata>
    Collaboration& WithDataEncryptionMetadata(DataEncryptionMetadataT&& value) { SetDataEncryptionMetadata(std::forward<DataEncryptionMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
     * queries run within this collaboration and those logs can be viewed in Amazon
     * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
     */
    inline CollaborationQueryLogStatus GetQueryLogStatus() const { return m_queryLogStatus; }
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }
    inline void SetQueryLogStatus(CollaborationQueryLogStatus value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }
    inline Collaboration& WithQueryLogStatus(CollaborationQueryLogStatus value) { SetQueryLogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator as to whether job logging has been enabled or disabled for the
     * collaboration. </p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
     * jobs run within this collaboration and those logs can be viewed in Amazon
     * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
     */
    inline CollaborationJobLogStatus GetJobLogStatus() const { return m_jobLogStatus; }
    inline bool JobLogStatusHasBeenSet() const { return m_jobLogStatusHasBeenSet; }
    inline void SetJobLogStatus(CollaborationJobLogStatus value) { m_jobLogStatusHasBeenSet = true; m_jobLogStatus = value; }
    inline Collaboration& WithJobLogStatus(CollaborationJobLogStatus value) { SetJobLogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The analytics engine for the collaboration.</p>  <p>After July 16,
     * 2025, the <code>CLEAN_ROOMS_SQL</code> parameter will no longer be available.
     * </p> 
     */
    inline AnalyticsEngine GetAnalyticsEngine() const { return m_analyticsEngine; }
    inline bool AnalyticsEngineHasBeenSet() const { return m_analyticsEngineHasBeenSet; }
    inline void SetAnalyticsEngine(AnalyticsEngine value) { m_analyticsEngineHasBeenSet = true; m_analyticsEngine = value; }
    inline Collaboration& WithAnalyticsEngine(AnalyticsEngine value) { SetAnalyticsEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of change requests that are automatically approved for this
     * collaboration.</p>
     */
    inline const Aws::Vector<AutoApprovedChangeType>& GetAutoApprovedChangeTypes() const { return m_autoApprovedChangeTypes; }
    inline bool AutoApprovedChangeTypesHasBeenSet() const { return m_autoApprovedChangeTypesHasBeenSet; }
    template<typename AutoApprovedChangeTypesT = Aws::Vector<AutoApprovedChangeType>>
    void SetAutoApprovedChangeTypes(AutoApprovedChangeTypesT&& value) { m_autoApprovedChangeTypesHasBeenSet = true; m_autoApprovedChangeTypes = std::forward<AutoApprovedChangeTypesT>(value); }
    template<typename AutoApprovedChangeTypesT = Aws::Vector<AutoApprovedChangeType>>
    Collaboration& WithAutoApprovedChangeTypes(AutoApprovedChangeTypesT&& value) { SetAutoApprovedChangeTypes(std::forward<AutoApprovedChangeTypesT>(value)); return *this;}
    inline Collaboration& AddAutoApprovedChangeTypes(AutoApprovedChangeType value) { m_autoApprovedChangeTypesHasBeenSet = true; m_autoApprovedChangeTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::String m_creatorDisplayName;
    bool m_creatorDisplayNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    MemberStatus m_memberStatus{MemberStatus::NOT_SET};
    bool m_memberStatusHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    DataEncryptionMetadata m_dataEncryptionMetadata;
    bool m_dataEncryptionMetadataHasBeenSet = false;

    CollaborationQueryLogStatus m_queryLogStatus{CollaborationQueryLogStatus::NOT_SET};
    bool m_queryLogStatusHasBeenSet = false;

    CollaborationJobLogStatus m_jobLogStatus{CollaborationJobLogStatus::NOT_SET};
    bool m_jobLogStatusHasBeenSet = false;

    AnalyticsEngine m_analyticsEngine{AnalyticsEngine::NOT_SET};
    bool m_analyticsEngineHasBeenSet = false;

    Aws::Vector<AutoApprovedChangeType> m_autoApprovedChangeTypes;
    bool m_autoApprovedChangeTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
