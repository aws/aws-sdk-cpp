/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListingRevision.h>
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

ListingRevision::ListingRevision() : 
    m_idHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

ListingRevision::ListingRevision(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

ListingRevision& ListingRevision::operator =(JsonView jsonValue)
{
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

JsonValue ListingRevision::Jsonize() const
{
  JsonValue payload;

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
