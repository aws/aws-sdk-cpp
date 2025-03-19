/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the context of an action in the stage of a pipeline to a job
   * worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionContext">AWS
   * API Reference</a></p>
   */
  class ActionContext
  {
  public:
    AWS_CODEPIPELINE_API ActionContext() = default;
    AWS_CODEPIPELINE_API ActionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action in the context of a job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActionContext& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline const Aws::String& GetActionExecutionId() const { return m_actionExecutionId; }
    inline bool ActionExecutionIdHasBeenSet() const { return m_actionExecutionIdHasBeenSet; }
    template<typename ActionExecutionIdT = Aws::String>
    void SetActionExecutionId(ActionExecutionIdT&& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = std::forward<ActionExecutionIdT>(value); }
    template<typename ActionExecutionIdT = Aws::String>
    ActionContext& WithActionExecutionId(ActionExecutionIdT&& value) { SetActionExecutionId(std::forward<ActionExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_actionExecutionId;
    bool m_actionExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
