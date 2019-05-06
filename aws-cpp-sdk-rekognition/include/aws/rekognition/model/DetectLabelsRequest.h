/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectLabels"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline DetectLabelsRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline DetectLabelsRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Maximum number of labels you want the service to return in the response. The
     * service returns the specified number of highest confidence labels. </p>
     */
    inline int GetMaxLabels() const{ return m_maxLabels; }

    /**
     * <p>Maximum number of labels you want the service to return in the response. The
     * service returns the specified number of highest confidence labels. </p>
     */
    inline bool MaxLabelsHasBeenSet() const { return m_maxLabelsHasBeenSet; }

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
     * value.</p> <p>If <code>MinConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 55 percent.</p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>MinConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 55 percent.</p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>MinConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 55 percent.</p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>MinConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 55 percent.</p>
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
