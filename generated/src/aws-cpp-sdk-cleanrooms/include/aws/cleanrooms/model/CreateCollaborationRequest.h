/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/DataEncryptionMetadata.h>
#include <aws/cleanrooms/model/CollaborationQueryLogStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanrooms/model/PaymentConfiguration.h>
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


    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline const Aws::Vector<MemberSpecification>& GetMembers() const{ return m_members; }

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline void SetMembers(const Aws::Vector<MemberSpecification>& value) { m_membersHasBeenSet = true; m_members = value; }

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline void SetMembers(Aws::Vector<MemberSpecification>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline CreateCollaborationRequest& WithMembers(const Aws::Vector<MemberSpecification>& value) { SetMembers(value); return *this;}

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline CreateCollaborationRequest& WithMembers(Aws::Vector<MemberSpecification>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline CreateCollaborationRequest& AddMembers(const MemberSpecification& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }

    /**
     * <p>A list of initial members, not including the creator. This list is
     * immutable.</p>
     */
    inline CreateCollaborationRequest& AddMembers(MemberSpecification&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The display name for a collaboration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline CreateCollaborationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline CreateCollaborationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name for a collaboration.</p>
     */
    inline CreateCollaborationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline CreateCollaborationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline CreateCollaborationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the collaboration provided by the collaboration owner.</p>
     */
    inline CreateCollaborationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetCreatorMemberAbilities() const{ return m_creatorMemberAbilities; }

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline bool CreatorMemberAbilitiesHasBeenSet() const { return m_creatorMemberAbilitiesHasBeenSet; }

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline void SetCreatorMemberAbilities(const Aws::Vector<MemberAbility>& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities = value; }

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline void SetCreatorMemberAbilities(Aws::Vector<MemberAbility>&& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities = std::move(value); }

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& WithCreatorMemberAbilities(const Aws::Vector<MemberAbility>& value) { SetCreatorMemberAbilities(value); return *this;}

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& WithCreatorMemberAbilities(Aws::Vector<MemberAbility>&& value) { SetCreatorMemberAbilities(std::move(value)); return *this;}

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& AddCreatorMemberAbilities(const MemberAbility& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities.push_back(value); return *this; }

    /**
     * <p>The abilities granted to the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& AddCreatorMemberAbilities(MemberAbility&& value) { m_creatorMemberAbilitiesHasBeenSet = true; m_creatorMemberAbilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline const Aws::String& GetCreatorDisplayName() const{ return m_creatorDisplayName; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline bool CreatorDisplayNameHasBeenSet() const { return m_creatorDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCreatorDisplayName(const Aws::String& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = value; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCreatorDisplayName(Aws::String&& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = std::move(value); }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCreatorDisplayName(const char* value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName.assign(value); }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& WithCreatorDisplayName(const Aws::String& value) { SetCreatorDisplayName(value); return *this;}

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& WithCreatorDisplayName(Aws::String&& value) { SetCreatorDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline CreateCollaborationRequest& WithCreatorDisplayName(const char* value) { SetCreatorDisplayName(value); return *this;}


    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline const DataEncryptionMetadata& GetDataEncryptionMetadata() const{ return m_dataEncryptionMetadata; }

    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline bool DataEncryptionMetadataHasBeenSet() const { return m_dataEncryptionMetadataHasBeenSet; }

    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline void SetDataEncryptionMetadata(const DataEncryptionMetadata& value) { m_dataEncryptionMetadataHasBeenSet = true; m_dataEncryptionMetadata = value; }

    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline void SetDataEncryptionMetadata(DataEncryptionMetadata&& value) { m_dataEncryptionMetadataHasBeenSet = true; m_dataEncryptionMetadata = std::move(value); }

    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline CreateCollaborationRequest& WithDataEncryptionMetadata(const DataEncryptionMetadata& value) { SetDataEncryptionMetadata(value); return *this;}

    /**
     * <p>The settings for client-side encryption with Cryptographic Computing for
     * Clean Rooms.</p>
     */
    inline CreateCollaborationRequest& WithDataEncryptionMetadata(DataEncryptionMetadata&& value) { SetDataEncryptionMetadata(std::move(value)); return *this;}


    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline const CollaborationQueryLogStatus& GetQueryLogStatus() const{ return m_queryLogStatus; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline void SetQueryLogStatus(const CollaborationQueryLogStatus& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline void SetQueryLogStatus(CollaborationQueryLogStatus&& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = std::move(value); }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline CreateCollaborationRequest& WithQueryLogStatus(const CollaborationQueryLogStatus& value) { SetQueryLogStatus(value); return *this;}

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline CreateCollaborationRequest& WithQueryLogStatus(CollaborationQueryLogStatus&& value) { SetQueryLogStatus(std::move(value)); return *this;}


    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateCollaborationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline const PaymentConfiguration& GetCreatorPaymentConfiguration() const{ return m_creatorPaymentConfiguration; }

    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline bool CreatorPaymentConfigurationHasBeenSet() const { return m_creatorPaymentConfigurationHasBeenSet; }

    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline void SetCreatorPaymentConfiguration(const PaymentConfiguration& value) { m_creatorPaymentConfigurationHasBeenSet = true; m_creatorPaymentConfiguration = value; }

    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline void SetCreatorPaymentConfiguration(PaymentConfiguration&& value) { m_creatorPaymentConfigurationHasBeenSet = true; m_creatorPaymentConfiguration = std::move(value); }

    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline CreateCollaborationRequest& WithCreatorPaymentConfiguration(const PaymentConfiguration& value) { SetCreatorPaymentConfiguration(value); return *this;}

    /**
     * <p>The collaboration creator's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't specified anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline CreateCollaborationRequest& WithCreatorPaymentConfiguration(PaymentConfiguration&& value) { SetCreatorPaymentConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<MemberSpecification> m_members;
    bool m_membersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<MemberAbility> m_creatorMemberAbilities;
    bool m_creatorMemberAbilitiesHasBeenSet = false;

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
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
