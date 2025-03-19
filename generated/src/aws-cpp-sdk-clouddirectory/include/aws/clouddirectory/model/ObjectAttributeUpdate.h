/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/AttributeKey.h>
#include <aws/clouddirectory/model/ObjectAttributeAction.h>
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
   * <p>Structure that contains attribute update information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectAttributeUpdate">AWS
   * API Reference</a></p>
   */
  class ObjectAttributeUpdate
  {
  public:
    AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate() = default;
    AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline const AttributeKey& GetObjectAttributeKey() const { return m_objectAttributeKey; }
    inline bool ObjectAttributeKeyHasBeenSet() const { return m_objectAttributeKeyHasBeenSet; }
    template<typename ObjectAttributeKeyT = AttributeKey>
    void SetObjectAttributeKey(ObjectAttributeKeyT&& value) { m_objectAttributeKeyHasBeenSet = true; m_objectAttributeKey = std::forward<ObjectAttributeKeyT>(value); }
    template<typename ObjectAttributeKeyT = AttributeKey>
    ObjectAttributeUpdate& WithObjectAttributeKey(ObjectAttributeKeyT&& value) { SetObjectAttributeKey(std::forward<ObjectAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline const ObjectAttributeAction& GetObjectAttributeAction() const { return m_objectAttributeAction; }
    inline bool ObjectAttributeActionHasBeenSet() const { return m_objectAttributeActionHasBeenSet; }
    template<typename ObjectAttributeActionT = ObjectAttributeAction>
    void SetObjectAttributeAction(ObjectAttributeActionT&& value) { m_objectAttributeActionHasBeenSet = true; m_objectAttributeAction = std::forward<ObjectAttributeActionT>(value); }
    template<typename ObjectAttributeActionT = ObjectAttributeAction>
    ObjectAttributeUpdate& WithObjectAttributeAction(ObjectAttributeActionT&& value) { SetObjectAttributeAction(std::forward<ObjectAttributeActionT>(value)); return *this;}
    ///@}
  private:

    AttributeKey m_objectAttributeKey;
    bool m_objectAttributeKeyHasBeenSet = false;

    ObjectAttributeAction m_objectAttributeAction;
    bool m_objectAttributeActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
