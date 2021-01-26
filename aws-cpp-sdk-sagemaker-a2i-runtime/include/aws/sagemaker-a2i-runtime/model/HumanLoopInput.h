/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>An object containing the human loop input in JSON format.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopInput">AWS
   * API Reference</a></p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API HumanLoopInput
  {
  public:
    HumanLoopInput();
    HumanLoopInput(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline const Aws::String& GetInputContent() const{ return m_inputContent; }

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline bool InputContentHasBeenSet() const { return m_inputContentHasBeenSet; }

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline void SetInputContent(const Aws::String& value) { m_inputContentHasBeenSet = true; m_inputContent = value; }

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline void SetInputContent(Aws::String&& value) { m_inputContentHasBeenSet = true; m_inputContent = std::move(value); }

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline void SetInputContent(const char* value) { m_inputContentHasBeenSet = true; m_inputContent.assign(value); }

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline HumanLoopInput& WithInputContent(const Aws::String& value) { SetInputContent(value); return *this;}

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline HumanLoopInput& WithInputContent(Aws::String&& value) { SetInputContent(std::move(value)); return *this;}

    /**
     * <p>Serialized input from the human loop. The input must be a string
     * representation of a file in JSON format.</p>
     */
    inline HumanLoopInput& WithInputContent(const char* value) { SetInputContent(value); return *this;}

  private:

    Aws::String m_inputContent;
    bool m_inputContentHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
