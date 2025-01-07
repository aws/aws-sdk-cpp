﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ImageStandardExtraction.h>
#include <aws/bedrock-data-automation/model/ImageStandardGenerativeField.h>
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
   * <p>Standard Output Configuration of Image</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ImageStandardOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageStandardOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ImageStandardOutputConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API ImageStandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API ImageStandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ImageStandardExtraction& GetExtraction() const{ return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    inline void SetExtraction(const ImageStandardExtraction& value) { m_extractionHasBeenSet = true; m_extraction = value; }
    inline void SetExtraction(ImageStandardExtraction&& value) { m_extractionHasBeenSet = true; m_extraction = std::move(value); }
    inline ImageStandardOutputConfiguration& WithExtraction(const ImageStandardExtraction& value) { SetExtraction(value); return *this;}
    inline ImageStandardOutputConfiguration& WithExtraction(ImageStandardExtraction&& value) { SetExtraction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageStandardGenerativeField& GetGenerativeField() const{ return m_generativeField; }
    inline bool GenerativeFieldHasBeenSet() const { return m_generativeFieldHasBeenSet; }
    inline void SetGenerativeField(const ImageStandardGenerativeField& value) { m_generativeFieldHasBeenSet = true; m_generativeField = value; }
    inline void SetGenerativeField(ImageStandardGenerativeField&& value) { m_generativeFieldHasBeenSet = true; m_generativeField = std::move(value); }
    inline ImageStandardOutputConfiguration& WithGenerativeField(const ImageStandardGenerativeField& value) { SetGenerativeField(value); return *this;}
    inline ImageStandardOutputConfiguration& WithGenerativeField(ImageStandardGenerativeField&& value) { SetGenerativeField(std::move(value)); return *this;}
    ///@}
  private:

    ImageStandardExtraction m_extraction;
    bool m_extractionHasBeenSet = false;

    ImageStandardGenerativeField m_generativeField;
    bool m_generativeFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
