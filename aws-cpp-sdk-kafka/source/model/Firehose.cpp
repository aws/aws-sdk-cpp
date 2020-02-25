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

#include <aws/kafka/model/Firehose.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

Firehose::Firehose() : 
    m_deliveryStreamHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Firehose::Firehose(JsonView jsonValue) : 
    m_deliveryStreamHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

Firehose& Firehose::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryStream"))
  {
    m_deliveryStream = jsonValue.GetString("deliveryStream");

    m_deliveryStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Firehose::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamHasBeenSet)
  {
   payload.WithString("deliveryStream", m_deliveryStream);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
