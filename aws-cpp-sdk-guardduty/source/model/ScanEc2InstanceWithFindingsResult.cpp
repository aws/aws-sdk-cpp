/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanEc2InstanceWithFindingsResult.h>
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

ScanEc2InstanceWithFindingsResult::ScanEc2InstanceWithFindingsResult() : 
    m_ebsVolumesHasBeenSet(false)
{
}

ScanEc2InstanceWithFindingsResult::ScanEc2InstanceWithFindingsResult(JsonView jsonValue) : 
    m_ebsVolumesHasBeenSet(false)
{
  *this = jsonValue;
}

ScanEc2InstanceWithFindingsResult& ScanEc2InstanceWithFindingsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ebsVolumes"))
  {
    m_ebsVolumes = jsonValue.GetObject("ebsVolumes");

    m_ebsVolumesHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanEc2InstanceWithFindingsResult::Jsonize() const
{
  JsonValue payload;

  if(m_ebsVolumesHasBeenSet)
  {
   payload.WithObject("ebsVolumes", m_ebsVolumes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
