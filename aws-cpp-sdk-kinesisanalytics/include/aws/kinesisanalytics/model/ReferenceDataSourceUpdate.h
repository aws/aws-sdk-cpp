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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceUpdate.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
   * in-application reference table that is created.</p>
   */
  class AWS_KINESISANALYTICS_API ReferenceDataSourceUpdate
  {
  public:
    ReferenceDataSourceUpdate();
    ReferenceDataSourceUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    ReferenceDataSourceUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(Aws::String&& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline const Aws::String& GetTableNameUpdate() const{ return m_tableNameUpdate; }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(const Aws::String& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = value; }

    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(Aws::String&& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = value; }

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
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(Aws::String&& value) { SetTableNameUpdate(value); return *this;}

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
    inline void SetS3ReferenceDataSourceUpdate(const S3ReferenceDataSourceUpdate& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = value; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdate&& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = value; }

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
    inline ReferenceDataSourceUpdate& WithS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdate&& value) { SetS3ReferenceDataSourceUpdate(value); return *this;}

    
    inline const SourceSchema& GetReferenceSchemaUpdate() const{ return m_referenceSchemaUpdate; }

    
    inline void SetReferenceSchemaUpdate(const SourceSchema& value) { m_referenceSchemaUpdateHasBeenSet = true; m_referenceSchemaUpdate = value; }

    
    inline void SetReferenceSchemaUpdate(SourceSchema&& value) { m_referenceSchemaUpdateHasBeenSet = true; m_referenceSchemaUpdate = value; }

    
    inline ReferenceDataSourceUpdate& WithReferenceSchemaUpdate(const SourceSchema& value) { SetReferenceSchemaUpdate(value); return *this;}

    
    inline ReferenceDataSourceUpdate& WithReferenceSchemaUpdate(SourceSchema&& value) { SetReferenceSchemaUpdate(value); return *this;}

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
