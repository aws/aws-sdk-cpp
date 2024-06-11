/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Specifies the schema to which you want Firehose to configure your data before
   * it writes it to Amazon S3. This parameter is required if <code>Enabled</code> is
   * set to true.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SchemaConfiguration">AWS
   * API Reference</a></p>
   */
  class SchemaConfiguration
  {
  public:
    AWS_FIREHOSE_API SchemaConfiguration();
    AWS_FIREHOSE_API SchemaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SchemaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role that Firehose can use to access Amazon Web Services Glue. This role
     * must be in the same account you use for Firehose. Cross-account roles aren't
     * allowed.</p>  <p>If the <code>SchemaConfiguration</code> request
     * parameter is used as part of invoking the <code>CreateDeliveryStream</code> API,
     * then the <code>RoleARN</code> property is required and its value must be
     * specified.</p> 
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline SchemaConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline SchemaConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline SchemaConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Glue Data Catalog. If you don't supply
     * this, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline SchemaConfiguration& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline SchemaConfiguration& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline SchemaConfiguration& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Amazon Web Services Glue database that contains the
     * schema for the output data.</p>  <p>If the
     * <code>SchemaConfiguration</code> request parameter is used as part of invoking
     * the <code>CreateDeliveryStream</code> API, then the <code>DatabaseName</code>
     * property is required and its value must be specified.</p> 
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline SchemaConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline SchemaConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline SchemaConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services Glue table that contains the column
     * information that constitutes your data schema.</p>  <p>If the
     * <code>SchemaConfiguration</code> request parameter is used as part of invoking
     * the <code>CreateDeliveryStream</code> API, then the <code>TableName</code>
     * property is required and its value must be specified.</p> 
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline SchemaConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline SchemaConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline SchemaConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you don't specify an Amazon Web Services Region, the default is the
     * current Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SchemaConfiguration& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SchemaConfiguration& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SchemaConfiguration& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the table version for the output data schema. If you don't specify
     * this version ID, or if you set it to <code>LATEST</code>, Firehose uses the most
     * recent version. This means that any updates to the table are automatically
     * picked up.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline SchemaConfiguration& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline SchemaConfiguration& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline SchemaConfiguration& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
