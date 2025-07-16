/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>A block of input content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InputContentBlock">AWS
   * API Reference</a></p>
   */
  class InputContentBlock
  {
  public:
    AWS_BEDROCKAGENTCORE_API InputContentBlock() = default;
    AWS_BEDROCKAGENTCORE_API InputContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API InputContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the input content.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    InputContentBlock& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text input content.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    InputContentBlock& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary input content.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBlob() const { return m_blob; }
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
    template<typename BlobT = Aws::Utils::CryptoBuffer>
    void SetBlob(BlobT&& value) { m_blobHasBeenSet = true; m_blob = std::forward<BlobT>(value); }
    template<typename BlobT = Aws::Utils::CryptoBuffer>
    InputContentBlock& WithBlob(BlobT&& value) { SetBlob(std::forward<BlobT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_blob{};
    bool m_blobHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
