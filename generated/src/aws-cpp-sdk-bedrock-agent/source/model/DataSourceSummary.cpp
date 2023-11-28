/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DataSourceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

DataSourceSummary::DataSourceSummary() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DataSourceSummary::DataSourceSummary(JsonView jsonValue) : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSummary& DataSourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceStatusMapper::GetDataSourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataSourceStatusMapper::GetNameForDataSourceStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
