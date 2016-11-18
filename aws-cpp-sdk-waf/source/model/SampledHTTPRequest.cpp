/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/model/SampledHTTPRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

SampledHTTPRequest::SampledHTTPRequest() : 
    m_requestHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

SampledHTTPRequest::SampledHTTPRequest(const JsonValue& jsonValue) : 
    m_requestHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

SampledHTTPRequest& SampledHTTPRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Request"))
  {
    m_request = jsonValue.GetObject("Request");

    m_requestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetInt64("Weight");

    m_weightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue SampledHTTPRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestHasBeenSet)
  {
   payload.WithObject("Request", m_request.Jsonize());

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInt64("Weight", m_weight);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws