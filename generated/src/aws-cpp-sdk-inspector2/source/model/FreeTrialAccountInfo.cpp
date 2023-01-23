/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FreeTrialAccountInfo.h>
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

FreeTrialAccountInfo::FreeTrialAccountInfo() : 
    m_accountIdHasBeenSet(false),
    m_freeTrialInfoHasBeenSet(false)
{
}

FreeTrialAccountInfo::FreeTrialAccountInfo(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_freeTrialInfoHasBeenSet(false)
{
  *this = jsonValue;
}

FreeTrialAccountInfo& FreeTrialAccountInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeTrialInfo"))
  {
    Aws::Utils::Array<JsonView> freeTrialInfoJsonList = jsonValue.GetArray("freeTrialInfo");
    for(unsigned freeTrialInfoIndex = 0; freeTrialInfoIndex < freeTrialInfoJsonList.GetLength(); ++freeTrialInfoIndex)
    {
      m_freeTrialInfo.push_back(freeTrialInfoJsonList[freeTrialInfoIndex].AsObject());
    }
    m_freeTrialInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeTrialAccountInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_freeTrialInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> freeTrialInfoJsonList(m_freeTrialInfo.size());
   for(unsigned freeTrialInfoIndex = 0; freeTrialInfoIndex < freeTrialInfoJsonList.GetLength(); ++freeTrialInfoIndex)
   {
     freeTrialInfoJsonList[freeTrialInfoIndex].AsObject(m_freeTrialInfo[freeTrialInfoIndex].Jsonize());
   }
   payload.WithArray("freeTrialInfo", std::move(freeTrialInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
