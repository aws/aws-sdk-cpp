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
    AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate();
    AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API ObjectAttributeUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline const AttributeKey& GetObjectAttributeKey() const{ return m_objectAttributeKey; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline bool ObjectAttributeKeyHasBeenSet() const { return m_objectAttributeKeyHasBeenSet; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline void SetObjectAttributeKey(const AttributeKey& value) { m_objectAttributeKeyHasBeenSet = true; m_objectAttributeKey = value; }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline void SetObjectAttributeKey(AttributeKey&& value) { m_objectAttributeKeyHasBeenSet = true; m_objectAttributeKey = std::move(value); }

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeKey(const AttributeKey& value) { SetObjectAttributeKey(value); return *this;}

    /**
     * <p>The key of the attribute being updated.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeKey(AttributeKey&& value) { SetObjectAttributeKey(std::move(value)); return *this;}


    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline const ObjectAttributeAction& GetObjectAttributeAction() const{ return m_objectAttributeAction; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline bool ObjectAttributeActionHasBeenSet() const { return m_objectAttributeActionHasBeenSet; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline void SetObjectAttributeAction(const ObjectAttributeAction& value) { m_objectAttributeActionHasBeenSet = true; m_objectAttributeAction = value; }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline void SetObjectAttributeAction(ObjectAttributeAction&& value) { m_objectAttributeActionHasBeenSet = true; m_objectAttributeAction = std::move(value); }

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeAction(const ObjectAttributeAction& value) { SetObjectAttributeAction(value); return *this;}

    /**
     * <p>The action to perform as part of the attribute update.</p>
     */
    inline ObjectAttributeUpdate& WithObjectAttributeAction(ObjectAttributeAction&& value) { SetObjectAttributeAction(std::move(value)); return *this;}

  private:

    AttributeKey m_objectAttributeKey;
    bool m_objectAttributeKeyHasBeenSet = false;

    ObjectAttributeAction m_objectAttributeAction;
    bool m_objectAttributeActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
