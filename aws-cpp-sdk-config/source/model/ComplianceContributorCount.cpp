/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ComplianceContributorCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ComplianceContributorCount::ComplianceContributorCount() : 
    m_cappedCount(0),
    m_cappedCountHasBeenSet(false),
    m_capExceeded(false),
    m_capExceededHasBeenSet(false)
{
}

ComplianceContributorCount::ComplianceContributorCount(JsonView jsonValue) : 
    m_cappedCount(0),
    m_cappedCountHasBeenSet(false),
    m_capExceeded(false),
    m_capExceededHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceContributorCount& ComplianceContributorCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CappedCount"))
  {
    m_cappedCount = jsonValue.GetInteger("CappedCount");

    m_cappedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapExceeded"))
  {
    m_capExceeded = jsonValue.GetBool("CapExceeded");

    m_capExceededHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceContributorCount::Jsonize() const
{
  JsonValue payload;

  if(m_cappedCountHasBeenSet)
  {
   payload.WithInteger("CappedCount", m_cappedCount);

  }

  if(m_capExceededHasBeenSet)
  {
   payload.WithBool("CapExceeded", m_capExceeded);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
