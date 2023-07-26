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
    AWS_GLUE_API SnowflakeNodeData();
    AWS_GLUE_API SnowflakeNodeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SnowflakeNodeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline SnowflakeNodeData& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline SnowflakeNodeData& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>Specifies how retrieved data is specified. Valid values:
     * <code>"table"</code>, <code> "query"</code>.</p>
     */
    inline SnowflakeNodeData& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline const Option& GetConnection() const{ return m_connection; }

    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }

    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline void SetConnection(const Option& value) { m_connectionHasBeenSet = true; m_connection = value; }

    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline void SetConnection(Option&& value) { m_connectionHasBeenSet = true; m_connection = std::move(value); }

    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline SnowflakeNodeData& WithConnection(const Option& value) { SetConnection(value); return *this;}

    /**
     * <p>Specifies a Glue Data Catalog Connection to a Snowflake endpoint.</p>
     */
    inline SnowflakeNodeData& WithConnection(Option&& value) { SetConnection(std::move(value)); return *this;}


    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline SnowflakeNodeData& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline SnowflakeNodeData& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>Specifies a Snowflake database schema for your node to use.</p>
     */
    inline SnowflakeNodeData& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline SnowflakeNodeData& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline SnowflakeNodeData& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>Specifies a Snowflake table for your node to use.</p>
     */
    inline SnowflakeNodeData& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline SnowflakeNodeData& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline SnowflakeNodeData& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>Specifies a Snowflake database for your node to use.</p>
     */
    inline SnowflakeNodeData& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>Not currently used.</p>
     */
    inline const Aws::String& GetTempDir() const{ return m_tempDir; }

    /**
     * <p>Not currently used.</p>
     */
    inline bool TempDirHasBeenSet() const { return m_tempDirHasBeenSet; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetTempDir(const Aws::String& value) { m_tempDirHasBeenSet = true; m_tempDir = value; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetTempDir(Aws::String&& value) { m_tempDirHasBeenSet = true; m_tempDir = std::move(value); }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetTempDir(const char* value) { m_tempDirHasBeenSet = true; m_tempDir.assign(value); }

    /**
     * <p>Not currently used.</p>
     */
    inline SnowflakeNodeData& WithTempDir(const Aws::String& value) { SetTempDir(value); return *this;}

    /**
     * <p>Not currently used.</p>
     */
    inline SnowflakeNodeData& WithTempDir(Aws::String&& value) { SetTempDir(std::move(value)); return *this;}

    /**
     * <p>Not currently used.</p>
     */
    inline SnowflakeNodeData& WithTempDir(const char* value) { SetTempDir(value); return *this;}


    /**
     * <p>Not currently used.</p>
     */
    inline const Option& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>Not currently used.</p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetIamRole(const Option& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetIamRole(Option&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>Not currently used.</p>
     */
    inline SnowflakeNodeData& WithIamRole(const Option& value) { SetIamRole(value); return *this;}

    /**
     * <p>Not currently used.</p>
     */
    inline SnowflakeNodeData& WithIamRole(Option&& value) { SetIamRole(std::move(value)); return *this;}


    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const{ return m_additionalOptions; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline void SetAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline void SetAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& WithAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalOptions(value); return *this;}

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& WithAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(const Aws::String& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(Aws::String&& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(const Aws::String& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(Aws::String&& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(const char* key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(Aws::String&& key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional options passed to the Snowflake connector. If options
     * are specified elsewhere in this node, this will take precedence.</p>
     */
    inline SnowflakeNodeData& AddAdditionalOptions(const char* key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }


    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline const Aws::String& GetSampleQuery() const{ return m_sampleQuery; }

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline bool SampleQueryHasBeenSet() const { return m_sampleQueryHasBeenSet; }

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline void SetSampleQuery(const Aws::String& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = value; }

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline void SetSampleQuery(Aws::String&& value) { m_sampleQueryHasBeenSet = true; m_sampleQuery = std::move(value); }

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline void SetSampleQuery(const char* value) { m_sampleQueryHasBeenSet = true; m_sampleQuery.assign(value); }

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline SnowflakeNodeData& WithSampleQuery(const Aws::String& value) { SetSampleQuery(value); return *this;}

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline SnowflakeNodeData& WithSampleQuery(Aws::String&& value) { SetSampleQuery(std::move(value)); return *this;}

    /**
     * <p>A SQL string used to retrieve data with the <code>query</code>
     * sourcetype.</p>
     */
    inline SnowflakeNodeData& WithSampleQuery(const char* value) { SetSampleQuery(value); return *this;}


    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline const Aws::String& GetPreAction() const{ return m_preAction; }

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline bool PreActionHasBeenSet() const { return m_preActionHasBeenSet; }

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline void SetPreAction(const Aws::String& value) { m_preActionHasBeenSet = true; m_preAction = value; }

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline void SetPreAction(Aws::String&& value) { m_preActionHasBeenSet = true; m_preAction = std::move(value); }

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline void SetPreAction(const char* value) { m_preActionHasBeenSet = true; m_preAction.assign(value); }

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline SnowflakeNodeData& WithPreAction(const Aws::String& value) { SetPreAction(value); return *this;}

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline SnowflakeNodeData& WithPreAction(Aws::String&& value) { SetPreAction(std::move(value)); return *this;}

    /**
     * <p>A SQL string run before the Snowflake connector performs its standard
     * actions.</p>
     */
    inline SnowflakeNodeData& WithPreAction(const char* value) { SetPreAction(value); return *this;}


    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline const Aws::String& GetPostAction() const{ return m_postAction; }

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline bool PostActionHasBeenSet() const { return m_postActionHasBeenSet; }

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline void SetPostAction(const Aws::String& value) { m_postActionHasBeenSet = true; m_postAction = value; }

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline void SetPostAction(Aws::String&& value) { m_postActionHasBeenSet = true; m_postAction = std::move(value); }

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline void SetPostAction(const char* value) { m_postActionHasBeenSet = true; m_postAction.assign(value); }

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline SnowflakeNodeData& WithPostAction(const Aws::String& value) { SetPostAction(value); return *this;}

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline SnowflakeNodeData& WithPostAction(Aws::String&& value) { SetPostAction(std::move(value)); return *this;}

    /**
     * <p>A SQL string run after the Snowflake connector performs its standard
     * actions.</p>
     */
    inline SnowflakeNodeData& WithPostAction(const char* value) { SetPostAction(value); return *this;}


    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline SnowflakeNodeData& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline SnowflakeNodeData& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>Specifies what action to take when writing to a table with preexisting data.
     * Valid values: <code> append</code>, <code>merge</code>, <code>truncate</code>,
     * <code>drop</code>.</p>
     */
    inline SnowflakeNodeData& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>Used when Action is <code>append</code>. Specifies the resolution behavior
     * when a row already exists. If true, preexisting rows will be updated. If false,
     * those rows will be inserted.</p>
     */
    inline bool GetUpsert() const{ return m_upsert; }

    /**
     * <p>Used when Action is <code>append</code>. Specifies the resolution behavior
     * when a row already exists. If true, preexisting rows will be updated. If false,
     * those rows will be inserted.</p>
     */
    inline bool UpsertHasBeenSet() const { return m_upsertHasBeenSet; }

    /**
     * <p>Used when Action is <code>append</code>. Specifies the resolution behavior
     * when a row already exists. If true, preexisting rows will be updated. If false,
     * those rows will be inserted.</p>
     */
    inline void SetUpsert(bool value) { m_upsertHasBeenSet = true; m_upsert = value; }

    /**
     * <p>Used when Action is <code>append</code>. Specifies the resolution behavior
     * when a row already exists. If true, preexisting rows will be updated. If false,
     * those rows will be inserted.</p>
     */
    inline SnowflakeNodeData& WithUpsert(bool value) { SetUpsert(value); return *this;}


    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline const Aws::String& GetMergeAction() const{ return m_mergeAction; }

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline bool MergeActionHasBeenSet() const { return m_mergeActionHasBeenSet; }

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline void SetMergeAction(const Aws::String& value) { m_mergeActionHasBeenSet = true; m_mergeAction = value; }

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline void SetMergeAction(Aws::String&& value) { m_mergeActionHasBeenSet = true; m_mergeAction = std::move(value); }

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline void SetMergeAction(const char* value) { m_mergeActionHasBeenSet = true; m_mergeAction.assign(value); }

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeAction(const Aws::String& value) { SetMergeAction(value); return *this;}

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeAction(Aws::String&& value) { SetMergeAction(std::move(value)); return *this;}

    /**
     * <p>Specifies a merge action. Valid values: <code>simple</code>,
     * <code>custom</code>. If simple, merge behavior is defined by
     * <code>MergeWhenMatched</code> and <code> MergeWhenNotMatched</code>. If custom,
     * defined by <code>MergeClause</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeAction(const char* value) { SetMergeAction(value); return *this;}


    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline const Aws::String& GetMergeWhenMatched() const{ return m_mergeWhenMatched; }

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline bool MergeWhenMatchedHasBeenSet() const { return m_mergeWhenMatchedHasBeenSet; }

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline void SetMergeWhenMatched(const Aws::String& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = value; }

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline void SetMergeWhenMatched(Aws::String&& value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched = std::move(value); }

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline void SetMergeWhenMatched(const char* value) { m_mergeWhenMatchedHasBeenSet = true; m_mergeWhenMatched.assign(value); }

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeWhenMatched(const Aws::String& value) { SetMergeWhenMatched(value); return *this;}

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeWhenMatched(Aws::String&& value) { SetMergeWhenMatched(std::move(value)); return *this;}

    /**
     * <p>Specifies how to resolve records that match preexisting data when merging.
     * Valid values: <code> update</code>, <code>delete</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeWhenMatched(const char* value) { SetMergeWhenMatched(value); return *this;}


    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline const Aws::String& GetMergeWhenNotMatched() const{ return m_mergeWhenNotMatched; }

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline bool MergeWhenNotMatchedHasBeenSet() const { return m_mergeWhenNotMatchedHasBeenSet; }

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline void SetMergeWhenNotMatched(const Aws::String& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = value; }

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline void SetMergeWhenNotMatched(Aws::String&& value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched = std::move(value); }

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline void SetMergeWhenNotMatched(const char* value) { m_mergeWhenNotMatchedHasBeenSet = true; m_mergeWhenNotMatched.assign(value); }

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeWhenNotMatched(const Aws::String& value) { SetMergeWhenNotMatched(value); return *this;}

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeWhenNotMatched(Aws::String&& value) { SetMergeWhenNotMatched(std::move(value)); return *this;}

    /**
     * <p>Specifies how to process records that do not match preexisting data when
     * merging. Valid values: <code>insert</code>, <code>none</code>.</p>
     */
    inline SnowflakeNodeData& WithMergeWhenNotMatched(const char* value) { SetMergeWhenNotMatched(value); return *this;}


    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline const Aws::String& GetMergeClause() const{ return m_mergeClause; }

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline bool MergeClauseHasBeenSet() const { return m_mergeClauseHasBeenSet; }

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline void SetMergeClause(const Aws::String& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = value; }

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline void SetMergeClause(Aws::String&& value) { m_mergeClauseHasBeenSet = true; m_mergeClause = std::move(value); }

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline void SetMergeClause(const char* value) { m_mergeClauseHasBeenSet = true; m_mergeClause.assign(value); }

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline SnowflakeNodeData& WithMergeClause(const Aws::String& value) { SetMergeClause(value); return *this;}

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline SnowflakeNodeData& WithMergeClause(Aws::String&& value) { SetMergeClause(std::move(value)); return *this;}

    /**
     * <p>A SQL statement that specifies a custom merge behavior.</p>
     */
    inline SnowflakeNodeData& WithMergeClause(const char* value) { SetMergeClause(value); return *this;}


    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline const Aws::String& GetStagingTable() const{ return m_stagingTable; }

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline bool StagingTableHasBeenSet() const { return m_stagingTableHasBeenSet; }

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline void SetStagingTable(const Aws::String& value) { m_stagingTableHasBeenSet = true; m_stagingTable = value; }

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline void SetStagingTable(Aws::String&& value) { m_stagingTableHasBeenSet = true; m_stagingTable = std::move(value); }

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline void SetStagingTable(const char* value) { m_stagingTableHasBeenSet = true; m_stagingTable.assign(value); }

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline SnowflakeNodeData& WithStagingTable(const Aws::String& value) { SetStagingTable(value); return *this;}

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline SnowflakeNodeData& WithStagingTable(Aws::String&& value) { SetStagingTable(std::move(value)); return *this;}

    /**
     * <p>The name of a staging table used when performing <code>merge</code> or upsert
     * <code>append</code> actions. Data is written to this table, then moved to
     * <code>table</code> by a generated postaction.</p>
     */
    inline SnowflakeNodeData& WithStagingTable(const char* value) { SetStagingTable(value); return *this;}


    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline const Aws::Vector<Option>& GetSelectedColumns() const{ return m_selectedColumns; }

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline bool SelectedColumnsHasBeenSet() const { return m_selectedColumnsHasBeenSet; }

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline void SetSelectedColumns(const Aws::Vector<Option>& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = value; }

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline void SetSelectedColumns(Aws::Vector<Option>&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns = std::move(value); }

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline SnowflakeNodeData& WithSelectedColumns(const Aws::Vector<Option>& value) { SetSelectedColumns(value); return *this;}

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline SnowflakeNodeData& WithSelectedColumns(Aws::Vector<Option>&& value) { SetSelectedColumns(std::move(value)); return *this;}

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline SnowflakeNodeData& AddSelectedColumns(const Option& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(value); return *this; }

    /**
     * <p>Specifies the columns combined to identify a record when detecting matches
     * for merges and upserts. A list of structures with <code>value</code>,
     * <code>label</code> and <code> description</code> keys. Each structure describes
     * a column.</p>
     */
    inline SnowflakeNodeData& AddSelectedColumns(Option&& value) { m_selectedColumnsHasBeenSet = true; m_selectedColumns.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether automatic query pushdown is enabled. If pushdown is
     * enabled, then when a query is run on Spark, if part of the query can be "pushed
     * down" to the Snowflake server, it is pushed down. This improves performance of
     * some queries.</p>
     */
    inline bool GetAutoPushdown() const{ return m_autoPushdown; }

    /**
     * <p>Specifies whether automatic query pushdown is enabled. If pushdown is
     * enabled, then when a query is run on Spark, if part of the query can be "pushed
     * down" to the Snowflake server, it is pushed down. This improves performance of
     * some queries.</p>
     */
    inline bool AutoPushdownHasBeenSet() const { return m_autoPushdownHasBeenSet; }

    /**
     * <p>Specifies whether automatic query pushdown is enabled. If pushdown is
     * enabled, then when a query is run on Spark, if part of the query can be "pushed
     * down" to the Snowflake server, it is pushed down. This improves performance of
     * some queries.</p>
     */
    inline void SetAutoPushdown(bool value) { m_autoPushdownHasBeenSet = true; m_autoPushdown = value; }

    /**
     * <p>Specifies whether automatic query pushdown is enabled. If pushdown is
     * enabled, then when a query is run on Spark, if part of the query can be "pushed
     * down" to the Snowflake server, it is pushed down. This improves performance of
     * some queries.</p>
     */
    inline SnowflakeNodeData& WithAutoPushdown(bool value) { SetAutoPushdown(value); return *this;}


    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline const Aws::Vector<Option>& GetTableSchema() const{ return m_tableSchema; }

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline void SetTableSchema(const Aws::Vector<Option>& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = value; }

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline void SetTableSchema(Aws::Vector<Option>&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::move(value); }

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline SnowflakeNodeData& WithTableSchema(const Aws::Vector<Option>& value) { SetTableSchema(value); return *this;}

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline SnowflakeNodeData& WithTableSchema(Aws::Vector<Option>&& value) { SetTableSchema(std::move(value)); return *this;}

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline SnowflakeNodeData& AddTableSchema(const Option& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.push_back(value); return *this; }

    /**
     * <p>Manually defines the target schema for the node. A list of structures with
     * <code>value</code> , <code>label</code> and <code>description</code> keys. Each
     * structure defines a column.</p>
     */
    inline SnowflakeNodeData& AddTableSchema(Option&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema.push_back(std::move(value)); return *this; }

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

    Aws::String m_stagingTable;
    bool m_stagingTableHasBeenSet = false;

    Aws::Vector<Option> m_selectedColumns;
    bool m_selectedColumnsHasBeenSet = false;

    bool m_autoPushdown;
    bool m_autoPushdownHasBeenSet = false;

    Aws::Vector<Option> m_tableSchema;
    bool m_tableSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
