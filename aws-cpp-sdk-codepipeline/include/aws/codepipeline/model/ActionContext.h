/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents the context of an action within the stage of a pipeline to a job
   * worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionContext">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ActionContext
  {
  public:
    ActionContext();
    ActionContext(Aws::Utils::Json::JsonView jsonValue);
    ActionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline ActionContext& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline ActionContext& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the action within the context of a job.</p>
     */
    inline ActionContext& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline const Aws::String& GetActionExecutionId() const{ return m_actionExecutionId; }

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline bool ActionExecutionIdHasBeenSet() const { return m_actionExecutionIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline void SetActionExecutionId(const Aws::String& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = value; }

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline void SetActionExecutionId(Aws::String&& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = std::move(value); }

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline void SetActionExecutionId(const char* value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId.assign(value); }

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline ActionContext& WithActionExecutionId(const Aws::String& value) { SetActionExecutionId(value); return *this;}

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline ActionContext& WithActionExecutionId(Aws::String&& value) { SetActionExecutionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID that corresponds to an action's execution.</p>
     */
    inline ActionContext& WithActionExecutionId(const char* value) { SetActionExecutionId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_actionExecutionId;
    bool m_actionExecutionIdHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
