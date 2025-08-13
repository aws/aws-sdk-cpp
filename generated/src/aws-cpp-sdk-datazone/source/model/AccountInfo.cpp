/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AccountInfo.h>
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

AccountInfo::AccountInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountInfo& AccountInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccountName"))
  {
    m_awsAccountName = jsonValue.GetString("awsAccountName");
    m_awsAccountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedRegions"))
  {
    Aws::Utils::Array<JsonView> supportedRegionsJsonList = jsonValue.GetArray("supportedRegions");
    for(unsigned supportedRegionsIndex = 0; supportedRegionsIndex < supportedRegionsJsonList.GetLength(); ++supportedRegionsIndex)
    {
      m_supportedRegions.push_back(supportedRegionsJsonList[supportedRegionsIndex].AsString());
    }
    m_supportedRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountInfo::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsAccountNameHasBeenSet)
  {
   payload.WithString("awsAccountName", m_awsAccountName);

  }

  if(m_supportedRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedRegionsJsonList(m_supportedRegions.size());
   for(unsigned supportedRegionsIndex = 0; supportedRegionsIndex < supportedRegionsJsonList.GetLength(); ++supportedRegionsIndex)
   {
     supportedRegionsJsonList[supportedRegionsIndex].AsString(m_supportedRegions[supportedRegionsIndex]);
   }
   payload.WithArray("supportedRegions", std::move(supportedRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
