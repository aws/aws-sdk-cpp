/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateProjectFromProjectProfilePolicyGrantDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

CreateProjectFromProjectProfilePolicyGrantDetail::CreateProjectFromProjectProfilePolicyGrantDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateProjectFromProjectProfilePolicyGrantDetail& CreateProjectFromProjectProfilePolicyGrantDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includeChildDomainUnits"))
  {
    m_includeChildDomainUnits = jsonValue.GetBool("includeChildDomainUnits");
    m_includeChildDomainUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectProfiles"))
  {
    Aws::Utils::Array<JsonView> projectProfilesJsonList = jsonValue.GetArray("projectProfiles");
    for(unsigned projectProfilesIndex = 0; projectProfilesIndex < projectProfilesJsonList.GetLength(); ++projectProfilesIndex)
    {
      m_projectProfiles.push_back(projectProfilesJsonList[projectProfilesIndex].AsString());
    }
    m_projectProfilesHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateProjectFromProjectProfilePolicyGrantDetail::Jsonize() const
{
  JsonValue payload;

  if(m_includeChildDomainUnitsHasBeenSet)
  {
   payload.WithBool("includeChildDomainUnits", m_includeChildDomainUnits);

  }

  if(m_projectProfilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectProfilesJsonList(m_projectProfiles.size());
   for(unsigned projectProfilesIndex = 0; projectProfilesIndex < projectProfilesJsonList.GetLength(); ++projectProfilesIndex)
   {
     projectProfilesJsonList[projectProfilesIndex].AsString(m_projectProfiles[projectProfilesIndex]);
   }
   payload.WithArray("projectProfiles", std::move(projectProfilesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
