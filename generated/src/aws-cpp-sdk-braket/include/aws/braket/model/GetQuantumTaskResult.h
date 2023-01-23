/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QuantumTaskStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Braket
{
namespace Model
{
  class GetQuantumTaskResult
  {
  public:
    AWS_BRAKET_API GetQuantumTaskResult();
    AWS_BRAKET_API GetQuantumTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API GetQuantumTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time at which the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline GetQuantumTaskResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the task was created.</p>
     */
    inline GetQuantumTaskResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }

    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline GetQuantumTaskResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline GetQuantumTaskResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device the task was run on.</p>
     */
    inline GetQuantumTaskResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline const Aws::String& GetDeviceParameters() const{ return m_deviceParameters; }

    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline void SetDeviceParameters(const Aws::String& value) { m_deviceParameters = value; }

    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline void SetDeviceParameters(Aws::String&& value) { m_deviceParameters = std::move(value); }

    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline void SetDeviceParameters(const char* value) { m_deviceParameters.assign(value); }

    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline GetQuantumTaskResult& WithDeviceParameters(const Aws::String& value) { SetDeviceParameters(value); return *this;}

    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline GetQuantumTaskResult& WithDeviceParameters(Aws::String&& value) { SetDeviceParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the device on which the task ran.</p>
     */
    inline GetQuantumTaskResult& WithDeviceParameters(const char* value) { SetDeviceParameters(value); return *this;}


    /**
     * <p>The time at which the task ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The time at which the task ended.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }

    /**
     * <p>The time at which the task ended.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }

    /**
     * <p>The time at which the task ended.</p>
     */
    inline GetQuantumTaskResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The time at which the task ended.</p>
     */
    inline GetQuantumTaskResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The reason that a task failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason that a task failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The reason that a task failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason that a task failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The reason that a task failed.</p>
     */
    inline GetQuantumTaskResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason that a task failed.</p>
     */
    inline GetQuantumTaskResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason that a task failed.</p>
     */
    inline GetQuantumTaskResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline GetQuantumTaskResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline GetQuantumTaskResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline GetQuantumTaskResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Bucket() const{ return m_outputS3Bucket; }

    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline void SetOutputS3Bucket(const Aws::String& value) { m_outputS3Bucket = value; }

    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline void SetOutputS3Bucket(Aws::String&& value) { m_outputS3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline void SetOutputS3Bucket(const char* value) { m_outputS3Bucket.assign(value); }

    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline GetQuantumTaskResult& WithOutputS3Bucket(const Aws::String& value) { SetOutputS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline GetQuantumTaskResult& WithOutputS3Bucket(Aws::String&& value) { SetOutputS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where task results are stored.</p>
     */
    inline GetQuantumTaskResult& WithOutputS3Bucket(const char* value) { SetOutputS3Bucket(value); return *this;}


    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Directory() const{ return m_outputS3Directory; }

    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline void SetOutputS3Directory(const Aws::String& value) { m_outputS3Directory = value; }

    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline void SetOutputS3Directory(Aws::String&& value) { m_outputS3Directory = std::move(value); }

    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline void SetOutputS3Directory(const char* value) { m_outputS3Directory.assign(value); }

    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline GetQuantumTaskResult& WithOutputS3Directory(const Aws::String& value) { SetOutputS3Directory(value); return *this;}

    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline GetQuantumTaskResult& WithOutputS3Directory(Aws::String&& value) { SetOutputS3Directory(std::move(value)); return *this;}

    /**
     * <p>The folder in the S3 bucket where task results are stored.</p>
     */
    inline GetQuantumTaskResult& WithOutputS3Directory(const char* value) { SetOutputS3Directory(value); return *this;}


    /**
     * <p>The ARN of the task.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArn = value; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArn = std::move(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArn.assign(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline GetQuantumTaskResult& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline GetQuantumTaskResult& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline GetQuantumTaskResult& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}


    /**
     * <p>The number of shots used in the task.</p>
     */
    inline long long GetShots() const{ return m_shots; }

    /**
     * <p>The number of shots used in the task.</p>
     */
    inline void SetShots(long long value) { m_shots = value; }

    /**
     * <p>The number of shots used in the task.</p>
     */
    inline GetQuantumTaskResult& WithShots(long long value) { SetShots(value); return *this;}


    /**
     * <p>The status of the task.</p>
     */
    inline const QuantumTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(const QuantumTaskStatus& value) { m_status = value; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(QuantumTaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task.</p>
     */
    inline GetQuantumTaskResult& WithStatus(const QuantumTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task.</p>
     */
    inline GetQuantumTaskResult& WithStatus(QuantumTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags that belong to this task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that belong to this task.</p>
     */
    inline GetQuantumTaskResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_deviceArn;

    Aws::String m_deviceParameters;

    Aws::Utils::DateTime m_endedAt;

    Aws::String m_failureReason;

    Aws::String m_jobArn;

    Aws::String m_outputS3Bucket;

    Aws::String m_outputS3Directory;

    Aws::String m_quantumTaskArn;

    long long m_shots;

    QuantumTaskStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
