/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningJobRevocationRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningJobRevocationRecord::SigningJobRevocationRecord() : 
    m_reasonHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revokedByHasBeenSet(false)
{
}

SigningJobRevocationRecord::SigningJobRevocationRecord(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revokedByHasBeenSet(false)
{
  *this = jsonValue;
}

SigningJobRevocationRecord& SigningJobRevocationRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revokedAt"))
  {
    m_revokedAt = jsonValue.GetDouble("revokedAt");

    m_revokedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revokedBy"))
  {
    m_revokedBy = jsonValue.GetString("revokedBy");

    m_revokedByHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningJobRevocationRecord::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithDouble("revokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  if(m_revokedByHasBeenSet)
  {
   payload.WithString("revokedBy", m_revokedBy);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
