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
#include <aws/sagemaker/model/TransformJobStatus.h>
#include <aws/sagemaker/model/BatchStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/TransformInput.h>
#include <aws/sagemaker/model/TransformOutput.h>
#include <aws/sagemaker/model/TransformResources.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DataProcessing.h>
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
  class AWS_SAGEMAKER_API DescribeTransformJobResult
  {
  public:
    DescribeTransformJobResult();
    DescribeTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const{ return m_transformJobName; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(const Aws::String& value) { m_transformJobName = value; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(Aws::String&& value) { m_transformJobName = std::move(value); }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(const char* value) { m_transformJobName.assign(value); }

    /**
     * <p>The name of the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobName(const Aws::String& value) { SetTransformJobName(value); return *this;}

    /**
     * <p>The name of the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobName(Aws::String&& value) { SetTransformJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobName(const char* value) { SetTransformJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const{ return m_transformJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(const Aws::String& value) { m_transformJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(Aws::String&& value) { m_transformJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(const char* value) { m_transformJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobArn(const Aws::String& value) { SetTransformJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobArn(Aws::String&& value) { SetTransformJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobArn(const char* value) { SetTransformJobArn(value); return *this;}


    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline const TransformJobStatus& GetTransformJobStatus() const{ return m_transformJobStatus; }

    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline void SetTransformJobStatus(const TransformJobStatus& value) { m_transformJobStatus = value; }

    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline void SetTransformJobStatus(TransformJobStatus&& value) { m_transformJobStatus = std::move(value); }

    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobStatus(const TransformJobStatus& value) { SetTransformJobStatus(value); return *this;}

    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline DescribeTransformJobResult& WithTransformJobStatus(TransformJobStatus&& value) { SetTransformJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline DescribeTransformJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline DescribeTransformJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline DescribeTransformJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline DescribeTransformJobResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline DescribeTransformJobResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline DescribeTransformJobResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The maximum number of parallel requests on each instance node that can be
     * launched in a transform job. The default value is 1.</p>
     */
    inline int GetMaxConcurrentTransforms() const{ return m_maxConcurrentTransforms; }

    /**
     * <p>The maximum number of parallel requests on each instance node that can be
     * launched in a transform job. The default value is 1.</p>
     */
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransforms = value; }

    /**
     * <p>The maximum number of parallel requests on each instance node that can be
     * launched in a transform job. The default value is 1.</p>
     */
    inline DescribeTransformJobResult& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}


    /**
     * <p>The maximum payload size, in MB, used in the transform job.</p>
     */
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }

    /**
     * <p>The maximum payload size, in MB, used in the transform job.</p>
     */
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMB = value; }

    /**
     * <p>The maximum payload size, in MB, used in the transform job.</p>
     */
    inline DescribeTransformJobResult& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}


    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p>
     */
    inline const BatchStrategy& GetBatchStrategy() const{ return m_batchStrategy; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p>
     */
    inline void SetBatchStrategy(const BatchStrategy& value) { m_batchStrategy = value; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p>
     */
    inline void SetBatchStrategy(BatchStrategy&& value) { m_batchStrategy = std::move(value); }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p>
     */
    inline DescribeTransformJobResult& WithBatchStrategy(const BatchStrategy& value) { SetBatchStrategy(value); return *this;}

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p>
     */
    inline DescribeTransformJobResult& WithBatchStrategy(BatchStrategy&& value) { SetBatchStrategy(std::move(value)); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(const char* key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(Aws::String&& key, const char* value) { m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline DescribeTransformJobResult& AddEnvironment(const char* key, const char* value) { m_environment.emplace(key, value); return *this; }


    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline const TransformInput& GetTransformInput() const{ return m_transformInput; }

    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline void SetTransformInput(const TransformInput& value) { m_transformInput = value; }

    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline void SetTransformInput(TransformInput&& value) { m_transformInput = std::move(value); }

    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline DescribeTransformJobResult& WithTransformInput(const TransformInput& value) { SetTransformInput(value); return *this;}

    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline DescribeTransformJobResult& WithTransformInput(TransformInput&& value) { SetTransformInput(std::move(value)); return *this;}


    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline const TransformOutput& GetTransformOutput() const{ return m_transformOutput; }

    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline void SetTransformOutput(const TransformOutput& value) { m_transformOutput = value; }

    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline void SetTransformOutput(TransformOutput&& value) { m_transformOutput = std::move(value); }

    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformOutput(const TransformOutput& value) { SetTransformOutput(value); return *this;}

    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformOutput(TransformOutput&& value) { SetTransformOutput(std::move(value)); return *this;}


    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline const TransformResources& GetTransformResources() const{ return m_transformResources; }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline void SetTransformResources(const TransformResources& value) { m_transformResources = value; }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline void SetTransformResources(TransformResources&& value) { m_transformResources = std::move(value); }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformResources(const TransformResources& value) { SetTransformResources(value); return *this;}

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline DescribeTransformJobResult& WithTransformResources(TransformResources&& value) { SetTransformResources(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline DescribeTransformJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline DescribeTransformJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformStartTime() const{ return m_transformStartTime; }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline void SetTransformStartTime(const Aws::Utils::DateTime& value) { m_transformStartTime = value; }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline void SetTransformStartTime(Aws::Utils::DateTime&& value) { m_transformStartTime = std::move(value); }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline DescribeTransformJobResult& WithTransformStartTime(const Aws::Utils::DateTime& value) { SetTransformStartTime(value); return *this;}

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline DescribeTransformJobResult& WithTransformStartTime(Aws::Utils::DateTime&& value) { SetTransformStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const{ return m_transformEndTime; }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline void SetTransformEndTime(const Aws::Utils::DateTime& value) { m_transformEndTime = value; }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline void SetTransformEndTime(Aws::Utils::DateTime&& value) { m_transformEndTime = std::move(value); }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline DescribeTransformJobResult& WithTransformEndTime(const Aws::Utils::DateTime& value) { SetTransformEndTime(value); return *this;}

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline DescribeTransformJobResult& WithTransformEndTime(Aws::Utils::DateTime&& value) { SetTransformEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline DescribeTransformJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline DescribeTransformJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline DescribeTransformJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    
    inline const DataProcessing& GetDataProcessing() const{ return m_dataProcessing; }

    
    inline void SetDataProcessing(const DataProcessing& value) { m_dataProcessing = value; }

    
    inline void SetDataProcessing(DataProcessing&& value) { m_dataProcessing = std::move(value); }

    
    inline DescribeTransformJobResult& WithDataProcessing(const DataProcessing& value) { SetDataProcessing(value); return *this;}

    
    inline DescribeTransformJobResult& WithDataProcessing(DataProcessing&& value) { SetDataProcessing(std::move(value)); return *this;}

  private:

    Aws::String m_transformJobName;

    Aws::String m_transformJobArn;

    TransformJobStatus m_transformJobStatus;

    Aws::String m_failureReason;

    Aws::String m_modelName;

    int m_maxConcurrentTransforms;

    int m_maxPayloadInMB;

    BatchStrategy m_batchStrategy;

    Aws::Map<Aws::String, Aws::String> m_environment;

    TransformInput m_transformInput;

    TransformOutput m_transformOutput;

    TransformResources m_transformResources;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_transformStartTime;

    Aws::Utils::DateTime m_transformEndTime;

    Aws::String m_labelingJobArn;

    DataProcessing m_dataProcessing;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
