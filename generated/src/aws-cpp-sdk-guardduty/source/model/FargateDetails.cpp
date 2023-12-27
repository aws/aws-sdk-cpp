/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FargateDetails.h>
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

FargateDetails::FargateDetails() : 
    m_issuesHasBeenSet(false),
    m_managementType(ManagementType::NOT_SET),
    m_managementTypeHasBeenSet(false)
{
}

FargateDetails::FargateDetails(JsonView jsonValue) : 
    m_issuesHasBeenSet(false),
    m_managementType(ManagementType::NOT_SET),
    m_managementTypeHasBeenSet(false)
{
  *this = jsonValue;
}

FargateDetails& FargateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issues"))
  {
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("issues");
    for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
    {
      m_issues.push_back(issuesJsonList[issuesIndex].AsString());
    }
    m_issuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managementType"))
  {
    m_managementType = ManagementTypeMapper::GetManagementTypeForName(jsonValue.GetString("managementType"));

    m_managementTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue FargateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_issuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issuesJsonList(m_issues.size());
   for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
   {
     issuesJsonList[issuesIndex].AsString(m_issues[issuesIndex]);
   }
   payload.WithArray("issues", std::move(issuesJsonList));

  }

  if(m_managementTypeHasBeenSet)
  {
   payload.WithString("managementType", ManagementTypeMapper::GetNameForManagementType(m_managementType));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
