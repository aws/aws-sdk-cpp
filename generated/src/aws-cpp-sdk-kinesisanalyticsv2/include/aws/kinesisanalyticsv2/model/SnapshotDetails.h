/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/SnapshotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/ApplicationEncryptionConfigurationDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Provides details about a snapshot of application state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotDetails">AWS
   * API Reference</a></p>
   */
  class SnapshotDetails
  {
  public:
    AWS_KINESISANALYTICSV2_API SnapshotDetails() = default;
    AWS_KINESISANALYTICSV2_API SnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    SnapshotDetails& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application snapshot.</p>
     */
    inline SnapshotStatus GetSnapshotStatus() const { return m_snapshotStatus; }
    inline bool SnapshotStatusHasBeenSet() const { return m_snapshotStatusHasBeenSet; }
    inline void SetSnapshotStatus(SnapshotStatus value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus = value; }
    inline SnapshotDetails& WithSnapshotStatus(SnapshotStatus value) { SetSnapshotStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current application version ID when the snapshot was created.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline SnapshotDetails& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreationTimestamp() const { return m_snapshotCreationTimestamp; }
    inline bool SnapshotCreationTimestampHasBeenSet() const { return m_snapshotCreationTimestampHasBeenSet; }
    template<typename SnapshotCreationTimestampT = Aws::Utils::DateTime>
    void SetSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) { m_snapshotCreationTimestampHasBeenSet = true; m_snapshotCreationTimestamp = std::forward<SnapshotCreationTimestampT>(value); }
    template<typename SnapshotCreationTimestampT = Aws::Utils::DateTime>
    SnapshotDetails& WithSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) { SetSnapshotCreationTimestamp(std::forward<SnapshotCreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Flink Runtime for the application snapshot.</p>
     */
    inline RuntimeEnvironment GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline SnapshotDetails& WithRuntimeEnvironment(RuntimeEnvironment value) { SetRuntimeEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption settings of data at rest for the application
     * snapshot.</p>
     */
    inline const ApplicationEncryptionConfigurationDescription& GetApplicationEncryptionConfigurationDescription() const { return m_applicationEncryptionConfigurationDescription; }
    inline bool ApplicationEncryptionConfigurationDescriptionHasBeenSet() const { return m_applicationEncryptionConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationEncryptionConfigurationDescriptionT = ApplicationEncryptionConfigurationDescription>
    void SetApplicationEncryptionConfigurationDescription(ApplicationEncryptionConfigurationDescriptionT&& value) { m_applicationEncryptionConfigurationDescriptionHasBeenSet = true; m_applicationEncryptionConfigurationDescription = std::forward<ApplicationEncryptionConfigurationDescriptionT>(value); }
    template<typename ApplicationEncryptionConfigurationDescriptionT = ApplicationEncryptionConfigurationDescription>
    SnapshotDetails& WithApplicationEncryptionConfigurationDescription(ApplicationEncryptionConfigurationDescriptionT&& value) { SetApplicationEncryptionConfigurationDescription(std::forward<ApplicationEncryptionConfigurationDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    SnapshotStatus m_snapshotStatus{SnapshotStatus::NOT_SET};
    bool m_snapshotStatusHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreationTimestamp{};
    bool m_snapshotCreationTimestampHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment{RuntimeEnvironment::NOT_SET};
    bool m_runtimeEnvironmentHasBeenSet = false;

    ApplicationEncryptionConfigurationDescription m_applicationEncryptionConfigurationDescription;
    bool m_applicationEncryptionConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
