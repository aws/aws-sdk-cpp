/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>A value that associates a component and an entity.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/RelationshipValue">AWS
   * API Reference</a></p>
   */
  class RelationshipValue
  {
  public:
    AWS_IOTTWINMAKER_API RelationshipValue();
    AWS_IOTTWINMAKER_API RelationshipValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API RelationshipValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline const Aws::String& GetTargetEntityId() const{ return m_targetEntityId; }

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline bool TargetEntityIdHasBeenSet() const { return m_targetEntityIdHasBeenSet; }

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline void SetTargetEntityId(const Aws::String& value) { m_targetEntityIdHasBeenSet = true; m_targetEntityId = value; }

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline void SetTargetEntityId(Aws::String&& value) { m_targetEntityIdHasBeenSet = true; m_targetEntityId = std::move(value); }

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline void SetTargetEntityId(const char* value) { m_targetEntityIdHasBeenSet = true; m_targetEntityId.assign(value); }

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline RelationshipValue& WithTargetEntityId(const Aws::String& value) { SetTargetEntityId(value); return *this;}

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline RelationshipValue& WithTargetEntityId(Aws::String&& value) { SetTargetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline RelationshipValue& WithTargetEntityId(const char* value) { SetTargetEntityId(value); return *this;}


    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline const Aws::String& GetTargetComponentName() const{ return m_targetComponentName; }

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline bool TargetComponentNameHasBeenSet() const { return m_targetComponentNameHasBeenSet; }

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline void SetTargetComponentName(const Aws::String& value) { m_targetComponentNameHasBeenSet = true; m_targetComponentName = value; }

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline void SetTargetComponentName(Aws::String&& value) { m_targetComponentNameHasBeenSet = true; m_targetComponentName = std::move(value); }

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline void SetTargetComponentName(const char* value) { m_targetComponentNameHasBeenSet = true; m_targetComponentName.assign(value); }

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline RelationshipValue& WithTargetComponentName(const Aws::String& value) { SetTargetComponentName(value); return *this;}

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline RelationshipValue& WithTargetComponentName(Aws::String&& value) { SetTargetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline RelationshipValue& WithTargetComponentName(const char* value) { SetTargetComponentName(value); return *this;}

  private:

    Aws::String m_targetEntityId;
    bool m_targetEntityIdHasBeenSet = false;

    Aws::String m_targetComponentName;
    bool m_targetComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
