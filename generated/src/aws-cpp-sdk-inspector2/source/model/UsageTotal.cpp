/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UsageTotal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

UsageTotal::UsageTotal() : 
    m_accountIdHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

UsageTotal::UsageTotal(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_usageHasBeenSet(false)
{
  *this = jsonValue;
}

UsageTotal& UsageTotal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usage"))
  {
    Aws::Utils::Array<JsonView> usageJsonList = jsonValue.GetArray("usage");
    for(unsigned usageIndex = 0; usageIndex < usageJsonList.GetLength(); ++usageIndex)
    {
      m_usage.push_back(usageJsonList[usageIndex].AsObject());
    }
    m_usageHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageTotal::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_usageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageJsonList(m_usage.size());
   for(unsigned usageIndex = 0; usageIndex < usageJsonList.GetLength(); ++usageIndex)
   {
     usageJsonList[usageIndex].AsObject(m_usage[usageIndex].Jsonize());
   }
   payload.WithArray("usage", std::move(usageJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
