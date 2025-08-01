/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Ec2Ungraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Ec2Ungraceful::Ec2Ungraceful(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2Ungraceful& Ec2Ungraceful::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minimumSuccessPercentage"))
  {
    m_minimumSuccessPercentage = jsonValue.GetInteger("minimumSuccessPercentage");
    m_minimumSuccessPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2Ungraceful::Jsonize() const
{
  JsonValue payload;

  if(m_minimumSuccessPercentageHasBeenSet)
  {
   payload.WithInteger("minimumSuccessPercentage", m_minimumSuccessPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
