/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Name of an existing application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of an existing application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of an existing application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

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
    inline DeleteApplicationReferenceDataSourceRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of an existing application.</p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>Version of the application. You can use the <a>DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Version of the application. You can use the <a>DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Version of the application. You can use the <a>DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
     */
    inline DeleteApplicationReferenceDataSourceRequest& WithReferenceId(Aws::String&& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source. When you add a reference data source to your
     * application using the <a>AddApplicationReferenceDataSource</a>, Amazon Kinesis
     * Analytics assigns an ID. You can use the <a>DescribeApplication</a> operation to
     * get the reference ID. </p>
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
