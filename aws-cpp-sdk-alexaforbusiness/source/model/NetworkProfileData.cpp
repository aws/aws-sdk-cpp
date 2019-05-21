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

#include <aws/alexaforbusiness/model/NetworkProfileData.h>
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

NetworkProfileData::NetworkProfileData() : 
    m_networkProfileArnHasBeenSet(false),
    m_networkProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ssidHasBeenSet(false),
    m_securityType(NetworkSecurityType::NOT_SET),
    m_securityTypeHasBeenSet(false),
    m_eapMethod(NetworkEapMethod::NOT_SET),
    m_eapMethodHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false)
{
}

NetworkProfileData::NetworkProfileData(JsonView jsonValue) : 
    m_networkProfileArnHasBeenSet(false),
    m_networkProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ssidHasBeenSet(false),
    m_securityType(NetworkSecurityType::NOT_SET),
    m_securityTypeHasBeenSet(false),
    m_eapMethod(NetworkEapMethod::NOT_SET),
    m_eapMethodHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkProfileData& NetworkProfileData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkProfileArn"))
  {
    m_networkProfileArn = jsonValue.GetString("NetworkProfileArn");

    m_networkProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkProfileName"))
  {
    m_networkProfileName = jsonValue.GetString("NetworkProfileName");

    m_networkProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ssid"))
  {
    m_ssid = jsonValue.GetString("Ssid");

    m_ssidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityType"))
  {
    m_securityType = NetworkSecurityTypeMapper::GetNetworkSecurityTypeForName(jsonValue.GetString("SecurityType"));

    m_securityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EapMethod"))
  {
    m_eapMethod = NetworkEapMethodMapper::GetNetworkEapMethodForName(jsonValue.GetString("EapMethod"));

    m_eapMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");

    m_certificateAuthorityArnHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkProfileData::Jsonize() const
{
  JsonValue payload;

  if(m_networkProfileArnHasBeenSet)
  {
   payload.WithString("NetworkProfileArn", m_networkProfileArn);

  }

  if(m_networkProfileNameHasBeenSet)
  {
   payload.WithString("NetworkProfileName", m_networkProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ssidHasBeenSet)
  {
   payload.WithString("Ssid", m_ssid);

  }

  if(m_securityTypeHasBeenSet)
  {
   payload.WithString("SecurityType", NetworkSecurityTypeMapper::GetNameForNetworkSecurityType(m_securityType));
  }

  if(m_eapMethodHasBeenSet)
  {
   payload.WithString("EapMethod", NetworkEapMethodMapper::GetNameForNetworkEapMethod(m_eapMethod));
  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
