/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UiConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AnnotationConsolidationConfig.h>
#include <aws/sagemaker/model/PublicWorkforceTaskPrice.h>
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
   * <p>Information required for human workers to complete a labeling
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanTaskConfig">AWS
   * API Reference</a></p>
   */
  class HumanTaskConfig
  {
  public:
    AWS_SAGEMAKER_API HumanTaskConfig();
    AWS_SAGEMAKER_API HumanTaskConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanTaskConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline HumanTaskConfig& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline HumanTaskConfig& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to complete the
     * tasks.</p>
     */
    inline HumanTaskConfig& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}


    /**
     * <p>Information about the user interface that workers use to complete the
     * labeling task.</p>
     */
    inline const UiConfig& GetUiConfig() const{ return m_uiConfig; }

    /**
     * <p>Information about the user interface that workers use to complete the
     * labeling task.</p>
     */
    inline bool UiConfigHasBeenSet() const { return m_uiConfigHasBeenSet; }

    /**
     * <p>Information about the user interface that workers use to complete the
     * labeling task.</p>
     */
    inline void SetUiConfig(const UiConfig& value) { m_uiConfigHasBeenSet = true; m_uiConfig = value; }

    /**
     * <p>Information about the user interface that workers use to complete the
     * labeling task.</p>
     */
    inline void SetUiConfig(UiConfig&& value) { m_uiConfigHasBeenSet = true; m_uiConfig = std::move(value); }

    /**
     * <p>Information about the user interface that workers use to complete the
     * labeling task.</p>
     */
    inline HumanTaskConfig& WithUiConfig(const UiConfig& value) { SetUiConfig(value); return *this;}

    /**
     * <p>Information about the user interface that workers use to complete the
     * labeling task.</p>
     */
    inline HumanTaskConfig& WithUiConfig(UiConfig&& value) { SetUiConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetPreHumanTaskLambdaArn() const{ return m_preHumanTaskLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline bool PreHumanTaskLambdaArnHasBeenSet() const { return m_preHumanTaskLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline void SetPreHumanTaskLambdaArn(const Aws::String& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline void SetPreHumanTaskLambdaArn(Aws::String&& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline void SetPreHumanTaskLambdaArn(const char* value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline HumanTaskConfig& WithPreHumanTaskLambdaArn(const Aws::String& value) { SetPreHumanTaskLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline HumanTaskConfig& WithPreHumanTaskLambdaArn(Aws::String&& value) { SetPreHumanTaskLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>PreHumanTaskLambdaArn</code>. For custom labeling
     * workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-prelambda">Pre-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Modalities</b> </p> <p>Use the following
     * pre-annotation lambdas for 3D point cloud labeling modality tasks. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-task-types.html">3D
     * Point Cloud Task types </a> to learn more. </p> <p> <b>3D Point Cloud Object
     * Detection</b> - Use this task type when you want workers to classify objects in
     * a 3D point cloud by drawing 3D cuboids around objects. For example, you can use
     * this task type to ask workers to identify different types of objects in a point
     * cloud, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Bounding box verification</b> - Uses a
     * variant of the Expectation Maximization approach to estimate the true class of
     * verification judgement for bounding box labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud object detection adjustment</b> - Adjust
     * 3D cuboids in a point cloud frame. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D point cloud object tracking adjustment</b> - Adjust
     * 3D cuboids across a sequence of point cloud frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D point cloud semantic segmentation adjustment</b> -
     * Adjust semantic segmentation masks in a 3D point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:PRE-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline HumanTaskConfig& WithPreHumanTaskLambdaArn(const char* value) { SetPreHumanTaskLambdaArn(value); return *this;}


    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskKeywords() const{ return m_taskKeywords; }

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline bool TaskKeywordsHasBeenSet() const { return m_taskKeywordsHasBeenSet; }

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline void SetTaskKeywords(const Aws::Vector<Aws::String>& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords = value; }

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline void SetTaskKeywords(Aws::Vector<Aws::String>&& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords = std::move(value); }

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline HumanTaskConfig& WithTaskKeywords(const Aws::Vector<Aws::String>& value) { SetTaskKeywords(value); return *this;}

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline HumanTaskConfig& WithTaskKeywords(Aws::Vector<Aws::String>&& value) { SetTaskKeywords(std::move(value)); return *this;}

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline HumanTaskConfig& AddTaskKeywords(const Aws::String& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.push_back(value); return *this; }

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline HumanTaskConfig& AddTaskKeywords(Aws::String&& value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>Keywords used to describe the task so that workers on Amazon Mechanical Turk
     * can discover the task.</p>
     */
    inline HumanTaskConfig& AddTaskKeywords(const char* value) { m_taskKeywordsHasBeenSet = true; m_taskKeywords.push_back(value); return *this; }


    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline const Aws::String& GetTaskTitle() const{ return m_taskTitle; }

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline bool TaskTitleHasBeenSet() const { return m_taskTitleHasBeenSet; }

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline void SetTaskTitle(const Aws::String& value) { m_taskTitleHasBeenSet = true; m_taskTitle = value; }

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline void SetTaskTitle(Aws::String&& value) { m_taskTitleHasBeenSet = true; m_taskTitle = std::move(value); }

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline void SetTaskTitle(const char* value) { m_taskTitleHasBeenSet = true; m_taskTitle.assign(value); }

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline HumanTaskConfig& WithTaskTitle(const Aws::String& value) { SetTaskTitle(value); return *this;}

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline HumanTaskConfig& WithTaskTitle(Aws::String&& value) { SetTaskTitle(std::move(value)); return *this;}

    /**
     * <p>A title for the task for your human workers.</p>
     */
    inline HumanTaskConfig& WithTaskTitle(const char* value) { SetTaskTitle(value); return *this;}


    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline const Aws::String& GetTaskDescription() const{ return m_taskDescription; }

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline bool TaskDescriptionHasBeenSet() const { return m_taskDescriptionHasBeenSet; }

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline void SetTaskDescription(const Aws::String& value) { m_taskDescriptionHasBeenSet = true; m_taskDescription = value; }

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline void SetTaskDescription(Aws::String&& value) { m_taskDescriptionHasBeenSet = true; m_taskDescription = std::move(value); }

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline void SetTaskDescription(const char* value) { m_taskDescriptionHasBeenSet = true; m_taskDescription.assign(value); }

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline HumanTaskConfig& WithTaskDescription(const Aws::String& value) { SetTaskDescription(value); return *this;}

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline HumanTaskConfig& WithTaskDescription(Aws::String&& value) { SetTaskDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task for your human workers.</p>
     */
    inline HumanTaskConfig& WithTaskDescription(const char* value) { SetTaskDescription(value); return *this;}


    /**
     * <p>The number of human workers that will label an object. </p>
     */
    inline int GetNumberOfHumanWorkersPerDataObject() const{ return m_numberOfHumanWorkersPerDataObject; }

    /**
     * <p>The number of human workers that will label an object. </p>
     */
    inline bool NumberOfHumanWorkersPerDataObjectHasBeenSet() const { return m_numberOfHumanWorkersPerDataObjectHasBeenSet; }

    /**
     * <p>The number of human workers that will label an object. </p>
     */
    inline void SetNumberOfHumanWorkersPerDataObject(int value) { m_numberOfHumanWorkersPerDataObjectHasBeenSet = true; m_numberOfHumanWorkersPerDataObject = value; }

    /**
     * <p>The number of human workers that will label an object. </p>
     */
    inline HumanTaskConfig& WithNumberOfHumanWorkersPerDataObject(int value) { SetNumberOfHumanWorkersPerDataObject(value); return *this;}


    /**
     * <p>The amount of time that a worker has to complete a task. </p> <p>If you
     * create a custom labeling job, the maximum value for this parameter is 8 hours
     * (28,800 seconds).</p> <p>If you create a labeling job using a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task type</a> the maximum for this parameter depends on the task type you
     * use:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-images.html">image</a>
     * and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-text.html">text</a>
     * labeling jobs, the maximum is 8 hours (28,800 seconds).</p> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud.html">3D
     * point cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-video.html">video
     * frame</a> labeling jobs, the maximum is 30 days (2952,000 seconds) for non-AL
     * mode. For most users, the maximum is also 30 days.</p> </li> </ul>
     */
    inline int GetTaskTimeLimitInSeconds() const{ return m_taskTimeLimitInSeconds; }

    /**
     * <p>The amount of time that a worker has to complete a task. </p> <p>If you
     * create a custom labeling job, the maximum value for this parameter is 8 hours
     * (28,800 seconds).</p> <p>If you create a labeling job using a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task type</a> the maximum for this parameter depends on the task type you
     * use:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-images.html">image</a>
     * and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-text.html">text</a>
     * labeling jobs, the maximum is 8 hours (28,800 seconds).</p> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud.html">3D
     * point cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-video.html">video
     * frame</a> labeling jobs, the maximum is 30 days (2952,000 seconds) for non-AL
     * mode. For most users, the maximum is also 30 days.</p> </li> </ul>
     */
    inline bool TaskTimeLimitInSecondsHasBeenSet() const { return m_taskTimeLimitInSecondsHasBeenSet; }

    /**
     * <p>The amount of time that a worker has to complete a task. </p> <p>If you
     * create a custom labeling job, the maximum value for this parameter is 8 hours
     * (28,800 seconds).</p> <p>If you create a labeling job using a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task type</a> the maximum for this parameter depends on the task type you
     * use:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-images.html">image</a>
     * and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-text.html">text</a>
     * labeling jobs, the maximum is 8 hours (28,800 seconds).</p> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud.html">3D
     * point cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-video.html">video
     * frame</a> labeling jobs, the maximum is 30 days (2952,000 seconds) for non-AL
     * mode. For most users, the maximum is also 30 days.</p> </li> </ul>
     */
    inline void SetTaskTimeLimitInSeconds(int value) { m_taskTimeLimitInSecondsHasBeenSet = true; m_taskTimeLimitInSeconds = value; }

    /**
     * <p>The amount of time that a worker has to complete a task. </p> <p>If you
     * create a custom labeling job, the maximum value for this parameter is 8 hours
     * (28,800 seconds).</p> <p>If you create a labeling job using a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task type</a> the maximum for this parameter depends on the task type you
     * use:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-images.html">image</a>
     * and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-label-text.html">text</a>
     * labeling jobs, the maximum is 8 hours (28,800 seconds).</p> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud.html">3D
     * point cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-video.html">video
     * frame</a> labeling jobs, the maximum is 30 days (2952,000 seconds) for non-AL
     * mode. For most users, the maximum is also 30 days.</p> </li> </ul>
     */
    inline HumanTaskConfig& WithTaskTimeLimitInSeconds(int value) { SetTaskTimeLimitInSeconds(value); return *this;}


    /**
     * <p>The length of time that a task remains available for labeling by human
     * workers. The default and maximum values for this parameter depend on the type of
     * workforce you use.</p> <ul> <li> <p>If you choose the Amazon Mechanical Turk
     * workforce, the maximum is 12 hours (43,200 seconds). The default is 6 hours
     * (21,600 seconds).</p> </li> <li> <p>If you choose a private or vendor workforce,
     * the default value is 30 days (2592,000 seconds) for non-AL mode. For most users,
     * the maximum is also 30 days.</p> </li> </ul>
     */
    inline int GetTaskAvailabilityLifetimeInSeconds() const{ return m_taskAvailabilityLifetimeInSeconds; }

    /**
     * <p>The length of time that a task remains available for labeling by human
     * workers. The default and maximum values for this parameter depend on the type of
     * workforce you use.</p> <ul> <li> <p>If you choose the Amazon Mechanical Turk
     * workforce, the maximum is 12 hours (43,200 seconds). The default is 6 hours
     * (21,600 seconds).</p> </li> <li> <p>If you choose a private or vendor workforce,
     * the default value is 30 days (2592,000 seconds) for non-AL mode. For most users,
     * the maximum is also 30 days.</p> </li> </ul>
     */
    inline bool TaskAvailabilityLifetimeInSecondsHasBeenSet() const { return m_taskAvailabilityLifetimeInSecondsHasBeenSet; }

    /**
     * <p>The length of time that a task remains available for labeling by human
     * workers. The default and maximum values for this parameter depend on the type of
     * workforce you use.</p> <ul> <li> <p>If you choose the Amazon Mechanical Turk
     * workforce, the maximum is 12 hours (43,200 seconds). The default is 6 hours
     * (21,600 seconds).</p> </li> <li> <p>If you choose a private or vendor workforce,
     * the default value is 30 days (2592,000 seconds) for non-AL mode. For most users,
     * the maximum is also 30 days.</p> </li> </ul>
     */
    inline void SetTaskAvailabilityLifetimeInSeconds(int value) { m_taskAvailabilityLifetimeInSecondsHasBeenSet = true; m_taskAvailabilityLifetimeInSeconds = value; }

    /**
     * <p>The length of time that a task remains available for labeling by human
     * workers. The default and maximum values for this parameter depend on the type of
     * workforce you use.</p> <ul> <li> <p>If you choose the Amazon Mechanical Turk
     * workforce, the maximum is 12 hours (43,200 seconds). The default is 6 hours
     * (21,600 seconds).</p> </li> <li> <p>If you choose a private or vendor workforce,
     * the default value is 30 days (2592,000 seconds) for non-AL mode. For most users,
     * the maximum is also 30 days.</p> </li> </ul>
     */
    inline HumanTaskConfig& WithTaskAvailabilityLifetimeInSeconds(int value) { SetTaskAvailabilityLifetimeInSeconds(value); return *this;}


    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Also referred to as batch size. Each object may have
     * more than one worker at one time. The default value is 1000 objects. To increase
     * the maximum value to 5000 objects, contact Amazon Web Services Support.</p>
     */
    inline int GetMaxConcurrentTaskCount() const{ return m_maxConcurrentTaskCount; }

    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Also referred to as batch size. Each object may have
     * more than one worker at one time. The default value is 1000 objects. To increase
     * the maximum value to 5000 objects, contact Amazon Web Services Support.</p>
     */
    inline bool MaxConcurrentTaskCountHasBeenSet() const { return m_maxConcurrentTaskCountHasBeenSet; }

    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Also referred to as batch size. Each object may have
     * more than one worker at one time. The default value is 1000 objects. To increase
     * the maximum value to 5000 objects, contact Amazon Web Services Support.</p>
     */
    inline void SetMaxConcurrentTaskCount(int value) { m_maxConcurrentTaskCountHasBeenSet = true; m_maxConcurrentTaskCount = value; }

    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Also referred to as batch size. Each object may have
     * more than one worker at one time. The default value is 1000 objects. To increase
     * the maximum value to 5000 objects, contact Amazon Web Services Support.</p>
     */
    inline HumanTaskConfig& WithMaxConcurrentTaskCount(int value) { SetMaxConcurrentTaskCount(value); return *this;}


    /**
     * <p>Configures how labels are consolidated across human workers.</p>
     */
    inline const AnnotationConsolidationConfig& GetAnnotationConsolidationConfig() const{ return m_annotationConsolidationConfig; }

    /**
     * <p>Configures how labels are consolidated across human workers.</p>
     */
    inline bool AnnotationConsolidationConfigHasBeenSet() const { return m_annotationConsolidationConfigHasBeenSet; }

    /**
     * <p>Configures how labels are consolidated across human workers.</p>
     */
    inline void SetAnnotationConsolidationConfig(const AnnotationConsolidationConfig& value) { m_annotationConsolidationConfigHasBeenSet = true; m_annotationConsolidationConfig = value; }

    /**
     * <p>Configures how labels are consolidated across human workers.</p>
     */
    inline void SetAnnotationConsolidationConfig(AnnotationConsolidationConfig&& value) { m_annotationConsolidationConfigHasBeenSet = true; m_annotationConsolidationConfig = std::move(value); }

    /**
     * <p>Configures how labels are consolidated across human workers.</p>
     */
    inline HumanTaskConfig& WithAnnotationConsolidationConfig(const AnnotationConsolidationConfig& value) { SetAnnotationConsolidationConfig(value); return *this;}

    /**
     * <p>Configures how labels are consolidated across human workers.</p>
     */
    inline HumanTaskConfig& WithAnnotationConsolidationConfig(AnnotationConsolidationConfig&& value) { SetAnnotationConsolidationConfig(std::move(value)); return *this;}


    /**
     * <p>The price that you pay for each task performed by an Amazon Mechanical Turk
     * worker.</p>
     */
    inline const PublicWorkforceTaskPrice& GetPublicWorkforceTaskPrice() const{ return m_publicWorkforceTaskPrice; }

    /**
     * <p>The price that you pay for each task performed by an Amazon Mechanical Turk
     * worker.</p>
     */
    inline bool PublicWorkforceTaskPriceHasBeenSet() const { return m_publicWorkforceTaskPriceHasBeenSet; }

    /**
     * <p>The price that you pay for each task performed by an Amazon Mechanical Turk
     * worker.</p>
     */
    inline void SetPublicWorkforceTaskPrice(const PublicWorkforceTaskPrice& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = value; }

    /**
     * <p>The price that you pay for each task performed by an Amazon Mechanical Turk
     * worker.</p>
     */
    inline void SetPublicWorkforceTaskPrice(PublicWorkforceTaskPrice&& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = std::move(value); }

    /**
     * <p>The price that you pay for each task performed by an Amazon Mechanical Turk
     * worker.</p>
     */
    inline HumanTaskConfig& WithPublicWorkforceTaskPrice(const PublicWorkforceTaskPrice& value) { SetPublicWorkforceTaskPrice(value); return *this;}

    /**
     * <p>The price that you pay for each task performed by an Amazon Mechanical Turk
     * worker.</p>
     */
    inline HumanTaskConfig& WithPublicWorkforceTaskPrice(PublicWorkforceTaskPrice&& value) { SetPublicWorkforceTaskPrice(std::move(value)); return *this;}

  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    UiConfig m_uiConfig;
    bool m_uiConfigHasBeenSet = false;

    Aws::String m_preHumanTaskLambdaArn;
    bool m_preHumanTaskLambdaArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskKeywords;
    bool m_taskKeywordsHasBeenSet = false;

    Aws::String m_taskTitle;
    bool m_taskTitleHasBeenSet = false;

    Aws::String m_taskDescription;
    bool m_taskDescriptionHasBeenSet = false;

    int m_numberOfHumanWorkersPerDataObject;
    bool m_numberOfHumanWorkersPerDataObjectHasBeenSet = false;

    int m_taskTimeLimitInSeconds;
    bool m_taskTimeLimitInSecondsHasBeenSet = false;

    int m_taskAvailabilityLifetimeInSeconds;
    bool m_taskAvailabilityLifetimeInSecondsHasBeenSet = false;

    int m_maxConcurrentTaskCount;
    bool m_maxConcurrentTaskCountHasBeenSet = false;

    AnnotationConsolidationConfig m_annotationConsolidationConfig;
    bool m_annotationConsolidationConfigHasBeenSet = false;

    PublicWorkforceTaskPrice m_publicWorkforceTaskPrice;
    bool m_publicWorkforceTaskPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
