/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentExtractionGranularity.h>
#include <aws/bedrock-data-automation/model/DocumentBoundingBox.h>
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
   * <p>Standard Extraction Configuration of Document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentStandardExtraction">AWS
   * API Reference</a></p>
   */
  class DocumentStandardExtraction
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardExtraction();
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardExtraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardExtraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentExtractionGranularity& GetGranularity() const{ return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(const DocumentExtractionGranularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline void SetGranularity(DocumentExtractionGranularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }
    inline DocumentStandardExtraction& WithGranularity(const DocumentExtractionGranularity& value) { SetGranularity(value); return *this;}
    inline DocumentStandardExtraction& WithGranularity(DocumentExtractionGranularity&& value) { SetGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentBoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const DocumentBoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(DocumentBoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline DocumentStandardExtraction& WithBoundingBox(const DocumentBoundingBox& value) { SetBoundingBox(value); return *this;}
    inline DocumentStandardExtraction& WithBoundingBox(DocumentBoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}
  private:

    DocumentExtractionGranularity m_granularity;
    bool m_granularityHasBeenSet = false;

    DocumentBoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
