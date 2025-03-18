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
   * <p>The action to take on the object attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectAttributeAction">AWS
   * API Reference</a></p>
   */
  class ObjectAttributeAction
  {
  public:
    AWS_CLOUDDIRECTORY_API ObjectAttributeAction() = default;
    AWS_CLOUDDIRECTORY_API ObjectAttributeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API ObjectAttributeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A type that can be either <code>Update</code> or <code>Delete</code>.</p>
     */
    inline UpdateActionType GetObjectAttributeActionType() const { return m_objectAttributeActionType; }
    inline bool ObjectAttributeActionTypeHasBeenSet() const { return m_objectAttributeActionTypeHasBeenSet; }
    inline void SetObjectAttributeActionType(UpdateActionType value) { m_objectAttributeActionTypeHasBeenSet = true; m_objectAttributeActionType = value; }
    inline ObjectAttributeAction& WithObjectAttributeActionType(UpdateActionType value) { SetObjectAttributeActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you want to update to.</p>
     */
    inline const TypedAttributeValue& GetObjectAttributeUpdateValue() const { return m_objectAttributeUpdateValue; }
    inline bool ObjectAttributeUpdateValueHasBeenSet() const { return m_objectAttributeUpdateValueHasBeenSet; }
    template<typename ObjectAttributeUpdateValueT = TypedAttributeValue>
    void SetObjectAttributeUpdateValue(ObjectAttributeUpdateValueT&& value) { m_objectAttributeUpdateValueHasBeenSet = true; m_objectAttributeUpdateValue = std::forward<ObjectAttributeUpdateValueT>(value); }
    template<typename ObjectAttributeUpdateValueT = TypedAttributeValue>
    ObjectAttributeAction& WithObjectAttributeUpdateValue(ObjectAttributeUpdateValueT&& value) { SetObjectAttributeUpdateValue(std::forward<ObjectAttributeUpdateValueT>(value)); return *this;}
    ///@}
  private:

    UpdateActionType m_objectAttributeActionType{UpdateActionType::NOT_SET};
    bool m_objectAttributeActionTypeHasBeenSet = false;

    TypedAttributeValue m_objectAttributeUpdateValue;
    bool m_objectAttributeUpdateValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
