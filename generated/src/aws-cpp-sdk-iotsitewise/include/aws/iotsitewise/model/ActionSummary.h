/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TargetResource.h>
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
   * <p>Contains the summary of the actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ActionSummary">AWS
   * API Reference</a></p>
   */
  class ActionSummary
  {
  public:
    AWS_IOTSITEWISE_API ActionSummary();
    AWS_IOTSITEWISE_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The ID of the action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>The ID of the action.</p>
     */
    inline ActionSummary& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The ID of the action.</p>
     */
    inline ActionSummary& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action.</p>
     */
    inline ActionSummary& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const{ return m_actionDefinitionId; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline bool ActionDefinitionIdHasBeenSet() const { return m_actionDefinitionIdHasBeenSet; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(const Aws::String& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = value; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(Aws::String&& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = std::move(value); }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(const char* value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId.assign(value); }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ActionSummary& WithActionDefinitionId(const Aws::String& value) { SetActionDefinitionId(value); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ActionSummary& WithActionDefinitionId(Aws::String&& value) { SetActionDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ActionSummary& WithActionDefinitionId(const char* value) { SetActionDefinitionId(value); return *this;}


    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline const TargetResource& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline void SetTargetResource(const TargetResource& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline void SetTargetResource(TargetResource&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline ActionSummary& WithTargetResource(const TargetResource& value) { SetTargetResource(value); return *this;}

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline ActionSummary& WithTargetResource(TargetResource&& value) { SetTargetResource(std::move(value)); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionDefinitionId;
    bool m_actionDefinitionIdHasBeenSet = false;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
