/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/ImageInput.h>
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
   * <p>Contains the body of the API response.</p> <p>This data type is used in the
   * following API operations:</p> <ul> <li> <p>In the
   * <code>returnControlInvocationResults</code> field of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_RequestSyntax">InvokeAgent
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ContentBody">AWS
   * API Reference</a></p>
   */
  class ContentBody
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ContentBody();
    AWS_BEDROCKAGENTRUNTIME_API ContentBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ContentBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body of the API response.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline ContentBody& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline ContentBody& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline ContentBody& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists details, including format and source, for the image in the response
     * from the function call. You can specify only one image and the function in the
     * <code>returnControlInvocationResults</code> must be a computer use action. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agent-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>. </p>
     */
    inline const Aws::Vector<ImageInput>& GetImages() const{ return m_images; }
    inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
    inline void SetImages(const Aws::Vector<ImageInput>& value) { m_imagesHasBeenSet = true; m_images = value; }
    inline void SetImages(Aws::Vector<ImageInput>&& value) { m_imagesHasBeenSet = true; m_images = std::move(value); }
    inline ContentBody& WithImages(const Aws::Vector<ImageInput>& value) { SetImages(value); return *this;}
    inline ContentBody& WithImages(Aws::Vector<ImageInput>&& value) { SetImages(std::move(value)); return *this;}
    inline ContentBody& AddImages(const ImageInput& value) { m_imagesHasBeenSet = true; m_images.push_back(value); return *this; }
    inline ContentBody& AddImages(ImageInput&& value) { m_imagesHasBeenSet = true; m_images.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Vector<ImageInput> m_images;
    bool m_imagesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
