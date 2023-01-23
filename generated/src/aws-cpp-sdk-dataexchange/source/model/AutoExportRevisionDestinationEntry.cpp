/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AutoExportRevisionDestinationEntry.h>
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

AutoExportRevisionDestinationEntry::AutoExportRevisionDestinationEntry() : 
    m_bucketHasBeenSet(false),
    m_keyPatternHasBeenSet(false)
{
}

AutoExportRevisionDestinationEntry::AutoExportRevisionDestinationEntry(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPatternHasBeenSet(false)
{
  *this = jsonValue;
}

AutoExportRevisionDestinationEntry& AutoExportRevisionDestinationEntry::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AutoExportRevisionDestinationEntry::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
