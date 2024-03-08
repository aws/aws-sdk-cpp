/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetRevision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetRevision::AssetRevision() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

AssetRevision::AssetRevision(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

AssetRevision& AssetRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetRevision::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
