/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/IndexConfigurationSummary.h>
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

IndexConfigurationSummary::IndexConfigurationSummary() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_edition(IndexEdition::NOT_SET),
    m_editionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_status(IndexStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

IndexConfigurationSummary::IndexConfigurationSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_edition(IndexEdition::NOT_SET),
    m_editionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_status(IndexStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

IndexConfigurationSummary& IndexConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = IndexEditionMapper::GetIndexEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", IndexEditionMapper::GetNameForIndexEdition(m_edition));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IndexStatusMapper::GetNameForIndexStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
