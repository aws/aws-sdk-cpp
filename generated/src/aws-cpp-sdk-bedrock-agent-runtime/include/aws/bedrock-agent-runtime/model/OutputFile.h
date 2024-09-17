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
   * <p>Contains details of the response from code interpreter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OutputFile">AWS
   * API Reference</a></p>
   */
  class OutputFile
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OutputFile();
    AWS_BEDROCKAGENTRUNTIME_API OutputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OutputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The byte count of files that contains response from code interpreter.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBytes() const{ return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(const Aws::Utils::CryptoBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline void SetBytes(Aws::Utils::CryptoBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }
    inline OutputFile& WithBytes(const Aws::Utils::CryptoBuffer& value) { SetBytes(value); return *this;}
    inline OutputFile& WithBytes(Aws::Utils::CryptoBuffer&& value) { SetBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file containing response from code interpreter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputFile& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputFile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputFile& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of file that contains response from the code interpreter.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline OutputFile& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline OutputFile& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline OutputFile& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
