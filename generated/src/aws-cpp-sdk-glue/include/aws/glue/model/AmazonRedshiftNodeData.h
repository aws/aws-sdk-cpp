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
    AWS_GLUE_API AmazonRedshiftNodeData() = default;
    AWS_GLUE_API AmazonRedshiftNodeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AmazonRedshiftNodeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access type for the Redshift connection. Can be a direct connection or
     * catalog connections.</p>
     */
    inline const Aws::String& GetAccessType() const { return m_accessType; }
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
    template<typename AccessTypeT = Aws::String>
    void SetAccessType(AccessTypeT&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::forward<AccessTypeT>(value); }
    template<typename AccessTypeT = Aws::String>
    AmazonRedshiftNodeData& WithAccessType(AccessTypeT&& value) { SetAccessType(std::forward<AccessTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type to specify whether a specific table is the source or a custom
     * query.</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    AmazonRedshiftNodeData& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue connection to the Redshift cluster.</p>
     */
    inline const Option& GetConnection() const { return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    template<typename ConnectionT = Option>
    void SetConnection(ConnectionT&& value) { m_connectionHasBeenSet = true; m_connection = std::forward<ConnectionT>(value); }
    template<typename ConnectionT = Option>
    AmazonRedshiftNodeData& WithConnection(ConnectionT&& value) { SetConnection(std::forward<ConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift schema name when working with a direct connection.</p>
     */
    inline const Option& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Option>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Option>
    AmazonRedshiftNodeData& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift table name when working with a direct connection.</p>
     */
    inline const Option& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Option>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Option>
    AmazonRedshiftNodeData& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Glue Data Catalog database when working with a data
     * catalog.</p>
     */
    inline const Option& GetCatalogDatabase() const { return m_catalogDatabase; }
    inline bool CatalogDatabaseHasBeenSet() const { return m_catalogDatabaseHasBeenSet; }
    template<typename CatalogDatabaseT = Option>
    void SetCatalogDatabase(CatalogDatabaseT&& value) { m_catalogDatabaseHasBeenSet = true; m_catalogDatabase = std::forward<CatalogDatabaseT>(value); }
    template<typename CatalogDatabaseT = Option>
    AmazonRedshiftNodeData& WithCatalogDatabase(CatalogDatabaseT&& value) { SetCatalogDatabase(std::forward<CatalogDatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue Data Catalog table name when working with a data catalog.</p>
     */
    inline const Option& GetCatalogTable() const { return m_catalogTable; }
    inline bool CatalogTableHasBeenSet() const { return m_catalogTableHasBeenSet; }
    template<typename CatalogTableT = Option>
    void SetCatalogTable(CatalogTableT&& value) { m_catalogTableHasBeenSet = true; m_catalogTable = std::forward<CatalogTableT>(value); }
    template<typename CatalogTableT = Option>
    AmazonRedshiftNodeData& WithCatalogTable(CatalogTableT&& value) { SetCatalogTable(std::forward<CatalogTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift schema name when working with a data catalog.</p>
     */
    inline const Aws::String& GetCatalogRedshiftSchema() const { return m_catalogRedshiftSchema; }
    inline bool CatalogRedshiftSchemaHasBeenSet() const { return m_catalogRedshiftSchemaHasBeenSet; }
    template<typename CatalogRedshiftSchemaT = Aws::String>
    void SetCatalogRedshiftSchema(CatalogRedshiftSchemaT&& value) { m_catalogRedshiftSchemaHasBeenSet = true; m_catalogRedshiftSchema = std::forward<CatalogRedshiftSchemaT>(value); }
    template<typename CatalogRedshiftSchemaT = Aws::String>
    AmazonRedshiftNodeData& WithCatalogRedshiftSchema(CatalogRedshiftSchemaT&& value) { SetCatalogRedshiftSchema(std::forward<CatalogRedshiftSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database table to read from.</p>
     */
    inline const Aws::String& GetCatalogRedshiftTable() const { return m_catalogRedshiftTable; }
    inline bool CatalogRedshiftTableHasBeenSet() const { return m_catalogRedshiftTableHasBeenSet; }
    template<typename CatalogRedshiftTableT = Aws::String>
    void SetCatalogRedshiftTable(CatalogRedshiftTableT&& value) { m_catalogRedshiftTableHasBeenSet = true; m_catalogRedshiftTable = std::forward<CatalogRedshiftTableT>(value); }
    template<typename CatalogRedshiftTableT = Aws::String>
    AmazonRedshiftNodeData& WithCatalogRedshiftTable(CatalogRedshiftTableT&& value) { SetCatalogRedshiftTable(std::forward<CatalogRedshiftTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline const Aws::String& GetTempDir() const { return m_tempDir; }
    inline bool TempDirHasBeenSet() const { return m_tempDirHasBeenSet; }
    template<typename TempDirT = Aws::String>
    void SetTempDir(TempDirT&& value) { m_tempDirHasBeenSet = true; m_tempDir = std::forward<TempDirT>(value); }
    template<typename TempDirT = Aws::String>
    AmazonRedshiftNodeData& WithTempDir(TempDirT&& value) { SetTempDir(std::forward<TempDirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The role name use when connection to S3. The IAM role ill default
     * to the role on the job when left blank.</p>
     */
    inline const Option& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Option>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Option>
    AmazonRedshiftNodeData& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional values when connecting to the Redshift cluster.</p>
     */
    inline const Aws::Vector<AmazonRedshiftAdvancedOption>& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = Aws::Vector<AmazonRedshiftAdvancedOption>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Vector<AmazonRedshiftAdvancedOption>>
    AmazonRedshiftNodeData& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsT = AmazonRedshiftAdvancedOption>
    AmazonRedshiftNodeData& AddAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace_back(std::forward<AdvancedOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SQL used to fetch the data from a Redshift sources when the SourceType is
     * 'query'.</p>
     */
    inline const Aws::String& GetSampleQuery() const { return m_sampleQuery; }
    inline bool SampleQueryHasBeenSet() const { return m_sampleQueryHasBeenSet; }
    template<typename SampleQueryT = Aws::String>
    void SetSampleQuery(SampleQueryT&& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = std::forward<SampleQueryT>(value); }
    template<typename SampleQueryT = Aws::String>
    AmazonRedshiftNodeData& WithSampleQuery(SampleQueryT&& value) { SetSampleQuery(std::forward<SampleQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline const Aws::String& GetPreAction() const { return m_preAction; }
    inline bool PreActionHasBeenSet() const { return m_preActionHasBeenSet; }
    template<typename PreActionT = Aws::String>
    void SetPreAction(PreActionT&& value) { m_preActionHasBeenSet = true; m_preAction = std::forward<PreActionT>(value); }
    template<typename PreActionT = Aws::String>
    AmazonRedshiftNodeData& WithPreAction(PreActionT&& value) { SetPreAction(std::forward<PreActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL used before a MERGE or APPEND with upsert is run.</p>
     */
    inline const Aws::String& GetPostAction() const { return m_postAction; }
    inline bool PostActionHasBeenSet() const { return m_postActionHasBeenSet; }
    template<typename PostActionT = Aws::String>
    void SetPostAction(PostActionT&& value) { m_postActionHasBeenSet = true; m_postAction = std::forward<PostActionT>(value); }
    template<typename PostActionT = Aws::String>
    AmazonRedshiftNodeData& WithPostAction(PostActionT&& value) { SetPostAction(std::forward<PostActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how writing to a Redshift cluser will occur.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    AmazonRedshiftNodeData& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the prefix to a table.</p>
     */
    inline const Aws::String& GetTablePrefix() const { return m_tablePrefix; }
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }
    template<typename TablePrefixT = Aws::String>
    void SetTablePrefix(TablePrefixT&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::forward<TablePrefixT>(value); }
    template<typename TablePrefixT = Aws::String>
    AmazonRedshiftNodeData& WithTablePrefix(TablePrefixT&& value) { SetTablePrefix(std::forward<TablePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used on Redshift sinks when doing an APPEND.</p>
     */
    inline bool GetUpsert() const { return m_upsert; }
    inline bool UpsertHasBeenSet() const { return m_upsertHasBeenSet; }
    inline void SetUpsert(bool value) { m_upsertHasBeenSet = true; m_upsert = value; }
    inline AmazonRedshiftNodeData& WithUpsert(bool value) { SetUpsert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled.</p>
     */
    inline const Aws::String& GetMergeAction() const { return m_mergeAction; }
    inline bool MergeActionHasBeenSet() const { return m_mergeActionHasBeenSet; }
    template<typename MergeActionT = Aws::String>
    void SetMergeAction(MergeActionT&& value) { m_mergeActionHasBeenSet = true; m_mergeAction = std::forward<MergeActionT>(value); }
    template<typename MergeActionT = Aws::String>
    AmazonRedshiftNodeData& WithMergeAction(MergeActionT&& value) { SetMergeAction(std::forward<MergeActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record matches a new record.</p>
     */
    inline const Aws::String& GetMergeWhenMatched() const { return m_mergeWhenMatched; }
    inline bool MergeWhenMatchedHasBeenSet() const { return m_mergeWhenMatchedHasBeenSet; }
    template<typename MergeWhenMatchedT = Aws::String>
    void SetMergeWhenMatched(MergeWhenMatchedT&& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = std::forward<MergeWhenMatchedT>(value); }
    template<typename MergeWhenMatchedT = Aws::String>
    AmazonRedshiftNodeData& WithMergeWhenMatched(MergeWhenMatchedT&& value) { SetMergeWhenMatched(std::forward<MergeWhenMatchedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action used when to detemine how a MERGE in a Redshift sink will be
     * handled when an existing record doesn't match a new record.</p>
     */
    inline const Aws::String& GetMergeWhenNotMatched() const { return m_mergeWhenNotMatched; }
    inline bool MergeWhenNotMatchedHasBeenSet() const { return m_mergeWhenNotMatchedHasBeenSet; }
    template<typename MergeWhenNotMatchedT = Aws::String>
    void SetMergeWhenNotMatched(MergeWhenNotMatchedT&& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = std::forward<MergeWhenNotMatchedT>(value); }
    template<typename MergeWhenNotMatchedT = Aws::String>
    AmazonRedshiftNodeData& WithMergeWhenNotMatched(MergeWhenNotMatchedT&& value) { SetMergeWhenNotMatched(std::forward<MergeWhenNotMatchedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL used in a custom merge to deal with matching records.</p>
     */
    inline const Aws::String& GetMergeClause() const { return m_mergeClause; }
    inline bool MergeClauseHasBeenSet() const { return m_mergeClauseHasBeenSet; }
    template<typename MergeClauseT = Aws::String>
    void SetMergeClause(MergeClauseT&& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = std::forward<MergeClauseT>(value); }
    template<typename MergeClauseT = Aws::String>
    AmazonRedshiftNodeData& WithMergeClause(MergeClauseT&& value) { SetMergeClause(std::forward<MergeClauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the connection that is associated with the catalog
     * table used.</p>
     */
    inline const Aws::String& GetCrawlerConnection() const { return m_crawlerConnection; }
    inline bool CrawlerConnectionHasBeenSet() const { return m_crawlerConnectionHasBeenSet; }
    template<typename CrawlerConnectionT = Aws::String>
    void SetCrawlerConnection(CrawlerConnectionT&& value) { m_crawlerConnectionHasBeenSet = true; m_crawlerConnection = std::forward<CrawlerConnectionT>(value); }
    template<typename CrawlerConnectionT = Aws::String>
    AmazonRedshiftNodeData& WithCrawlerConnection(CrawlerConnectionT&& value) { SetCrawlerConnection(std::forward<CrawlerConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of schema output for a given node.</p>
     */
    inline const Aws::Vector<Option>& GetTableSchema() const { return m_tableSchema; }
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }
    template<typename TableSchemaT = Aws::Vector<Option>>
    void SetTableSchema(TableSchemaT&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::forward<TableSchemaT>(value); }
    template<typename TableSchemaT = Aws::Vector<Option>>
    AmazonRedshiftNodeData& WithTableSchema(TableSchemaT&& value) { SetTableSchema(std::forward<TableSchemaT>(value)); return *this;}
    template<typename TableSchemaT = Option>
    AmazonRedshiftNodeData& AddTableSchema(TableSchemaT&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.emplace_back(std::forward<TableSchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the temporary staging table that is used when doing a MERGE or
     * APPEND with upsert.</p>
     */
    inline const Aws::String& GetStagingTable() const { return m_stagingTable; }
    inline bool StagingTableHasBeenSet() const { return m_stagingTableHasBeenSet; }
    template<typename StagingTableT = Aws::String>
    void SetStagingTable(StagingTableT&& value) { m_stagingTableHasBeenSet = true; m_stagingTable = std::forward<StagingTableT>(value); }
    template<typename StagingTableT = Aws::String>
    AmazonRedshiftNodeData& WithStagingTable(StagingTableT&& value) { SetStagingTable(std::forward<StagingTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of column names used to determine a matching record when doing a
     * MERGE or APPEND with upsert.</p>
     */
    inline const Aws::Vector<Option>& GetSelectedColumns() const { return m_selectedColumns; }
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }
    template<typename SelectedColumnsT = Aws::Vector<Option>>
    void SetSelectedColumns(SelectedColumnsT&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::forward<SelectedColumnsT>(value); }
    template<typename SelectedColumnsT = Aws::Vector<Option>>
    AmazonRedshiftNodeData& WithSelectedColumns(SelectedColumnsT&& value) { SetSelectedColumns(std::forward<SelectedColumnsT>(value)); return *this;}
    template<typename SelectedColumnsT = Option>
    AmazonRedshiftNodeData& AddSelectedColumns(SelectedColumnsT&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.emplace_back(std::forward<SelectedColumnsT>(value)); return *this; }
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

    bool m_upsert{false};
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
