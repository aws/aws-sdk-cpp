/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveRetention.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ArchiveRetention::ArchiveRetention(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchiveRetention& ArchiveRetention::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = RetentionPeriodMapper::GetRetentionPeriodForName(jsonValue.GetString("RetentionPeriod"));
    m_retentionPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveRetention::Jsonize() const
{
  JsonValue payload;

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithString("RetentionPeriod", RetentionPeriodMapper::GetNameForRetentionPeriod(m_retentionPeriod));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
