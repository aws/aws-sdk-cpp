/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FileSource.h>
#include <aws/bedrock-agent-runtime/model/FileUseCase.h>
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
   * <p>Contains details of the source files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InputFile">AWS
   * API Reference</a></p>
   */
  class InputFile
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InputFile();
    AWS_BEDROCKAGENTRUNTIME_API InputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the source file.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InputFile& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InputFile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InputFile& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where the files are located.</p>
     */
    inline const FileSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const FileSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(FileSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline InputFile& WithSource(const FileSource& value) { SetSource(value); return *this;}
    inline InputFile& WithSource(FileSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the source files will be used by the code interpreter.</p>
     */
    inline const FileUseCase& GetUseCase() const{ return m_useCase; }
    inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
    inline void SetUseCase(const FileUseCase& value) { m_useCaseHasBeenSet = true; m_useCase = value; }
    inline void SetUseCase(FileUseCase&& value) { m_useCaseHasBeenSet = true; m_useCase = std::move(value); }
    inline InputFile& WithUseCase(const FileUseCase& value) { SetUseCase(value); return *this;}
    inline InputFile& WithUseCase(FileUseCase&& value) { SetUseCase(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FileSource m_source;
    bool m_sourceHasBeenSet = false;

    FileUseCase m_useCase;
    bool m_useCaseHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
