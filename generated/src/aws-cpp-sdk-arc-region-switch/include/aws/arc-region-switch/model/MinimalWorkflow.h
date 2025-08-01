/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ExecutionAction.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>A simplified representation of a workflow in a Region switch
   * plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/MinimalWorkflow">AWS
   * API Reference</a></p>
   */
  class MinimalWorkflow
  {
  public:
    AWS_ARCREGIONSWITCH_API MinimalWorkflow() = default;
    AWS_ARCREGIONSWITCH_API MinimalWorkflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API MinimalWorkflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action for a minimal workflow, which can be Activate or Deactivate.</p>
     */
    inline ExecutionAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ExecutionAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline MinimalWorkflow& WithAction(ExecutionAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a minimal workflow</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MinimalWorkflow& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    ExecutionAction m_action{ExecutionAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
