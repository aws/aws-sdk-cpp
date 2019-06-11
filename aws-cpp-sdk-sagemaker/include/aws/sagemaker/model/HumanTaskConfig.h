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
  class AWS_SAGEMAKER_API HumanTaskConfig
  {
  public:
    HumanTaskConfig();
    HumanTaskConfig(Aws::Utils::Json::JsonView jsonValue);
    HumanTaskConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetPreHumanTaskLambdaArn() const{ return m_preHumanTaskLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline bool PreHumanTaskLambdaArnHasBeenSet() const { return m_preHumanTaskLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline void SetPreHumanTaskLambdaArn(const Aws::String& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline void SetPreHumanTaskLambdaArn(Aws::String&& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline void SetPreHumanTaskLambdaArn(const char* value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline HumanTaskConfig& WithPreHumanTaskLambdaArn(const Aws::String& value) { SetPreHumanTaskLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
     * </p> </li> </ul>
     */
    inline HumanTaskConfig& WithPreHumanTaskLambdaArn(Aws::String&& value) { SetPreHumanTaskLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function that is run before a data
     * object is sent to a human worker. Use this function to provide input to a custom
     * labeling job.</p> <p>For the built-in bounding box, image classification,
     * semantic segmentation, and text classification task types, Amazon SageMaker
     * Ground Truth provides the following Lambda functions:</p> <p> <b>US East
     * (Northern Virginia) (us-east-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US East (Ohio) (us-east-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>US West (Oregon) (us-west-2):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>EU (Ireland) (eu-west-1):</b> </p> <ul> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-BoundingBox</code> </p>
     * </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Tokyo) (ap-northeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:PRE-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Asia Pacific (Sydney) (ap-southeast-1):</b> </p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-BoundingBox</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-ImageMultiClass</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-SemanticSegmentation</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:PRE-TextMultiClass</code>
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
     * <p>The amount of time that a worker has to complete a task.</p>
     */
    inline int GetTaskTimeLimitInSeconds() const{ return m_taskTimeLimitInSeconds; }

    /**
     * <p>The amount of time that a worker has to complete a task.</p>
     */
    inline bool TaskTimeLimitInSecondsHasBeenSet() const { return m_taskTimeLimitInSecondsHasBeenSet; }

    /**
     * <p>The amount of time that a worker has to complete a task.</p>
     */
    inline void SetTaskTimeLimitInSeconds(int value) { m_taskTimeLimitInSecondsHasBeenSet = true; m_taskTimeLimitInSeconds = value; }

    /**
     * <p>The amount of time that a worker has to complete a task.</p>
     */
    inline HumanTaskConfig& WithTaskTimeLimitInSeconds(int value) { SetTaskTimeLimitInSeconds(value); return *this;}


    /**
     * <p>The length of time that a task remains available for labelling by human
     * workers.</p>
     */
    inline int GetTaskAvailabilityLifetimeInSeconds() const{ return m_taskAvailabilityLifetimeInSeconds; }

    /**
     * <p>The length of time that a task remains available for labelling by human
     * workers.</p>
     */
    inline bool TaskAvailabilityLifetimeInSecondsHasBeenSet() const { return m_taskAvailabilityLifetimeInSecondsHasBeenSet; }

    /**
     * <p>The length of time that a task remains available for labelling by human
     * workers.</p>
     */
    inline void SetTaskAvailabilityLifetimeInSeconds(int value) { m_taskAvailabilityLifetimeInSecondsHasBeenSet = true; m_taskAvailabilityLifetimeInSeconds = value; }

    /**
     * <p>The length of time that a task remains available for labelling by human
     * workers.</p>
     */
    inline HumanTaskConfig& WithTaskAvailabilityLifetimeInSeconds(int value) { SetTaskAvailabilityLifetimeInSeconds(value); return *this;}


    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Each object may have more than one worker at one
     * time.</p>
     */
    inline int GetMaxConcurrentTaskCount() const{ return m_maxConcurrentTaskCount; }

    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Each object may have more than one worker at one
     * time.</p>
     */
    inline bool MaxConcurrentTaskCountHasBeenSet() const { return m_maxConcurrentTaskCountHasBeenSet; }

    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Each object may have more than one worker at one
     * time.</p>
     */
    inline void SetMaxConcurrentTaskCount(int value) { m_maxConcurrentTaskCountHasBeenSet = true; m_maxConcurrentTaskCount = value; }

    /**
     * <p>Defines the maximum number of data objects that can be labeled by human
     * workers at the same time. Each object may have more than one worker at one
     * time.</p>
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
     * <p>The price that you pay for each task performed by a public worker.</p>
     */
    inline const PublicWorkforceTaskPrice& GetPublicWorkforceTaskPrice() const{ return m_publicWorkforceTaskPrice; }

    /**
     * <p>The price that you pay for each task performed by a public worker.</p>
     */
    inline bool PublicWorkforceTaskPriceHasBeenSet() const { return m_publicWorkforceTaskPriceHasBeenSet; }

    /**
     * <p>The price that you pay for each task performed by a public worker.</p>
     */
    inline void SetPublicWorkforceTaskPrice(const PublicWorkforceTaskPrice& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = value; }

    /**
     * <p>The price that you pay for each task performed by a public worker.</p>
     */
    inline void SetPublicWorkforceTaskPrice(PublicWorkforceTaskPrice&& value) { m_publicWorkforceTaskPriceHasBeenSet = true; m_publicWorkforceTaskPrice = std::move(value); }

    /**
     * <p>The price that you pay for each task performed by a public worker.</p>
     */
    inline HumanTaskConfig& WithPublicWorkforceTaskPrice(const PublicWorkforceTaskPrice& value) { SetPublicWorkforceTaskPrice(value); return *this;}

    /**
     * <p>The price that you pay for each task performed by a public worker.</p>
     */
    inline HumanTaskConfig& WithPublicWorkforceTaskPrice(PublicWorkforceTaskPrice&& value) { SetPublicWorkforceTaskPrice(std::move(value)); return *this;}

  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet;

    UiConfig m_uiConfig;
    bool m_uiConfigHasBeenSet;

    Aws::String m_preHumanTaskLambdaArn;
    bool m_preHumanTaskLambdaArnHasBeenSet;

    Aws::Vector<Aws::String> m_taskKeywords;
    bool m_taskKeywordsHasBeenSet;

    Aws::String m_taskTitle;
    bool m_taskTitleHasBeenSet;

    Aws::String m_taskDescription;
    bool m_taskDescriptionHasBeenSet;

    int m_numberOfHumanWorkersPerDataObject;
    bool m_numberOfHumanWorkersPerDataObjectHasBeenSet;

    int m_taskTimeLimitInSeconds;
    bool m_taskTimeLimitInSecondsHasBeenSet;

    int m_taskAvailabilityLifetimeInSeconds;
    bool m_taskAvailabilityLifetimeInSecondsHasBeenSet;

    int m_maxConcurrentTaskCount;
    bool m_maxConcurrentTaskCountHasBeenSet;

    AnnotationConsolidationConfig m_annotationConsolidationConfig;
    bool m_annotationConsolidationConfigHasBeenSet;

    PublicWorkforceTaskPrice m_publicWorkforceTaskPrice;
    bool m_publicWorkforceTaskPriceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
