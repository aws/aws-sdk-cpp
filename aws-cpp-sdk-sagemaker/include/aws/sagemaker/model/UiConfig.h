/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provided configuration information for the worker UI for a labeling job.
   * Provide either <code>HumanTaskUiArn</code> or <code>UiTemplateS3Uri</code>.</p>
   * <p>For named entity recognition, 3D point cloud and video frame labeling jobs,
   * use <code>HumanTaskUiArn</code>.</p> <p>For all other Ground Truth built-in task
   * types and custom task types, use <code>UiTemplateS3Uri</code> to specify the
   * location of a worker task template in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UiConfig">AWS
   * API Reference</a></p>
   */
  class UiConfig
  {
  public:
    AWS_SAGEMAKER_API UiConfig();
    AWS_SAGEMAKER_API UiConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UiConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline const Aws::String& GetUiTemplateS3Uri() const{ return m_uiTemplateS3Uri; }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline bool UiTemplateS3UriHasBeenSet() const { return m_uiTemplateS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline void SetUiTemplateS3Uri(const Aws::String& value) { m_uiTemplateS3UriHasBeenSet = true; m_uiTemplateS3Uri = value; }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline void SetUiTemplateS3Uri(Aws::String&& value) { m_uiTemplateS3UriHasBeenSet = true; m_uiTemplateS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline void SetUiTemplateS3Uri(const char* value) { m_uiTemplateS3UriHasBeenSet = true; m_uiTemplateS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline UiConfig& WithUiTemplateS3Uri(const Aws::String& value) { SetUiTemplateS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline UiConfig& WithUiTemplateS3Uri(Aws::String&& value) { SetUiTemplateS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline UiConfig& WithUiTemplateS3Uri(const char* value) { SetUiTemplateS3Uri(value); return *this;}


    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = value; }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn.assign(value); }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline UiConfig& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline UiConfig& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks.</p> <p>Use this parameter when you are creating a
     * labeling job for named entity recognition, 3D point cloud and video frame
     * labeling jobs. Use your labeling job task type to select one of the following
     * ARNs and use it with this parameter when you create a labeling job. Replace
     * <code>aws-region</code> with the Amazon Web Services Region you are creating
     * your labeling job in. For example, replace <code>aws-region</code> with
     * <code>us-west-1</code> if you create a labeling job in US West (N.
     * California).</p> <p> <b>Named Entity Recognition</b> </p> <p>Use the following
     * <code>HumanTaskUiArn</code> for named entity recognition labeling jobs:</p> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/NamedEntityRecognition</code>
     * </p> <p> <b>3D Point Cloud HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for 3D point cloud object detection and 3D point
     * cloud object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * object tracking and 3D point cloud object tracking adjustment labeling jobs.
     * </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudObjectTracking</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for 3D point cloud
     * semantic segmentation and 3D point cloud semantic segmentation adjustment
     * labeling jobs.</p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/PointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame HumanTaskUiArns</b> </p> <p>Use this
     * <code>HumanTaskUiArn</code> for video frame object detection and video frame
     * object detection adjustment labeling jobs. </p> <ul> <li> <p>
     * <code>arn:aws:sagemaker:region:394669845002:human-task-ui/VideoObjectDetection</code>
     * </p> </li> </ul> <p> Use this <code>HumanTaskUiArn</code> for video frame object
     * tracking and video frame object tracking adjustment labeling jobs. </p> <ul>
     * <li> <p>
     * <code>arn:aws:sagemaker:aws-region:394669845002:human-task-ui/VideoObjectTracking</code>
     * </p> </li> </ul>
     */
    inline UiConfig& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}

  private:

    Aws::String m_uiTemplateS3Uri;
    bool m_uiTemplateS3UriHasBeenSet = false;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
