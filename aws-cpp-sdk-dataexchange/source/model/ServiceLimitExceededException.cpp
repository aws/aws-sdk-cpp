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

#include <aws/dataexchange/model/ServiceLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ServiceLimitExceededException::ServiceLimitExceededException() : 
    m_limitName(LimitName::NOT_SET),
    m_limitNameHasBeenSet(false),
    m_limitValue(0.0),
    m_limitValueHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ServiceLimitExceededException::ServiceLimitExceededException(JsonView jsonValue) : 
    m_limitName(LimitName::NOT_SET),
    m_limitNameHasBeenSet(false),
    m_limitValue(0.0),
    m_limitValueHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceLimitExceededException& ServiceLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LimitName"))
  {
    m_limitName = LimitNameMapper::GetLimitNameForName(jsonValue.GetString("LimitName"));

    m_limitNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitValue"))
  {
    m_limitValue = jsonValue.GetDouble("LimitValue");

    m_limitValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_limitNameHasBeenSet)
  {
   payload.WithString("LimitName", LimitNameMapper::GetNameForLimitName(m_limitName));
  }

  if(m_limitValueHasBeenSet)
  {
   payload.WithDouble("LimitValue", m_limitValue);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
