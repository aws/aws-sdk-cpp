/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/OutputFile.h>
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
   * <p>Contains intermediate response for code interpreter if any files have been
   * generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FilePart">AWS
   * API Reference</a></p>
   */
  class FilePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FilePart();
    AWS_BEDROCKAGENTRUNTIME_API FilePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FilePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Files containing intermediate response for the user.</p>
     */
    inline const Aws::Vector<OutputFile>& GetFiles() const{ return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    inline void SetFiles(const Aws::Vector<OutputFile>& value) { m_filesHasBeenSet = true; m_files = value; }
    inline void SetFiles(Aws::Vector<OutputFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }
    inline FilePart& WithFiles(const Aws::Vector<OutputFile>& value) { SetFiles(value); return *this;}
    inline FilePart& WithFiles(Aws::Vector<OutputFile>&& value) { SetFiles(std::move(value)); return *this;}
    inline FilePart& AddFiles(const OutputFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }
    inline FilePart& AddFiles(OutputFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<OutputFile> m_files;
    bool m_filesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
