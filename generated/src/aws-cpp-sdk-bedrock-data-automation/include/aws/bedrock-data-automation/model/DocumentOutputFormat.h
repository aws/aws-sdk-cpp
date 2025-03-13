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
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputFormat() = default;
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentOutputTextFormat& GetTextFormat() const { return m_textFormat; }
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
    template<typename TextFormatT = DocumentOutputTextFormat>
    void SetTextFormat(TextFormatT&& value) { m_textFormatHasBeenSet = true; m_textFormat = std::forward<TextFormatT>(value); }
    template<typename TextFormatT = DocumentOutputTextFormat>
    DocumentOutputFormat& WithTextFormat(TextFormatT&& value) { SetTextFormat(std::forward<TextFormatT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentOutputAdditionalFileFormat& GetAdditionalFileFormat() const { return m_additionalFileFormat; }
    inline bool AdditionalFileFormatHasBeenSet() const { return m_additionalFileFormatHasBeenSet; }
    template<typename AdditionalFileFormatT = DocumentOutputAdditionalFileFormat>
    void SetAdditionalFileFormat(AdditionalFileFormatT&& value) { m_additionalFileFormatHasBeenSet = true; m_additionalFileFormat = std::forward<AdditionalFileFormatT>(value); }
    template<typename AdditionalFileFormatT = DocumentOutputAdditionalFileFormat>
    DocumentOutputFormat& WithAdditionalFileFormat(AdditionalFileFormatT&& value) { SetAdditionalFileFormat(std::forward<AdditionalFileFormatT>(value)); return *this;}
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
