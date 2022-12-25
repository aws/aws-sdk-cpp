/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DetectLabelsSettings.h>
#include <aws/rekognition/model/DetectLabelsFeatureName.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectLabelsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectLabels"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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


    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline const Aws::Vector<DetectLabelsFeatureName>& GetFeatures() const{ return m_features; }

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline void SetFeatures(const Aws::Vector<DetectLabelsFeatureName>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline void SetFeatures(Aws::Vector<DetectLabelsFeatureName>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline DetectLabelsRequest& WithFeatures(const Aws::Vector<DetectLabelsFeatureName>& value) { SetFeatures(value); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline DetectLabelsRequest& WithFeatures(Aws::Vector<DetectLabelsFeatureName>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline DetectLabelsRequest& AddFeatures(const DetectLabelsFeatureName& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline DetectLabelsRequest& AddFeatures(DetectLabelsFeatureName&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see LINK HERE.</p>
     */
    inline const DetectLabelsSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see LINK HERE.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see LINK HERE.</p>
     */
    inline void SetSettings(const DetectLabelsSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see LINK HERE.</p>
     */
    inline void SetSettings(DetectLabelsSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see LINK HERE.</p>
     */
    inline DetectLabelsRequest& WithSettings(const DetectLabelsSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see LINK HERE.</p>
     */
    inline DetectLabelsRequest& WithSettings(DetectLabelsSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    int m_maxLabels;
    bool m_maxLabelsHasBeenSet = false;

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;

    Aws::Vector<DetectLabelsFeatureName> m_features;
    bool m_featuresHasBeenSet = false;

    DetectLabelsSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
