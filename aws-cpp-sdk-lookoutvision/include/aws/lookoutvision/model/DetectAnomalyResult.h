/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ImageSource.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>The prediction results from a call to <a>DetectAnomalies</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DetectAnomalyResult">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTFORVISION_API DetectAnomalyResult
  {
  public:
    DetectAnomalyResult();
    DetectAnomalyResult(Aws::Utils::Json::JsonView jsonValue);
    DetectAnomalyResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source of the image that was analyzed. <code>direct</code> means that the
     * images was supplied from the local computer. No other values are supported.</p>
     */
    inline const ImageSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the image that was analyzed. <code>direct</code> means that the
     * images was supplied from the local computer. No other values are supported.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the image that was analyzed. <code>direct</code> means that the
     * images was supplied from the local computer. No other values are supported.</p>
     */
    inline void SetSource(const ImageSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the image that was analyzed. <code>direct</code> means that the
     * images was supplied from the local computer. No other values are supported.</p>
     */
    inline void SetSource(ImageSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the image that was analyzed. <code>direct</code> means that the
     * images was supplied from the local computer. No other values are supported.</p>
     */
    inline DetectAnomalyResult& WithSource(const ImageSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the image that was analyzed. <code>direct</code> means that the
     * images was supplied from the local computer. No other values are supported.</p>
     */
    inline DetectAnomalyResult& WithSource(ImageSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>True if the image contains an anomaly, otherwise false.</p>
     */
    inline bool GetIsAnomalous() const{ return m_isAnomalous; }

    /**
     * <p>True if the image contains an anomaly, otherwise false.</p>
     */
    inline bool IsAnomalousHasBeenSet() const { return m_isAnomalousHasBeenSet; }

    /**
     * <p>True if the image contains an anomaly, otherwise false.</p>
     */
    inline void SetIsAnomalous(bool value) { m_isAnomalousHasBeenSet = true; m_isAnomalous = value; }

    /**
     * <p>True if the image contains an anomaly, otherwise false.</p>
     */
    inline DetectAnomalyResult& WithIsAnomalous(bool value) { SetIsAnomalous(value); return *this;}


    /**
     * <p>The confidence that Amazon Lookout for Vision has in the accuracy of the
     * prediction.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that Amazon Lookout for Vision has in the accuracy of the
     * prediction.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that Amazon Lookout for Vision has in the accuracy of the
     * prediction.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that Amazon Lookout for Vision has in the accuracy of the
     * prediction.</p>
     */
    inline DetectAnomalyResult& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    ImageSource m_source;
    bool m_sourceHasBeenSet;

    bool m_isAnomalous;
    bool m_isAnomalousHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
