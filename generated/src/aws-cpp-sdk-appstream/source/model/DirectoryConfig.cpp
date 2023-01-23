/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DirectoryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

DirectoryConfig::DirectoryConfig() : 
    m_directoryNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNamesHasBeenSet(false),
    m_serviceAccountCredentialsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_certificateBasedAuthPropertiesHasBeenSet(false)
{
}

DirectoryConfig::DirectoryConfig(JsonView jsonValue) : 
    m_directoryNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNamesHasBeenSet(false),
    m_serviceAccountCredentialsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_certificateBasedAuthPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryConfig& DirectoryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryName"))
  {
    m_directoryName = jsonValue.GetString("DirectoryName");

    m_directoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitDistinguishedNames"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitDistinguishedNamesJsonList = jsonValue.GetArray("OrganizationalUnitDistinguishedNames");
    for(unsigned organizationalUnitDistinguishedNamesIndex = 0; organizationalUnitDistinguishedNamesIndex < organizationalUnitDistinguishedNamesJsonList.GetLength(); ++organizationalUnitDistinguishedNamesIndex)
    {
      m_organizationalUnitDistinguishedNames.push_back(organizationalUnitDistinguishedNamesJsonList[organizationalUnitDistinguishedNamesIndex].AsString());
    }
    m_organizationalUnitDistinguishedNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccountCredentials"))
  {
    m_serviceAccountCredentials = jsonValue.GetObject("ServiceAccountCredentials");

    m_serviceAccountCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateBasedAuthProperties"))
  {
    m_certificateBasedAuthProperties = jsonValue.GetObject("CertificateBasedAuthProperties");

    m_certificateBasedAuthPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectoryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_directoryNameHasBeenSet)
  {
   payload.WithString("DirectoryName", m_directoryName);

  }

  if(m_organizationalUnitDistinguishedNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitDistinguishedNamesJsonList(m_organizationalUnitDistinguishedNames.size());
   for(unsigned organizationalUnitDistinguishedNamesIndex = 0; organizationalUnitDistinguishedNamesIndex < organizationalUnitDistinguishedNamesJsonList.GetLength(); ++organizationalUnitDistinguishedNamesIndex)
   {
     organizationalUnitDistinguishedNamesJsonList[organizationalUnitDistinguishedNamesIndex].AsString(m_organizationalUnitDistinguishedNames[organizationalUnitDistinguishedNamesIndex]);
   }
   payload.WithArray("OrganizationalUnitDistinguishedNames", std::move(organizationalUnitDistinguishedNamesJsonList));

  }

  if(m_serviceAccountCredentialsHasBeenSet)
  {
   payload.WithObject("ServiceAccountCredentials", m_serviceAccountCredentials.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_certificateBasedAuthPropertiesHasBeenSet)
  {
   payload.WithObject("CertificateBasedAuthProperties", m_certificateBasedAuthProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
