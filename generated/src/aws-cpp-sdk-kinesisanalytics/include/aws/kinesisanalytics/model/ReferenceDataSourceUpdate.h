﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReferenceDataSourceUpdate
  {
  public:
    AWS_KINESISANALYTICS_API ReferenceDataSourceUpdate() = default;
    AWS_KINESISANALYTICS_API ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the reference data source being updated. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    ReferenceDataSourceUpdate& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In-application table name that is created by this update.</p>
     */
    inline const Aws::String& GetTableNameUpdate() const { return m_tableNameUpdate; }
    inline bool TableNameUpdateHasBeenSet() const { return m_tableNameUpdateHasBeenSet; }
    template<typename TableNameUpdateT = Aws::String>
    void SetTableNameUpdate(TableNameUpdateT&& value) { m_tableNameUpdateHasBeenSet = true; m_tableNameUpdate = std::forward<TableNameUpdateT>(value); }
    template<typename TableNameUpdateT = Aws::String>
    ReferenceDataSourceUpdate& WithTableNameUpdate(TableNameUpdateT&& value) { SetTableNameUpdate(std::forward<TableNameUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
     * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
     * populate the in-application reference table.</p>
     */
    inline const S3ReferenceDataSourceUpdate& GetS3ReferenceDataSourceUpdate() const { return m_s3ReferenceDataSourceUpdate; }
    inline bool S3ReferenceDataSourceUpdateHasBeenSet() const { return m_s3ReferenceDataSourceUpdateHasBeenSet; }
    template<typename S3ReferenceDataSourceUpdateT = S3ReferenceDataSourceUpdate>
    void SetS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdateT&& value) { m_s3ReferenceDataSourceUpdateHasBeenSet = true; m_s3ReferenceDataSourceUpdate = std::forward<S3ReferenceDataSourceUpdateT>(value); }
    template<typename S3ReferenceDataSourceUpdateT = S3ReferenceDataSourceUpdate>
    ReferenceDataSourceUpdate& WithS3ReferenceDataSourceUpdate(S3ReferenceDataSourceUpdateT&& value) { SetS3ReferenceDataSourceUpdate(std::forward<S3ReferenceDataSourceUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns created in the in-application stream. </p>
     */
    inline const SourceSchema& GetReferenceSchemaUpdate() const { return m_referenceSchemaUpdate; }
    inline bool ReferenceSchemaUpdateHasBeenSet() const { return m_referenceSchemaUpdateHasBeenSet; }
    template<typename ReferenceSchemaUpdateT = SourceSchema>
    void SetReferenceSchemaUpdate(ReferenceSchemaUpdateT&& value) { m_referenceSchemaUpdateHasBeenSet = true; m_referenceSchemaUpdate = std::forward<ReferenceSchemaUpdateT>(value); }
    template<typename ReferenceSchemaUpdateT = SourceSchema>
    ReferenceDataSourceUpdate& WithReferenceSchemaUpdate(ReferenceSchemaUpdateT&& value) { SetReferenceSchemaUpdate(std::forward<ReferenceSchemaUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_tableNameUpdate;
    bool m_tableNameUpdateHasBeenSet = false;

    S3ReferenceDataSourceUpdate m_s3ReferenceDataSourceUpdate;
    bool m_s3ReferenceDataSourceUpdateHasBeenSet = false;

    SourceSchema m_referenceSchemaUpdate;
    bool m_referenceSchemaUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
