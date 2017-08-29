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
    m_createdTimeHasBeenSet(false)
{
}

DirectoryConfig::DirectoryConfig(const JsonValue& jsonValue) : 
    m_directoryNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNamesHasBeenSet(false),
    m_serviceAccountCredentialsHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryConfig& DirectoryConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DirectoryName"))
  {
    m_directoryName = jsonValue.GetString("DirectoryName");

    m_directoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitDistinguishedNames"))
  {
    Array<JsonValue> organizationalUnitDistinguishedNamesJsonList = jsonValue.GetArray("OrganizationalUnitDistinguishedNames");
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
   Array<JsonValue> organizationalUnitDistinguishedNamesJsonList(m_organizationalUnitDistinguishedNames.size());
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

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
