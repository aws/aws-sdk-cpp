/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ImageExtractionCategory.h>
#include <aws/bedrock-data-automation/model/ImageBoundingBox.h>
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
   * <p>Standard Extraction Configuration of Image</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ImageStandardExtraction">AWS
   * API Reference</a></p>
   */
  class ImageStandardExtraction
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ImageStandardExtraction();
    AWS_BEDROCKDATAAUTOMATION_API ImageStandardExtraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API ImageStandardExtraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ImageExtractionCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const ImageExtractionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(ImageExtractionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline ImageStandardExtraction& WithCategory(const ImageExtractionCategory& value) { SetCategory(value); return *this;}
    inline ImageStandardExtraction& WithCategory(ImageExtractionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageBoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const ImageBoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(ImageBoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline ImageStandardExtraction& WithBoundingBox(const ImageBoundingBox& value) { SetBoundingBox(value); return *this;}
    inline ImageStandardExtraction& WithBoundingBox(ImageBoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}
  private:

    ImageExtractionCategory m_category;
    bool m_categoryHasBeenSet = false;

    ImageBoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
