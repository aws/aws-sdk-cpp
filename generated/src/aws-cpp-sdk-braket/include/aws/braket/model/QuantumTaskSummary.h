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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Braket
{
namespace Model
{

  /**
   * <p>Includes information about a quantum task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/QuantumTaskSummary">AWS
   * API Reference</a></p>
   */
  class QuantumTaskSummary
  {
  public:
    AWS_BRAKET_API QuantumTaskSummary();
    AWS_BRAKET_API QuantumTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API QuantumTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time at which the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the task was created.</p>
     */
    inline QuantumTaskSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the task was created.</p>
     */
    inline QuantumTaskSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline QuantumTaskSummary& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline QuantumTaskSummary& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device the task ran on.</p>
     */
    inline QuantumTaskSummary& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The time at which the task finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The time at which the task finished.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The time at which the task finished.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The time at which the task finished.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The time at which the task finished.</p>
     */
    inline QuantumTaskSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The time at which the task finished.</p>
     */
    inline QuantumTaskSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline const Aws::String& GetOutputS3Bucket() const{ return m_outputS3Bucket; }

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline bool OutputS3BucketHasBeenSet() const { return m_outputS3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline void SetOutputS3Bucket(const Aws::String& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = value; }

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline void SetOutputS3Bucket(Aws::String&& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline void SetOutputS3Bucket(const char* value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket.assign(value); }

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline QuantumTaskSummary& WithOutputS3Bucket(const Aws::String& value) { SetOutputS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline QuantumTaskSummary& WithOutputS3Bucket(Aws::String&& value) { SetOutputS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where the task result file is stored..</p>
     */
    inline QuantumTaskSummary& WithOutputS3Bucket(const char* value) { SetOutputS3Bucket(value); return *this;}


    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline const Aws::String& GetOutputS3Directory() const{ return m_outputS3Directory; }

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline bool OutputS3DirectoryHasBeenSet() const { return m_outputS3DirectoryHasBeenSet; }

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline void SetOutputS3Directory(const Aws::String& value) { m_outputS3DirectoryHasBeenSet = true; m_outputS3Directory = value; }

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline void SetOutputS3Directory(Aws::String&& value) { m_outputS3DirectoryHasBeenSet = true; m_outputS3Directory = std::move(value); }

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline void SetOutputS3Directory(const char* value) { m_outputS3DirectoryHasBeenSet = true; m_outputS3Directory.assign(value); }

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline QuantumTaskSummary& WithOutputS3Directory(const Aws::String& value) { SetOutputS3Directory(value); return *this;}

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline QuantumTaskSummary& WithOutputS3Directory(Aws::String&& value) { SetOutputS3Directory(std::move(value)); return *this;}

    /**
     * <p>The folder in the S3 bucket where the task result file is stored.</p>
     */
    inline QuantumTaskSummary& WithOutputS3Directory(const char* value) { SetOutputS3Directory(value); return *this;}


    /**
     * <p>The ARN of the task.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = value; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::move(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn.assign(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline QuantumTaskSummary& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline QuantumTaskSummary& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline QuantumTaskSummary& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}


    /**
     * <p>The shots used for the task.</p>
     */
    inline long long GetShots() const{ return m_shots; }

    /**
     * <p>The shots used for the task.</p>
     */
    inline bool ShotsHasBeenSet() const { return m_shotsHasBeenSet; }

    /**
     * <p>The shots used for the task.</p>
     */
    inline void SetShots(long long value) { m_shotsHasBeenSet = true; m_shots = value; }

    /**
     * <p>The shots used for the task.</p>
     */
    inline QuantumTaskSummary& WithShots(long long value) { SetShots(value); return *this;}


    /**
     * <p>The status of the task.</p>
     */
    inline const QuantumTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(const QuantumTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(QuantumTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the task.</p>
     */
    inline QuantumTaskSummary& WithStatus(const QuantumTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task.</p>
     */
    inline QuantumTaskSummary& WithStatus(QuantumTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline QuantumTaskSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::String m_outputS3Bucket;
    bool m_outputS3BucketHasBeenSet = false;

    Aws::String m_outputS3Directory;
    bool m_outputS3DirectoryHasBeenSet = false;

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;

    long long m_shots;
    bool m_shotsHasBeenSet = false;

    QuantumTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
