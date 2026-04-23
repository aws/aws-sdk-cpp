/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The action to take on the object attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectAttributeAction">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API ObjectAttributeAction
  {
  public:
    ObjectAttributeAction();
    ObjectAttributeAction(Aws::Utils::Json::JsonView jsonValue);
    ObjectAttributeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline const UpdateActionType& GetObjectAttributeActionType() const{ return m_objectAttributeActionType; }

    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline bool ObjectAttributeActionTypeHasBeenSet() const { return m_objectAttributeActionTypeHasBeenSet; }

    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline void SetObjectAttributeActionType(const UpdateActionType& value) { m_objectAttributeActionTypeHasBeenSet = true; m_objectAttributeActionType = value; }

    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline void SetObjectAttributeActionType(UpdateActionType&& value) { m_objectAttributeActionTypeHasBeenSet = true; m_objectAttributeActionType = std::move(value); }

    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline ObjectAttributeAction& WithObjectAttributeActionType(const UpdateActionType& value) { SetObjectAttributeActionType(value); return *this;}

    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline ObjectAttributeAction& WithObjectAttributeActionType(UpdateActionType&& value) { SetObjectAttributeActionType(std::move(value)); return *this;}


    /**
     * <p>The value that you want to update to.</p>
     */
    inline const TypedAttributeValue& GetObjectAttributeUpdateValue() const{ return m_objectAttributeUpdateValue; }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline bool ObjectAttributeUpdateValueHasBeenSet() const { return m_objectAttributeUpdateValueHasBeenSet; }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline void SetObjectAttributeUpdateValue(const TypedAttributeValue& value) { m_objectAttributeUpdateValueHasBeenSet = true; m_objectAttributeUpdateValue = value; }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline void SetObjectAttributeUpdateValue(TypedAttributeValue&& value) { m_objectAttributeUpdateValueHasBeenSet = true; m_objectAttributeUpdateValue = std::move(value); }

    /**
     * <p>The value that you want to update to.</p>
     */
    inline ObjectAttributeAction& WithObjectAttributeUpdateValue(const TypedAttributeValue& value) { SetObjectAttributeUpdateValue(value); return *this;}

    /**
     * <p>The value that you want to update to.</p>
     */
    inline ObjectAttributeAction& WithObjectAttributeUpdateValue(TypedAttributeValue&& value) { SetObjectAttributeUpdateValue(std::move(value)); return *this;}

  private:

    UpdateActionType m_objectAttributeActionType;
    bool m_objectAttributeActionTypeHasBeenSet;

    TypedAttributeValue m_objectAttributeUpdateValue;
    bool m_objectAttributeUpdateValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
