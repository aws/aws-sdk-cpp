/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class CreateApplicationSnapshotRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationSnapshot"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an existing application</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an existing application</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an existing application</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an existing application</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an existing application</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an existing application</p>
     */
    inline CreateApplicationSnapshotRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an existing application</p>
     */
    inline CreateApplicationSnapshotRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing application</p>
     */
    inline CreateApplicationSnapshotRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline CreateApplicationSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline CreateApplicationSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the application snapshot.</p>
     */
    inline CreateApplicationSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
