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
    AWS_IOTSITEWISE_API ActionDefinition();
    AWS_IOTSITEWISE_API ActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ActionDefinition& WithActionDefinitionId(const Aws::String& value) { SetActionDefinitionId(value); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ActionDefinition& WithActionDefinitionId(Aws::String&& value) { SetActionDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ActionDefinition& WithActionDefinitionId(const char* value) { SetActionDefinitionId(value); return *this;}


    /**
     * <p>The name of the action definition.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action definition.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action definition.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action definition.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action definition.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action definition.</p>
     */
    inline ActionDefinition& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action definition.</p>
     */
    inline ActionDefinition& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action definition.</p>
     */
    inline ActionDefinition& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The type of the action definition.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of the action definition.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of the action definition.</p>
     */
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of the action definition.</p>
     */
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of the action definition.</p>
     */
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }

    /**
     * <p>The type of the action definition.</p>
     */
    inline ActionDefinition& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of the action definition.</p>
     */
    inline ActionDefinition& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * <p>The type of the action definition.</p>
     */
    inline ActionDefinition& WithActionType(const char* value) { SetActionType(value); return *this;}

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
