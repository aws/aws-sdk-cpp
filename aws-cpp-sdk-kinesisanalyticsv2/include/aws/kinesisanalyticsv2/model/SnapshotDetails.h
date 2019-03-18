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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/SnapshotStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_KINESISANALYTICSV2_API SnapshotDetails
  {
  public:
    SnapshotDetails();
    SnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    SnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The status of the application snapshot.</p>
     */
    inline const SnapshotStatus& GetSnapshotStatus() const{ return m_snapshotStatus; }

    /**
     * <p>The status of the application snapshot.</p>
     */
    inline bool SnapshotStatusHasBeenSet() const { return m_snapshotStatusHasBeenSet; }

    /**
     * <p>The status of the application snapshot.</p>
     */
    inline void SetSnapshotStatus(const SnapshotStatus& value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus = value; }

    /**
     * <p>The status of the application snapshot.</p>
     */
    inline void SetSnapshotStatus(SnapshotStatus&& value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus = std::move(value); }

    /**
     * <p>The status of the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotStatus(const SnapshotStatus& value) { SetSnapshotStatus(value); return *this;}

    /**
     * <p>The status of the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotStatus(SnapshotStatus&& value) { SetSnapshotStatus(std::move(value)); return *this;}


    /**
     * <p>The current application version ID when the snapshot was created.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>The current application version ID when the snapshot was created.</p>
     */
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }

    /**
     * <p>The current application version ID when the snapshot was created.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }

    /**
     * <p>The current application version ID when the snapshot was created.</p>
     */
    inline SnapshotDetails& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreationTimestamp() const{ return m_snapshotCreationTimestamp; }

    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline bool SnapshotCreationTimestampHasBeenSet() const { return m_snapshotCreationTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline void SetSnapshotCreationTimestamp(const Aws::Utils::DateTime& value) { m_snapshotCreationTimestampHasBeenSet = true; m_snapshotCreationTimestamp = value; }

    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline void SetSnapshotCreationTimestamp(Aws::Utils::DateTime&& value) { m_snapshotCreationTimestampHasBeenSet = true; m_snapshotCreationTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotCreationTimestamp(const Aws::Utils::DateTime& value) { SetSnapshotCreationTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the application snapshot.</p>
     */
    inline SnapshotDetails& WithSnapshotCreationTimestamp(Aws::Utils::DateTime&& value) { SetSnapshotCreationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet;

    SnapshotStatus m_snapshotStatus;
    bool m_snapshotStatusHasBeenSet;

    long long m_applicationVersionId;
    bool m_applicationVersionIdHasBeenSet;

    Aws::Utils::DateTime m_snapshotCreationTimestamp;
    bool m_snapshotCreationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
