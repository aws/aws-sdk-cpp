/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AwsEc2InstanceViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

AwsEc2InstanceViolation::AwsEc2InstanceViolation() : 
    m_violationTargetHasBeenSet(false),
    m_awsEc2NetworkInterfaceViolationsHasBeenSet(false)
{
}

AwsEc2InstanceViolation::AwsEc2InstanceViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_awsEc2NetworkInterfaceViolationsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2InstanceViolation& AwsEc2InstanceViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2NetworkInterfaceViolations"))
  {
    Aws::Utils::Array<JsonView> awsEc2NetworkInterfaceViolationsJsonList = jsonValue.GetArray("AwsEc2NetworkInterfaceViolations");
    for(unsigned awsEc2NetworkInterfaceViolationsIndex = 0; awsEc2NetworkInterfaceViolationsIndex < awsEc2NetworkInterfaceViolationsJsonList.GetLength(); ++awsEc2NetworkInterfaceViolationsIndex)
    {
      m_awsEc2NetworkInterfaceViolations.push_back(awsEc2NetworkInterfaceViolationsJsonList[awsEc2NetworkInterfaceViolationsIndex].AsObject());
    }
    m_awsEc2NetworkInterfaceViolationsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2InstanceViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_awsEc2NetworkInterfaceViolationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsEc2NetworkInterfaceViolationsJsonList(m_awsEc2NetworkInterfaceViolations.size());
   for(unsigned awsEc2NetworkInterfaceViolationsIndex = 0; awsEc2NetworkInterfaceViolationsIndex < awsEc2NetworkInterfaceViolationsJsonList.GetLength(); ++awsEc2NetworkInterfaceViolationsIndex)
   {
     awsEc2NetworkInterfaceViolationsJsonList[awsEc2NetworkInterfaceViolationsIndex].AsObject(m_awsEc2NetworkInterfaceViolations[awsEc2NetworkInterfaceViolationsIndex].Jsonize());
   }
   payload.WithArray("AwsEc2NetworkInterfaceViolations", std::move(awsEc2NetworkInterfaceViolationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
