/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/CapabilityType.h>
#include <aws/b2bi/model/CapabilityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/b2bi/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class CreateCapabilityRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API CreateCapabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapability"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the capability, used to identify it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCapabilityRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline CapabilityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CapabilityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateCapabilityRequest& WithType(CapabilityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline const CapabilityConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = CapabilityConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CapabilityConfiguration>
    CreateCapabilityRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline const Aws::Vector<S3Location>& GetInstructionsDocuments() const { return m_instructionsDocuments; }
    inline bool InstructionsDocumentsHasBeenSet() const { return m_instructionsDocumentsHasBeenSet; }
    template<typename InstructionsDocumentsT = Aws::Vector<S3Location>>
    void SetInstructionsDocuments(InstructionsDocumentsT&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = std::forward<InstructionsDocumentsT>(value); }
    template<typename InstructionsDocumentsT = Aws::Vector<S3Location>>
    CreateCapabilityRequest& WithInstructionsDocuments(InstructionsDocumentsT&& value) { SetInstructionsDocuments(std::forward<InstructionsDocumentsT>(value)); return *this;}
    template<typename InstructionsDocumentsT = S3Location>
    CreateCapabilityRequest& AddInstructionsDocuments(InstructionsDocumentsT&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.emplace_back(std::forward<InstructionsDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCapabilityRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCapabilityRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCapabilityRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapabilityType m_type{CapabilityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CapabilityConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<S3Location> m_instructionsDocuments;
    bool m_instructionsDocumentsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
