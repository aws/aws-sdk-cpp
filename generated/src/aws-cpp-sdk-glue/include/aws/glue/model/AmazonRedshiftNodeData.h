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


    ///@{
    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline const Aws::String& GetAccessType() const{ return m_accessType; }
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
    inline void SetAccessType(const Aws::String& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }
    inline void SetAccessType(Aws::String&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }
    inline void SetAccessType(const char* value) { m_accessTypeHasBeenSet = true; m_accessType.assign(value); }
    inline AmazonRedshiftNodeData& WithAccessType(const Aws::String& value) { SetAccessType(value); return *this;}
    inline AmazonRedshiftNodeData& WithAccessType(Aws::String&& value) { SetAccessType(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithAccessType(const char* value) { SetAccessType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }
    inline AmazonRedshiftNodeData& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}
    inline AmazonRedshiftNodeData& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithSourceType(const char* value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline const Option& GetConnection() const{ return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    inline void SetConnection(const Option& value) { m_connectionHasBeenSet = true; m_connection = value; }
    inline void SetConnection(Option&& value) { m_connectionHasBeenSet = true; m_connection = std::move(value); }
    inline AmazonRedshiftNodeData& WithConnection(const Option& value) { SetConnection(value); return *this;}
    inline AmazonRedshiftNodeData& WithConnection(Option&& value) { SetConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline const Option& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Option& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Option&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline AmazonRedshiftNodeData& WithSchema(const Option& value) { SetSchema(value); return *this;}
    inline AmazonRedshiftNodeData& WithSchema(Option&& value) { SetSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline const Option& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Option& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Option&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline AmazonRedshiftNodeData& WithTable(const Option& value) { SetTable(value); return *this;}
    inline AmazonRedshiftNodeData& WithTable(Option&& value) { SetTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline const Option& GetCatalogDatabase() const{ return m_catalogDatabase; }
    inline bool CatalogDatabaseHasBeenSet() const { return m_catalogDatabaseHasBeenSet; }
    inline void SetCatalogDatabase(const Option& value) { m_catalogDatabaseHasBeenSet = true; m_catalogDatabase = value; }
    inline void SetCatalogDatabase(Option&& value) { m_catalogDatabaseHasBeenSet = true; m_catalogDatabase = std::move(value); }
    inline AmazonRedshiftNodeData& WithCatalogDatabase(const Option& value) { SetCatalogDatabase(value); return *this;}
    inline AmazonRedshiftNodeData& WithCatalogDatabase(Option&& value) { SetCatalogDatabase(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline const Option& GetCatalogTable() const{ return m_catalogTable; }
    inline bool CatalogTableHasBeenSet() const { return m_catalogTableHasBeenSet; }
    inline void SetCatalogTable(const Option& value) { m_catalogTableHasBeenSet = true; m_catalogTable = value; }
    inline void SetCatalogTable(Option&& value) { m_catalogTableHasBeenSet = true; m_catalogTable = std::move(value); }
    inline AmazonRedshiftNodeData& WithCatalogTable(const Option& value) { SetCatalogTable(value); return *this;}
    inline AmazonRedshiftNodeData& WithCatalogTable(Option&& value) { SetCatalogTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline const Aws::String& GetCatalogRedshiftSchema() const{ return m_catalogRedshiftSchema; }
    inline bool CatalogRedshiftSchemaHasBeenSet() const { return m_catalogRedshiftSchemaHasBeenSet; }
    inline void SetCatalogRedshiftSchema(const Aws::String& value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema = value; }
    inline void SetCatalogRedshiftSchema(Aws::String&& value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema = std::move(value); }
    inline void SetCatalogRedshiftSchema(const char* value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema.assign(value); }
    inline AmazonRedshiftNodeData& WithCatalogRedshiftSchema(const Aws::String& value) { SetCatalogRedshiftSchema(value); return *this;}
    inline AmazonRedshiftNodeData& WithCatalogRedshiftSchema(Aws::String&& value) { SetCatalogRedshiftSchema(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithCatalogRedshiftSchema(const char* value) { SetCatalogRedshiftSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database table to read from.</p>
     */
    inline const Aws::String& GetCatalogRedshiftTable() const{ return m_catalogRedshiftTable; }
    inline bool CatalogRedshiftTableHasBeenSet() const { return m_catalogRedshiftTableHasBeenSet; }
    inline void SetCatalogRedshiftTable(const Aws::String& value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable = value; }
    inline void SetCatalogRedshiftTable(Aws::String&& value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable = std::move(value); }
    inline void SetCatalogRedshiftTable(const char* value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable.assign(value); }
    inline AmazonRedshiftNodeData& WithCatalogRedshiftTable(const Aws::String& value) { SetCatalogRedshiftTable(value); return *this;}
    inline AmazonRedshiftNodeData& WithCatalogRedshiftTable(Aws::String&& value) { SetCatalogRedshiftTable(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithCatalogRedshiftTable(const char* value) { SetCatalogRedshiftTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline const Aws::String& GetTempDir() const{ return m_tempDir; }
    inline bool TempDirHasBeenSet() const { return m_tempDirHasBeenSet; }
    inline void SetTempDir(const Aws::String& value) { m_tempDirHasBeenSet = true; m_tempDir = value; }
    inline void SetTempDir(Aws::String&& value) { m_tempDirHasBeenSet = true; m_tempDir = std::move(value); }
    inline void SetTempDir(const char* value) { m_tempDirHasBeenSet = true; m_tempDir.assign(value); }
    inline AmazonRedshiftNodeData& WithTempDir(const Aws::String& value) { SetTempDir(value); return *this;}
    inline AmazonRedshiftNodeData& WithTempDir(Aws::String&& value) { SetTempDir(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithTempDir(const char* value) { SetTempDir(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline const Option& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const Option& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(Option&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline AmazonRedshiftNodeData& WithIamRole(const Option& value) { SetIamRole(value); return *this;}
    inline AmazonRedshiftNodeData& WithIamRole(Option&& value) { SetIamRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline const Aws::Vector<AmazonRedshiftAdvancedOption>& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const Aws::Vector<AmazonRedshiftAdvancedOption>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(Aws::Vector<AmazonRedshiftAdvancedOption>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline AmazonRedshiftNodeData& WithAdvancedOptions(const Aws::Vector<AmazonRedshiftAdvancedOption>& value) { SetAdvancedOptions(value); return *this;}
    inline AmazonRedshiftNodeData& WithAdvancedOptions(Aws::Vector<AmazonRedshiftAdvancedOption>&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& AddAdvancedOptions(const AmazonRedshiftAdvancedOption& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.push_back(value); return *this; }
    inline AmazonRedshiftNodeData& AddAdvancedOptions(AmazonRedshiftAdvancedOption&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline const Aws::String& GetSampleQuery() const{ return m_sampleQuery; }
    inline bool SampleQueryHasBeenSet() const { return m_sampleQueryHasBeenSet; }
    inline void SetSampleQuery(const Aws::String& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = value; }
    inline void SetSampleQuery(Aws::String&& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = std::move(value); }
    inline void SetSampleQuery(const char* value) { m_sampleQueryHasBeenSet = true; m_sampleQuery.assign(value); }
    inline AmazonRedshiftNodeData& WithSampleQuery(const Aws::String& value) { SetSampleQuery(value); return *this;}
    inline AmazonRedshiftNodeData& WithSampleQuery(Aws::String&& value) { SetSampleQuery(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithSampleQuery(const char* value) { SetSampleQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline const Aws::String& GetPreAction() const{ return m_preAction; }
    inline bool PreActionHasBeenSet() const { return m_preActionHasBeenSet; }
    inline void SetPreAction(const Aws::String& value) { m_preActionHasBeenSet = true; m_preAction = value; }
    inline void SetPreAction(Aws::String&& value) { m_preActionHasBeenSet = true; m_preAction = std::move(value); }
    inline void SetPreAction(const char* value) { m_preActionHasBeenSet = true; m_preAction.assign(value); }
    inline AmazonRedshiftNodeData& WithPreAction(const Aws::String& value) { SetPreAction(value); return *this;}
    inline AmazonRedshiftNodeData& WithPreAction(Aws::String&& value) { SetPreAction(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithPreAction(const char* value) { SetPreAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline const Aws::String& GetPostAction() const{ return m_postAction; }
    inline bool PostActionHasBeenSet() const { return m_postActionHasBeenSet; }
    inline void SetPostAction(const Aws::String& value) { m_postActionHasBeenSet = true; m_postAction = value; }
    inline void SetPostAction(Aws::String&& value) { m_postActionHasBeenSet = true; m_postAction = std::move(value); }
    inline void SetPostAction(const char* value) { m_postActionHasBeenSet = true; m_postAction.assign(value); }
    inline AmazonRedshiftNodeData& WithPostAction(const Aws::String& value) { SetPostAction(value); return *this;}
    inline AmazonRedshiftNodeData& WithPostAction(Aws::String&& value) { SetPostAction(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithPostAction(const char* value) { SetPostAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline AmazonRedshiftNodeData& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline AmazonRedshiftNodeData& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline const Aws::String& GetTablePrefix() const{ return m_tablePrefix; }
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }
    inline void SetTablePrefix(const Aws::String& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = value; }
    inline void SetTablePrefix(Aws::String&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::move(value); }
    inline void SetTablePrefix(const char* value) { m_tablePrefixHasBeenSet = true; m_tablePrefix.assign(value); }
    inline AmazonRedshiftNodeData& WithTablePrefix(const Aws::String& value) { SetTablePrefix(value); return *this;}
    inline AmazonRedshiftNodeData& WithTablePrefix(Aws::String&& value) { SetTablePrefix(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithTablePrefix(const char* value) { SetTablePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used on Redshift sinks when doing an APPEND.</p>
     */
    inline bool GetUpsert() const{ return m_upsert; }
    inline bool UpsertHasBeenSet() const { return m_upsertHasBeenSet; }
    inline void SetUpsert(bool value) { m_upsertHasBeenSet = true; m_upsert = value; }
    inline AmazonRedshiftNodeData& WithUpsert(bool value) { SetUpsert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline const Aws::String& GetMergeAction() const{ return m_mergeAction; }
    inline bool MergeActionHasBeenSet() const { return m_mergeActionHasBeenSet; }
    inline void SetMergeAction(const Aws::String& value) { m_mergeActionHasBeenSet = true; m_mergeAction = value; }
    inline void SetMergeAction(Aws::String&& value) { m_mergeActionHasBeenSet = true; m_mergeAction = std::move(value); }
    inline void SetMergeAction(const char* value) { m_mergeActionHasBeenSet = true; m_mergeAction.assign(value); }
    inline AmazonRedshiftNodeData& WithMergeAction(const Aws::String& value) { SetMergeAction(value); return *this;}
    inline AmazonRedshiftNodeData& WithMergeAction(Aws::String&& value) { SetMergeAction(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithMergeAction(const char* value) { SetMergeAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline const Aws::String& GetMergeWhenMatched() const{ return m_mergeWhenMatched; }
    inline bool MergeWhenMatchedHasBeenSet() const { return m_mergeWhenMatchedHasBeenSet; }
    inline void SetMergeWhenMatched(const Aws::String& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = value; }
    inline void SetMergeWhenMatched(Aws::String&& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = std::move(value); }
    inline void SetMergeWhenMatched(const char* value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched.assign(value); }
    inline AmazonRedshiftNodeData& WithMergeWhenMatched(const Aws::String& value) { SetMergeWhenMatched(value); return *this;}
    inline AmazonRedshiftNodeData& WithMergeWhenMatched(Aws::String&& value) { SetMergeWhenMatched(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithMergeWhenMatched(const char* value) { SetMergeWhenMatched(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline const Aws::String& GetMergeWhenNotMatched() const{ return m_mergeWhenNotMatched; }
    inline bool MergeWhenNotMatchedHasBeenSet() const { return m_mergeWhenNotMatchedHasBeenSet; }
    inline void SetMergeWhenNotMatched(const Aws::String& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = value; }
    inline void SetMergeWhenNotMatched(Aws::String&& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = std::move(value); }
    inline void SetMergeWhenNotMatched(const char* value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched.assign(value); }
    inline AmazonRedshiftNodeData& WithMergeWhenNotMatched(const Aws::String& value) { SetMergeWhenNotMatched(value); return *this;}
    inline AmazonRedshiftNodeData& WithMergeWhenNotMatched(Aws::String&& value) { SetMergeWhenNotMatched(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithMergeWhenNotMatched(const char* value) { SetMergeWhenNotMatched(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline const Aws::String& GetMergeClause() const{ return m_mergeClause; }
    inline bool MergeClauseHasBeenSet() const { return m_mergeClauseHasBeenSet; }
    inline void SetMergeClause(const Aws::String& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = value; }
    inline void SetMergeClause(Aws::String&& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = std::move(value); }
    inline void SetMergeClause(const char* value) { m_mergeClauseHasBeenSet = true; m_mergeClause.assign(value); }
    inline AmazonRedshiftNodeData& WithMergeClause(const Aws::String& value) { SetMergeClause(value); return *this;}
    inline AmazonRedshiftNodeData& WithMergeClause(Aws::String&& value) { SetMergeClause(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithMergeClause(const char* value) { SetMergeClause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline const Aws::String& GetCrawlerConnection() const{ return m_crawlerConnection; }
    inline bool CrawlerConnectionHasBeenSet() const { return m_crawlerConnectionHasBeenSet; }
    inline void SetCrawlerConnection(const Aws::String& value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection = value; }
    inline void SetCrawlerConnection(Aws::String&& value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection = std::move(value); }
    inline void SetCrawlerConnection(const char* value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection.assign(value); }
    inline AmazonRedshiftNodeData& WithCrawlerConnection(const Aws::String& value) { SetCrawlerConnection(value); return *this;}
    inline AmazonRedshiftNodeData& WithCrawlerConnection(Aws::String&& value) { SetCrawlerConnection(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithCrawlerConnection(const char* value) { SetCrawlerConnection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline const Aws::Vector<Option>& GetTableSchema() const{ return m_tableSchema; }
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }
    inline void SetTableSchema(const Aws::Vector<Option>& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = value; }
    inline void SetTableSchema(Aws::Vector<Option>&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::move(value); }
    inline AmazonRedshiftNodeData& WithTableSchema(const Aws::Vector<Option>& value) { SetTableSchema(value); return *this;}
    inline AmazonRedshiftNodeData& WithTableSchema(Aws::Vector<Option>&& value) { SetTableSchema(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& AddTableSchema(const Option& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.push_back(value); return *this; }
    inline AmazonRedshiftNodeData& AddTableSchema(Option&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline const Aws::String& GetStagingTable() const{ return m_stagingTable; }
    inline bool StagingTableHasBeenSet() const { return m_stagingTableHasBeenSet; }
    inline void SetStagingTable(const Aws::String& value) { m_stagingTableHasBeenSet = true; m_stagingTable = value; }
    inline void SetStagingTable(Aws::String&& value) { m_stagingTableHasBeenSet = true; m_stagingTable = std::move(value); }
    inline void SetStagingTable(const char* value) { m_stagingTableHasBeenSet = true; m_stagingTable.assign(value); }
    inline AmazonRedshiftNodeData& WithStagingTable(const Aws::String& value) { SetStagingTable(value); return *this;}
    inline AmazonRedshiftNodeData& WithStagingTable(Aws::String&& value) { SetStagingTable(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& WithStagingTable(const char* value) { SetStagingTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline const Aws::Vector<Option>& GetSelectedColumns() const{ return m_selectedColumns; }
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }
    inline void SetSelectedColumns(const Aws::Vector<Option>& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = value; }
    inline void SetSelectedColumns(Aws::Vector<Option>&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::move(value); }
    inline AmazonRedshiftNodeData& WithSelectedColumns(const Aws::Vector<Option>& value) { SetSelectedColumns(value); return *this;}
    inline AmazonRedshiftNodeData& WithSelectedColumns(Aws::Vector<Option>&& value) { SetSelectedColumns(std::move(value)); return *this;}
    inline AmazonRedshiftNodeData& AddSelectedColumns(const Option& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(value); return *this; }
    inline AmazonRedshiftNodeData& AddSelectedColumns(Option&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(std::move(value)); return *this; }
    ///@}
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
