/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentOutputTextFormat.h>
#include <aws/bedrock-data-automation/model/DocumentOutputAdditionalFileFormat.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Output Format of Document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentOutputFormat">AWS
   * API Reference</a></p>
   */
  class DocumentOutputFormat
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputFormat();
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentOutputTextFormat& GetTextFormat() const{ return m_textFormat; }
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
    inline void SetTextFormat(const DocumentOutputTextFormat& value) { m_textFormatHasBeenSet = true; m_textFormat = value; }
    inline void SetTextFormat(DocumentOutputTextFormat&& value) { m_textFormatHasBeenSet = true; m_textFormat = std::move(value); }
    inline DocumentOutputFormat& WithTextFormat(const DocumentOutputTextFormat& value) { SetTextFormat(value); return *this;}
    inline DocumentOutputFormat& WithTextFormat(DocumentOutputTextFormat&& value) { SetTextFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentOutputAdditionalFileFormat& GetAdditionalFileFormat() const{ return m_additionalFileFormat; }
    inline bool AdditionalFileFormatHasBeenSet() const { return m_additionalFileFormatHasBeenSet; }
    inline void SetAdditionalFileFormat(const DocumentOutputAdditionalFileFormat& value) { m_additionalFileFormatHasBeenSet = true; m_additionalFileFormat = value; }
    inline void SetAdditionalFileFormat(DocumentOutputAdditionalFileFormat&& value) { m_additionalFileFormatHasBeenSet = true; m_additionalFileFormat = std::move(value); }
    inline DocumentOutputFormat& WithAdditionalFileFormat(const DocumentOutputAdditionalFileFormat& value) { SetAdditionalFileFormat(value); return *this;}
    inline DocumentOutputFormat& WithAdditionalFileFormat(DocumentOutputAdditionalFileFormat&& value) { SetAdditionalFileFormat(std::move(value)); return *this;}
    ///@}
  private:

    DocumentOutputTextFormat m_textFormat;
    bool m_textFormatHasBeenSet = false;

    DocumentOutputAdditionalFileFormat m_additionalFileFormat;
    bool m_additionalFileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
