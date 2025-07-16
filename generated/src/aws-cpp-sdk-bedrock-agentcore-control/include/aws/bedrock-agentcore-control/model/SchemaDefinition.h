/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SchemaType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>A schema definition for a gateway target. This structure defines the
   * structure of the API that the target exposes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SchemaDefinition">AWS
   * API Reference</a></p>
   */
  class SchemaDefinition
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API SchemaDefinition() = default;
    AWS_BEDROCKAGENTCORECONTROL_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the schema definition. This field specifies the data type of the
     * schema.</p>
     */
    inline SchemaType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SchemaType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SchemaDefinition& WithType(SchemaType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the schema definition. These properties define the fields
     * in the schema.</p>
     */
    inline const Aws::Map<Aws::String, SchemaDefinition>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, SchemaDefinition>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, SchemaDefinition>>
    SchemaDefinition& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = SchemaDefinition>
    SchemaDefinition& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The required fields in the schema definition. These fields must be provided
     * when using the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    template<typename RequiredT = Aws::Vector<Aws::String>>
    void SetRequired(RequiredT&& value) { m_requiredHasBeenSet = true; m_required = std::forward<RequiredT>(value); }
    template<typename RequiredT = Aws::Vector<Aws::String>>
    SchemaDefinition& WithRequired(RequiredT&& value) { SetRequired(std::forward<RequiredT>(value)); return *this;}
    template<typename RequiredT = Aws::String>
    SchemaDefinition& AddRequired(RequiredT&& value) { m_requiredHasBeenSet = true; m_required.emplace_back(std::forward<RequiredT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The items in the schema definition. This field is used for array types to
     * define the structure of the array elements.</p>
     */
    inline const SchemaDefinition& GetItems() const{
      return *m_items;
    }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = SchemaDefinition>
    void SetItems(ItemsT&& value) {
      m_itemsHasBeenSet = true; 
      m_items = Aws::MakeShared<SchemaDefinition>("SchemaDefinition", std::forward<ItemsT>(value));
    }
    template<typename ItemsT = SchemaDefinition>
    SchemaDefinition& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schema definition. This description provides
     * information about the purpose and usage of the schema.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SchemaDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    SchemaType m_type{SchemaType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, SchemaDefinition> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_required;
    bool m_requiredHasBeenSet = false;

    std::shared_ptr<SchemaDefinition> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
