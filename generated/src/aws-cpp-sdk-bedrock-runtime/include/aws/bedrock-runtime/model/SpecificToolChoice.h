/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The model must request a specific tool. For example, <code>{"tool" : {"name"
   * : "Your tool name"}}</code>.</p>  <p>This field is only supported by
   * Anthropic Claude 3 models.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/SpecificToolChoice">AWS
   * API Reference</a></p>
   */
  class SpecificToolChoice
  {
  public:
    AWS_BEDROCKRUNTIME_API SpecificToolChoice();
    AWS_BEDROCKRUNTIME_API SpecificToolChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API SpecificToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tool that the model must request. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SpecificToolChoice& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SpecificToolChoice& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SpecificToolChoice& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
