/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails.h>
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

AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails::AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails() : 
    m_max(0),
    m_maxHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails::AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails(JsonView jsonValue) : 
    m_max(0),
    m_maxHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInteger("Max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetInteger("Min");

    m_minHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithInteger("Max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithInteger("Min", m_min);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
