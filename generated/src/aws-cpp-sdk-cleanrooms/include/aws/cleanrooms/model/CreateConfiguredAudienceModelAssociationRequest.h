/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateConfiguredAudienceModelAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredAudienceModelAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredAudienceModelAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelAssociationName() const{ return m_configuredAudienceModelAssociationName; }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline bool ConfiguredAudienceModelAssociationNameHasBeenSet() const { return m_configuredAudienceModelAssociationNameHasBeenSet; }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelAssociationName(const Aws::String& value) { m_configuredAudienceModelAssociationNameHasBeenSet = true; m_configuredAudienceModelAssociationName = value; }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelAssociationName(Aws::String&& value) { m_configuredAudienceModelAssociationNameHasBeenSet = true; m_configuredAudienceModelAssociationName = std::move(value); }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelAssociationName(const char* value) { m_configuredAudienceModelAssociationNameHasBeenSet = true; m_configuredAudienceModelAssociationName.assign(value); }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationName(const Aws::String& value) { SetConfiguredAudienceModelAssociationName(value); return *this;}

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationName(Aws::String&& value) { SetConfiguredAudienceModelAssociationName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationName(const char* value) { SetConfiguredAudienceModelAssociationName(value); return *this;}


    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p> <p>Setting this to
     * <code>TRUE</code> requires you to have permissions to create, update, and delete
     * the resource policy for the <code>cleanrooms-ml</code> resource when you call
     * the <a>DeleteConfiguredAudienceModelAssociation</a> resource. In addition, if
     * you are the collaboration creator and specify <code>TRUE</code>, you must have
     * the same permissions when you call the <a>DeleteMember</a> and
     * <a>DeleteCollaboration</a> APIs.</p>
     */
    inline bool GetManageResourcePolicies() const{ return m_manageResourcePolicies; }

    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p> <p>Setting this to
     * <code>TRUE</code> requires you to have permissions to create, update, and delete
     * the resource policy for the <code>cleanrooms-ml</code> resource when you call
     * the <a>DeleteConfiguredAudienceModelAssociation</a> resource. In addition, if
     * you are the collaboration creator and specify <code>TRUE</code>, you must have
     * the same permissions when you call the <a>DeleteMember</a> and
     * <a>DeleteCollaboration</a> APIs.</p>
     */
    inline bool ManageResourcePoliciesHasBeenSet() const { return m_manageResourcePoliciesHasBeenSet; }

    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p> <p>Setting this to
     * <code>TRUE</code> requires you to have permissions to create, update, and delete
     * the resource policy for the <code>cleanrooms-ml</code> resource when you call
     * the <a>DeleteConfiguredAudienceModelAssociation</a> resource. In addition, if
     * you are the collaboration creator and specify <code>TRUE</code>, you must have
     * the same permissions when you call the <a>DeleteMember</a> and
     * <a>DeleteCollaboration</a> APIs.</p>
     */
    inline void SetManageResourcePolicies(bool value) { m_manageResourcePoliciesHasBeenSet = true; m_manageResourcePolicies = value; }

    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p> <p>Setting this to
     * <code>TRUE</code> requires you to have permissions to create, update, and delete
     * the resource policy for the <code>cleanrooms-ml</code> resource when you call
     * the <a>DeleteConfiguredAudienceModelAssociation</a> resource. In addition, if
     * you are the collaboration creator and specify <code>TRUE</code>, you must have
     * the same permissions when you call the <a>DeleteMember</a> and
     * <a>DeleteCollaboration</a> APIs.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithManageResourcePolicies(bool value) { SetManageResourcePolicies(value); return *this;}


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
    inline CreateConfiguredAudienceModelAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline CreateConfiguredAudienceModelAssociationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_configuredAudienceModelAssociationName;
    bool m_configuredAudienceModelAssociationNameHasBeenSet = false;

    bool m_manageResourcePolicies;
    bool m_manageResourcePoliciesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
