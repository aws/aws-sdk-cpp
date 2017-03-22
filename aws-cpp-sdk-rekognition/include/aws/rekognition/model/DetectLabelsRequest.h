/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API DetectLabelsRequest : public RekognitionRequest
  {
  public:
    DetectLabelsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input image. You can provide a blob of image bytes or an S3 object.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The input image. You can provide a blob of image bytes or an S3 object.</p>
     */
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The input image. You can provide a blob of image bytes or an S3 object.</p>
     */
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The input image. You can provide a blob of image bytes or an S3 object.</p>
     */
    inline DetectLabelsRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The input image. You can provide a blob of image bytes or an S3 object.</p>
     */
    inline DetectLabelsRequest& WithImage(Image&& value) { SetImage(value); return *this;}

    /**
     * <p>Maximum number of labels you want the service to return in the response. The
     * service returns the specified number of highest confidence labels. </p>
     */
    inline int GetMaxLabels() const{ return m_maxLabels; }

    /**
     * <p>Maximum number of labels you want the service to return in the response. The
     * service returns the specified number of highest confidence labels. </p>
     */
    inline void SetMaxLabels(int value) { m_maxLabelsHasBeenSet = true; m_maxLabels = value; }

    /**
     * <p>Maximum number of labels you want the service to return in the response. The
     * service returns the specified number of highest confidence labels. </p>
     */
    inline DetectLabelsRequest& WithMaxLabels(int value) { SetMaxLabels(value); return *this;}

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>minConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 50 percent.</p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>minConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 50 percent.</p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>minConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 50 percent.</p>
     */
    inline DetectLabelsRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}

  private:
    Image m_image;
    bool m_imageHasBeenSet;
    int m_maxLabels;
    bool m_maxLabelsHasBeenSet;
    double m_minConfidence;
    bool m_minConfidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
