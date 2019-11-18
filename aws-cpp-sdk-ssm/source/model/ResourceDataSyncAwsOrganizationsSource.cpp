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

#include <aws/ssm/model/ResourceDataSyncAwsOrganizationsSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncAwsOrganizationsSource::ResourceDataSyncAwsOrganizationsSource() : 
    m_organizationSourceTypeHasBeenSet(false),
    m_organizationalUnitsHasBeenSet(false)
{
}

ResourceDataSyncAwsOrganizationsSource::ResourceDataSyncAwsOrganizationsSource(JsonView jsonValue) : 
    m_organizationSourceTypeHasBeenSet(false),
    m_organizationalUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncAwsOrganizationsSource& ResourceDataSyncAwsOrganizationsSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationSourceType"))
  {
    m_organizationSourceType = jsonValue.GetString("OrganizationSourceType");

    m_organizationSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnits"))
  {
    Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("OrganizationalUnits");
    for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
    {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsObject());
    }
    m_organizationalUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncAwsOrganizationsSource::Jsonize() const
{
  JsonValue payload;

  if(m_organizationSourceTypeHasBeenSet)
  {
   payload.WithString("OrganizationSourceType", m_organizationSourceType);

  }

  if(m_organizationalUnitsHasBeenSet)
  {
   Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
   for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
   {
     organizationalUnitsJsonList[organizationalUnitsIndex].AsObject(m_organizationalUnits[organizationalUnitsIndex].Jsonize());
   }
   payload.WithArray("OrganizationalUnits", std::move(organizationalUnitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
