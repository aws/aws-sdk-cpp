/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DiscoveryJobListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

DiscoveryJobListEntry::DiscoveryJobListEntry() : 
    m_discoveryJobArnHasBeenSet(false),
    m_status(DiscoveryJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DiscoveryJobListEntry::DiscoveryJobListEntry(JsonView jsonValue) : 
    m_discoveryJobArnHasBeenSet(false),
    m_status(DiscoveryJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DiscoveryJobListEntry& DiscoveryJobListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DiscoveryJobArn"))
  {
    m_discoveryJobArn = jsonValue.GetString("DiscoveryJobArn");

    m_discoveryJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DiscoveryJobStatusMapper::GetDiscoveryJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DiscoveryJobListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_discoveryJobArnHasBeenSet)
  {
   payload.WithString("DiscoveryJobArn", m_discoveryJobArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DiscoveryJobStatusMapper::GetNameForDiscoveryJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
