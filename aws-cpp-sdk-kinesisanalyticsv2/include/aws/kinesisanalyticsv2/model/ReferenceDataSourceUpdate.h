﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/S3ReferenceDataSourceUpdate.h>
#include <aws/kinesisanalyticsv2/model/SourceSchema.h>
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
   * <p>When you update a reference data source configuration for a SQL-based Kinesis
   * Data Analytics application, this object provides all the updated values (such as
   * the source bucket name and object key name), the in-application table name that
   * is created, and updated mapping information that maps the data in the Amazon S3
   * object to the in-application reference table that is created.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ReferenceDataSourceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ReferenceDataSourceUpdate
  {
  public:
    ReferenceDataSourceUpdate();
    ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reference data source that is being updated. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline ReferenceDataSourceUpdate& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline const Aws::String& GetTableNameUpdate() const{ return m_tableNameUpdate; }

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline bool TableNameUpdateHasBeenSet() const { return m_tableNameUpdateHasBeenSet; }

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(const Aws::String& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = value; }

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(Aws::String&& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = std::move(value); }

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline void SetTableNameUpdate(const char* value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate.assign(value); }

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(const Aws::String& value) { SetTableNameUpdate(value); return *this;}

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(Aws::String&& value) { SetTableNameUpdate(std::move(value)); return *this;}

    /**
     * <p>The in-application table name that is created by this update.</p>
     */
    inline ReferenceDataSourceUpdate& WithTableNameUpdate(const char* value) { SetTableNameUpdate(value); return *this;}


    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Kinesis Data
     * Analytics can assume to read the Amazon S3 object on your behalf and populate
     * the in-application reference table.</p>
     */
    inline const S3ReferenceDataSourceUpdate& GetS3ReferenceDataSourceUpdate() const{ return m_s3ReferenceDataSourceUpdate; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Kinesis Data
     * Analytics can assume to read the Amazon S3 object on your behalf and populate
     * the in-application reference table.</p>
     */
    inline bool S3ReferenceDataSourceUpdateHasBeenSet() const { return m_s3ReferenceDataSourceUpdateHasBeenSet; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Kinesis Data
     * Analytics can assume to read the Amazon S3 object on your behalf and populate
     * the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceUpdate(const S3ReferenceDataSourceUpdate& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = value; }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Kinesis Data
     * Analytics can assume to read the Amazon S3 object on your behalf and populate
     * the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdate&& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = std::move(value); }

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Kinesis Data
     * Analytics can assume to read the Amazon S3 object on your behalf and populate
     * the in-application reference table.</p>
     */
    inline ReferenceDataSourceUpdate& WithS3ReferenceDataSourceUpdate(const S3ReferenceDataSourceUpdate& value) { SetS3ReferenceDataSourceUpdate(value); return *this;}

    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Kinesis Data
     * Analytics can assume to read the Amazon S3 object on your behalf and populate
     * the in-application reference table.</p>
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
} // namespace KinesisAnalyticsV2
} // namespace Aws
