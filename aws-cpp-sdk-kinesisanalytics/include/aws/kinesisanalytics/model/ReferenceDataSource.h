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
#include <aws/kinesisanalytics/model/S3ReferenceDataSource.h>
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
   * <p>Describes the reference data source by providing the source information (S3
   * bucket name and object key name), the resulting in-application table name that
   * is created, and the necessary schema to map the data elements in the Amazon S3
   * object to the in-application table.</p>
   */
  class AWS_KINESISANALYTICS_API ReferenceDataSource
  {
  public:
    ReferenceDataSource();
    ReferenceDataSource(const Aws::Utils::Json::JsonValue& jsonValue);
    ReferenceDataSource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

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
    inline ReferenceDataSource& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the in-application table to create.</p>
     */
    inline ReferenceDataSource& WithTableName(const char* value) { SetTableName(value); return *this;}

    
    inline const S3ReferenceDataSource& GetS3ReferenceDataSource() const{ return m_s3ReferenceDataSource; }

    
    inline void SetS3ReferenceDataSource(const S3ReferenceDataSource& value) { m_s3ReferenceDataSourceHasBeenSet = true; m_s3ReferenceDataSource = value; }

    
    inline void SetS3ReferenceDataSource(S3ReferenceDataSource&& value) { m_s3ReferenceDataSourceHasBeenSet = true; m_s3ReferenceDataSource = value; }

    
    inline ReferenceDataSource& WithS3ReferenceDataSource(const S3ReferenceDataSource& value) { SetS3ReferenceDataSource(value); return *this;}

    
    inline ReferenceDataSource& WithS3ReferenceDataSource(S3ReferenceDataSource&& value) { SetS3ReferenceDataSource(value); return *this;}

    
    inline const SourceSchema& GetReferenceSchema() const{ return m_referenceSchema; }

    
    inline void SetReferenceSchema(const SourceSchema& value) { m_referenceSchemaHasBeenSet = true; m_referenceSchema = value; }

    
    inline void SetReferenceSchema(SourceSchema&& value) { m_referenceSchemaHasBeenSet = true; m_referenceSchema = value; }

    
    inline ReferenceDataSource& WithReferenceSchema(const SourceSchema& value) { SetReferenceSchema(value); return *this;}

    
    inline ReferenceDataSource& WithReferenceSchema(SourceSchema&& value) { SetReferenceSchema(value); return *this;}

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    S3ReferenceDataSource m_s3ReferenceDataSource;
    bool m_s3ReferenceDataSourceHasBeenSet;
    SourceSchema m_referenceSchema;
    bool m_referenceSchemaHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
