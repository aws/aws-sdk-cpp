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
  class StopApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API StopApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopApplication"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the running application to stop.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline StopApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline StopApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the running application to stop.</p>
     */
    inline StopApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Set to <code>true</code> to force the application to stop. If you set
     * <code>Force</code> to <code>true</code>, Kinesis Data Analytics stops the
     * application without taking a snapshot. </p>  <p>Force-stopping your
     * application may lead to data loss or duplication. To prevent data loss or
     * duplicate processing of data during application restarts, we recommend you to
     * take frequent snapshots of your application.</p>  <p>You can only force
     * stop a Flink-based Kinesis Data Analytics application. You can't force stop a
     * SQL-based Kinesis Data Analytics application.</p> <p>The application must be in
     * the <code>STARTING</code>, <code>UPDATING</code>, <code>STOPPING</code>,
     * <code>AUTOSCALING</code>, or <code>RUNNING</code> status. </p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Set to <code>true</code> to force the application to stop. If you set
     * <code>Force</code> to <code>true</code>, Kinesis Data Analytics stops the
     * application without taking a snapshot. </p>  <p>Force-stopping your
     * application may lead to data loss or duplication. To prevent data loss or
     * duplicate processing of data during application restarts, we recommend you to
     * take frequent snapshots of your application.</p>  <p>You can only force
     * stop a Flink-based Kinesis Data Analytics application. You can't force stop a
     * SQL-based Kinesis Data Analytics application.</p> <p>The application must be in
     * the <code>STARTING</code>, <code>UPDATING</code>, <code>STOPPING</code>,
     * <code>AUTOSCALING</code>, or <code>RUNNING</code> status. </p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to force the application to stop. If you set
     * <code>Force</code> to <code>true</code>, Kinesis Data Analytics stops the
     * application without taking a snapshot. </p>  <p>Force-stopping your
     * application may lead to data loss or duplication. To prevent data loss or
     * duplicate processing of data during application restarts, we recommend you to
     * take frequent snapshots of your application.</p>  <p>You can only force
     * stop a Flink-based Kinesis Data Analytics application. You can't force stop a
     * SQL-based Kinesis Data Analytics application.</p> <p>The application must be in
     * the <code>STARTING</code>, <code>UPDATING</code>, <code>STOPPING</code>,
     * <code>AUTOSCALING</code>, or <code>RUNNING</code> status. </p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Set to <code>true</code> to force the application to stop. If you set
     * <code>Force</code> to <code>true</code>, Kinesis Data Analytics stops the
     * application without taking a snapshot. </p>  <p>Force-stopping your
     * application may lead to data loss or duplication. To prevent data loss or
     * duplicate processing of data during application restarts, we recommend you to
     * take frequent snapshots of your application.</p>  <p>You can only force
     * stop a Flink-based Kinesis Data Analytics application. You can't force stop a
     * SQL-based Kinesis Data Analytics application.</p> <p>The application must be in
     * the <code>STARTING</code>, <code>UPDATING</code>, <code>STOPPING</code>,
     * <code>AUTOSCALING</code>, or <code>RUNNING</code> status. </p>
     */
    inline StopApplicationRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
