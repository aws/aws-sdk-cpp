/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MLMemberAbilities.h>
#include <aws/cleanrooms/model/DataEncryptionMetadata.h>
#include <aws/cleanrooms/model/CollaborationQueryLogStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanrooms/model/PaymentConfiguration.h>
#include <aws/cleanrooms/model/AnalyticsEngine.h>
#include <aws/cleanrooms/model/MemberSpecification.h>
#include <aws/cleanrooms/model/MemberAbility.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateCollaborationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateCollaborationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCollaboration"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline const Aws::Vector<MemberSpecification>& GetMembers() const{ return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    inline void SetMembers(const Aws::Vector<MemberSpecification>& value) { m_membersHasBeenSet = true; m_members = value; }
    inline void SetMembers(Aws::Vector<MemberSpecification>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }
    inline CreateCollaborationRequest& WithMembers(const Aws::Vector<MemberSpecification>& value) { SetMembers(value); return *this;}
    inline CreateCollaborationRequest& WithMembers(Aws::Vector<MemberSpecification>&& value) { SetMembers(std::move(value)); return *this;}
    inline CreateCollaborationRequest& AddMembers(const MemberSpecification& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }
    inline CreateCollaborationRequest& AddMembers(MemberSpecification&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display name for a collaboration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCollaborationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCollaborationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCollaborationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCollaborationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCollaborationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCollaborationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetCreatorMemberAbilities() const{ return m_creatorMemberAbilities; }
    inline bool CreatorMemberAbilitiesHasBeenSet() const { return m_creatorMemberAbilitiesHasBeenSet; }
    inline void SetCreatorMemberAbilities(const Aws::Vector<MemberAbility>& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities = value; }
    inline void SetCreatorMemberAbilities(Aws::Vector<MemberAbility>&& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities = std::move(value); }
    inline CreateCollaborationRequest& WithCreatorMemberAbilities(const Aws::Vector<MemberAbility>& value) { SetCreatorMemberAbilities(value); return *this;}
    inline CreateCollaborationRequest& WithCreatorMemberAbilities(Aws::Vector<MemberAbility>&& value) { SetCreatorMemberAbilities(std::move(value)); return *this;}
    inline CreateCollaborationRequest& AddCreatorMemberAbilities(const MemberAbility& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities.push_back(value); return *this; }
    inline CreateCollaborationRequest& AddCreatorMemberAbilities(MemberAbility&& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ML abilities granted to the collaboration creator.</p> <p>Custom ML
     * modeling is in beta release and is subject to change. For beta terms and
     * conditions, see <i>Betas and Previews</i> in the <a
     * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a>.</p>
     */
    inline const MLMemberAbilities& GetCreatorMLMemberAbilities() const{ return m_creatorMLMemberAbilities; }
    inline bool CreatorMLMemberAbilitiesHasBeenSet() const { return m_creatorMLMemberAbilitiesHasBeenSet; }
    inline void SetCreatorMLMemberAbilities(const MLMemberAbilities& value) { m_creatorMLMemberAbilitiesHasBeenSet = true; m_creatorMLMemberAbilities = value; }
    inline void SetCreatorMLMemberAbilities(MLMemberAbilities&& value) { m_creatorMLMemberAbilitiesHasBeenSet = true; m_creatorMLMemberAbilities = std::move(value); }
    inline CreateCollaborationRequest& WithCreatorMLMemberAbilities(const MLMemberAbilities& value) { SetCreatorMLMemberAbilities(value); return *this;}
    inline CreateCollaborationRequest& WithCreatorMLMemberAbilities(MLMemberAbilities&& value) { SetCreatorMLMemberAbilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline const Aws::String& GetCreatorDisplayName() const{ return m_creatorDisplayName; }
    inline bool CreatorDisplayNameHasBeenSet() const { return m_creatorDisplayNameHasBeenSet; }
    inline void SetCreatorDisplayName(const Aws::String& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = value; }
    inline void SetCreatorDisplayName(Aws::String&& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = std::move(value); }
    inline void SetCreatorDisplayName(const char* value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName.assign(value); }
    inline CreateCollaborationRequest& WithCreatorDisplayName(const Aws::String& value) { SetCreatorDisplayName(value); return *this;}
    inline CreateCollaborationRequest& WithCreatorDisplayName(Aws::String&& value) { SetCreatorDisplayName(std::move(value)); return *this;}
    inline CreateCollaborationRequest& WithCreatorDisplayName(const char* value) { SetCreatorDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline const DataEncryptionMetadata& GetDataEncryptionMetadata() const{ return m_dataEncryptionMetadata; }
    inline bool DataEncryptionMetadataHasBeenSet() const { return m_dataEncryptionMetadataHasBeenSet; }
    inline void SetDataEncryptionMetadata(const DataEncryptionMetadata& value) { m_dataEncryptionMetadataHasBeenSet = true; m_dataEncryptionMetadata = value; }
    inline void SetDataEncryptionMetadata(DataEncryptionMetadata&& value) { m_dataEncryptionMetadataHasBeenSet = true; m_dataEncryptionMetadata = std::move(value); }
    inline CreateCollaborationRequest& WithDataEncryptionMetadata(const DataEncryptionMetadata& value) { SetDataEncryptionMetadata(value); return *this;}
    inline CreateCollaborationRequest& WithDataEncryptionMetadata(DataEncryptionMetadata&& value) { SetDataEncryptionMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline const CollaborationQueryLogStatus& GetQueryLogStatus() const{ return m_queryLogStatus; }
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }
    inline void SetQueryLogStatus(const CollaborationQueryLogStatus& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }
    inline void SetQueryLogStatus(CollaborationQueryLogStatus&& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = std::move(value); }
    inline CreateCollaborationRequest& WithQueryLogStatus(const CollaborationQueryLogStatus& value) { SetQueryLogStatus(value); return *this;}
    inline CreateCollaborationRequest& WithQueryLogStatus(CollaborationQueryLogStatus&& value) { SetQueryLogStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCollaborationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateCollaborationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCollaborationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateCollaborationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCollaborationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCollaborationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateCollaborationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCollaborationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCollaborationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline const PaymentConfiguration& GetCreatorPaymentConfiguration() const{ return m_creatorPaymentConfiguration; }
    inline bool CreatorPaymentConfigurationHasBeenSet() const { return m_creatorPaymentConfigurationHasBeenSet; }
    inline void SetCreatorPaymentConfiguration(const PaymentConfiguration& value) { m_creatorPaymentConfigurationHasBeenSet = true; m_creatorPaymentConfiguration = value; }
    inline void SetCreatorPaymentConfiguration(PaymentConfiguration&& value) { m_creatorPaymentConfigurationHasBeenSet = true; m_creatorPaymentConfiguration = std::move(value); }
    inline CreateCollaborationRequest& WithCreatorPaymentConfiguration(const PaymentConfiguration& value) { SetCreatorPaymentConfiguration(value); return *this;}
    inline CreateCollaborationRequest& WithCreatorPaymentConfiguration(PaymentConfiguration&& value) { SetCreatorPaymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The analytics engine.</p>
     */
    inline const AnalyticsEngine& GetAnalyticsEngine() const{ return m_analyticsEngine; }
    inline bool AnalyticsEngineHasBeenSet() const { return m_analyticsEngineHasBeenSet; }
    inline void SetAnalyticsEngine(const AnalyticsEngine& value) { m_analyticsEngineHasBeenSet = true; m_analyticsEngine = value; }
    inline void SetAnalyticsEngine(AnalyticsEngine&& value) { m_analyticsEngineHasBeenSet = true; m_analyticsEngine = std::move(value); }
    inline CreateCollaborationRequest& WithAnalyticsEngine(const AnalyticsEngine& value) { SetAnalyticsEngine(value); return *this;}
    inline CreateCollaborationRequest& WithAnalyticsEngine(AnalyticsEngine&& value) { SetAnalyticsEngine(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberSpecification> m_members;
    bool m_membersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<MemberAbility> m_creatorMemberAbilities;
    bool m_creatorMemberAbilitiesHasBeenSet = false;

    MLMemberAbilities m_creatorMLMemberAbilities;
    bool m_creatorMLMemberAbilitiesHasBeenSet = false;

    Aws::String m_creatorDisplayName;
    bool m_creatorDisplayNameHasBeenSet = false;

    DataEncryptionMetadata m_dataEncryptionMetadata;
    bool m_dataEncryptionMetadataHasBeenSet = false;

    CollaborationQueryLogStatus m_queryLogStatus;
    bool m_queryLogStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PaymentConfiguration m_creatorPaymentConfiguration;
    bool m_creatorPaymentConfigurationHasBeenSet = false;

    AnalyticsEngine m_analyticsEngine;
    bool m_analyticsEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
