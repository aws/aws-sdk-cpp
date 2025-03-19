/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The property contains the file to chat with, along with its
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ByteContentFile">AWS
   * API Reference</a></p>
   */
  class ByteContentFile
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ByteContentFile() = default;
    AWS_BEDROCKAGENTRUNTIME_API ByteContentFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ByteContentFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The raw bytes of the file to attach. The maximum size of all files that is
     * attached is 10MB. You can attach a maximum of 5 files. </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::CryptoBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::CryptoBuffer>
    ByteContentFile& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of data contained in the file used for chat.</p>
     */
    inline const Aws::String& GetMediaType() const { return m_mediaType; }
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }
    template<typename MediaTypeT = Aws::String>
    void SetMediaType(MediaTypeT&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::forward<MediaTypeT>(value); }
    template<typename MediaTypeT = Aws::String>
    ByteContentFile& WithMediaType(MediaTypeT&& value) { SetMediaType(std::forward<MediaTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_data{};
    bool m_dataHasBeenSet = false;

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
