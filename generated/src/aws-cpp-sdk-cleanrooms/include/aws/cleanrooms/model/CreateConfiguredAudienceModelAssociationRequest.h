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
    AWS_CLEANROOMS_API CreateConfiguredAudienceModelAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredAudienceModelAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * configured audience model is associated to the collaboration that this
     * membership belongs to. Accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CreateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the configured audience model that you want to
     * associate.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const { return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    void SetConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::forward<ConfiguredAudienceModelArnT>(value); }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { SetConfiguredAudienceModelArn(std::forward<ConfiguredAudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelAssociationName() const { return m_configuredAudienceModelAssociationName; }
    inline bool ConfiguredAudienceModelAssociationNameHasBeenSet() const { return m_configuredAudienceModelAssociationNameHasBeenSet; }
    template<typename ConfiguredAudienceModelAssociationNameT = Aws::String>
    void SetConfiguredAudienceModelAssociationName(ConfiguredAudienceModelAssociationNameT&& value) { m_configuredAudienceModelAssociationNameHasBeenSet = true; m_configuredAudienceModelAssociationName = std::forward<ConfiguredAudienceModelAssociationNameT>(value); }
    template<typename ConfiguredAudienceModelAssociationNameT = Aws::String>
    CreateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationName(ConfiguredAudienceModelAssociationNameT&& value) { SetConfiguredAudienceModelAssociationName(std::forward<ConfiguredAudienceModelAssociationNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetManageResourcePolicies() const { return m_manageResourcePolicies; }
    inline bool ManageResourcePoliciesHasBeenSet() const { return m_manageResourcePoliciesHasBeenSet; }
    inline void SetManageResourcePolicies(bool value) { m_manageResourcePoliciesHasBeenSet = true; m_manageResourcePolicies = value; }
    inline CreateConfiguredAudienceModelAssociationRequest& WithManageResourcePolicies(bool value) { SetManageResourcePolicies(value); return *this;}
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
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConfiguredAudienceModelAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConfiguredAudienceModelAssociationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A description of the configured audience model association.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConfiguredAudienceModelAssociationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_configuredAudienceModelAssociationName;
    bool m_configuredAudienceModelAssociationNameHasBeenSet = false;

    bool m_manageResourcePolicies{false};
    bool m_manageResourcePoliciesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
