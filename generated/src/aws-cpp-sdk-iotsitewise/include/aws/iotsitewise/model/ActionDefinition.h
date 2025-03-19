/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a definition for an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ActionDefinition">AWS
   * API Reference</a></p>
   */
  class ActionDefinition
  {
  public:
    AWS_IOTSITEWISE_API ActionDefinition() = default;
    AWS_IOTSITEWISE_API ActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const { return m_actionDefinitionId; }
    inline bool ActionDefinitionIdHasBeenSet() const { return m_actionDefinitionIdHasBeenSet; }
    template<typename ActionDefinitionIdT = Aws::String>
    void SetActionDefinitionId(ActionDefinitionIdT&& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = std::forward<ActionDefinitionIdT>(value); }
    template<typename ActionDefinitionIdT = Aws::String>
    ActionDefinition& WithActionDefinitionId(ActionDefinitionIdT&& value) { SetActionDefinitionId(std::forward<ActionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action definition.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    ActionDefinition& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the action definition.</p>
     */
    inline const Aws::String& GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    template<typename ActionTypeT = Aws::String>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = Aws::String>
    ActionDefinition& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionDefinitionId;
    bool m_actionDefinitionIdHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
