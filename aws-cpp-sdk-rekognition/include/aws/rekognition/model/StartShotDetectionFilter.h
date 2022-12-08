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
   * <p>Filters for the shot detection segments returned by
   * <code>GetSegmentDetection</code>. For more information, see
   * <a>StartSegmentDetectionFilters</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartShotDetectionFilter">AWS
   * API Reference</a></p>
   */
  class StartShotDetectionFilter
  {
  public:
    AWS_REKOGNITION_API StartShotDetectionFilter();
    AWS_REKOGNITION_API StartShotDetectionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StartShotDetectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition Video must have in
     * order to return a detected segment. Confidence represents how certain Amazon
     * Rekognition is that a segment is correctly identified. 0 is the lowest
     * confidence. 100 is the highest confidence. Amazon Rekognition Video doesn't
     * return any segments with a confidence level lower than this specified value.</p>
     * <p>If you don't specify <code>MinSegmentConfidence</code>, the
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
     * <p>If you don't specify <code>MinSegmentConfidence</code>, the
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
     * <p>If you don't specify <code>MinSegmentConfidence</code>, the
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
     * <p>If you don't specify <code>MinSegmentConfidence</code>, the
     * <code>GetSegmentDetection</code> returns segments with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline StartShotDetectionFilter& WithMinSegmentConfidence(double value) { SetMinSegmentConfidence(value); return *this;}

  private:

    double m_minSegmentConfidence;
    bool m_minSegmentConfidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
