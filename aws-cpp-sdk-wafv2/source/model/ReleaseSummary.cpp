/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ReleaseSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ReleaseSummary::ReleaseSummary() : 
    m_releaseVersionHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

ReleaseSummary::ReleaseSummary(JsonView jsonValue) : 
    m_releaseVersionHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

ReleaseSummary& ReleaseSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReleaseVersion"))
  {
    m_releaseVersion = jsonValue.GetString("ReleaseVersion");

    m_releaseVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ReleaseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_releaseVersionHasBeenSet)
  {
   payload.WithString("ReleaseVersion", m_releaseVersion);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
