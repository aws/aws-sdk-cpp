/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/DatabaseLFTagPolicyAndPermissions.h>
#include <aws/dataexchange/model/TableLFTagPolicyAndPermissions.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details about the assets imported from an AWS Lake Formation tag policy
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetsFromLakeFormationTagPolicyRequestDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetsFromLakeFormationTagPolicyRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetsFromLakeFormationTagPolicyRequestDetails();
    AWS_DATAEXCHANGE_API ImportAssetsFromLakeFormationTagPolicyRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetsFromLakeFormationTagPolicyRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AWS Glue Data Catalog.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A structure for the database object.</p>
     */
    inline const DatabaseLFTagPolicyAndPermissions& GetDatabase() const{ return m_database; }

    /**
     * <p>A structure for the database object.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>A structure for the database object.</p>
     */
    inline void SetDatabase(const DatabaseLFTagPolicyAndPermissions& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>A structure for the database object.</p>
     */
    inline void SetDatabase(DatabaseLFTagPolicyAndPermissions&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>A structure for the database object.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithDatabase(const DatabaseLFTagPolicyAndPermissions& value) { SetDatabase(value); return *this;}

    /**
     * <p>A structure for the database object.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithDatabase(DatabaseLFTagPolicyAndPermissions&& value) { SetDatabase(std::move(value)); return *this;}


    /**
     * <p>A structure for the table object.</p>
     */
    inline const TableLFTagPolicyAndPermissions& GetTable() const{ return m_table; }

    /**
     * <p>A structure for the table object.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>A structure for the table object.</p>
     */
    inline void SetTable(const TableLFTagPolicyAndPermissions& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>A structure for the table object.</p>
     */
    inline void SetTable(TableLFTagPolicyAndPermissions&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>A structure for the table object.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithTable(const TableLFTagPolicyAndPermissions& value) { SetTable(value); return *this;}

    /**
     * <p>A structure for the table object.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithTable(TableLFTagPolicyAndPermissions&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions of subscribers to AWS Lake Formation data
     * permissions.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline ImportAssetsFromLakeFormationTagPolicyRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    DatabaseLFTagPolicyAndPermissions m_database;
    bool m_databaseHasBeenSet = false;

    TableLFTagPolicyAndPermissions m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
