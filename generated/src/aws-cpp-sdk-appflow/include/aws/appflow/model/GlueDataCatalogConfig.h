/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs your
   * data with the Glue Data Catalog. When Amazon AppFlow catalogs your data, it
   * stores metadata in Data Catalog tables. This metadata represents the data that's
   * transferred by the flow that you configure with these settings.</p> 
   * <p>You can configure a flow with these settings only when the flow destination
   * is Amazon S3.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/GlueDataCatalogConfig">AWS
   * API Reference</a></p>
   */
  class GlueDataCatalogConfig
  {
  public:
    AWS_APPFLOW_API GlueDataCatalogConfig() = default;
    AWS_APPFLOW_API GlueDataCatalogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API GlueDataCatalogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GlueDataCatalogConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GlueDataCatalogConfig& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline const Aws::String& GetTablePrefix() const { return m_tablePrefix; }
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }
    template<typename TablePrefixT = Aws::String>
    void SetTablePrefix(TablePrefixT&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::forward<TablePrefixT>(value); }
    template<typename TablePrefixT = Aws::String>
    GlueDataCatalogConfig& WithTablePrefix(TablePrefixT&& value) { SetTablePrefix(std::forward<TablePrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
