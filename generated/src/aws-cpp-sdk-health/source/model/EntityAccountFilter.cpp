/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EntityAccountFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EntityAccountFilter::EntityAccountFilter() : 
    m_eventArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_statusCodesHasBeenSet(false)
{
}

EntityAccountFilter::EntityAccountFilter(JsonView jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_statusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

EntityAccountFilter& EntityAccountFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCodes"))
  {
    Aws::Utils::Array<JsonView> statusCodesJsonList = jsonValue.GetArray("statusCodes");
    for(unsigned statusCodesIndex = 0; statusCodesIndex < statusCodesJsonList.GetLength(); ++statusCodesIndex)
    {
      m_statusCodes.push_back(EntityStatusCodeMapper::GetEntityStatusCodeForName(statusCodesJsonList[statusCodesIndex].AsString()));
    }
    m_statusCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityAccountFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_statusCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusCodesJsonList(m_statusCodes.size());
   for(unsigned statusCodesIndex = 0; statusCodesIndex < statusCodesJsonList.GetLength(); ++statusCodesIndex)
   {
     statusCodesJsonList[statusCodesIndex].AsString(EntityStatusCodeMapper::GetNameForEntityStatusCode(m_statusCodes[statusCodesIndex]));
   }
   payload.WithArray("statusCodes", std::move(statusCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
