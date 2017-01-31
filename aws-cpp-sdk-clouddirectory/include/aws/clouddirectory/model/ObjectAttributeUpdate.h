/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/AttributeKey.h>
#include <aws/clouddirectory/model/ObjectAttributeAction.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Structure that contains attribute update information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/ObjectAttributeUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate
  {
  public:
    ObjectAttributeUpdate();
    ObjectAttributeUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    ObjectAttributeUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline const AttributeKey& GetObjectAttributeKey() const{ return m_objectAttributeKey; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline void SetObjectAttributeKey(const AttributeKey& value) { m_objectAttributeKeyHasBeenSet = true; m_objectAttributeKey = value; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline void SetObjectAttributeKey(AttributeKey&& value) { m_objectAttributeKeyHasBeenSet = true; m_objectAttributeKey = value; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeKey(const AttributeKey& value) { SetObjectAttributeKey(value); return *this;}

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeKey(AttributeKey&& value) { SetObjectAttributeKey(value); return *this;}

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline const ObjectAttributeAction& GetObjectAttributeAction() const{ return m_objectAttributeAction; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline void SetObjectAttributeAction(const ObjectAttributeAction& value) { m_objectAttributeActionHasBeenSet = true; m_objectAttributeAction = value; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline void SetObjectAttributeAction(ObjectAttributeAction&& value) { m_objectAttributeActionHasBeenSet = true; m_objectAttributeAction = value; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeAction(const ObjectAttributeAction& value) { SetObjectAttributeAction(value); return *this;}

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeAction(ObjectAttributeAction&& value) { SetObjectAttributeAction(value); return *this;}

  private:
    AttributeKey m_objectAttributeKey;
    bool m_objectAttributeKeyHasBeenSet;
    ObjectAttributeAction m_objectAttributeAction;
    bool m_objectAttributeActionHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
