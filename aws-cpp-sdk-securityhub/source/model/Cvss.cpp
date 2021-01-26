/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Cvss.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Cvss::Cvss() : 
    m_versionHasBeenSet(false),
    m_baseScore(0.0),
    m_baseScoreHasBeenSet(false),
    m_baseVectorHasBeenSet(false)
{
}

Cvss::Cvss(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_baseScore(0.0),
    m_baseScoreHasBeenSet(false),
    m_baseVectorHasBeenSet(false)
{
  *this = jsonValue;
}

Cvss& Cvss::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseScore"))
  {
    m_baseScore = jsonValue.GetDouble("BaseScore");

    m_baseScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseVector"))
  {
    m_baseVector = jsonValue.GetString("BaseVector");

    m_baseVectorHasBeenSet = true;
  }

  return *this;
}

JsonValue Cvss::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_baseScoreHasBeenSet)
  {
   payload.WithDouble("BaseScore", m_baseScore);

  }

  if(m_baseVectorHasBeenSet)
  {
   payload.WithString("BaseVector", m_baseVector);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
