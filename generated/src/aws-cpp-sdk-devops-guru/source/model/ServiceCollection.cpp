/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ServiceCollection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ServiceCollection::ServiceCollection() : 
    m_serviceNamesHasBeenSet(false)
{
}

ServiceCollection::ServiceCollection(JsonView jsonValue) : 
    m_serviceNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceCollection& ServiceCollection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceNames"))
  {
    Aws::Utils::Array<JsonView> serviceNamesJsonList = jsonValue.GetArray("ServiceNames");
    for(unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex)
    {
      m_serviceNames.push_back(ServiceNameMapper::GetServiceNameForName(serviceNamesJsonList[serviceNamesIndex].AsString()));
    }
    m_serviceNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceCollection::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceNamesJsonList(m_serviceNames.size());
   for(unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex)
   {
     serviceNamesJsonList[serviceNamesIndex].AsString(ServiceNameMapper::GetNameForServiceName(m_serviceNames[serviceNamesIndex]));
   }
   payload.WithArray("ServiceNames", std::move(serviceNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
