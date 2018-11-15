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

#include <aws/servicecatalog/model/ProvisioningArtifactPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisioningArtifactPreferences::ProvisioningArtifactPreferences() : 
    m_stackSetAccountsHasBeenSet(false),
    m_stackSetRegionsHasBeenSet(false)
{
}

ProvisioningArtifactPreferences::ProvisioningArtifactPreferences(JsonView jsonValue) : 
    m_stackSetAccountsHasBeenSet(false),
    m_stackSetRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactPreferences& ProvisioningArtifactPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackSetAccounts"))
  {
    Array<JsonView> stackSetAccountsJsonList = jsonValue.GetArray("StackSetAccounts");
    for(unsigned stackSetAccountsIndex = 0; stackSetAccountsIndex < stackSetAccountsJsonList.GetLength(); ++stackSetAccountsIndex)
    {
      m_stackSetAccounts.push_back(stackSetAccountsJsonList[stackSetAccountsIndex].AsString());
    }
    m_stackSetAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetRegions"))
  {
    Array<JsonView> stackSetRegionsJsonList = jsonValue.GetArray("StackSetRegions");
    for(unsigned stackSetRegionsIndex = 0; stackSetRegionsIndex < stackSetRegionsJsonList.GetLength(); ++stackSetRegionsIndex)
    {
      m_stackSetRegions.push_back(stackSetRegionsJsonList[stackSetRegionsIndex].AsString());
    }
    m_stackSetRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_stackSetAccountsHasBeenSet)
  {
   Array<JsonValue> stackSetAccountsJsonList(m_stackSetAccounts.size());
   for(unsigned stackSetAccountsIndex = 0; stackSetAccountsIndex < stackSetAccountsJsonList.GetLength(); ++stackSetAccountsIndex)
   {
     stackSetAccountsJsonList[stackSetAccountsIndex].AsString(m_stackSetAccounts[stackSetAccountsIndex]);
   }
   payload.WithArray("StackSetAccounts", std::move(stackSetAccountsJsonList));

  }

  if(m_stackSetRegionsHasBeenSet)
  {
   Array<JsonValue> stackSetRegionsJsonList(m_stackSetRegions.size());
   for(unsigned stackSetRegionsIndex = 0; stackSetRegionsIndex < stackSetRegionsJsonList.GetLength(); ++stackSetRegionsIndex)
   {
     stackSetRegionsJsonList[stackSetRegionsIndex].AsString(m_stackSetRegions[stackSetRegionsIndex]);
   }
   payload.WithArray("StackSetRegions", std::move(stackSetRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
