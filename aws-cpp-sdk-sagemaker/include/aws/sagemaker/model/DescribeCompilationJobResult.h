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
#include <aws/sagemaker/model/CompilationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/ModelArtifacts.h>
#include <aws/sagemaker/model/InputConfig.h>
#include <aws/sagemaker/model/OutputConfig.h>
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
  class AWS_SAGEMAKER_API DescribeCompilationJobResult
  {
  public:
    DescribeCompilationJobResult();
    DescribeCompilationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCompilationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the model compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>The name of the model compilation job.</p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobName = value; }

    /**
     * <p>The name of the model compilation job.</p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobName = std::move(value); }

    /**
     * <p>The name of the model compilation job.</p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobName.assign(value); }

    /**
     * <p>The name of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>The name of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobArn() const{ return m_compilationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline void SetCompilationJobArn(const Aws::String& value) { m_compilationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline void SetCompilationJobArn(Aws::String&& value) { m_compilationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline void SetCompilationJobArn(const char* value) { m_compilationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobArn(const Aws::String& value) { SetCompilationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobArn(Aws::String&& value) { SetCompilationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker assumes
     * to perform the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobArn(const char* value) { SetCompilationJobArn(value); return *this;}


    /**
     * <p>The status of the model compilation job.</p>
     */
    inline const CompilationJobStatus& GetCompilationJobStatus() const{ return m_compilationJobStatus; }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline void SetCompilationJobStatus(const CompilationJobStatus& value) { m_compilationJobStatus = value; }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline void SetCompilationJobStatus(CompilationJobStatus&& value) { m_compilationJobStatus = std::move(value); }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobStatus(const CompilationJobStatus& value) { SetCompilationJobStatus(value); return *this;}

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithCompilationJobStatus(CompilationJobStatus&& value) { SetCompilationJobStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the model compilation job started the
     * <code>CompilationJob</code> instances. </p> <p>You are billed for the time
     * between this timestamp and the timestamp in the
     * <a>DescribeCompilationJobResponse$CompilationEndTime</a> field. In Amazon
     * CloudWatch Logs, the start time might be later than this time. That's because it
     * takes time to download the compilation job, which depends on the size of the
     * compilation job container. </p>
     */
    inline const Aws::Utils::DateTime& GetCompilationStartTime() const{ return m_compilationStartTime; }

    /**
     * <p>The time when the model compilation job started the
     * <code>CompilationJob</code> instances. </p> <p>You are billed for the time
     * between this timestamp and the timestamp in the
     * <a>DescribeCompilationJobResponse$CompilationEndTime</a> field. In Amazon
     * CloudWatch Logs, the start time might be later than this time. That's because it
     * takes time to download the compilation job, which depends on the size of the
     * compilation job container. </p>
     */
    inline void SetCompilationStartTime(const Aws::Utils::DateTime& value) { m_compilationStartTime = value; }

    /**
     * <p>The time when the model compilation job started the
     * <code>CompilationJob</code> instances. </p> <p>You are billed for the time
     * between this timestamp and the timestamp in the
     * <a>DescribeCompilationJobResponse$CompilationEndTime</a> field. In Amazon
     * CloudWatch Logs, the start time might be later than this time. That's because it
     * takes time to download the compilation job, which depends on the size of the
     * compilation job container. </p>
     */
    inline void SetCompilationStartTime(Aws::Utils::DateTime&& value) { m_compilationStartTime = std::move(value); }

    /**
     * <p>The time when the model compilation job started the
     * <code>CompilationJob</code> instances. </p> <p>You are billed for the time
     * between this timestamp and the timestamp in the
     * <a>DescribeCompilationJobResponse$CompilationEndTime</a> field. In Amazon
     * CloudWatch Logs, the start time might be later than this time. That's because it
     * takes time to download the compilation job, which depends on the size of the
     * compilation job container. </p>
     */
    inline DescribeCompilationJobResult& WithCompilationStartTime(const Aws::Utils::DateTime& value) { SetCompilationStartTime(value); return *this;}

    /**
     * <p>The time when the model compilation job started the
     * <code>CompilationJob</code> instances. </p> <p>You are billed for the time
     * between this timestamp and the timestamp in the
     * <a>DescribeCompilationJobResponse$CompilationEndTime</a> field. In Amazon
     * CloudWatch Logs, the start time might be later than this time. That's because it
     * takes time to download the compilation job, which depends on the size of the
     * compilation job container. </p>
     */
    inline DescribeCompilationJobResult& WithCompilationStartTime(Aws::Utils::DateTime&& value) { SetCompilationStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the model compilation job on a compilation job instance ended.
     * For a successful or stopped job, this is when the job's model artifacts have
     * finished uploading. For a failed job, this is when Amazon SageMaker detected
     * that the job failed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompilationEndTime() const{ return m_compilationEndTime; }

    /**
     * <p>The time when the model compilation job on a compilation job instance ended.
     * For a successful or stopped job, this is when the job's model artifacts have
     * finished uploading. For a failed job, this is when Amazon SageMaker detected
     * that the job failed. </p>
     */
    inline void SetCompilationEndTime(const Aws::Utils::DateTime& value) { m_compilationEndTime = value; }

    /**
     * <p>The time when the model compilation job on a compilation job instance ended.
     * For a successful or stopped job, this is when the job's model artifacts have
     * finished uploading. For a failed job, this is when Amazon SageMaker detected
     * that the job failed. </p>
     */
    inline void SetCompilationEndTime(Aws::Utils::DateTime&& value) { m_compilationEndTime = std::move(value); }

    /**
     * <p>The time when the model compilation job on a compilation job instance ended.
     * For a successful or stopped job, this is when the job's model artifacts have
     * finished uploading. For a failed job, this is when Amazon SageMaker detected
     * that the job failed. </p>
     */
    inline DescribeCompilationJobResult& WithCompilationEndTime(const Aws::Utils::DateTime& value) { SetCompilationEndTime(value); return *this;}

    /**
     * <p>The time when the model compilation job on a compilation job instance ended.
     * For a successful or stopped job, this is when the job's model artifacts have
     * finished uploading. For a failed job, this is when Amazon SageMaker detected
     * that the job failed. </p>
     */
    inline DescribeCompilationJobResult& WithCompilationEndTime(Aws::Utils::DateTime&& value) { SetCompilationEndTime(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline DescribeCompilationJobResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline DescribeCompilationJobResult& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>The time that the model compilation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the model compilation job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the model compilation job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the model compilation job was created.</p>
     */
    inline DescribeCompilationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the model compilation job was created.</p>
     */
    inline DescribeCompilationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that the status of the model compilation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time that the status of the model compilation job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time that the status of the model compilation job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time that the status of the model compilation job was last modified.</p>
     */
    inline DescribeCompilationJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time that the status of the model compilation job was last modified.</p>
     */
    inline DescribeCompilationJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline DescribeCompilationJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline DescribeCompilationJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline DescribeCompilationJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Information about the location in Amazon S3 that has been configured for
     * storing the model artifacts used in the compilation job.</p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const{ return m_modelArtifacts; }

    /**
     * <p>Information about the location in Amazon S3 that has been configured for
     * storing the model artifacts used in the compilation job.</p>
     */
    inline void SetModelArtifacts(const ModelArtifacts& value) { m_modelArtifacts = value; }

    /**
     * <p>Information about the location in Amazon S3 that has been configured for
     * storing the model artifacts used in the compilation job.</p>
     */
    inline void SetModelArtifacts(ModelArtifacts&& value) { m_modelArtifacts = std::move(value); }

    /**
     * <p>Information about the location in Amazon S3 that has been configured for
     * storing the model artifacts used in the compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithModelArtifacts(const ModelArtifacts& value) { SetModelArtifacts(value); return *this;}

    /**
     * <p>Information about the location in Amazon S3 that has been configured for
     * storing the model artifacts used in the compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithModelArtifacts(ModelArtifacts&& value) { SetModelArtifacts(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline DescribeCompilationJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Information about the location in Amazon S3 of the input model artifacts, the
     * name and shape of the expected data inputs, and the framework in which the model
     * was trained.</p>
     */
    inline const InputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Information about the location in Amazon S3 of the input model artifacts, the
     * name and shape of the expected data inputs, and the framework in which the model
     * was trained.</p>
     */
    inline void SetInputConfig(const InputConfig& value) { m_inputConfig = value; }

    /**
     * <p>Information about the location in Amazon S3 of the input model artifacts, the
     * name and shape of the expected data inputs, and the framework in which the model
     * was trained.</p>
     */
    inline void SetInputConfig(InputConfig&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>Information about the location in Amazon S3 of the input model artifacts, the
     * name and shape of the expected data inputs, and the framework in which the model
     * was trained.</p>
     */
    inline DescribeCompilationJobResult& WithInputConfig(const InputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Information about the location in Amazon S3 of the input model artifacts, the
     * name and shape of the expected data inputs, and the framework in which the model
     * was trained.</p>
     */
    inline DescribeCompilationJobResult& WithInputConfig(InputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the output location for the compiled model and the target
     * device that the model runs on.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Information about the output location for the compiled model and the target
     * device that the model runs on.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>Information about the output location for the compiled model and the target
     * device that the model runs on.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>Information about the output location for the compiled model and the target
     * device that the model runs on.</p>
     */
    inline DescribeCompilationJobResult& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Information about the output location for the compiled model and the target
     * device that the model runs on.</p>
     */
    inline DescribeCompilationJobResult& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_compilationJobName;

    Aws::String m_compilationJobArn;

    CompilationJobStatus m_compilationJobStatus;

    Aws::Utils::DateTime m_compilationStartTime;

    Aws::Utils::DateTime m_compilationEndTime;

    StoppingCondition m_stoppingCondition;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    ModelArtifacts m_modelArtifacts;

    Aws::String m_roleArn;

    InputConfig m_inputConfig;

    OutputConfig m_outputConfig;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
