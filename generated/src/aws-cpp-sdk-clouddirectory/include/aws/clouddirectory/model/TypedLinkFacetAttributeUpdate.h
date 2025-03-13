/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/TypedLinkAttributeDefinition.h>
#include <aws/clouddirectory/model/UpdateActionType.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A typed link facet attribute update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkFacetAttributeUpdate">AWS
   * API Reference</a></p>
   */
  class TypedLinkFacetAttributeUpdate
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedLinkFacetAttributeUpdate() = default;
    AWS_CLOUDDIRECTORY_API TypedLinkFacetAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkFacetAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute to update.</p>
     */
    inline const TypedLinkAttributeDefinition& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = TypedLinkAttributeDefinition>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = TypedLinkAttributeDefinition>
    TypedLinkFacetAttributeUpdate& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline UpdateActionType GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UpdateActionType value) { m_actionHasBeenSet = true; m_action = value; }
    inline TypedLinkFacetAttributeUpdate& WithAction(UpdateActionType value) { SetAction(value); return *this;}
    ///@}
  private:

    TypedLinkAttributeDefinition m_attribute;
    bool m_attributeHasBeenSet = false;

    UpdateActionType m_action{UpdateActionType::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
