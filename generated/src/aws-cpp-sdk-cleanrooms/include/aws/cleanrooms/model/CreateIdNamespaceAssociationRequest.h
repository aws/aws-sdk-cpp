/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferenceConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanrooms/model/IdMappingConfig.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateIdNamespaceAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateIdNamespaceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIdNamespaceAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID namespace
     * association.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CreateIdNamespaceAssociationRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input reference configuration needed to create the ID namespace
     * association.</p>
     */
    inline const IdNamespaceAssociationInputReferenceConfig& GetInputReferenceConfig() const { return m_inputReferenceConfig; }
    inline bool InputReferenceConfigHasBeenSet() const { return m_inputReferenceConfigHasBeenSet; }
    template<typename InputReferenceConfigT = IdNamespaceAssociationInputReferenceConfig>
    void SetInputReferenceConfig(InputReferenceConfigT&& value) { m_inputReferenceConfigHasBeenSet = true; m_inputReferenceConfig = std::forward<InputReferenceConfigT>(value); }
    template<typename InputReferenceConfigT = IdNamespaceAssociationInputReferenceConfig>
    CreateIdNamespaceAssociationRequest& WithInputReferenceConfig(InputReferenceConfigT&& value) { SetInputReferenceConfig(std::forward<InputReferenceConfigT>(value)); return *this;}
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
    CreateIdNamespaceAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateIdNamespaceAssociationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name for the ID namespace association.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateIdNamespaceAssociationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ID namespace association.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateIdNamespaceAssociationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the ID mapping table.</p>
     */
    inline const IdMappingConfig& GetIdMappingConfig() const { return m_idMappingConfig; }
    inline bool IdMappingConfigHasBeenSet() const { return m_idMappingConfigHasBeenSet; }
    template<typename IdMappingConfigT = IdMappingConfig>
    void SetIdMappingConfig(IdMappingConfigT&& value) { m_idMappingConfigHasBeenSet = true; m_idMappingConfig = std::forward<IdMappingConfigT>(value); }
    template<typename IdMappingConfigT = IdMappingConfig>
    CreateIdNamespaceAssociationRequest& WithIdMappingConfig(IdMappingConfigT&& value) { SetIdMappingConfig(std::forward<IdMappingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    IdNamespaceAssociationInputReferenceConfig m_inputReferenceConfig;
    bool m_inputReferenceConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IdMappingConfig m_idMappingConfig;
    bool m_idMappingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
