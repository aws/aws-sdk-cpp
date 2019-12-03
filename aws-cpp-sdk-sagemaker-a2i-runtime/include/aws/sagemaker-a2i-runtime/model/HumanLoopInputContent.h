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
   * <p>An object containing the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopInputContent">AWS
   * API Reference</a></p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API HumanLoopInputContent
  {
  public:
    HumanLoopInputContent();
    HumanLoopInputContent(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopInputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline const Aws::String& GetInputContent() const{ return m_inputContent; }

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline bool InputContentHasBeenSet() const { return m_inputContentHasBeenSet; }

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline void SetInputContent(const Aws::String& value) { m_inputContentHasBeenSet = true; m_inputContent = value; }

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline void SetInputContent(Aws::String&& value) { m_inputContentHasBeenSet = true; m_inputContent = std::move(value); }

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline void SetInputContent(const char* value) { m_inputContentHasBeenSet = true; m_inputContent.assign(value); }

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline HumanLoopInputContent& WithInputContent(const Aws::String& value) { SetInputContent(value); return *this;}

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline HumanLoopInputContent& WithInputContent(Aws::String&& value) { SetInputContent(std::move(value)); return *this;}

    /**
     * <p>Serialized input from the human loop.</p>
     */
    inline HumanLoopInputContent& WithInputContent(const char* value) { SetInputContent(value); return *this;}

  private:

    Aws::String m_inputContent;
    bool m_inputContentHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
