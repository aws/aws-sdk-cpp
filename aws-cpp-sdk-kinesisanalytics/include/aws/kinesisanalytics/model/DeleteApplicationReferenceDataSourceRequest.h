﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICS_API DeleteApplicationReferenceDataSourceRequest : public KinesisAnalyticsRequest
  {
  public:
    DeleteApplicationReferenceDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationReferenceDataSource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of an existing application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of an existing application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Name of an existing application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of an existing application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>Name of an existing application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of an existing application.</p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of an existing application.</p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of an existing application.</p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Version of the application. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Version of the application. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>Version of the application. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Version of the application. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>,
     * Amazon Kinesis Analytics assigns an ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the reference ID. </p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
