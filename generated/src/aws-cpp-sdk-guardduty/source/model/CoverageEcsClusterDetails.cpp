/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageEcsClusterDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

CoverageEcsClusterDetails::CoverageEcsClusterDetails() : 
    m_clusterNameHasBeenSet(false),
    m_fargateDetailsHasBeenSet(false),
    m_containerInstanceDetailsHasBeenSet(false)
{
}

CoverageEcsClusterDetails::CoverageEcsClusterDetails(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_fargateDetailsHasBeenSet(false),
    m_containerInstanceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageEcsClusterDetails& CoverageEcsClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fargateDetails"))
  {
    m_fargateDetails = jsonValue.GetObject("fargateDetails");

    m_fargateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerInstanceDetails"))
  {
    m_containerInstanceDetails = jsonValue.GetObject("containerInstanceDetails");

    m_containerInstanceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageEcsClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_fargateDetailsHasBeenSet)
  {
   payload.WithObject("fargateDetails", m_fargateDetails.Jsonize());

  }

  if(m_containerInstanceDetailsHasBeenSet)
  {
   payload.WithObject("containerInstanceDetails", m_containerInstanceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
