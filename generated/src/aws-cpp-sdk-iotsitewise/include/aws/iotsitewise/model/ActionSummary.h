/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TargetResource.h>
#include <aws/iotsitewise/model/ResolveTo.h>
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
   * <p>Contains the summary of the actions, including information about where the
   * action resolves to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ActionSummary">AWS
   * API Reference</a></p>
   */
  class ActionSummary
  {
  public:
    AWS_IOTSITEWISE_API ActionSummary() = default;
    AWS_IOTSITEWISE_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    ActionSummary& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const { return m_actionDefinitionId; }
    inline bool ActionDefinitionIdHasBeenSet() const { return m_actionDefinitionIdHasBeenSet; }
    template<typename ActionDefinitionIdT = Aws::String>
    void SetActionDefinitionId(ActionDefinitionIdT&& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = std::forward<ActionDefinitionIdT>(value); }
    template<typename ActionDefinitionIdT = Aws::String>
    ActionSummary& WithActionDefinitionId(ActionDefinitionIdT&& value) { SetActionDefinitionId(std::forward<ActionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline const TargetResource& GetTargetResource() const { return m_targetResource; }
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }
    template<typename TargetResourceT = TargetResource>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = TargetResource>
    ActionSummary& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed resource this action resolves to.</p>
     */
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    inline bool ResolveToHasBeenSet() const { return m_resolveToHasBeenSet; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    ActionSummary& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionDefinitionId;
    bool m_actionDefinitionIdHasBeenSet = false;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    ResolveTo m_resolveTo;
    bool m_resolveToHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
