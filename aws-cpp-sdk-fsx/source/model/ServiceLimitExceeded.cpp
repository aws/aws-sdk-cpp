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

#include <aws/fsx/model/ServiceLimitExceeded.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

ServiceLimitExceeded::ServiceLimitExceeded() : 
    m_limit(ServiceLimit::NOT_SET),
    m_limitHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ServiceLimitExceeded::ServiceLimitExceeded(JsonView jsonValue) : 
    m_limit(ServiceLimit::NOT_SET),
    m_limitHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceLimitExceeded& ServiceLimitExceeded::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = ServiceLimitMapper::GetServiceLimitForName(jsonValue.GetString("Limit"));

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceLimitExceeded::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithString("Limit", ServiceLimitMapper::GetNameForServiceLimit(m_limit));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
