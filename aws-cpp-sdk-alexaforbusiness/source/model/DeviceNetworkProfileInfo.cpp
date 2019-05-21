/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/alexaforbusiness/model/DeviceNetworkProfileInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

DeviceNetworkProfileInfo::DeviceNetworkProfileInfo() : 
    m_networkProfileArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateExpirationTimeHasBeenSet(false)
{
}

DeviceNetworkProfileInfo::DeviceNetworkProfileInfo(JsonView jsonValue) : 
    m_networkProfileArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateExpirationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceNetworkProfileInfo& DeviceNetworkProfileInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkProfileArn"))
  {
    m_networkProfileArn = jsonValue.GetString("NetworkProfileArn");

    m_networkProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateExpirationTime"))
  {
    m_certificateExpirationTime = jsonValue.GetDouble("CertificateExpirationTime");

    m_certificateExpirationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceNetworkProfileInfo::Jsonize() const
{
  JsonValue payload;

  if(m_networkProfileArnHasBeenSet)
  {
   payload.WithString("NetworkProfileArn", m_networkProfileArn);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_certificateExpirationTimeHasBeenSet)
  {
   payload.WithDouble("CertificateExpirationTime", m_certificateExpirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
