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
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceDescription.h>
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
   * <p>Describes the reference data source configured for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ReferenceDataSourceDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API ReferenceDataSourceDescription
  {
  public:
    ReferenceDataSourceDescription();
    ReferenceDataSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    ReferenceDataSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline ReferenceDataSourceDescription& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline ReferenceDataSourceDescription& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>ID of the reference data source. This is the ID that Amazon Kinesis Analytics
     * assigns when you add the reference data source to your application using the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
     * operation.</p>
     */
    inline ReferenceDataSourceDescription& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline ReferenceDataSourceDescription& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline ReferenceDataSourceDescription& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The in-application table name created by the specific reference data source
     * configuration.</p>
     */
    inline ReferenceDataSourceDescription& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline const S3ReferenceDataSourceDescription& GetS3ReferenceDataSourceDescription() const{ return m_s3ReferenceDataSourceDescription; }

    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline bool S3ReferenceDataSourceDescriptionHasBeenSet() const { return m_s3ReferenceDataSourceDescriptionHasBeenSet; }

    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceDescription(const S3ReferenceDataSourceDescription& value) { m_s3ReferenceDataSourceDescriptionHasBeenSet = true; m_s3ReferenceDataSourceDescription = value; }

    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline void SetS3ReferenceDataSourceDescription(S3ReferenceDataSourceDescription&& value) { m_s3ReferenceDataSourceDescriptionHasBeenSet = true; m_s3ReferenceDataSourceDescription = std::move(value); }

    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline ReferenceDataSourceDescription& WithS3ReferenceDataSourceDescription(const S3ReferenceDataSourceDescription& value) { SetS3ReferenceDataSourceDescription(value); return *this;}

    /**
     * <p>Provides the S3 bucket name, the object key name that contains the reference
     * data. It also provides the Amazon Resource Name (ARN) of the IAM role that
     * Amazon Kinesis Analytics can assume to read the Amazon S3 object and populate
     * the in-application reference table.</p>
     */
    inline ReferenceDataSourceDescription& WithS3ReferenceDataSourceDescription(S3ReferenceDataSourceDescription&& value) { SetS3ReferenceDataSourceDescription(std::move(value)); return *this;}


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
    inline ReferenceDataSourceDescription& WithReferenceSchema(const SourceSchema& value) { SetReferenceSchema(value); return *this;}

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream.</p>
     */
    inline ReferenceDataSourceDescription& WithReferenceSchema(SourceSchema&& value) { SetReferenceSchema(std::move(value)); return *this;}

  private:

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    S3ReferenceDataSourceDescription m_s3ReferenceDataSourceDescription;
    bool m_s3ReferenceDataSourceDescriptionHasBeenSet;

    SourceSchema m_referenceSchema;
    bool m_referenceSchemaHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
