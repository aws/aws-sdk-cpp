/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationScanEc2InstanceWithFindings.h>
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

OrganizationScanEc2InstanceWithFindings::OrganizationScanEc2InstanceWithFindings() : 
    m_ebsVolumesHasBeenSet(false)
{
}

OrganizationScanEc2InstanceWithFindings::OrganizationScanEc2InstanceWithFindings(JsonView jsonValue) : 
    m_ebsVolumesHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationScanEc2InstanceWithFindings& OrganizationScanEc2InstanceWithFindings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ebsVolumes"))
  {
    m_ebsVolumes = jsonValue.GetObject("ebsVolumes");

    m_ebsVolumesHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationScanEc2InstanceWithFindings::Jsonize() const
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
