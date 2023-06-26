/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ImageSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
#include <aws/lookoutvision/model/Anomaly.h>
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
   * <p>The prediction results from a call to <a>DetectAnomalies</a>.
   * <code>DetectAnomalyResult</code> includes classification information for the
   * prediction (<code>IsAnomalous</code> and <code>Confidence</code>). If the model
   * you use is an image segementation model, <code>DetectAnomalyResult</code> also
   * includes segmentation information (<code>Anomalies</code> and
   * <code>AnomalyMask</code>). Classification information is calculated separately
   * from segmentation information and you shouldn't assume a relationship between
   * them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DetectAnomalyResult">AWS
   * API Reference</a></p>
   */
  class DetectAnomalyResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DetectAnomalyResult();
    AWS_LOOKOUTFORVISION_API DetectAnomalyResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DetectAnomalyResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>True if Amazon Lookout for Vision classifies the image as containing an
     * anomaly, otherwise false.</p>
     */
    inline bool GetIsAnomalous() const{ return m_isAnomalous; }

    /**
     * <p>True if Amazon Lookout for Vision classifies the image as containing an
     * anomaly, otherwise false.</p>
     */
    inline bool IsAnomalousHasBeenSet() const { return m_isAnomalousHasBeenSet; }

    /**
     * <p>True if Amazon Lookout for Vision classifies the image as containing an
     * anomaly, otherwise false.</p>
     */
    inline void SetIsAnomalous(bool value) { m_isAnomalousHasBeenSet = true; m_isAnomalous = value; }

    /**
     * <p>True if Amazon Lookout for Vision classifies the image as containing an
     * anomaly, otherwise false.</p>
     */
    inline DetectAnomalyResult& WithIsAnomalous(bool value) { SetIsAnomalous(value); return *this;}


    /**
     * <p>The confidence that Lookout for Vision has in the accuracy of the
     * classification in <code>IsAnomalous</code>.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that Lookout for Vision has in the accuracy of the
     * classification in <code>IsAnomalous</code>.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that Lookout for Vision has in the accuracy of the
     * classification in <code>IsAnomalous</code>.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that Lookout for Vision has in the accuracy of the
     * classification in <code>IsAnomalous</code>.</p>
     */
    inline DetectAnomalyResult& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline const Aws::Vector<Anomaly>& GetAnomalies() const{ return m_anomalies; }

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline bool AnomaliesHasBeenSet() const { return m_anomaliesHasBeenSet; }

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline void SetAnomalies(const Aws::Vector<Anomaly>& value) { m_anomaliesHasBeenSet = true; m_anomalies = value; }

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline void SetAnomalies(Aws::Vector<Anomaly>&& value) { m_anomaliesHasBeenSet = true; m_anomalies = std::move(value); }

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline DetectAnomalyResult& WithAnomalies(const Aws::Vector<Anomaly>& value) { SetAnomalies(value); return *this;}

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline DetectAnomalyResult& WithAnomalies(Aws::Vector<Anomaly>&& value) { SetAnomalies(std::move(value)); return *this;}

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline DetectAnomalyResult& AddAnomalies(const Anomaly& value) { m_anomaliesHasBeenSet = true; m_anomalies.push_back(value); return *this; }

    /**
     * <p>If the model is an image segmentation model, <code>Anomalies</code> contains
     * a list of anomaly types found in the image. There is one entry for each type of
     * anomaly found (even if multiple instances of an anomaly type exist on the
     * image). The first element in the list is always an anomaly type representing the
     * image background ('background') and shouldn't be considered an anomaly. Amazon
     * Lookout for Vision automatically add the background anomaly type to the
     * response, and you don't need to declare a background anomaly type in your
     * dataset.</p> <p>If the list has one entry ('background'), no anomalies were
     * found on the image.</p> <p/> <p>An image classification model doesn't return an
     * <code>Anomalies</code> list. </p>
     */
    inline DetectAnomalyResult& AddAnomalies(Anomaly&& value) { m_anomaliesHasBeenSet = true; m_anomalies.push_back(std::move(value)); return *this; }


    /**
     * <p>If the model is an image segmentation model, <code>AnomalyMask</code>
     * contains pixel masks that covers all anomaly types found on the image. Each
     * anomaly type has a different mask color. To map a color to an anomaly type, see
     * the <code>color</code> field of the <a>PixelAnomaly</a> object.</p> <p>An image
     * classification model doesn't return an <code>Anomalies</code> list. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetAnomalyMask() const{ return m_anomalyMask; }

    /**
     * <p>If the model is an image segmentation model, <code>AnomalyMask</code>
     * contains pixel masks that covers all anomaly types found on the image. Each
     * anomaly type has a different mask color. To map a color to an anomaly type, see
     * the <code>color</code> field of the <a>PixelAnomaly</a> object.</p> <p>An image
     * classification model doesn't return an <code>Anomalies</code> list. </p>
     */
    inline bool AnomalyMaskHasBeenSet() const { return m_anomalyMaskHasBeenSet; }

    /**
     * <p>If the model is an image segmentation model, <code>AnomalyMask</code>
     * contains pixel masks that covers all anomaly types found on the image. Each
     * anomaly type has a different mask color. To map a color to an anomaly type, see
     * the <code>color</code> field of the <a>PixelAnomaly</a> object.</p> <p>An image
     * classification model doesn't return an <code>Anomalies</code> list. </p>
     */
    inline void SetAnomalyMask(const Aws::Utils::ByteBuffer& value) { m_anomalyMaskHasBeenSet = true; m_anomalyMask = value; }

    /**
     * <p>If the model is an image segmentation model, <code>AnomalyMask</code>
     * contains pixel masks that covers all anomaly types found on the image. Each
     * anomaly type has a different mask color. To map a color to an anomaly type, see
     * the <code>color</code> field of the <a>PixelAnomaly</a> object.</p> <p>An image
     * classification model doesn't return an <code>Anomalies</code> list. </p>
     */
    inline void SetAnomalyMask(Aws::Utils::ByteBuffer&& value) { m_anomalyMaskHasBeenSet = true; m_anomalyMask = std::move(value); }

    /**
     * <p>If the model is an image segmentation model, <code>AnomalyMask</code>
     * contains pixel masks that covers all anomaly types found on the image. Each
     * anomaly type has a different mask color. To map a color to an anomaly type, see
     * the <code>color</code> field of the <a>PixelAnomaly</a> object.</p> <p>An image
     * classification model doesn't return an <code>Anomalies</code> list. </p>
     */
    inline DetectAnomalyResult& WithAnomalyMask(const Aws::Utils::ByteBuffer& value) { SetAnomalyMask(value); return *this;}

    /**
     * <p>If the model is an image segmentation model, <code>AnomalyMask</code>
     * contains pixel masks that covers all anomaly types found on the image. Each
     * anomaly type has a different mask color. To map a color to an anomaly type, see
     * the <code>color</code> field of the <a>PixelAnomaly</a> object.</p> <p>An image
     * classification model doesn't return an <code>Anomalies</code> list. </p>
     */
    inline DetectAnomalyResult& WithAnomalyMask(Aws::Utils::ByteBuffer&& value) { SetAnomalyMask(std::move(value)); return *this;}

  private:

    ImageSource m_source;
    bool m_sourceHasBeenSet = false;

    bool m_isAnomalous;
    bool m_isAnomalousHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<Anomaly> m_anomalies;
    bool m_anomaliesHasBeenSet = false;

    Aws::Utils::ByteBuffer m_anomalyMask;
    bool m_anomalyMaskHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
