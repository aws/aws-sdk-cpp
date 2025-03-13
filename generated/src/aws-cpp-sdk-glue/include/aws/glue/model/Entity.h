/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An entity supported by a given <code>ConnectionType</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Entity">AWS API
   * Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_GLUE_API Entity() = default;
    AWS_GLUE_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    Entity& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Label used for the entity.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    Entity& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value which helps to determine whether there are sub objects that
     * can be listed.</p>
     */
    inline bool GetIsParentEntity() const { return m_isParentEntity; }
    inline bool IsParentEntityHasBeenSet() const { return m_isParentEntityHasBeenSet; }
    inline void SetIsParentEntity(bool value) { m_isParentEntityHasBeenSet = true; m_isParentEntity = value; }
    inline Entity& WithIsParentEntity(bool value) { SetIsParentEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Entity& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entities that are present in the response. This value depends on
     * the source connection. For example this is <code>SObjects</code> for Salesforce
     * and <code>databases</code> or <code>schemas</code> or <code>tables</code> for
     * sources like Amazon Redshift.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    Entity& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional map of keys which may be returned for an entity by a
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const { return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomProperties(CustomPropertiesT&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::forward<CustomPropertiesT>(value); }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    Entity& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    Entity& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_isParentEntity{false};
    bool m_isParentEntityHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
