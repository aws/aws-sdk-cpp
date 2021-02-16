/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RevisionDestinationEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

RevisionDestinationEntry::RevisionDestinationEntry() : 
    m_bucketHasBeenSet(false),
    m_keyPatternHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

RevisionDestinationEntry::RevisionDestinationEntry(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPatternHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionDestinationEntry& RevisionDestinationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPattern"))
  {
    m_keyPattern = jsonValue.GetString("KeyPattern");

    m_keyPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RevisionDestinationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyPatternHasBeenSet)
  {
   payload.WithString("KeyPattern", m_keyPattern);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
