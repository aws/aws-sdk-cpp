/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NormalizedValue.h>
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
   * <p>Used to contain the information detected by an AnalyzeID
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeIDDetections">AWS
   * API Reference</a></p>
   */
  class AnalyzeIDDetections
  {
  public:
    AWS_TEXTRACT_API AnalyzeIDDetections();
    AWS_TEXTRACT_API AnalyzeIDDetections(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AnalyzeIDDetections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline AnalyzeIDDetections& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline AnalyzeIDDetections& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline AnalyzeIDDetections& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline const NormalizedValue& GetNormalizedValue() const{ return m_normalizedValue; }

    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline bool NormalizedValueHasBeenSet() const { return m_normalizedValueHasBeenSet; }

    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline void SetNormalizedValue(const NormalizedValue& value) { m_normalizedValueHasBeenSet = true; m_normalizedValue = value; }

    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline void SetNormalizedValue(NormalizedValue&& value) { m_normalizedValueHasBeenSet = true; m_normalizedValue = std::move(value); }

    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline AnalyzeIDDetections& WithNormalizedValue(const NormalizedValue& value) { SetNormalizedValue(value); return *this;}

    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline AnalyzeIDDetections& WithNormalizedValue(NormalizedValue&& value) { SetNormalizedValue(std::move(value)); return *this;}


    /**
     * <p>The confidence score of the detected text.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence score of the detected text.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence score of the detected text.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence score of the detected text.</p>
     */
    inline AnalyzeIDDetections& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    NormalizedValue m_normalizedValue;
    bool m_normalizedValueHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
