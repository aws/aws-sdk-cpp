/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PublicKey.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

PublicKey::PublicKey() : 
    m_valueHasBeenSet(false),
    m_validityStartTimeHasBeenSet(false),
    m_validityEndTimeHasBeenSet(false),
    m_fingerprintHasBeenSet(false)
{
}

PublicKey::PublicKey(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_validityStartTimeHasBeenSet(false),
    m_validityEndTimeHasBeenSet(false),
    m_fingerprintHasBeenSet(false)
{
  *this = jsonValue;
}

PublicKey& PublicKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = HashingUtils::Base64Decode(jsonValue.GetString("Value"));
    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidityStartTime"))
  {
    m_validityStartTime = jsonValue.GetDouble("ValidityStartTime");

    m_validityStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidityEndTime"))
  {
    m_validityEndTime = jsonValue.GetDouble("ValidityEndTime");

    m_validityEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fingerprint"))
  {
    m_fingerprint = jsonValue.GetString("Fingerprint");

    m_fingerprintHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicKey::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", HashingUtils::Base64Encode(m_value));
  }

  if(m_validityStartTimeHasBeenSet)
  {
   payload.WithDouble("ValidityStartTime", m_validityStartTime.SecondsWithMSPrecision());
  }

  if(m_validityEndTimeHasBeenSet)
  {
   payload.WithDouble("ValidityEndTime", m_validityEndTime.SecondsWithMSPrecision());
  }

  if(m_fingerprintHasBeenSet)
  {
   payload.WithString("Fingerprint", m_fingerprint);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
