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
   * <p>Configures how labels are consolidated across human workers.</p><p><h3>See
   * Also:</h3>   <a
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
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline const Aws::String& GetAnnotationConsolidationLambdaArn() const{ return m_annotationConsolidationLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline bool AnnotationConsolidationLambdaArnHasBeenSet() const { return m_annotationConsolidationLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(const Aws::String& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(Aws::String&& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(const char* value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(const Aws::String& value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(Aws::String&& value) { SetAnnotationConsolidationLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <ul>
     * <li> <p> <i>Bounding box</i> - Finds the most similar boxes from different
     * workers based on the Jaccard index of the boxes.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> </li> <li> <p> <i>Image classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> </li> <li> <p> <i>Semantic segmentation</i> - Treats each pixel in an image
     * as a multi-class classification and treats pixel annotations from workers as
     * "votes" for the correct label.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> </li> <li> <p> <i>Text classification</i> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(const char* value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

  private:

    Aws::String m_annotationConsolidationLambdaArn;
    bool m_annotationConsolidationLambdaArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
