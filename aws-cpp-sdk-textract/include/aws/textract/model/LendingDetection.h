/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/SelectionStatus.h>
#include <aws/textract/model/Geometry.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The results extracted for a lending document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingDetection">AWS
   * API Reference</a></p>
   */
  class LendingDetection
  {
  public:
    AWS_TEXTRACT_API LendingDetection();
    AWS_TEXTRACT_API LendingDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline LendingDetection& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline LendingDetection& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline LendingDetection& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline const SelectionStatus& GetSelectionStatus() const{ return m_selectionStatus; }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline bool SelectionStatusHasBeenSet() const { return m_selectionStatusHasBeenSet; }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline void SetSelectionStatus(const SelectionStatus& value) { m_selectionStatusHasBeenSet = true; m_selectionStatus = value; }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline void SetSelectionStatus(SelectionStatus&& value) { m_selectionStatusHasBeenSet = true; m_selectionStatus = std::move(value); }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline LendingDetection& WithSelectionStatus(const SelectionStatus& value) { SetSelectionStatus(value); return *this;}

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline LendingDetection& WithSelectionStatus(SelectionStatus&& value) { SetSelectionStatus(std::move(value)); return *this;}


    
    inline const Geometry& GetGeometry() const{ return m_geometry; }

    
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    
    inline LendingDetection& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}

    
    inline LendingDetection& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}


    /**
     * <p>The confidence level for the text of a detected value in a lending
     * document.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence level for the text of a detected value in a lending
     * document.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence level for the text of a detected value in a lending
     * document.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence level for the text of a detected value in a lending
     * document.</p>
     */
    inline LendingDetection& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    SelectionStatus m_selectionStatus;
    bool m_selectionStatusHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
