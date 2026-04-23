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
#include <aws/sagemaker/model/LabelingJobStatus.h>
#include <aws/sagemaker/model/LabelCounters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
#include <aws/sagemaker/model/LabelingJobOutputConfig.h>
#include <aws/sagemaker/model/LabelingJobStoppingConditions.h>
#include <aws/sagemaker/model/LabelingJobAlgorithmsConfig.h>
#include <aws/sagemaker/model/HumanTaskConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/LabelingJobOutput.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API DescribeLabelingJobResult
  {
  public:
    DescribeLabelingJobResult();
    DescribeLabelingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLabelingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline const LabelingJobStatus& GetLabelingJobStatus() const{ return m_labelingJobStatus; }

    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline void SetLabelingJobStatus(const LabelingJobStatus& value) { m_labelingJobStatus = value; }

    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline void SetLabelingJobStatus(LabelingJobStatus&& value) { m_labelingJobStatus = std::move(value); }

    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobStatus(const LabelingJobStatus& value) { SetLabelingJobStatus(value); return *this;}

    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobStatus(LabelingJobStatus&& value) { SetLabelingJobStatus(std::move(value)); return *this;}


    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline const LabelCounters& GetLabelCounters() const{ return m_labelCounters; }

    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline void SetLabelCounters(const LabelCounters& value) { m_labelCounters = value; }

    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline void SetLabelCounters(LabelCounters&& value) { m_labelCounters = std::move(value); }

    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline DescribeLabelingJobResult& WithLabelCounters(const LabelCounters& value) { SetLabelCounters(value); return *this;}

    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline DescribeLabelingJobResult& WithLabelCounters(LabelCounters&& value) { SetLabelCounters(std::move(value)); return *this;}


    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline DescribeLabelingJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline DescribeLabelingJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline DescribeLabelingJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline DescribeLabelingJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline DescribeLabelingJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline DescribeLabelingJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline DescribeLabelingJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline const Aws::String& GetJobReferenceCode() const{ return m_jobReferenceCode; }

    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline void SetJobReferenceCode(const Aws::String& value) { m_jobReferenceCode = value; }

    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline void SetJobReferenceCode(Aws::String&& value) { m_jobReferenceCode = std::move(value); }

    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline void SetJobReferenceCode(const char* value) { m_jobReferenceCode.assign(value); }

    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithJobReferenceCode(const Aws::String& value) { SetJobReferenceCode(value); return *this;}

    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithJobReferenceCode(Aws::String&& value) { SetJobReferenceCode(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithJobReferenceCode(const char* value) { SetJobReferenceCode(value); return *this;}


    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }

    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobName = value; }

    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobName = std::move(value); }

    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline void SetLabelingJobName(const char* value) { m_labelingJobName.assign(value); }

    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}

    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline const Aws::String& GetLabelAttributeName() const{ return m_labelAttributeName; }

    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline void SetLabelAttributeName(const Aws::String& value) { m_labelAttributeName = value; }

    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline void SetLabelAttributeName(Aws::String&& value) { m_labelAttributeName = std::move(value); }

    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline void SetLabelAttributeName(const char* value) { m_labelAttributeName.assign(value); }

    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline DescribeLabelingJobResult& WithLabelAttributeName(const Aws::String& value) { SetLabelAttributeName(value); return *this;}

    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline DescribeLabelingJobResult& WithLabelAttributeName(Aws::String&& value) { SetLabelAttributeName(std::move(value)); return *this;}

    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline DescribeLabelingJobResult& WithLabelAttributeName(const char* value) { SetLabelAttributeName(value); return *this;}


    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline void SetInputConfig(const LabelingJobInputConfig& value) { m_inputConfig = value; }

    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline void SetInputConfig(LabelingJobInputConfig&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline DescribeLabelingJobResult& WithInputConfig(const LabelingJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline DescribeLabelingJobResult& WithInputConfig(LabelingJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>The location of the job's output data and the AWS Key Management Service key
     * ID for the key used to encrypt the output data, if any.</p>
     */
    inline const LabelingJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The location of the job's output data and the AWS Key Management Service key
     * ID for the key used to encrypt the output data, if any.</p>
     */
    inline void SetOutputConfig(const LabelingJobOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>The location of the job's output data and the AWS Key Management Service key
     * ID for the key used to encrypt the output data, if any.</p>
     */
    inline void SetOutputConfig(LabelingJobOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>The location of the job's output data and the AWS Key Management Service key
     * ID for the key used to encrypt the output data, if any.</p>
     */
    inline DescribeLabelingJobResult& WithOutputConfig(const LabelingJobOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The location of the job's output data and the AWS Key Management Service key
     * ID for the key used to encrypt the output data, if any.</p>
     */
    inline DescribeLabelingJobResult& WithOutputConfig(LabelingJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline DescribeLabelingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline DescribeLabelingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks
     * on your behalf during data labeling.</p>
     */
    inline DescribeLabelingJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline const Aws::String& GetLabelCategoryConfigS3Uri() const{ return m_labelCategoryConfigS3Uri; }

    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline void SetLabelCategoryConfigS3Uri(const Aws::String& value) { m_labelCategoryConfigS3Uri = value; }

    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline void SetLabelCategoryConfigS3Uri(Aws::String&& value) { m_labelCategoryConfigS3Uri = std::move(value); }

    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline void SetLabelCategoryConfigS3Uri(const char* value) { m_labelCategoryConfigS3Uri.assign(value); }

    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(const Aws::String& value) { SetLabelCategoryConfigS3Uri(value); return *this;}

    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(Aws::String&& value) { SetLabelCategoryConfigS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects.</p> <p>The file is a JSON structure in the following format:</p>
     * <p> <code>{</code> </p> <p> <code> "document-version": "2018-11-28"</code> </p>
     * <p> <code> "labels": [</code> </p> <p> <code> {</code> </p> <p> <code> "label":
     * "<i>label 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p>
     * <p> <code> "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p>
     * <code> ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(const char* value) { SetLabelCategoryConfigS3Uri(value); return *this;}


    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline const LabelingJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }

    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline void SetStoppingConditions(const LabelingJobStoppingConditions& value) { m_stoppingConditions = value; }

    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline void SetStoppingConditions(LabelingJobStoppingConditions&& value) { m_stoppingConditions = std::move(value); }

    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline DescribeLabelingJobResult& WithStoppingConditions(const LabelingJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}

    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline DescribeLabelingJobResult& WithStoppingConditions(LabelingJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}


    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline const LabelingJobAlgorithmsConfig& GetLabelingJobAlgorithmsConfig() const{ return m_labelingJobAlgorithmsConfig; }

    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline void SetLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { m_labelingJobAlgorithmsConfig = value; }

    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline void SetLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { m_labelingJobAlgorithmsConfig = std::move(value); }

    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { SetLabelingJobAlgorithmsConfig(value); return *this;}

    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { SetLabelingJobAlgorithmsConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline const HumanTaskConfig& GetHumanTaskConfig() const{ return m_humanTaskConfig; }

    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline void SetHumanTaskConfig(const HumanTaskConfig& value) { m_humanTaskConfig = value; }

    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline void SetHumanTaskConfig(HumanTaskConfig&& value) { m_humanTaskConfig = std::move(value); }

    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline DescribeLabelingJobResult& WithHumanTaskConfig(const HumanTaskConfig& value) { SetHumanTaskConfig(value); return *this;}

    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline DescribeLabelingJobResult& WithHumanTaskConfig(HumanTaskConfig&& value) { SetHumanTaskConfig(std::move(value)); return *this;}


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
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline DescribeLabelingJobResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline DescribeLabelingJobResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline DescribeLabelingJobResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline DescribeLabelingJobResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline const LabelingJobOutput& GetLabelingJobOutput() const{ return m_labelingJobOutput; }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline void SetLabelingJobOutput(const LabelingJobOutput& value) { m_labelingJobOutput = value; }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline void SetLabelingJobOutput(LabelingJobOutput&& value) { m_labelingJobOutput = std::move(value); }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobOutput(const LabelingJobOutput& value) { SetLabelingJobOutput(value); return *this;}

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline DescribeLabelingJobResult& WithLabelingJobOutput(LabelingJobOutput&& value) { SetLabelingJobOutput(std::move(value)); return *this;}

  private:

    LabelingJobStatus m_labelingJobStatus;

    LabelCounters m_labelCounters;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_jobReferenceCode;

    Aws::String m_labelingJobName;

    Aws::String m_labelingJobArn;

    Aws::String m_labelAttributeName;

    LabelingJobInputConfig m_inputConfig;

    LabelingJobOutputConfig m_outputConfig;

    Aws::String m_roleArn;

    Aws::String m_labelCategoryConfigS3Uri;

    LabelingJobStoppingConditions m_stoppingConditions;

    LabelingJobAlgorithmsConfig m_labelingJobAlgorithmsConfig;

    HumanTaskConfig m_humanTaskConfig;

    Aws::Vector<Tag> m_tags;

    LabelingJobOutput m_labelingJobOutput;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
