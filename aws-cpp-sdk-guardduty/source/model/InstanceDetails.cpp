/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/InstanceDetails.h>
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

InstanceDetails::InstanceDetails() : 
    m_availabilityZoneHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

InstanceDetails::InstanceDetails(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceDetails& InstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamInstanceProfile"))
  {
    m_iamInstanceProfile = jsonValue.GetObject("iamInstanceProfile");

    m_iamInstanceProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDescription"))
  {
    m_imageDescription = jsonValue.GetString("imageDescription");

    m_imageDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetString("imageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceState"))
  {
    m_instanceState = jsonValue.GetString("instanceState");

    m_instanceStateHasBeenSet = true;
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

  if(jsonValue.ValueExists("launchTime"))
  {
    m_launchTime = jsonValue.GetString("launchTime");

    m_launchTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_iamInstanceProfileHasBeenSet)
  {
   payload.WithObject("iamInstanceProfile", m_iamInstanceProfile.Jsonize());

  }

  if(m_imageDescriptionHasBeenSet)
  {
   payload.WithString("imageDescription", m_imageDescription);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("imageId", m_imageId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_instanceStateHasBeenSet)
  {
   payload.WithString("instanceState", m_instanceState);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("outpostArn", m_outpostArn);

  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithString("launchTime", m_launchTime);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
