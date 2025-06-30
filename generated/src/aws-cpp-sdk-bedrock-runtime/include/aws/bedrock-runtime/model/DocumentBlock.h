/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/DocumentFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/DocumentSource.h>
#include <aws/bedrock-runtime/model/CitationsConfig.h>
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
   * <p>A document to include in a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/DocumentBlock">AWS
   * API Reference</a></p>
   */
  class DocumentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API DocumentBlock() = default;
    AWS_BEDROCKRUNTIME_API DocumentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API DocumentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of a document, or its extension.</p>
     */
    inline DocumentFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(DocumentFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline DocumentBlock& WithFormat(DocumentFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the document. The name can only contain the following
     * characters:</p> <ul> <li> <p>Alphanumeric characters</p> </li> <li>
     * <p>Whitespace characters (no more than one in a row)</p> </li> <li>
     * <p>Hyphens</p> </li> <li> <p>Parentheses</p> </li> <li> <p>Square brackets</p>
     * </li> </ul>  <p>This field is vulnerable to prompt injections, because the
     * model might inadvertently interpret it as instructions. Therefore, we recommend
     * that you specify a neutral name.</p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentBlock& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the content of the document.</p>
     */
    inline const DocumentSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = DocumentSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = DocumentSource>
    DocumentBlock& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual information about how the document should be processed or
     * interpreted by the model when generating citations.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    DocumentBlock& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings that control how citations should be generated for
     * this specific document.</p>
     */
    inline const CitationsConfig& GetCitations() const { return m_citations; }
    inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
    template<typename CitationsT = CitationsConfig>
    void SetCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations = std::forward<CitationsT>(value); }
    template<typename CitationsT = CitationsConfig>
    DocumentBlock& WithCitations(CitationsT&& value) { SetCitations(std::forward<CitationsT>(value)); return *this;}
    ///@}
  private:

    DocumentFormat m_format{DocumentFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    CitationsConfig m_citations;
    bool m_citationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
