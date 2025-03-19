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
    AWS_IOTTWINMAKER_API RelationshipValue() = default;
    AWS_IOTTWINMAKER_API RelationshipValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API RelationshipValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the target entity associated with this relationship value.</p>
     */
    inline const Aws::String& GetTargetEntityId() const { return m_targetEntityId; }
    inline bool TargetEntityIdHasBeenSet() const { return m_targetEntityIdHasBeenSet; }
    template<typename TargetEntityIdT = Aws::String>
    void SetTargetEntityId(TargetEntityIdT&& value) { m_targetEntityIdHasBeenSet = true; m_targetEntityId = std::forward<TargetEntityIdT>(value); }
    template<typename TargetEntityIdT = Aws::String>
    RelationshipValue& WithTargetEntityId(TargetEntityIdT&& value) { SetTargetEntityId(std::forward<TargetEntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target component associated with the relationship value.</p>
     */
    inline const Aws::String& GetTargetComponentName() const { return m_targetComponentName; }
    inline bool TargetComponentNameHasBeenSet() const { return m_targetComponentNameHasBeenSet; }
    template<typename TargetComponentNameT = Aws::String>
    void SetTargetComponentName(TargetComponentNameT&& value) { m_targetComponentNameHasBeenSet = true; m_targetComponentName = std::forward<TargetComponentNameT>(value); }
    template<typename TargetComponentNameT = Aws::String>
    RelationshipValue& WithTargetComponentName(TargetComponentNameT&& value) { SetTargetComponentName(std::forward<TargetComponentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetEntityId;
    bool m_targetEntityIdHasBeenSet = false;

    Aws::String m_targetComponentName;
    bool m_targetComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
