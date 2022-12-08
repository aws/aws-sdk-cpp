/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/rekognition/model/HumanLoopConfig.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectModerationLabelsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectModerationLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectModerationLabels"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline DetectModerationLabelsRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline DetectModerationLabelsRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence level lower than this
     * specified value.</p> <p>If you don't specify <code>MinConfidence</code>, the
     * operation returns labels with confidence values greater than or equal to 50
     * percent.</p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence level lower than this
     * specified value.</p> <p>If you don't specify <code>MinConfidence</code>, the
     * operation returns labels with confidence values greater than or equal to 50
     * percent.</p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence level lower than this
     * specified value.</p> <p>If you don't specify <code>MinConfidence</code>, the
     * operation returns labels with confidence values greater than or equal to 50
     * percent.</p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence level lower than this
     * specified value.</p> <p>If you don't specify <code>MinConfidence</code>, the
     * operation returns labels with confidence values greater than or equal to 50
     * percent.</p>
     */
    inline DetectModerationLabelsRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}


    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const{ return m_humanLoopConfig; }

    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline bool HumanLoopConfigHasBeenSet() const { return m_humanLoopConfigHasBeenSet; }

    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline void SetHumanLoopConfig(const HumanLoopConfig& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = value; }

    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline void SetHumanLoopConfig(HumanLoopConfig&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::move(value); }

    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline DetectModerationLabelsRequest& WithHumanLoopConfig(const HumanLoopConfig& value) { SetHumanLoopConfig(value); return *this;}

    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline DetectModerationLabelsRequest& WithHumanLoopConfig(HumanLoopConfig&& value) { SetHumanLoopConfig(std::move(value)); return *this;}

  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;

    HumanLoopConfig m_humanLoopConfig;
    bool m_humanLoopConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
