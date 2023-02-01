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
   * <p>An object that specifies a relationship with another component
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/Relationship">AWS
   * API Reference</a></p>
   */
  class Relationship
  {
  public:
    AWS_IOTTWINMAKER_API Relationship();
    AWS_IOTTWINMAKER_API Relationship(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline const Aws::String& GetTargetComponentTypeId() const{ return m_targetComponentTypeId; }

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline bool TargetComponentTypeIdHasBeenSet() const { return m_targetComponentTypeIdHasBeenSet; }

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline void SetTargetComponentTypeId(const Aws::String& value) { m_targetComponentTypeIdHasBeenSet = true; m_targetComponentTypeId = value; }

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline void SetTargetComponentTypeId(Aws::String&& value) { m_targetComponentTypeIdHasBeenSet = true; m_targetComponentTypeId = std::move(value); }

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline void SetTargetComponentTypeId(const char* value) { m_targetComponentTypeIdHasBeenSet = true; m_targetComponentTypeId.assign(value); }

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline Relationship& WithTargetComponentTypeId(const Aws::String& value) { SetTargetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline Relationship& WithTargetComponentTypeId(Aws::String&& value) { SetTargetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline Relationship& WithTargetComponentTypeId(const char* value) { SetTargetComponentTypeId(value); return *this;}


    /**
     * <p>The type of the relationship.</p>
     */
    inline const Aws::String& GetRelationshipType() const{ return m_relationshipType; }

    /**
     * <p>The type of the relationship.</p>
     */
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }

    /**
     * <p>The type of the relationship.</p>
     */
    inline void SetRelationshipType(const Aws::String& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }

    /**
     * <p>The type of the relationship.</p>
     */
    inline void SetRelationshipType(Aws::String&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::move(value); }

    /**
     * <p>The type of the relationship.</p>
     */
    inline void SetRelationshipType(const char* value) { m_relationshipTypeHasBeenSet = true; m_relationshipType.assign(value); }

    /**
     * <p>The type of the relationship.</p>
     */
    inline Relationship& WithRelationshipType(const Aws::String& value) { SetRelationshipType(value); return *this;}

    /**
     * <p>The type of the relationship.</p>
     */
    inline Relationship& WithRelationshipType(Aws::String&& value) { SetRelationshipType(std::move(value)); return *this;}

    /**
     * <p>The type of the relationship.</p>
     */
    inline Relationship& WithRelationshipType(const char* value) { SetRelationshipType(value); return *this;}

  private:

    Aws::String m_targetComponentTypeId;
    bool m_targetComponentTypeIdHasBeenSet = false;

    Aws::String m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
