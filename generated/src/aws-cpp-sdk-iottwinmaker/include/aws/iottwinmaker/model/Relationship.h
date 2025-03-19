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
    AWS_IOTTWINMAKER_API Relationship() = default;
    AWS_IOTTWINMAKER_API Relationship(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the target component type associated with this relationship.</p>
     */
    inline const Aws::String& GetTargetComponentTypeId() const { return m_targetComponentTypeId; }
    inline bool TargetComponentTypeIdHasBeenSet() const { return m_targetComponentTypeIdHasBeenSet; }
    template<typename TargetComponentTypeIdT = Aws::String>
    void SetTargetComponentTypeId(TargetComponentTypeIdT&& value) { m_targetComponentTypeIdHasBeenSet = true; m_targetComponentTypeId = std::forward<TargetComponentTypeIdT>(value); }
    template<typename TargetComponentTypeIdT = Aws::String>
    Relationship& WithTargetComponentTypeId(TargetComponentTypeIdT&& value) { SetTargetComponentTypeId(std::forward<TargetComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the relationship.</p>
     */
    inline const Aws::String& GetRelationshipType() const { return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    template<typename RelationshipTypeT = Aws::String>
    void SetRelationshipType(RelationshipTypeT&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::forward<RelationshipTypeT>(value); }
    template<typename RelationshipTypeT = Aws::String>
    Relationship& WithRelationshipType(RelationshipTypeT&& value) { SetRelationshipType(std::forward<RelationshipTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetComponentTypeId;
    bool m_targetComponentTypeIdHasBeenSet = false;

    Aws::String m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
