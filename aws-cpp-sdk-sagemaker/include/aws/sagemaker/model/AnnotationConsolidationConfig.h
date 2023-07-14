﻿/**
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
   * <p>Configures how labels are consolidated across human workers and processes
   * output data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AnnotationConsolidationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AnnotationConsolidationConfig
  {
  public:
    AnnotationConsolidationConfig();
    AnnotationConsolidationConfig(Aws::Utils::Json::JsonView jsonValue);
    AnnotationConsolidationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetAnnotationConsolidationLambdaArn() const{ return m_annotationConsolidationLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline bool AnnotationConsolidationLambdaArnHasBeenSet() const { return m_annotationConsolidationLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline void SetAnnotationConsolidationLambdaArn(const Aws::String& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline void SetAnnotationConsolidationLambdaArn(Aws::String&& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline void SetAnnotationConsolidationLambdaArn(const char* value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(const Aws::String& value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(Aws::String&& value) { SetAnnotationConsolidationLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">annotation
     * consolidation</a> and to process output data.</p> <p>This parameter is required
     * for all labeling jobs. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, use one of the following Amazon SageMaker Ground Truth Lambda
     * function ARNs for <code>AnnotationConsolidationLambdaArn</code>. For custom
     * labeling workflows, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step3.html#sms-custom-templates-step3-postlambda">Post-annotation
     * Lambda</a>. </p> <p> <b>Bounding box</b> - Finds the most similar boxes from
     * different workers based on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Video Classification</b> - Use this task type when you
     * need workers to classify videos using predefined labels that you specify.
     * Workers are shown videos and are asked to choose one label for each video.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoMultiClass</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection</b> - Use this task type to
     * have workers identify and locate objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to identify and localize various objects in a series of video
     * frames, such as cars, bikes, and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking</b> - Use this task type to
     * have workers track the movement of objects in a sequence of video frames (images
     * extracted from a video) using bounding boxes. For example, you can use this task
     * to ask workers to track the movement of objects, such as cars, bikes, and
     * pedestrians. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection</b> - Use this task type
     * when you want workers to classify objects in a 3D point cloud by drawing 3D
     * cuboids around objects. For example, you can use this task type to ask workers
     * to identify different types of objects in a point cloud, such as cars, bikes,
     * and pedestrians.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking</b> - Use this task type
     * when you want workers to draw 3D cuboids around objects that appear in a
     * sequence of 3D point cloud frames. For example, you can use this task type to
     * ask workers to track the movement of vehicles across multiple point cloud
     * frames. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation</b> - Use this task
     * type when you want workers to create a point-level semantic segmentation masks
     * by painting objects in a 3D point cloud using different colors where each color
     * is assigned to one of the classes you specify.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Use the following ARNs for Label Verification and
     * Adjustment Jobs</b> </p> <p>Use label verification and adjustment jobs to review
     * and adjust labels. To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels </a>.</p> <p> <b>Semantic Segmentation Adjustment</b> - Treats
     * each pixel in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Semantic Segmentation Verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding Box Adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Bounding Box Verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Detection Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to classify and localize objects in a sequence of video
     * frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectDetection</code>
     * </p> </li> </ul> <p> <b>Video Frame Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust bounding boxes that workers have added
     * to video frames to track object movement across a sequence of video frames.</p>
     * <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentVideoObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Detection Adjustment</b> - Use
     * this task type when you want workers to adjust 3D cuboids around objects in a 3D
     * point cloud. </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectDetection</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Object Tracking Adjustment</b> - Use this
     * task type when you want workers to adjust 3D cuboids around objects that appear
     * in a sequence of 3D point cloud frames.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudObjectTracking</code>
     * </p> </li> </ul> <p> <b>3D Point Cloud Semantic Segmentation Adjustment</b> -
     * Use this task type when you want workers to adjust a point-level semantic
     * segmentation masks using a paint tool.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-Adjustment3DPointCloudSemanticSegmentation</code>
     * </p> </li> </ul>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(const char* value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

  private:

    Aws::String m_annotationConsolidationLambdaArn;
    bool m_annotationConsolidationLambdaArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
