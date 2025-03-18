/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/FacetAttribute.h>
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
   * <p>A structure that contains information used to update an
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/FacetAttributeUpdate">AWS
   * API Reference</a></p>
   */
  class FacetAttributeUpdate
  {
  public:
    AWS_CLOUDDIRECTORY_API FacetAttributeUpdate() = default;
    AWS_CLOUDDIRECTORY_API FacetAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API FacetAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute to update.</p>
     */
    inline const FacetAttribute& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = FacetAttribute>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = FacetAttribute>
    FacetAttributeUpdate& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when updating the attribute.</p>
     */
    inline UpdateActionType GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UpdateActionType value) { m_actionHasBeenSet = true; m_action = value; }
    inline FacetAttributeUpdate& WithAction(UpdateActionType value) { SetAction(value); return *this;}
    ///@}
  private:

    FacetAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    UpdateActionType m_action{UpdateActionType::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
