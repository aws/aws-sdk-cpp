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

#include <aws/dynamodb/model/BillingModeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

BillingModeSummary::BillingModeSummary() : 
    m_billingMode(BillingMode::NOT_SET),
    m_billingModeHasBeenSet(false),
    m_lastUpdateToPayPerRequestDateTimeHasBeenSet(false)
{
}

BillingModeSummary::BillingModeSummary(JsonView jsonValue) : 
    m_billingMode(BillingMode::NOT_SET),
    m_billingModeHasBeenSet(false),
    m_lastUpdateToPayPerRequestDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BillingModeSummary& BillingModeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BillingMode"))
  {
    m_billingMode = BillingModeMapper::GetBillingModeForName(jsonValue.GetString("BillingMode"));

    m_billingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateToPayPerRequestDateTime"))
  {
    m_lastUpdateToPayPerRequestDateTime = jsonValue.GetDouble("LastUpdateToPayPerRequestDateTime");

    m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingModeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_billingModeHasBeenSet)
  {
   payload.WithString("BillingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  if(m_lastUpdateToPayPerRequestDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateToPayPerRequestDateTime", m_lastUpdateToPayPerRequestDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
