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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/ReferenceDataSource.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationReferenceDataSourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API AddApplicationReferenceDataSourceRequest : public KinesisAnalyticsRequest
  {
  public:
    AddApplicationReferenceDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationReferenceDataSource"; }

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
    inline AddApplicationReferenceDataSourceRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of an existing application.</p>
     */
    inline AddApplicationReferenceDataSourceRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of an existing application.</p>
     */
    inline AddApplicationReferenceDataSourceRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Version of the application for which you are adding the reference data
     * source. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Version of the application for which you are adding the reference data
     * source. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>Version of the application for which you are adding the reference data
     * source. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Version of the application for which you are adding the reference data
     * source. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline AddApplicationReferenceDataSourceRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
     */
    inline const ReferenceDataSource& GetReferenceDataSource() const{ return m_referenceDataSource; }

    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
     */
    inline bool ReferenceDataSourceHasBeenSet() const { return m_referenceDataSourceHasBeenSet; }

    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
     */
    inline void SetReferenceDataSource(const ReferenceDataSource& value) { m_referenceDataSourceHasBeenSet = true; m_referenceDataSource = value; }

    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
     */
    inline void SetReferenceDataSource(ReferenceDataSource&& value) { m_referenceDataSourceHasBeenSet = true; m_referenceDataSource = std::move(value); }

    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
     */
    inline AddApplicationReferenceDataSourceRequest& WithReferenceDataSource(const ReferenceDataSource& value) { SetReferenceDataSource(value); return *this;}

    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
     */
    inline AddApplicationReferenceDataSourceRequest& WithReferenceDataSource(ReferenceDataSource&& value) { SetReferenceDataSource(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    ReferenceDataSource m_referenceDataSource;
    bool m_referenceDataSourceHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
