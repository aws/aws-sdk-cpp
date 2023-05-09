/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AmazonRedshiftNodeData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

AmazonRedshiftNodeData::AmazonRedshiftNodeData() : 
    m_accessTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_connectionHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_catalogDatabaseHasBeenSet(false),
    m_catalogTableHasBeenSet(false),
    m_catalogRedshiftSchemaHasBeenSet(false),
    m_catalogRedshiftTableHasBeenSet(false),
    m_tempDirHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_sampleQueryHasBeenSet(false),
    m_preActionHasBeenSet(false),
    m_postActionHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_tablePrefixHasBeenSet(false),
    m_upsert(false),
    m_upsertHasBeenSet(false),
    m_mergeActionHasBeenSet(false),
    m_mergeWhenMatchedHasBeenSet(false),
    m_mergeWhenNotMatchedHasBeenSet(false),
    m_mergeClauseHasBeenSet(false),
    m_crawlerConnectionHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_stagingTableHasBeenSet(false),
    m_selectedColumnsHasBeenSet(false)
{
}

AmazonRedshiftNodeData::AmazonRedshiftNodeData(JsonView jsonValue) : 
    m_accessTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_connectionHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_catalogDatabaseHasBeenSet(false),
    m_catalogTableHasBeenSet(false),
    m_catalogRedshiftSchemaHasBeenSet(false),
    m_catalogRedshiftTableHasBeenSet(false),
    m_tempDirHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_sampleQueryHasBeenSet(false),
    m_preActionHasBeenSet(false),
    m_postActionHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_tablePrefixHasBeenSet(false),
    m_upsert(false),
    m_upsertHasBeenSet(false),
    m_mergeActionHasBeenSet(false),
    m_mergeWhenMatchedHasBeenSet(false),
    m_mergeWhenNotMatchedHasBeenSet(false),
    m_mergeClauseHasBeenSet(false),
    m_crawlerConnectionHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_stagingTableHasBeenSet(false),
    m_selectedColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonRedshiftNodeData& AmazonRedshiftNodeData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessType"))
  {
    m_accessType = jsonValue.GetString("AccessType");

    m_accessTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Connection"))
  {
    m_connection = jsonValue.GetObject("Connection");

    m_connectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogDatabase"))
  {
    m_catalogDatabase = jsonValue.GetObject("CatalogDatabase");

    m_catalogDatabaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogTable"))
  {
    m_catalogTable = jsonValue.GetObject("CatalogTable");

    m_catalogTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogRedshiftSchema"))
  {
    m_catalogRedshiftSchema = jsonValue.GetString("CatalogRedshiftSchema");

    m_catalogRedshiftSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogRedshiftTable"))
  {
    m_catalogRedshiftTable = jsonValue.GetString("CatalogRedshiftTable");

    m_catalogRedshiftTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TempDir"))
  {
    m_tempDir = jsonValue.GetString("TempDir");

    m_tempDirHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRole"))
  {
    m_iamRole = jsonValue.GetObject("IamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedOptions"))
  {
    Aws::Utils::Array<JsonView> advancedOptionsJsonList = jsonValue.GetArray("AdvancedOptions");
    for(unsigned advancedOptionsIndex = 0; advancedOptionsIndex < advancedOptionsJsonList.GetLength(); ++advancedOptionsIndex)
    {
      m_advancedOptions.push_back(advancedOptionsJsonList[advancedOptionsIndex].AsObject());
    }
    m_advancedOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleQuery"))
  {
    m_sampleQuery = jsonValue.GetString("SampleQuery");

    m_sampleQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreAction"))
  {
    m_preAction = jsonValue.GetString("PreAction");

    m_preActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostAction"))
  {
    m_postAction = jsonValue.GetString("PostAction");

    m_postActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablePrefix"))
  {
    m_tablePrefix = jsonValue.GetString("TablePrefix");

    m_tablePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Upsert"))
  {
    m_upsert = jsonValue.GetBool("Upsert");

    m_upsertHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MergeAction"))
  {
    m_mergeAction = jsonValue.GetString("MergeAction");

    m_mergeActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MergeWhenMatched"))
  {
    m_mergeWhenMatched = jsonValue.GetString("MergeWhenMatched");

    m_mergeWhenMatchedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MergeWhenNotMatched"))
  {
    m_mergeWhenNotMatched = jsonValue.GetString("MergeWhenNotMatched");

    m_mergeWhenNotMatchedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MergeClause"))
  {
    m_mergeClause = jsonValue.GetString("MergeClause");

    m_mergeClauseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlerConnection"))
  {
    m_crawlerConnection = jsonValue.GetString("CrawlerConnection");

    m_crawlerConnectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableSchema"))
  {
    Aws::Utils::Array<JsonView> tableSchemaJsonList = jsonValue.GetArray("TableSchema");
    for(unsigned tableSchemaIndex = 0; tableSchemaIndex < tableSchemaJsonList.GetLength(); ++tableSchemaIndex)
    {
      m_tableSchema.push_back(tableSchemaJsonList[tableSchemaIndex].AsObject());
    }
    m_tableSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StagingTable"))
  {
    m_stagingTable = jsonValue.GetString("StagingTable");

    m_stagingTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedColumns"))
  {
    Aws::Utils::Array<JsonView> selectedColumnsJsonList = jsonValue.GetArray("SelectedColumns");
    for(unsigned selectedColumnsIndex = 0; selectedColumnsIndex < selectedColumnsJsonList.GetLength(); ++selectedColumnsIndex)
    {
      m_selectedColumns.push_back(selectedColumnsJsonList[selectedColumnsIndex].AsObject());
    }
    m_selectedColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue AmazonRedshiftNodeData::Jsonize() const
{
  JsonValue payload;

  if(m_accessTypeHasBeenSet)
  {
   payload.WithString("AccessType", m_accessType);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_connectionHasBeenSet)
  {
   payload.WithObject("Connection", m_connection.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("Schema", m_schema.Jsonize());

  }

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  if(m_catalogDatabaseHasBeenSet)
  {
   payload.WithObject("CatalogDatabase", m_catalogDatabase.Jsonize());

  }

  if(m_catalogTableHasBeenSet)
  {
   payload.WithObject("CatalogTable", m_catalogTable.Jsonize());

  }

  if(m_catalogRedshiftSchemaHasBeenSet)
  {
   payload.WithString("CatalogRedshiftSchema", m_catalogRedshiftSchema);

  }

  if(m_catalogRedshiftTableHasBeenSet)
  {
   payload.WithString("CatalogRedshiftTable", m_catalogRedshiftTable);

  }

  if(m_tempDirHasBeenSet)
  {
   payload.WithString("TempDir", m_tempDir);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithObject("IamRole", m_iamRole.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> advancedOptionsJsonList(m_advancedOptions.size());
   for(unsigned advancedOptionsIndex = 0; advancedOptionsIndex < advancedOptionsJsonList.GetLength(); ++advancedOptionsIndex)
   {
     advancedOptionsJsonList[advancedOptionsIndex].AsObject(m_advancedOptions[advancedOptionsIndex].Jsonize());
   }
   payload.WithArray("AdvancedOptions", std::move(advancedOptionsJsonList));

  }

  if(m_sampleQueryHasBeenSet)
  {
   payload.WithString("SampleQuery", m_sampleQuery);

  }

  if(m_preActionHasBeenSet)
  {
   payload.WithString("PreAction", m_preAction);

  }

  if(m_postActionHasBeenSet)
  {
   payload.WithString("PostAction", m_postAction);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_tablePrefixHasBeenSet)
  {
   payload.WithString("TablePrefix", m_tablePrefix);

  }

  if(m_upsertHasBeenSet)
  {
   payload.WithBool("Upsert", m_upsert);

  }

  if(m_mergeActionHasBeenSet)
  {
   payload.WithString("MergeAction", m_mergeAction);

  }

  if(m_mergeWhenMatchedHasBeenSet)
  {
   payload.WithString("MergeWhenMatched", m_mergeWhenMatched);

  }

  if(m_mergeWhenNotMatchedHasBeenSet)
  {
   payload.WithString("MergeWhenNotMatched", m_mergeWhenNotMatched);

  }

  if(m_mergeClauseHasBeenSet)
  {
   payload.WithString("MergeClause", m_mergeClause);

  }

  if(m_crawlerConnectionHasBeenSet)
  {
   payload.WithString("CrawlerConnection", m_crawlerConnection);

  }

  if(m_tableSchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tableSchemaJsonList(m_tableSchema.size());
   for(unsigned tableSchemaIndex = 0; tableSchemaIndex < tableSchemaJsonList.GetLength(); ++tableSchemaIndex)
   {
     tableSchemaJsonList[tableSchemaIndex].AsObject(m_tableSchema[tableSchemaIndex].Jsonize());
   }
   payload.WithArray("TableSchema", std::move(tableSchemaJsonList));

  }

  if(m_stagingTableHasBeenSet)
  {
   payload.WithString("StagingTable", m_stagingTable);

  }

  if(m_selectedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedColumnsJsonList(m_selectedColumns.size());
   for(unsigned selectedColumnsIndex = 0; selectedColumnsIndex < selectedColumnsJsonList.GetLength(); ++selectedColumnsIndex)
   {
     selectedColumnsJsonList[selectedColumnsIndex].AsObject(m_selectedColumns[selectedColumnsIndex].Jsonize());
   }
   payload.WithArray("SelectedColumns", std::move(selectedColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
