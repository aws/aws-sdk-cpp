/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Ec2Instance.h>
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

Ec2Instance::Ec2Instance(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2Instance& Ec2Instance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageDescription"))
  {
    m_imageDescription = jsonValue.GetString("imageDescription");
    m_imageDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceState"))
  {
    m_instanceState = jsonValue.GetString("instanceState");
    m_instanceStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamInstanceProfile"))
  {
    m_iamInstanceProfile = jsonValue.GetObject("IamInstanceProfile");
    m_iamInstanceProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outpostArn"))
  {
    m_outpostArn = jsonValue.GetString("outpostArn");
    m_outpostArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");
    m_platformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productCodes"))
  {
    Aws::Utils::Array<JsonView> productCodesJsonList = jsonValue.GetArray("productCodes");
    for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
    {
      m_productCodes.push_back(productCodesJsonList[productCodesIndex].AsObject());
    }
    m_productCodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2NetworkInterfaceUids"))
  {
    Aws::Utils::Array<JsonView> ec2NetworkInterfaceUidsJsonList = jsonValue.GetArray("ec2NetworkInterfaceUids");
    for(unsigned ec2NetworkInterfaceUidsIndex = 0; ec2NetworkInterfaceUidsIndex < ec2NetworkInterfaceUidsJsonList.GetLength(); ++ec2NetworkInterfaceUidsIndex)
    {
      m_ec2NetworkInterfaceUids.push_back(ec2NetworkInterfaceUidsJsonList[ec2NetworkInterfaceUidsIndex].AsString());
    }
    m_ec2NetworkInterfaceUidsHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2Instance::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_imageDescriptionHasBeenSet)
  {
   payload.WithString("imageDescription", m_imageDescription);

  }

  if(m_instanceStateHasBeenSet)
  {
   payload.WithString("instanceState", m_instanceState);

  }

  if(m_iamInstanceProfileHasBeenSet)
  {
   payload.WithObject("IamInstanceProfile", m_iamInstanceProfile.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("outpostArn", m_outpostArn);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_productCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productCodesJsonList(m_productCodes.size());
   for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
   {
     productCodesJsonList[productCodesIndex].AsObject(m_productCodes[productCodesIndex].Jsonize());
   }
   payload.WithArray("productCodes", std::move(productCodesJsonList));

  }

  if(m_ec2NetworkInterfaceUidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2NetworkInterfaceUidsJsonList(m_ec2NetworkInterfaceUids.size());
   for(unsigned ec2NetworkInterfaceUidsIndex = 0; ec2NetworkInterfaceUidsIndex < ec2NetworkInterfaceUidsJsonList.GetLength(); ++ec2NetworkInterfaceUidsIndex)
   {
     ec2NetworkInterfaceUidsJsonList[ec2NetworkInterfaceUidsIndex].AsString(m_ec2NetworkInterfaceUids[ec2NetworkInterfaceUidsIndex]);
   }
   payload.WithArray("ec2NetworkInterfaceUids", std::move(ec2NetworkInterfaceUidsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
