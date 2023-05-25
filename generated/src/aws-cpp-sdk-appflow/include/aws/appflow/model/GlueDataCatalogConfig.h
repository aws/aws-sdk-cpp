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
    AWS_APPFLOW_API GlueDataCatalogConfig();
    AWS_APPFLOW_API GlueDataCatalogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API GlueDataCatalogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline GlueDataCatalogConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline GlueDataCatalogConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants Amazon AppFlow the
     * permissions it needs to create Data Catalog tables, databases, and
     * partitions.</p> <p>For an example IAM policy that has the required permissions,
     * see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_id-based-policy-examples.html">Identity-based
     * policy examples for Amazon AppFlow</a>.</p>
     */
    inline GlueDataCatalogConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline GlueDataCatalogConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline GlueDataCatalogConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the Data Catalog database that stores the metadata tables that
     * Amazon AppFlow creates in your Amazon Web Services account. These tables contain
     * metadata for the data that's transferred by the flow that you configure with
     * this parameter.</p>  <p>When you configure a new flow with this parameter,
     * you must specify an existing database.</p> 
     */
    inline GlueDataCatalogConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline const Aws::String& GetTablePrefix() const{ return m_tablePrefix; }

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline void SetTablePrefix(const Aws::String& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = value; }

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline void SetTablePrefix(Aws::String&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::move(value); }

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline void SetTablePrefix(const char* value) { m_tablePrefixHasBeenSet = true; m_tablePrefix.assign(value); }

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline GlueDataCatalogConfig& WithTablePrefix(const Aws::String& value) { SetTablePrefix(value); return *this;}

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline GlueDataCatalogConfig& WithTablePrefix(Aws::String&& value) { SetTablePrefix(std::move(value)); return *this;}

    /**
     * <p>A naming prefix for each Data Catalog table that Amazon AppFlow creates for
     * the flow that you configure with this setting. Amazon AppFlow adds the prefix to
     * the beginning of the each table name.</p>
     */
    inline GlueDataCatalogConfig& WithTablePrefix(const char* value) { SetTablePrefix(value); return *this;}

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
