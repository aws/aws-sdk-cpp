/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains input values for a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RenderableTask">AWS
   * API Reference</a></p>
   */
  class RenderableTask
  {
  public:
    AWS_SAGEMAKER_API RenderableTask();
    AWS_SAGEMAKER_API RenderableTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RenderableTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline RenderableTask& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline RenderableTask& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>A JSON object that contains values for the variables defined in the template.
     * It is made available to the template under the substitution variable
     * <code>task.input</code>. For example, if you define a variable
     * <code>task.input.text</code> in your template, you can supply the variable in
     * the JSON object as <code>"text": "sample text"</code>.</p>
     */
    inline RenderableTask& WithInput(const char* value) { SetInput(value); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
