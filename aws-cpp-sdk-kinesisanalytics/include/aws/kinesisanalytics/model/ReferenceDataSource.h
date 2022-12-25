/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSource.h>
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
   * <p>Describes the reference data source by providing the source information (S3
   * bucket name and object key name), the resulting in-application table name that
   * is created, and the necessary schema to map the data elements in the Amazon S3
   * object to the in-application table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ReferenceDataSource">AWS
   * API Reference</a></p>
   */
  class ReferenceDataSource
  {
  public:
    AWS_KINESISANALYTICS_API ReferenceDataSource();
    AWS_KINESISANALYTICS_API ReferenceDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ReferenceDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline ReferenceDataSource& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline ReferenceDataSource& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline ReferenceDataSource& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Identifies the S3 bucket and object that contains the reference data. Also
     * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
     * on your behalf. An Amazon Kinesis Analytics application loads reference data
     * only once. If the data changes, you call the <code>UpdateApplication</code>
     * operation to trigger reloading of data into your application. </p>
     */
    inline const S3ReferenceDataSource& GetS3ReferenceDataSource() const{ return m_s3ReferenceDataSource; }

    /**
     * <p>Identifies the S3 bucket and object that contains the reference data. Also
     * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
     * on your behalf. An Amazon Kinesis Analytics application loads reference data
     * only once. If the data changes, you call the <code>UpdateApplication</code>
     * operation to trigger reloading of data into your application. </p>
     */
    inline bool S3ReferenceDataSourceHasBeenSet() const { return m_s3ReferenceDataSourceHasBeenSet; }

    /**
     * <p>Identifies the S3 bucket and object that contains the reference data. Also
     * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
     * on your behalf. An Amazon Kinesis Analytics application loads reference data
     * only once. If the data changes, you call the <code>UpdateApplication</code>
     * operation to trigger reloading of data into your application. </p>
     */
    inline void SetS3ReferenceDataSource(const S3ReferenceDataSource& value) { m_s3ReferenceDataSourceHasBeenSet = true; m_s3ReferenceDataSource = value; }

    /**
     * <p>Identifies the S3 bucket and object that contains the reference data. Also
     * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
     * on your behalf. An Amazon Kinesis Analytics application loads reference data
     * only once. If the data changes, you call the <code>UpdateApplication</code>
     * operation to trigger reloading of data into your application. </p>
     */
    inline void SetS3ReferenceDataSource(S3ReferenceDataSource&& value) { m_s3ReferenceDataSourceHasBeenSet = true; m_s3ReferenceDataSource = std::move(value); }

    /**
     * <p>Identifies the S3 bucket and object that contains the reference data. Also
     * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
     * on your behalf. An Amazon Kinesis Analytics application loads reference data
     * only once. If the data changes, you call the <code>UpdateApplication</code>
     * operation to trigger reloading of data into your application. </p>
     */
    inline ReferenceDataSource& WithS3ReferenceDataSource(const S3ReferenceDataSource& value) { SetS3ReferenceDataSource(value); return *this;}

    /**
     * <p>Identifies the S3 bucket and object that contains the reference data. Also
     * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
     * on your behalf. An Amazon Kinesis Analytics application loads reference data
     * only once. If the data changes, you call the <code>UpdateApplication</code>
     * operation to trigger reloading of data into your application. </p>
     */
    inline ReferenceDataSource& WithS3ReferenceDataSource(S3ReferenceDataSource&& value) { SetS3ReferenceDataSource(std::move(value)); return *this;}


    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline const SourceSchema& GetReferenceSchema() const{ return m_referenceSchema; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline bool ReferenceSchemaHasBeenSet() const { return m_referenceSchemaHasBeenSet; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline void SetReferenceSchema(const SourceSchema& value) { m_referenceSchemaHasBeenSet = true; m_referenceSchema = value; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline void SetReferenceSchema(SourceSchema&& value) { m_referenceSchemaHasBeenSet = true; m_referenceSchema = std::move(value); }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline ReferenceDataSource& WithReferenceSchema(const SourceSchema& value) { SetReferenceSchema(value); return *this;}

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline ReferenceDataSource& WithReferenceSchema(SourceSchema&& value) { SetReferenceSchema(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    S3ReferenceDataSource m_s3ReferenceDataSource;
    bool m_s3ReferenceDataSourceHasBeenSet = false;

    SourceSchema m_referenceSchema;
    bool m_referenceSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
