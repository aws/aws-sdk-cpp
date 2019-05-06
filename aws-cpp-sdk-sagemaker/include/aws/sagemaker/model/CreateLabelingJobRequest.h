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
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
#include <aws/sagemaker/model/LabelingJobOutputConfig.h>
#include <aws/sagemaker/model/LabelingJobStoppingConditions.h>
#include <aws/sagemaker/model/LabelingJobAlgorithmsConfig.h>
#include <aws/sagemaker/model/HumanTaskConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateLabelingJobRequest : public SageMakerRequest
  {
  public:
    CreateLabelingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLabelingJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = value; }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::move(value); }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline void SetLabelingJobName(const char* value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName.assign(value); }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}


    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline const Aws::String& GetLabelAttributeName() const{ return m_labelAttributeName; }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline bool LabelAttributeNameHasBeenSet() const { return m_labelAttributeNameHasBeenSet; }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline void SetLabelAttributeName(const Aws::String& value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName = value; }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline void SetLabelAttributeName(Aws::String&& value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName = std::move(value); }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline void SetLabelAttributeName(const char* value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName.assign(value); }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline CreateLabelingJobRequest& WithLabelAttributeName(const Aws::String& value) { SetLabelAttributeName(value); return *this;}

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline CreateLabelingJobRequest& WithLabelAttributeName(Aws::String&& value) { SetLabelAttributeName(std::move(value)); return *this;}

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The name can't end with "-metadata". If you are running a semantic
     * segmentation labeling job, the attribute name must end with "-ref". If you are
     * running any other kind of labeling job, the attribute name must not end with
     * "-ref".</p>
     */
    inline CreateLabelingJobRequest& WithLabelAttributeName(const char* value) { SetLabelAttributeName(value); return *this;}


    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p>
     */
    inline void SetInputConfig(const LabelingJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p>
     */
    inline void SetInputConfig(LabelingJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p>
     */
    inline CreateLabelingJobRequest& WithInputConfig(const LabelingJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p>
     */
    inline CreateLabelingJobRequest& WithInputConfig(LabelingJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>The location of the output data and the AWS Key Management Service key ID for
     * the key used to encrypt the output data, if any.</p>
     */
    inline const LabelingJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The location of the output data and the AWS Key Management Service key ID for
     * the key used to encrypt the output data, if any.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The location of the output data and the AWS Key Management Service key ID for
     * the key used to encrypt the output data, if any.</p>
     */
    inline void SetOutputConfig(const LabelingJobOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The location of the output data and the AWS Key Management Service key ID for
     * the key used to encrypt the output data, if any.</p>
     */
    inline void SetOutputConfig(LabelingJobOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The location of the output data and the AWS Key Management Service key ID for
     * the key used to encrypt the output data, if any.</p>
     */
    inline CreateLabelingJobRequest& WithOutputConfig(const LabelingJobOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The location of the output data and the AWS Key Management Service key ID for
     * the key used to encrypt the output data, if any.</p>
     */
    inline CreateLabelingJobRequest& WithOutputConfig(LabelingJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline CreateLabelingJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline CreateLabelingJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline CreateLabelingJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline const Aws::String& GetLabelCategoryConfigS3Uri() const{ return m_labelCategoryConfigS3Uri; }

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline bool LabelCategoryConfigS3UriHasBeenSet() const { return m_labelCategoryConfigS3UriHasBeenSet; }

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline void SetLabelCategoryConfigS3Uri(const Aws::String& value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri = value; }

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline void SetLabelCategoryConfigS3Uri(Aws::String&& value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri = std::move(value); }

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline void SetLabelCategoryConfigS3Uri(const char* value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri.assign(value); }

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(const Aws::String& value) { SetLabelCategoryConfigS3Uri(value); return *this;}

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(Aws::String&& value) { SetLabelCategoryConfigS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URL of the file that defines the categories used to label the data
     * objects.</p> <p>The file is a JSON structure in the following format:</p> <p>
     * <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p> <p>
     * <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(const char* value) { SetLabelCategoryConfigS3Uri(value); return *this;}


    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline const LabelingJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline bool StoppingConditionsHasBeenSet() const { return m_stoppingConditionsHasBeenSet; }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline void SetStoppingConditions(const LabelingJobStoppingConditions& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = value; }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline void SetStoppingConditions(LabelingJobStoppingConditions&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::move(value); }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithStoppingConditions(const LabelingJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithStoppingConditions(LabelingJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}


    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline const LabelingJobAlgorithmsConfig& GetLabelingJobAlgorithmsConfig() const{ return m_labelingJobAlgorithmsConfig; }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline bool LabelingJobAlgorithmsConfigHasBeenSet() const { return m_labelingJobAlgorithmsConfigHasBeenSet; }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline void SetLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { m_labelingJobAlgorithmsConfigHasBeenSet = true; m_labelingJobAlgorithmsConfig = value; }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline void SetLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { m_labelingJobAlgorithmsConfigHasBeenSet = true; m_labelingJobAlgorithmsConfig = std::move(value); }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { SetLabelingJobAlgorithmsConfig(value); return *this;}

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { SetLabelingJobAlgorithmsConfig(std::move(value)); return *this;}


    /**
     * <p>Configures the information required for human workers to complete a labeling
     * task.</p>
     */
    inline const HumanTaskConfig& GetHumanTaskConfig() const{ return m_humanTaskConfig; }

    /**
     * <p>Configures the information required for human workers to complete a labeling
     * task.</p>
     */
    inline bool HumanTaskConfigHasBeenSet() const { return m_humanTaskConfigHasBeenSet; }

    /**
     * <p>Configures the information required for human workers to complete a labeling
     * task.</p>
     */
    inline void SetHumanTaskConfig(const HumanTaskConfig& value) { m_humanTaskConfigHasBeenSet = true; m_humanTaskConfig = value; }

    /**
     * <p>Configures the information required for human workers to complete a labeling
     * task.</p>
     */
    inline void SetHumanTaskConfig(HumanTaskConfig&& value) { m_humanTaskConfigHasBeenSet = true; m_humanTaskConfig = std::move(value); }

    /**
     * <p>Configures the information required for human workers to complete a labeling
     * task.</p>
     */
    inline CreateLabelingJobRequest& WithHumanTaskConfig(const HumanTaskConfig& value) { SetHumanTaskConfig(value); return *this;}

    /**
     * <p>Configures the information required for human workers to complete a labeling
     * task.</p>
     */
    inline CreateLabelingJobRequest& WithHumanTaskConfig(HumanTaskConfig&& value) { SetHumanTaskConfig(std::move(value)); return *this;}


    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet;

    Aws::String m_labelAttributeName;
    bool m_labelAttributeNameHasBeenSet;

    LabelingJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet;

    LabelingJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_labelCategoryConfigS3Uri;
    bool m_labelCategoryConfigS3UriHasBeenSet;

    LabelingJobStoppingConditions m_stoppingConditions;
    bool m_stoppingConditionsHasBeenSet;

    LabelingJobAlgorithmsConfig m_labelingJobAlgorithmsConfig;
    bool m_labelingJobAlgorithmsConfigHasBeenSet;

    HumanTaskConfig m_humanTaskConfig;
    bool m_humanTaskConfigHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
