/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/DocumentFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/DocumentSource.h>
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
    AWS_BEDROCKRUNTIME_API DocumentBlock();
    AWS_BEDROCKRUNTIME_API DocumentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API DocumentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of a document, or its extension.</p>
     */
    inline const DocumentFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const DocumentFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(DocumentFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline DocumentBlock& WithFormat(const DocumentFormat& value) { SetFormat(value); return *this;}
    inline DocumentBlock& WithFormat(DocumentFormat&& value) { SetFormat(std::move(value)); return *this;}
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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DocumentBlock& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DocumentBlock& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DocumentBlock& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the content of the document.</p>
     */
    inline const DocumentSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const DocumentSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(DocumentSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline DocumentBlock& WithSource(const DocumentSource& value) { SetSource(value); return *this;}
    inline DocumentBlock& WithSource(DocumentSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    DocumentFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
