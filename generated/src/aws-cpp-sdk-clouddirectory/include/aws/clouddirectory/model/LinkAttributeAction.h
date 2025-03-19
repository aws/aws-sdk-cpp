/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/UpdateActionType.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
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
   * <p>The action to take on a typed link attribute value. Updates are only
   * supported for attributes which don’t contribute to link identity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/LinkAttributeAction">AWS
   * API Reference</a></p>
   */
  class LinkAttributeAction
  {
  public:
    AWS_CLOUDDIRECTORY_API LinkAttributeAction() = default;
    AWS_CLOUDDIRECTORY_API LinkAttributeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API LinkAttributeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline UpdateActionType GetAttributeActionType() const { return m_attributeActionType; }
    inline bool AttributeActionTypeHasBeenSet() const { return m_attributeActionTypeHasBeenSet; }
    inline void SetAttributeActionType(UpdateActionType value) { m_attributeActionTypeHasBeenSet = true; m_attributeActionType = value; }
    inline LinkAttributeAction& WithAttributeActionType(UpdateActionType value) { SetAttributeActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you want to update to.</p>
     */
    inline const TypedAttributeValue& GetAttributeUpdateValue() const { return m_attributeUpdateValue; }
    inline bool AttributeUpdateValueHasBeenSet() const { return m_attributeUpdateValueHasBeenSet; }
    template<typename AttributeUpdateValueT = TypedAttributeValue>
    void SetAttributeUpdateValue(AttributeUpdateValueT&& value) { m_attributeUpdateValueHasBeenSet = true; m_attributeUpdateValue = std::forward<AttributeUpdateValueT>(value); }
    template<typename AttributeUpdateValueT = TypedAttributeValue>
    LinkAttributeAction& WithAttributeUpdateValue(AttributeUpdateValueT&& value) { SetAttributeUpdateValue(std::forward<AttributeUpdateValueT>(value)); return *this;}
    ///@}
  private:

    UpdateActionType m_attributeActionType{UpdateActionType::NOT_SET};
    bool m_attributeActionTypeHasBeenSet = false;

    TypedAttributeValue m_attributeUpdateValue;
    bool m_attributeUpdateValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
