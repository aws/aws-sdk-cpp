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
#include <aws/elasticmapreduce/model/FailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

FailureDetails::FailureDetails() : 
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logFileHasBeenSet(false)
{
}

FailureDetails::FailureDetails(const JsonValue& jsonValue) : 
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logFileHasBeenSet(false)
{
  *this = jsonValue;
}

FailureDetails& FailureDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFile"))
  {
    m_logFile = jsonValue.GetString("LogFile");

    m_logFileHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_logFileHasBeenSet)
  {
   payload.WithString("LogFile", m_logFile);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws