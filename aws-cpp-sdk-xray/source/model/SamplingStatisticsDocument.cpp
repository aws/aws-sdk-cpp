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

#include <aws/xray/model/SamplingStatisticsDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingStatisticsDocument::SamplingStatisticsDocument() : 
    m_ruleNameHasBeenSet(false),
    m_clientIDHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_requestCount(0),
    m_requestCountHasBeenSet(false),
    m_sampledCount(0),
    m_sampledCountHasBeenSet(false),
    m_borrowCount(0),
    m_borrowCountHasBeenSet(false)
{
}

SamplingStatisticsDocument::SamplingStatisticsDocument(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_clientIDHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_requestCount(0),
    m_requestCountHasBeenSet(false),
    m_sampledCount(0),
    m_sampledCountHasBeenSet(false),
    m_borrowCount(0),
    m_borrowCountHasBeenSet(false)
{
  *this = jsonValue;
}

SamplingStatisticsDocument& SamplingStatisticsDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientID"))
  {
    m_clientID = jsonValue.GetString("ClientID");

    m_clientIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestCount"))
  {
    m_requestCount = jsonValue.GetInteger("RequestCount");

    m_requestCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampledCount"))
  {
    m_sampledCount = jsonValue.GetInteger("SampledCount");

    m_sampledCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorrowCount"))
  {
    m_borrowCount = jsonValue.GetInteger("BorrowCount");

    m_borrowCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SamplingStatisticsDocument::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_clientIDHasBeenSet)
  {
   payload.WithString("ClientID", m_clientID);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_requestCountHasBeenSet)
  {
   payload.WithInteger("RequestCount", m_requestCount);

  }

  if(m_sampledCountHasBeenSet)
  {
   payload.WithInteger("SampledCount", m_sampledCount);

  }

  if(m_borrowCountHasBeenSet)
  {
   payload.WithInteger("BorrowCount", m_borrowCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
