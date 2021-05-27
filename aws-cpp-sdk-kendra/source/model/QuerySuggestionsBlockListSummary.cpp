/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QuerySuggestionsBlockListSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

QuerySuggestionsBlockListSummary::QuerySuggestionsBlockListSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(QuerySuggestionsBlockListStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
}

QuerySuggestionsBlockListSummary::QuerySuggestionsBlockListSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(QuerySuggestionsBlockListStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
  *this = jsonValue;
}

QuerySuggestionsBlockListSummary& QuerySuggestionsBlockListSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = QuerySuggestionsBlockListStatusMapper::GetQuerySuggestionsBlockListStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInteger("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  return *this;
}

JsonValue QuerySuggestionsBlockListSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", QuerySuggestionsBlockListStatusMapper::GetNameForQuerySuggestionsBlockListStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("ItemCount", m_itemCount);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
