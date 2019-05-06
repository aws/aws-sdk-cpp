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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICSV2_API DeleteApplicationSnapshotRequest : public KinesisAnalyticsV2Request
  {
  public:
    DeleteApplicationSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationSnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an existing application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an existing application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an existing application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an existing application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an existing application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an existing application.</p>
     */
    inline DeleteApplicationSnapshotRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an existing application.</p>
     */
    inline DeleteApplicationSnapshotRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing application.</p>
     */
    inline DeleteApplicationSnapshotRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline DeleteApplicationSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline DeleteApplicationSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the snapshot delete.</p>
     */
    inline DeleteApplicationSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The creation timestamp of the application snapshot to delete. You can
     * retrieve this value using or .</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreationTimestamp() const{ return m_snapshotCreationTimestamp; }

    /**
     * <p>The creation timestamp of the application snapshot to delete. You can
     * retrieve this value using or .</p>
     */
    inline bool SnapshotCreationTimestampHasBeenSet() const { return m_snapshotCreationTimestampHasBeenSet; }

    /**
     * <p>The creation timestamp of the application snapshot to delete. You can
     * retrieve this value using or .</p>
     */
    inline void SetSnapshotCreationTimestamp(const Aws::Utils::DateTime& value) { m_snapshotCreationTimestampHasBeenSet = true; m_snapshotCreationTimestamp = value; }

    /**
     * <p>The creation timestamp of the application snapshot to delete. You can
     * retrieve this value using or .</p>
     */
    inline void SetSnapshotCreationTimestamp(Aws::Utils::DateTime&& value) { m_snapshotCreationTimestampHasBeenSet = true; m_snapshotCreationTimestamp = std::move(value); }

    /**
     * <p>The creation timestamp of the application snapshot to delete. You can
     * retrieve this value using or .</p>
     */
    inline DeleteApplicationSnapshotRequest& WithSnapshotCreationTimestamp(const Aws::Utils::DateTime& value) { SetSnapshotCreationTimestamp(value); return *this;}

    /**
     * <p>The creation timestamp of the application snapshot to delete. You can
     * retrieve this value using or .</p>
     */
    inline DeleteApplicationSnapshotRequest& WithSnapshotCreationTimestamp(Aws::Utils::DateTime&& value) { SetSnapshotCreationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet;

    Aws::Utils::DateTime m_snapshotCreationTimestamp;
    bool m_snapshotCreationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
