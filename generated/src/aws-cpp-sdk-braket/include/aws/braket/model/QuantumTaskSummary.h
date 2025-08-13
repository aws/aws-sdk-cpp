/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QuantumTaskStatus.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_BRAKET_API QuantumTaskSummary() = default;
    AWS_BRAKET_API QuantumTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API QuantumTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the quantum task.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const { return m_quantumTaskArn; }
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }
    template<typename QuantumTaskArnT = Aws::String>
    void SetQuantumTaskArn(QuantumTaskArnT&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::forward<QuantumTaskArnT>(value); }
    template<typename QuantumTaskArnT = Aws::String>
    QuantumTaskSummary& WithQuantumTaskArn(QuantumTaskArnT&& value) { SetQuantumTaskArn(std::forward<QuantumTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the quantum task.</p>
     */
    inline QuantumTaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QuantumTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline QuantumTaskSummary& WithStatus(QuantumTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device the quantum task ran on.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    QuantumTaskSummary& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shots used for the quantum task.</p>
     */
    inline long long GetShots() const { return m_shots; }
    inline bool ShotsHasBeenSet() const { return m_shotsHasBeenSet; }
    inline void SetShots(long long value) { m_shotsHasBeenSet = true; m_shots = value; }
    inline QuantumTaskSummary& WithShots(long long value) { SetShots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where the quantum task result file is stored.</p>
     */
    inline const Aws::String& GetOutputS3Bucket() const { return m_outputS3Bucket; }
    inline bool OutputS3BucketHasBeenSet() const { return m_outputS3BucketHasBeenSet; }
    template<typename OutputS3BucketT = Aws::String>
    void SetOutputS3Bucket(OutputS3BucketT&& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = std::forward<OutputS3BucketT>(value); }
    template<typename OutputS3BucketT = Aws::String>
    QuantumTaskSummary& WithOutputS3Bucket(OutputS3BucketT&& value) { SetOutputS3Bucket(std::forward<OutputS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder in the S3 bucket where the quantum task result file is stored.</p>
     */
    inline const Aws::String& GetOutputS3Directory() const { return m_outputS3Directory; }
    inline bool OutputS3DirectoryHasBeenSet() const { return m_outputS3DirectoryHasBeenSet; }
    template<typename OutputS3DirectoryT = Aws::String>
    void SetOutputS3Directory(OutputS3DirectoryT&& value) { m_outputS3DirectoryHasBeenSet = true; m_outputS3Directory = std::forward<OutputS3DirectoryT>(value); }
    template<typename OutputS3DirectoryT = Aws::String>
    QuantumTaskSummary& WithOutputS3Directory(OutputS3DirectoryT&& value) { SetOutputS3Directory(std::forward<OutputS3DirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the quantum task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    QuantumTaskSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the quantum task finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    QuantumTaskSummary& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the key, value pairs of tags associated with this quantum task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    QuantumTaskSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    QuantumTaskSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;

    QuantumTaskStatus m_status{QuantumTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    long long m_shots{0};
    bool m_shotsHasBeenSet = false;

    Aws::String m_outputS3Bucket;
    bool m_outputS3BucketHasBeenSet = false;

    Aws::String m_outputS3Directory;
    bool m_outputS3DirectoryHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
