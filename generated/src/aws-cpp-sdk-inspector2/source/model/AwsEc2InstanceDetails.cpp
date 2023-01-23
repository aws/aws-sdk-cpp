/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEc2InstanceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AwsEc2InstanceDetails::AwsEc2InstanceDetails() : 
    m_iamInstanceProfileArnHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_ipV4AddressesHasBeenSet(false),
    m_ipV6AddressesHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

AwsEc2InstanceDetails::AwsEc2InstanceDetails(JsonView jsonValue) : 
    m_iamInstanceProfileArnHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_ipV4AddressesHasBeenSet(false),
    m_ipV6AddressesHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2InstanceDetails& AwsEc2InstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iamInstanceProfileArn"))
  {
    m_iamInstanceProfileArn = jsonValue.GetString("iamInstanceProfileArn");

    m_iamInstanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetString("imageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipV4Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV4AddressesJsonList = jsonValue.GetArray("ipV4Addresses");
    for(unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex)
    {
      m_ipV4Addresses.push_back(ipV4AddressesJsonList[ipV4AddressesIndex].AsString());
    }
    m_ipV4AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipV6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV6AddressesJsonList = jsonValue.GetArray("ipV6Addresses");
    for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
    {
      m_ipV6Addresses.push_back(ipV6AddressesJsonList[ipV6AddressesIndex].AsString());
    }
    m_ipV6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyName"))
  {
    m_keyName = jsonValue.GetString("keyName");

    m_keyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchedAt"))
  {
    m_launchedAt = jsonValue.GetDouble("launchedAt");

    m_launchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2InstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_iamInstanceProfileArnHasBeenSet)
  {
   payload.WithString("iamInstanceProfileArn", m_iamInstanceProfileArn);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("imageId", m_imageId);

  }

  if(m_ipV4AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV4AddressesJsonList(m_ipV4Addresses.size());
   for(unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex)
   {
     ipV4AddressesJsonList[ipV4AddressesIndex].AsString(m_ipV4Addresses[ipV4AddressesIndex]);
   }
   payload.WithArray("ipV4Addresses", std::move(ipV4AddressesJsonList));

  }

  if(m_ipV6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV6AddressesJsonList(m_ipV6Addresses.size());
   for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
   {
     ipV6AddressesJsonList[ipV6AddressesIndex].AsString(m_ipV6Addresses[ipV6AddressesIndex]);
   }
   payload.WithArray("ipV6Addresses", std::move(ipV6AddressesJsonList));

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("keyName", m_keyName);

  }

  if(m_launchedAtHasBeenSet)
  {
   payload.WithDouble("launchedAt", m_launchedAt.SecondsWithMSPrecision());
  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
