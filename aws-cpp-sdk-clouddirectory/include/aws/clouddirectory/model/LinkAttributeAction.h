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
    AWS_CLOUDDIRECTORY_API LinkAttributeAction();
    AWS_CLOUDDIRECTORY_API LinkAttributeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API LinkAttributeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline const UpdateActionType& GetAttributeActionType() const{ return m_attributeActionType; }

    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline bool AttributeActionTypeHasBeenSet() const { return m_attributeActionTypeHasBeenSet; }

    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline void SetAttributeActionType(const UpdateActionType& value) { m_attributeActionTypeHasBeenSet = true; m_attributeActionType = value; }

    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline void SetAttributeActionType(UpdateActionType&& value) { m_attributeActionTypeHasBeenSet = true; m_attributeActionType = std::move(value); }

    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline LinkAttributeAction& WithAttributeActionType(const UpdateActionType& value) { SetAttributeActionType(value); return *this;}

    /**
     * <p>A type that can be either <code>UPDATE_OR_CREATE</code> or
     * <code>DELETE</code>.</p>
     */
    inline LinkAttributeAction& WithAttributeActionType(UpdateActionType&& value) { SetAttributeActionType(std::move(value)); return *this;}


    /**
     * <p>The value that you want to update to.</p>
     */
    inline const TypedAttributeValue& GetAttributeUpdateValue() const{ return m_attributeUpdateValue; }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline bool AttributeUpdateValueHasBeenSet() const { return m_attributeUpdateValueHasBeenSet; }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline void SetAttributeUpdateValue(const TypedAttributeValue& value) { m_attributeUpdateValueHasBeenSet = true; m_attributeUpdateValue = value; }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline void SetAttributeUpdateValue(TypedAttributeValue&& value) { m_attributeUpdateValueHasBeenSet = true; m_attributeUpdateValue = std::move(value); }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline LinkAttributeAction& WithAttributeUpdateValue(const TypedAttributeValue& value) { SetAttributeUpdateValue(value); return *this;}

    /**
     * <p>The value that you want to update to.</p>
     */
    inline LinkAttributeAction& WithAttributeUpdateValue(TypedAttributeValue&& value) { SetAttributeUpdateValue(std::move(value)); return *this;}

  private:

    UpdateActionType m_attributeActionType;
    bool m_attributeActionTypeHasBeenSet = false;

    TypedAttributeValue m_attributeUpdateValue;
    bool m_attributeUpdateValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
