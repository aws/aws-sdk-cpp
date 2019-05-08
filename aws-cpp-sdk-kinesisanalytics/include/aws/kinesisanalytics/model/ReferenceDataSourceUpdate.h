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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceUpdate.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>When you update a reference data source configuration for an application,
   * this object provides all the updated values (such as the source bucket name and
   * object key name), the in-application table name that is created, and updated
   * mapping information that maps the data in the Amazon S3 object to the
   * in-application reference table that is created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ReferenceDataSourceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API ReferenceDataSourceUpdate
  {
  public:
    ReferenceDataSourceUpdate();
    ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline const Aws::String& GetTableNameUpdate() const{ return m_tableNameUpdate; }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline bool TableNameUpdateHasBeenSet() const { return m_tableNameUpdateHasBeenSet; }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(const Aws::String& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = value; }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(Aws::String&& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = std::move(value); }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(const char* value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate.assign(value); }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(const Aws::String& value) { SetTableNameUpdate(value); return *this;}

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(Aws::String&& value) { SetTableNameUpdate(std::move(value)); return *this;}

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(const char* value) { SetTableNameUpdate(value); return *this;}


    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline const S3ReferenceDataSourceUpdate& GetS3ReferenceDataSourceUpdate() const{ return m_s3ReferenceDataSourceUpdate; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline bool S3ReferenceDataSourceUpdateHasBeenSet() const { return m_s3ReferenceDataSourceUpdateHasBeenSet; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceUpdate(const S3ReferenceDataSourceUpdate& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = value; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdate&& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = std::move(value); }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline ReferenceDataSourceUpdate& WithS3ReferenceDataSourceUpdate(const S3ReferenceDataSourceUpdate& value) { SetS3ReferenceDataSourceUpdate(value); return *this;}

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline ReferenceDataSourceUpdate& WithS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdate&& value) { SetS3ReferenceDataSourceUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline const SourceSchema& GetReferenceSchemaUpdate() const{ return m_referenceSchemaUpdate; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline bool ReferenceSchemaUpdateHasBeenSet() const { return m_referenceSchemaUpdateHasBeenSet; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline void SetReferenceSchemaUpdate(const SourceSchema& value) { m_referenceSchemaUpdateHasBeenSet = true; m_referenceSchemaUpdate = value; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline void SetReferenceSchemaUpdate(SourceSchema&& value) { m_referenceSchemaUpdateHasBeenSet = true; m_referenceSchemaUpdate = std::move(value); }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceSchemaUpdate(const SourceSchema& value) { SetReferenceSchemaUpdate(value); return *this;}

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceSchemaUpdate(SourceSchema&& value) { SetReferenceSchemaUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet;

    Aws::String m_tableNameUpdate;
    bool m_tableNameUpdateHasBeenSet;

    S3ReferenceDataSourceUpdate m_s3ReferenceDataSourceUpdate;
    bool m_s3ReferenceDataSourceUpdateHasBeenSet;

    SourceSchema m_referenceSchemaUpdate;
    bool m_referenceSchemaUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
