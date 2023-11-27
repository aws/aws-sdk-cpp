/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/ProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

ProfileSummary::ProfileSummary() : 
    m_profileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_logging(Logging::NOT_SET),
    m_loggingHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

ProfileSummary::ProfileSummary(JsonView jsonValue) : 
    m_profileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_logging(Logging::NOT_SET),
    m_loggingHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileSummary& ProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");

    m_profileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("businessName"))
  {
    m_businessName = jsonValue.GetString("businessName");

    m_businessNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logging"))
  {
    m_logging = LoggingMapper::GetLoggingForName(jsonValue.GetString("logging"));

    m_loggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_businessNameHasBeenSet)
  {
   payload.WithString("businessName", m_businessName);

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithString("logging", LoggingMapper::GetNameForLogging(m_logging));
  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
