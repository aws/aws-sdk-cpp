/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Filters for the technical segments returned by <a>GetSegmentDetection</a>.
   * For more information, see <a>StartSegmentDetectionFilters</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartTechnicalCueDetectionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API StartTechnicalCueDetectionFilter
  {
  public:
    StartTechnicalCueDetectionFilter();
    StartTechnicalCueDetectionFilter(Aws::Utils::Json::JsonView jsonValue);
    StartTechnicalCueDetectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition Video must have in
     * order to return a detected segment. Confidence represents how certain Amazon
     * Rekognition is that a segment is correctly identified. 0 is the lowest
     * confidence. 100 is the highest confidence. Amazon Rekognition Video doesn't
     * return any segments with a confidence level lower than this specified value.</p>
     * <p>If you don't specify <code>MinSegmentConfidence</code>,
     * <code>GetSegmentDetection</code> returns segments with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline double GetMinSegmentConfidence() const{ return m_minSegmentConfidence; }

    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition Video must have in
     * order to return a detected segment. Confidence represents how certain Amazon
     * Rekognition is that a segment is correctly identified. 0 is the lowest
     * confidence. 100 is the highest confidence. Amazon Rekognition Video doesn't
     * return any segments with a confidence level lower than this specified value.</p>
     * <p>If you don't specify <code>MinSegmentConfidence</code>,
     * <code>GetSegmentDetection</code> returns segments with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline bool MinSegmentConfidenceHasBeenSet() const { return m_minSegmentConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition Video must have in
     * order to return a detected segment. Confidence represents how certain Amazon
     * Rekognition is that a segment is correctly identified. 0 is the lowest
     * confidence. 100 is the highest confidence. Amazon Rekognition Video doesn't
     * return any segments with a confidence level lower than this specified value.</p>
     * <p>If you don't specify <code>MinSegmentConfidence</code>,
     * <code>GetSegmentDetection</code> returns segments with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline void SetMinSegmentConfidence(double value) { m_minSegmentConfidenceHasBeenSet = true; m_minSegmentConfidence = value; }

    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition Video must have in
     * order to return a detected segment. Confidence represents how certain Amazon
     * Rekognition is that a segment is correctly identified. 0 is the lowest
     * confidence. 100 is the highest confidence. Amazon Rekognition Video doesn't
     * return any segments with a confidence level lower than this specified value.</p>
     * <p>If you don't specify <code>MinSegmentConfidence</code>,
     * <code>GetSegmentDetection</code> returns segments with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline StartTechnicalCueDetectionFilter& WithMinSegmentConfidence(double value) { SetMinSegmentConfidence(value); return *this;}

  private:

    double m_minSegmentConfidence;
    bool m_minSegmentConfidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
