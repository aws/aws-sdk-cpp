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
  class CreateConfiguredTableAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredTableAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured table association. This name is used to query the
     * underlying configured table.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the configured table association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the configured table association.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the configured table association.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the configured table association.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the configured table association.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the configured table association.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the configured table association.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the configured table association.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured table is associated to the collaboration that this membership belongs
     * to. Currently accepts a membership ID.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const{ return m_configuredTableIdentifier; }

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(const Aws::String& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = value; }

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(Aws::String&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(const char* value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithConfiguredTableIdentifier(const Aws::String& value) { SetConfiguredTableIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithConfiguredTableIdentifier(Aws::String&& value) { SetConfiguredTableIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the configured table to be associated to. Currently
     * accepts a configured table ID.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithConfiguredTableIdentifier(const char* value) { SetConfiguredTableIdentifier(value); return *this;}


    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline CreateConfiguredTableAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
