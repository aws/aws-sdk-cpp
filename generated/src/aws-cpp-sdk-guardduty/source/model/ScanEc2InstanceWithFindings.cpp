/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanEc2InstanceWithFindings.h>
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

ScanEc2InstanceWithFindings::ScanEc2InstanceWithFindings() : 
    m_ebsVolumes(false),
    m_ebsVolumesHasBeenSet(false)
{
}

ScanEc2InstanceWithFindings::ScanEc2InstanceWithFindings(JsonView jsonValue) : 
    m_ebsVolumes(false),
    m_ebsVolumesHasBeenSet(false)
{
  *this = jsonValue;
}

ScanEc2InstanceWithFindings& ScanEc2InstanceWithFindings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ebsVolumes"))
  {
    m_ebsVolumes = jsonValue.GetBool("ebsVolumes");

    m_ebsVolumesHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanEc2InstanceWithFindings::Jsonize() const
{
  JsonValue payload;

  if(m_ebsVolumesHasBeenSet)
  {
   payload.WithBool("ebsVolumes", m_ebsVolumes);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
