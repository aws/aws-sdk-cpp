/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Option.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies configuration for Snowflake nodes in Glue Studio.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SnowflakeNodeData">AWS
   * API Reference</a></p>
   */
  class SnowflakeNodeData
  {
  public:
    AWS_GLUE_API SnowflakeNodeData() = default;
    AWS_GLUE_API SnowflakeNodeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SnowflakeNodeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    SnowflakeNodeData& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline const Option& GetConnection() const { return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    template<typename ConnectionT = Option>
    void SetConnection(ConnectionT&& value) { m_connectionHasBeenSet = true; m_connection = std::forward<ConnectionT>(value); }
    template<typename ConnectionT = Option>
    SnowflakeNodeData& WithConnection(ConnectionT&& value) { SetConnection(std::forward<ConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    SnowflakeNodeData& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    SnowflakeNodeData& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    SnowflakeNodeData& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not currently used.</p>
     */
    inline const Aws::String& GetTempDir() const { return m_tempDir; }
    inline bool TempDirHasBeenSet() const { return m_tempDirHasBeenSet; }
    template<typename TempDirT = Aws::String>
    void SetTempDir(TempDirT&& value) { m_tempDirHasBeenSet = true; m_tempDir = std::forward<TempDirT>(value); }
    template<typename TempDirT = Aws::String>
    SnowflakeNodeData& WithTempDir(TempDirT&& value) { SetTempDir(std::forward<TempDirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not currently used.</p>
     */
    inline const Option& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Option>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Option>
    SnowflakeNodeData& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    SnowflakeNodeData& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    template<typename AdditionalOptionsKeyT = Aws::String, typename AdditionalOptionsValueT = Aws::String>
    SnowflakeNodeData& AddAdditionalOptions(AdditionalOptionsKeyT&& key, AdditionalOptionsValueT&& value) {
      m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::forward<AdditionalOptionsKeyT>(key), std::forward<AdditionalOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline const Aws::String& GetSampleQuery() const { return m_sampleQuery; }
    inline bool SampleQueryHasBeenSet() const { return m_sampleQueryHasBeenSet; }
    template<typename SampleQueryT = Aws::String>
    void SetSampleQuery(SampleQueryT&& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = std::forward<SampleQueryT>(value); }
    template<typename SampleQueryT = Aws::String>
    SnowflakeNodeData& WithSampleQuery(SampleQueryT&& value) { SetSampleQuery(std::forward<SampleQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline const Aws::String& GetPreAction() const { return m_preAction; }
    inline bool PreActionHasBeenSet() const { return m_preActionHasBeenSet; }
    template<typename PreActionT = Aws::String>
    void SetPreAction(PreActionT&& value) { m_preActionHasBeenSet = true; m_preAction = std::forward<PreActionT>(value); }
    template<typename PreActionT = Aws::String>
    SnowflakeNodeData& WithPreAction(PreActionT&& value) { SetPreAction(std::forward<PreActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline const Aws::String& GetPostAction() const { return m_postAction; }
    inline bool PostActionHasBeenSet() const { return m_postActionHasBeenSet; }
    template<typename PostActionT = Aws::String>
    void SetPostAction(PostActionT&& value) { m_postActionHasBeenSet = true; m_postAction = std::forward<PostActionT>(value); }
    template<typename PostActionT = Aws::String>
    SnowflakeNodeData& WithPostAction(PostActionT&& value) { SetPostAction(std::forward<PostActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    SnowflakeNodeData& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used when Action is <code>append</code>. Specifies the resolution behavior
     * when a row already exists. If true, preexisting rows will be updated. If false,
     * those rows will be inserted.</p>
     */
    inline bool GetUpsert() const { return m_upsert; }
    inline bool UpsertHasBeenSet() const { return m_upsertHasBeenSet; }
    inline void SetUpsert(bool value) { m_upsertHasBeenSet = true; m_upsert = value; }
    inline SnowflakeNodeData& WithUpsert(bool value) { SetUpsert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline const Aws::String& GetMergeAction() const { return m_mergeAction; }
    inline bool MergeActionHasBeenSet() const { return m_mergeActionHasBeenSet; }
    template<typename MergeActionT = Aws::String>
    void SetMergeAction(MergeActionT&& value) { m_mergeActionHasBeenSet = true; m_mergeAction = std::forward<MergeActionT>(value); }
    template<typename MergeActionT = Aws::String>
    SnowflakeNodeData& WithMergeAction(MergeActionT&& value) { SetMergeAction(std::forward<MergeActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline const Aws::String& GetMergeWhenMatched() const { return m_mergeWhenMatched; }
    inline bool MergeWhenMatchedHasBeenSet() const { return m_mergeWhenMatchedHasBeenSet; }
    template<typename MergeWhenMatchedT = Aws::String>
    void SetMergeWhenMatched(MergeWhenMatchedT&& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = std::forward<MergeWhenMatchedT>(value); }
    template<typename MergeWhenMatchedT = Aws::String>
    SnowflakeNodeData& WithMergeWhenMatched(MergeWhenMatchedT&& value) { SetMergeWhenMatched(std::forward<MergeWhenMatchedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline const Aws::String& GetMergeWhenNotMatched() const { return m_mergeWhenNotMatched; }
    inline bool MergeWhenNotMatchedHasBeenSet() const { return m_mergeWhenNotMatchedHasBeenSet; }
    template<typename MergeWhenNotMatchedT = Aws::String>
    void SetMergeWhenNotMatched(MergeWhenNotMatchedT&& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = std::forward<MergeWhenNotMatchedT>(value); }
    template<typename MergeWhenNotMatchedT = Aws::String>
    SnowflakeNodeData& WithMergeWhenNotMatched(MergeWhenNotMatchedT&& value) { SetMergeWhenNotMatched(std::forward<MergeWhenNotMatchedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline const Aws::String& GetMergeClause() const { return m_mergeClause; }
    inline bool MergeClauseHasBeenSet() const { return m_mergeClauseHasBeenSet; }
    template<typename MergeClauseT = Aws::String>
    void SetMergeClause(MergeClauseT&& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = std::forward<MergeClauseT>(value); }
    template<typename MergeClauseT = Aws::String>
    SnowflakeNodeData& WithMergeClause(MergeClauseT&& value) { SetMergeClause(std::forward<MergeClauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline const Aws::String& GetStagingTable() const { return m_stagingTable; }
    inline bool StagingTableHasBeenSet() const { return m_stagingTableHasBeenSet; }
    template<typename StagingTableT = Aws::String>
    void SetStagingTable(StagingTableT&& value) { m_stagingTableHasBeenSet = true; m_stagingTable = std::forward<StagingTableT>(value); }
    template<typename StagingTableT = Aws::String>
    SnowflakeNodeData& WithStagingTable(StagingTableT&& value) { SetStagingTable(std::forward<StagingTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline const Aws::Vector<Option>& GetSelectedColumns() const { return m_selectedColumns; }
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }
    template<typename SelectedColumnsT = Aws::Vector<Option>>
    void SetSelectedColumns(SelectedColumnsT&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::forward<SelectedColumnsT>(value); }
    template<typename SelectedColumnsT = Aws::Vector<Option>>
    SnowflakeNodeData& WithSelectedColumns(SelectedColumnsT&& value) { SetSelectedColumns(std::forward<SelectedColumnsT>(value)); return *this;}
    template<typename SelectedColumnsT = Option>
    SnowflakeNodeData& AddSelectedColumns(SelectedColumnsT&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.emplace_back(std::forward<SelectedColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether automatic query pushdown is enabled. If pushdown is
     * enabled, then when a query is run on Spark, if part of the query can be "pushed
     * down" to the Snowflake server, it is pushed down. This improves performance of
     * some queries.</p>
     */
    inline bool GetAutoPushdown() const { return m_autoPushdown; }
    inline bool AutoPushdownHasBeenSet() const { return m_autoPushdownHasBeenSet; }
    inline void SetAutoPushdown(bool value) { m_autoPushdownHasBeenSet = true; m_autoPushdown = value; }
    inline SnowflakeNodeData& WithAutoPushdown(bool value) { SetAutoPushdown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline const Aws::Vector<Option>& GetTableSchema() const { return m_tableSchema; }
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }
    template<typename TableSchemaT = Aws::Vector<Option>>
    void SetTableSchema(TableSchemaT&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::forward<TableSchemaT>(value); }
    template<typename TableSchemaT = Aws::Vector<Option>>
    SnowflakeNodeData& WithTableSchema(TableSchemaT&& value) { SetTableSchema(std::forward<TableSchemaT>(value)); return *this;}
    template<typename TableSchemaT = Option>
    SnowflakeNodeData& AddTableSchema(TableSchemaT&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.emplace_back(std::forward<TableSchemaT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Option m_connection;
    bool m_connectionHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_tempDir;
    bool m_tempDirHasBeenSet = false;

    Option m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::String m_sampleQuery;
    bool m_sampleQueryHasBeenSet = false;

    Aws::String m_preAction;
    bool m_preActionHasBeenSet = false;

    Aws::String m_postAction;
    bool m_postActionHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

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

    Aws::String m_stagingTable;
    bool m_stagingTableHasBeenSet = false;

    Aws::Vector<Option> m_selectedColumns;
    bool m_selectedColumnsHasBeenSet = false;

    bool m_autoPushdown{false};
    bool m_autoPushdownHasBeenSet = false;

    Aws::Vector<Option> m_tableSchema;
    bool m_tableSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
