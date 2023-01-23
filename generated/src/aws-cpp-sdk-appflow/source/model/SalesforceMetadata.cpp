/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SalesforceMetadata::SalesforceMetadata() : 
    m_oAuthScopesHasBeenSet(false),
    m_dataTransferApisHasBeenSet(false)
{
}

SalesforceMetadata::SalesforceMetadata(JsonView jsonValue) : 
    m_oAuthScopesHasBeenSet(false),
    m_dataTransferApisHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceMetadata& SalesforceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oAuthScopes"))
  {
    Aws::Utils::Array<JsonView> oAuthScopesJsonList = jsonValue.GetArray("oAuthScopes");
    for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
    {
      m_oAuthScopes.push_back(oAuthScopesJsonList[oAuthScopesIndex].AsString());
    }
    m_oAuthScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataTransferApis"))
  {
    Aws::Utils::Array<JsonView> dataTransferApisJsonList = jsonValue.GetArray("dataTransferApis");
    for(unsigned dataTransferApisIndex = 0; dataTransferApisIndex < dataTransferApisJsonList.GetLength(); ++dataTransferApisIndex)
    {
      m_dataTransferApis.push_back(SalesforceDataTransferApiMapper::GetSalesforceDataTransferApiForName(dataTransferApisJsonList[dataTransferApisIndex].AsString()));
    }
    m_dataTransferApisHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_oAuthScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oAuthScopesJsonList(m_oAuthScopes.size());
   for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
   {
     oAuthScopesJsonList[oAuthScopesIndex].AsString(m_oAuthScopes[oAuthScopesIndex]);
   }
   payload.WithArray("oAuthScopes", std::move(oAuthScopesJsonList));

  }

  if(m_dataTransferApisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataTransferApisJsonList(m_dataTransferApis.size());
   for(unsigned dataTransferApisIndex = 0; dataTransferApisIndex < dataTransferApisJsonList.GetLength(); ++dataTransferApisIndex)
   {
     dataTransferApisJsonList[dataTransferApisIndex].AsString(SalesforceDataTransferApiMapper::GetNameForSalesforceDataTransferApi(m_dataTransferApis[dataTransferApisIndex]));
   }
   payload.WithArray("dataTransferApis", std::move(dataTransferApisJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
