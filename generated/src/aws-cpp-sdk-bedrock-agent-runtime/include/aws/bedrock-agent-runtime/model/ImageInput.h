/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ImageInputFormat.h>
#include <aws/bedrock-agent-runtime/model/ImageInputSource.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Details about an image in the result from a function in the action group
   * invocation. You can specify images only when the function is a computer use
   * action. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agent-computer-use.html">Configure
   * an Amazon Bedrock Agent to complete tasks with computer use
   * tools</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ImageInput">AWS
   * API Reference</a></p>
   */
  class ImageInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ImageInput();
    AWS_BEDROCKAGENTRUNTIME_API ImageInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ImageInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of image in the result.</p>
     */
    inline const ImageInputFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const ImageInputFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(ImageInputFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline ImageInput& WithFormat(const ImageInputFormat& value) { SetFormat(value); return *this;}
    inline ImageInput& WithFormat(ImageInputFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the image in the result.</p>
     */
    inline const ImageInputSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ImageInputSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ImageInputSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline ImageInput& WithSource(const ImageInputSource& value) { SetSource(value); return *this;}
    inline ImageInput& WithSource(ImageInputSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    ImageInputFormat m_format;
    bool m_formatHasBeenSet = false;

    ImageInputSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
