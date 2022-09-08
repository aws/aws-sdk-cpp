/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UserPausedDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

UserPausedDetails::UserPausedDetails() : 
    m_jobExpiresAtHasBeenSet(false),
    m_jobImminentExpirationHealthEventArnHasBeenSet(false),
    m_jobPausedAtHasBeenSet(false)
{
}

UserPausedDetails::UserPausedDetails(JsonView jsonValue) : 
    m_jobExpiresAtHasBeenSet(false),
    m_jobImminentExpirationHealthEventArnHasBeenSet(false),
    m_jobPausedAtHasBeenSet(false)
{
  *this = jsonValue;
}

UserPausedDetails& UserPausedDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobExpiresAt"))
  {
    m_jobExpiresAt = jsonValue.GetString("jobExpiresAt");

    m_jobExpiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobImminentExpirationHealthEventArn"))
  {
    m_jobImminentExpirationHealthEventArn = jsonValue.GetString("jobImminentExpirationHealthEventArn");

    m_jobImminentExpirationHealthEventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobPausedAt"))
  {
    m_jobPausedAt = jsonValue.GetString("jobPausedAt");

    m_jobPausedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPausedDetails::Jsonize() const
{
  JsonValue payload;

  if(m_jobExpiresAtHasBeenSet)
  {
   payload.WithString("jobExpiresAt", m_jobExpiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_jobImminentExpirationHealthEventArnHasBeenSet)
  {
   payload.WithString("jobImminentExpirationHealthEventArn", m_jobImminentExpirationHealthEventArn);

  }

  if(m_jobPausedAtHasBeenSet)
  {
   payload.WithString("jobPausedAt", m_jobPausedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
