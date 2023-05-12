/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Option.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AmazonRedshiftAdvancedOption.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Amazon Redshift node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AmazonRedshiftNodeData">AWS
   * API Reference</a></p>
   */
  class AmazonRedshiftNodeData
  {
  public:
    AWS_GLUE_API AmazonRedshiftNodeData();
    AWS_GLUE_API AmazonRedshiftNodeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AmazonRedshiftNodeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline const Aws::String& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline void SetAccessType(const Aws::String& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline void SetAccessType(Aws::String&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline void SetAccessType(const char* value) { m_accessTypeHasBeenSet = true; m_accessType.assign(value); }

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline AmazonRedshiftNodeData& WithAccessType(const Aws::String& value) { SetAccessType(value); return *this;}

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline AmazonRedshiftNodeData& WithAccessType(Aws::String&& value) { SetAccessType(std::move(value)); return *this;}

    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline AmazonRedshiftNodeData& WithAccessType(const char* value) { SetAccessType(value); return *this;}


    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline AmazonRedshiftNodeData& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline AmazonRedshiftNodeData& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline AmazonRedshiftNodeData& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline const Option& GetConnection() const{ return m_connection; }

    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }

    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline void SetConnection(const Option& value) { m_connectionHasBeenSet = true; m_connection = value; }

    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline void SetConnection(Option&& value) { m_connectionHasBeenSet = true; m_connection = std::move(value); }

    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline AmazonRedshiftNodeData& WithConnection(const Option& value) { SetConnection(value); return *this;}

    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline AmazonRedshiftNodeData& WithConnection(Option&& value) { SetConnection(std::move(value)); return *this;}


    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline const Option& GetSchema() const{ return m_schema; }

    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline void SetSchema(const Option& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline void SetSchema(Option&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline AmazonRedshiftNodeData& WithSchema(const Option& value) { SetSchema(value); return *this;}

    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline AmazonRedshiftNodeData& WithSchema(Option&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline const Option& GetTable() const{ return m_table; }

    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline void SetTable(const Option& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline void SetTable(Option&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline AmazonRedshiftNodeData& WithTable(const Option& value) { SetTable(value); return *this;}

    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline AmazonRedshiftNodeData& WithTable(Option&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline const Option& GetCatalogDatabase() const{ return m_catalogDatabase; }

    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline bool CatalogDatabaseHasBeenSet() const { return m_catalogDatabaseHasBeenSet; }

    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline void SetCatalogDatabase(const Option& value) { m_catalogDatabaseHasBeenSet = true; m_catalogDatabase = value; }

    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline void SetCatalogDatabase(Option&& value) { m_catalogDatabaseHasBeenSet = true; m_catalogDatabase = std::move(value); }

    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogDatabase(const Option& value) { SetCatalogDatabase(value); return *this;}

    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogDatabase(Option&& value) { SetCatalogDatabase(std::move(value)); return *this;}


    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline const Option& GetCatalogTable() const{ return m_catalogTable; }

    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline bool CatalogTableHasBeenSet() const { return m_catalogTableHasBeenSet; }

    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline void SetCatalogTable(const Option& value) { m_catalogTableHasBeenSet = true; m_catalogTable = value; }

    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline void SetCatalogTable(Option&& value) { m_catalogTableHasBeenSet = true; m_catalogTable = std::move(value); }

    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogTable(const Option& value) { SetCatalogTable(value); return *this;}

    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogTable(Option&& value) { SetCatalogTable(std::move(value)); return *this;}


    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline const Aws::String& GetCatalogRedshiftSchema() const{ return m_catalogRedshiftSchema; }

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline bool CatalogRedshiftSchemaHasBeenSet() const { return m_catalogRedshiftSchemaHasBeenSet; }

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline void SetCatalogRedshiftSchema(const Aws::String& value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema = value; }

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline void SetCatalogRedshiftSchema(Aws::String&& value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema = std::move(value); }

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline void SetCatalogRedshiftSchema(const char* value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema.assign(value); }

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogRedshiftSchema(const Aws::String& value) { SetCatalogRedshiftSchema(value); return *this;}

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogRedshiftSchema(Aws::String&& value) { SetCatalogRedshiftSchema(std::move(value)); return *this;}

    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogRedshiftSchema(const char* value) { SetCatalogRedshiftSchema(value); return *this;}


    /**
     * <p>The database table to read from.</p>
     */
    inline const Aws::String& GetCatalogRedshiftTable() const{ return m_catalogRedshiftTable; }

    /**
     * <p>The database table to read from.</p>
     */
    inline bool CatalogRedshiftTableHasBeenSet() const { return m_catalogRedshiftTableHasBeenSet; }

    /**
     * <p>The database table to read from.</p>
     */
    inline void SetCatalogRedshiftTable(const Aws::String& value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable = value; }

    /**
     * <p>The database table to read from.</p>
     */
    inline void SetCatalogRedshiftTable(Aws::String&& value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable = std::move(value); }

    /**
     * <p>The database table to read from.</p>
     */
    inline void SetCatalogRedshiftTable(const char* value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable.assign(value); }

    /**
     * <p>The database table to read from.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogRedshiftTable(const Aws::String& value) { SetCatalogRedshiftTable(value); return *this;}

    /**
     * <p>The database table to read from.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogRedshiftTable(Aws::String&& value) { SetCatalogRedshiftTable(std::move(value)); return *this;}

    /**
     * <p>The database table to read from.</p>
     */
    inline AmazonRedshiftNodeData& WithCatalogRedshiftTable(const char* value) { SetCatalogRedshiftTable(value); return *this;}


    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline const Aws::String& GetTempDir() const{ return m_tempDir; }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline bool TempDirHasBeenSet() const { return m_tempDirHasBeenSet; }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline void SetTempDir(const Aws::String& value) { m_tempDirHasBeenSet = true; m_tempDir = value; }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline void SetTempDir(Aws::String&& value) { m_tempDirHasBeenSet = true; m_tempDir = std::move(value); }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline void SetTempDir(const char* value) { m_tempDirHasBeenSet = true; m_tempDir.assign(value); }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline AmazonRedshiftNodeData& WithTempDir(const Aws::String& value) { SetTempDir(value); return *this;}

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline AmazonRedshiftNodeData& WithTempDir(Aws::String&& value) { SetTempDir(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline AmazonRedshiftNodeData& WithTempDir(const char* value) { SetTempDir(value); return *this;}


    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline const Option& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline void SetIamRole(const Option& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline void SetIamRole(Option&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline AmazonRedshiftNodeData& WithIamRole(const Option& value) { SetIamRole(value); return *this;}

    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline AmazonRedshiftNodeData& WithIamRole(Option&& value) { SetIamRole(std::move(value)); return *this;}


    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline const Aws::Vector<AmazonRedshiftAdvancedOption>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline void SetAdvancedOptions(const Aws::Vector<AmazonRedshiftAdvancedOption>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline void SetAdvancedOptions(Aws::Vector<AmazonRedshiftAdvancedOption>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline AmazonRedshiftNodeData& WithAdvancedOptions(const Aws::Vector<AmazonRedshiftAdvancedOption>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline AmazonRedshiftNodeData& WithAdvancedOptions(Aws::Vector<AmazonRedshiftAdvancedOption>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline AmazonRedshiftNodeData& AddAdvancedOptions(const AmazonRedshiftAdvancedOption& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.push_back(value); return *this; }

    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline AmazonRedshiftNodeData& AddAdvancedOptions(AmazonRedshiftAdvancedOption&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline const Aws::String& GetSampleQuery() const{ return m_sampleQuery; }

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline bool SampleQueryHasBeenSet() const { return m_sampleQueryHasBeenSet; }

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline void SetSampleQuery(const Aws::String& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = value; }

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline void SetSampleQuery(Aws::String&& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = std::move(value); }

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline void SetSampleQuery(const char* value) { m_sampleQueryHasBeenSet = true; m_sampleQuery.assign(value); }

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline AmazonRedshiftNodeData& WithSampleQuery(const Aws::String& value) { SetSampleQuery(value); return *this;}

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline AmazonRedshiftNodeData& WithSampleQuery(Aws::String&& value) { SetSampleQuery(std::move(value)); return *this;}

    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline AmazonRedshiftNodeData& WithSampleQuery(const char* value) { SetSampleQuery(value); return *this;}


    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline const Aws::String& GetPreAction() const{ return m_preAction; }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline bool PreActionHasBeenSet() const { return m_preActionHasBeenSet; }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline void SetPreAction(const Aws::String& value) { m_preActionHasBeenSet = true; m_preAction = value; }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline void SetPreAction(Aws::String&& value) { m_preActionHasBeenSet = true; m_preAction = std::move(value); }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline void SetPreAction(const char* value) { m_preActionHasBeenSet = true; m_preAction.assign(value); }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline AmazonRedshiftNodeData& WithPreAction(const Aws::String& value) { SetPreAction(value); return *this;}

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline AmazonRedshiftNodeData& WithPreAction(Aws::String&& value) { SetPreAction(std::move(value)); return *this;}

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline AmazonRedshiftNodeData& WithPreAction(const char* value) { SetPreAction(value); return *this;}


    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline const Aws::String& GetPostAction() const{ return m_postAction; }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline bool PostActionHasBeenSet() const { return m_postActionHasBeenSet; }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline void SetPostAction(const Aws::String& value) { m_postActionHasBeenSet = true; m_postAction = value; }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline void SetPostAction(Aws::String&& value) { m_postActionHasBeenSet = true; m_postAction = std::move(value); }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline void SetPostAction(const char* value) { m_postActionHasBeenSet = true; m_postAction.assign(value); }

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline AmazonRedshiftNodeData& WithPostAction(const Aws::String& value) { SetPostAction(value); return *this;}

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline AmazonRedshiftNodeData& WithPostAction(Aws::String&& value) { SetPostAction(std::move(value)); return *this;}

    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline AmazonRedshiftNodeData& WithPostAction(const char* value) { SetPostAction(value); return *this;}


    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline AmazonRedshiftNodeData& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline AmazonRedshiftNodeData& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline AmazonRedshiftNodeData& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline const Aws::String& GetTablePrefix() const{ return m_tablePrefix; }

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline void SetTablePrefix(const Aws::String& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = value; }

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline void SetTablePrefix(Aws::String&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::move(value); }

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline void SetTablePrefix(const char* value) { m_tablePrefixHasBeenSet = true; m_tablePrefix.assign(value); }

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline AmazonRedshiftNodeData& WithTablePrefix(const Aws::String& value) { SetTablePrefix(value); return *this;}

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline AmazonRedshiftNodeData& WithTablePrefix(Aws::String&& value) { SetTablePrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline AmazonRedshiftNodeData& WithTablePrefix(const char* value) { SetTablePrefix(value); return *this;}


    /**
     * <p>The action used on Redshift sinks when doing an APPEND.</p>
     */
    inline bool GetUpsert() const{ return m_upsert; }

    /**
     * <p>The action used on Redshift sinks when doing an APPEND.</p>
     */
    inline bool UpsertHasBeenSet() const { return m_upsertHasBeenSet; }

    /**
     * <p>The action used on Redshift sinks when doing an APPEND.</p>
     */
    inline void SetUpsert(bool value) { m_upsertHasBeenSet = true; m_upsert = value; }

    /**
     * <p>The action used on Redshift sinks when doing an APPEND.</p>
     */
    inline AmazonRedshiftNodeData& WithUpsert(bool value) { SetUpsert(value); return *this;}


    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline const Aws::String& GetMergeAction() const{ return m_mergeAction; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline bool MergeActionHasBeenSet() const { return m_mergeActionHasBeenSet; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline void SetMergeAction(const Aws::String& value) { m_mergeActionHasBeenSet = true; m_mergeAction = value; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline void SetMergeAction(Aws::String&& value) { m_mergeActionHasBeenSet = true; m_mergeAction = std::move(value); }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline void SetMergeAction(const char* value) { m_mergeActionHasBeenSet = true; m_mergeAction.assign(value); }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeAction(const Aws::String& value) { SetMergeAction(value); return *this;}

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeAction(Aws::String&& value) { SetMergeAction(std::move(value)); return *this;}

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeAction(const char* value) { SetMergeAction(value); return *this;}


    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline const Aws::String& GetMergeWhenMatched() const{ return m_mergeWhenMatched; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline bool MergeWhenMatchedHasBeenSet() const { return m_mergeWhenMatchedHasBeenSet; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline void SetMergeWhenMatched(const Aws::String& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = value; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline void SetMergeWhenMatched(Aws::String&& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = std::move(value); }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline void SetMergeWhenMatched(const char* value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched.assign(value); }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeWhenMatched(const Aws::String& value) { SetMergeWhenMatched(value); return *this;}

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeWhenMatched(Aws::String&& value) { SetMergeWhenMatched(std::move(value)); return *this;}

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeWhenMatched(const char* value) { SetMergeWhenMatched(value); return *this;}


    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline const Aws::String& GetMergeWhenNotMatched() const{ return m_mergeWhenNotMatched; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline bool MergeWhenNotMatchedHasBeenSet() const { return m_mergeWhenNotMatchedHasBeenSet; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline void SetMergeWhenNotMatched(const Aws::String& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = value; }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline void SetMergeWhenNotMatched(Aws::String&& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = std::move(value); }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline void SetMergeWhenNotMatched(const char* value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched.assign(value); }

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeWhenNotMatched(const Aws::String& value) { SetMergeWhenNotMatched(value); return *this;}

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeWhenNotMatched(Aws::String&& value) { SetMergeWhenNotMatched(std::move(value)); return *this;}

    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeWhenNotMatched(const char* value) { SetMergeWhenNotMatched(value); return *this;}


    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline const Aws::String& GetMergeClause() const{ return m_mergeClause; }

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline bool MergeClauseHasBeenSet() const { return m_mergeClauseHasBeenSet; }

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline void SetMergeClause(const Aws::String& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = value; }

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline void SetMergeClause(Aws::String&& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = std::move(value); }

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline void SetMergeClause(const char* value) { m_mergeClauseHasBeenSet = true; m_mergeClause.assign(value); }

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeClause(const Aws::String& value) { SetMergeClause(value); return *this;}

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeClause(Aws::String&& value) { SetMergeClause(std::move(value)); return *this;}

    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline AmazonRedshiftNodeData& WithMergeClause(const char* value) { SetMergeClause(value); return *this;}


    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline const Aws::String& GetCrawlerConnection() const{ return m_crawlerConnection; }

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline bool CrawlerConnectionHasBeenSet() const { return m_crawlerConnectionHasBeenSet; }

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline void SetCrawlerConnection(const Aws::String& value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection = value; }

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline void SetCrawlerConnection(Aws::String&& value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection = std::move(value); }

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline void SetCrawlerConnection(const char* value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection.assign(value); }

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline AmazonRedshiftNodeData& WithCrawlerConnection(const Aws::String& value) { SetCrawlerConnection(value); return *this;}

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline AmazonRedshiftNodeData& WithCrawlerConnection(Aws::String&& value) { SetCrawlerConnection(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline AmazonRedshiftNodeData& WithCrawlerConnection(const char* value) { SetCrawlerConnection(value); return *this;}


    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline const Aws::Vector<Option>& GetTableSchema() const{ return m_tableSchema; }

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline void SetTableSchema(const Aws::Vector<Option>& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = value; }

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline void SetTableSchema(Aws::Vector<Option>&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::move(value); }

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline AmazonRedshiftNodeData& WithTableSchema(const Aws::Vector<Option>& value) { SetTableSchema(value); return *this;}

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline AmazonRedshiftNodeData& WithTableSchema(Aws::Vector<Option>&& value) { SetTableSchema(std::move(value)); return *this;}

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline AmazonRedshiftNodeData& AddTableSchema(const Option& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.push_back(value); return *this; }

    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline AmazonRedshiftNodeData& AddTableSchema(Option&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline const Aws::String& GetStagingTable() const{ return m_stagingTable; }

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline bool StagingTableHasBeenSet() const { return m_stagingTableHasBeenSet; }

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline void SetStagingTable(const Aws::String& value) { m_stagingTableHasBeenSet = true; m_stagingTable = value; }

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline void SetStagingTable(Aws::String&& value) { m_stagingTableHasBeenSet = true; m_stagingTable = std::move(value); }

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline void SetStagingTable(const char* value) { m_stagingTableHasBeenSet = true; m_stagingTable.assign(value); }

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& WithStagingTable(const Aws::String& value) { SetStagingTable(value); return *this;}

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& WithStagingTable(Aws::String&& value) { SetStagingTable(std::move(value)); return *this;}

    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& WithStagingTable(const char* value) { SetStagingTable(value); return *this;}


    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline const Aws::Vector<Option>& GetSelectedColumns() const{ return m_selectedColumns; }

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline void SetSelectedColumns(const Aws::Vector<Option>& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = value; }

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline void SetSelectedColumns(Aws::Vector<Option>&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::move(value); }

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& WithSelectedColumns(const Aws::Vector<Option>& value) { SetSelectedColumns(value); return *this;}

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& WithSelectedColumns(Aws::Vector<Option>&& value) { SetSelectedColumns(std::move(value)); return *this;}

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& AddSelectedColumns(const Option& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(value); return *this; }

    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline AmazonRedshiftNodeData& AddSelectedColumns(Option&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accessType;
    bool m_accessTypeHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Option m_connection;
    bool m_connectionHasBeenSet = false;

    Option m_schema;
    bool m_schemaHasBeenSet = false;

    Option m_table;
    bool m_tableHasBeenSet = false;

    Option m_catalogDatabase;
    bool m_catalogDatabaseHasBeenSet = false;

    Option m_catalogTable;
    bool m_catalogTableHasBeenSet = false;

    Aws::String m_catalogRedshiftSchema;
    bool m_catalogRedshiftSchemaHasBeenSet = false;

    Aws::String m_catalogRedshiftTable;
    bool m_catalogRedshiftTableHasBeenSet = false;

    Aws::String m_tempDir;
    bool m_tempDirHasBeenSet = false;

    Option m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Vector<AmazonRedshiftAdvancedOption> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    Aws::String m_sampleQuery;
    bool m_sampleQueryHasBeenSet = false;

    Aws::String m_preAction;
    bool m_preActionHasBeenSet = false;

    Aws::String m_postAction;
    bool m_postActionHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet = false;

    bool m_upsert;
    bool m_upsertHasBeenSet = false;

    Aws::String m_mergeAction;
    bool m_mergeActionHasBeenSet = false;

    Aws::String m_mergeWhenMatched;
    bool m_mergeWhenMatchedHasBeenSet = false;

    Aws::String m_mergeWhenNotMatched;
    bool m_mergeWhenNotMatchedHasBeenSet = false;

    Aws::String m_mergeClause;
    bool m_mergeClauseHasBeenSet = false;

    Aws::String m_crawlerConnection;
    bool m_crawlerConnectionHasBeenSet = false;

    Aws::Vector<Option> m_tableSchema;
    bool m_tableSchemaHasBeenSet = false;

    Aws::String m_stagingTable;
    bool m_stagingTableHasBeenSet = false;

    Aws::Vector<Option> m_selectedColumns;
    bool m_selectedColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
