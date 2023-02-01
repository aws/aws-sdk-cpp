/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScoreDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ScoreDetails::ScoreDetails() : 
    m_cvssHasBeenSet(false)
{
}

ScoreDetails::ScoreDetails(JsonView jsonValue) : 
    m_cvssHasBeenSet(false)
{
  *this = jsonValue;
}

ScoreDetails& ScoreDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cvss"))
  {
    m_cvss = jsonValue.GetObject("cvss");

    m_cvssHasBeenSet = true;
  }

  return *this;
}

JsonValue ScoreDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cvssHasBeenSet)
  {
   payload.WithObject("cvss", m_cvss.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
