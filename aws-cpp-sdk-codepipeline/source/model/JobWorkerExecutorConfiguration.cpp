/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/JobWorkerExecutorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

JobWorkerExecutorConfiguration::JobWorkerExecutorConfiguration() : 
    m_pollingAccountsHasBeenSet(false),
    m_pollingServicePrincipalsHasBeenSet(false)
{
}

JobWorkerExecutorConfiguration::JobWorkerExecutorConfiguration(JsonView jsonValue) : 
    m_pollingAccountsHasBeenSet(false),
    m_pollingServicePrincipalsHasBeenSet(false)
{
  *this = jsonValue;
}

JobWorkerExecutorConfiguration& JobWorkerExecutorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pollingAccounts"))
  {
    Aws::Utils::Array<JsonView> pollingAccountsJsonList = jsonValue.GetArray("pollingAccounts");
    for(unsigned pollingAccountsIndex = 0; pollingAccountsIndex < pollingAccountsJsonList.GetLength(); ++pollingAccountsIndex)
    {
      m_pollingAccounts.push_back(pollingAccountsJsonList[pollingAccountsIndex].AsString());
    }
    m_pollingAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pollingServicePrincipals"))
  {
    Aws::Utils::Array<JsonView> pollingServicePrincipalsJsonList = jsonValue.GetArray("pollingServicePrincipals");
    for(unsigned pollingServicePrincipalsIndex = 0; pollingServicePrincipalsIndex < pollingServicePrincipalsJsonList.GetLength(); ++pollingServicePrincipalsIndex)
    {
      m_pollingServicePrincipals.push_back(pollingServicePrincipalsJsonList[pollingServicePrincipalsIndex].AsString());
    }
    m_pollingServicePrincipalsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobWorkerExecutorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pollingAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pollingAccountsJsonList(m_pollingAccounts.size());
   for(unsigned pollingAccountsIndex = 0; pollingAccountsIndex < pollingAccountsJsonList.GetLength(); ++pollingAccountsIndex)
   {
     pollingAccountsJsonList[pollingAccountsIndex].AsString(m_pollingAccounts[pollingAccountsIndex]);
   }
   payload.WithArray("pollingAccounts", std::move(pollingAccountsJsonList));

  }

  if(m_pollingServicePrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pollingServicePrincipalsJsonList(m_pollingServicePrincipals.size());
   for(unsigned pollingServicePrincipalsIndex = 0; pollingServicePrincipalsIndex < pollingServicePrincipalsJsonList.GetLength(); ++pollingServicePrincipalsIndex)
   {
     pollingServicePrincipalsJsonList[pollingServicePrincipalsIndex].AsString(m_pollingServicePrincipals[pollingServicePrincipalsIndex]);
   }
   payload.WithArray("pollingServicePrincipals", std::move(pollingServicePrincipalsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
