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

#include <aws/kafka/model/JmxExporterInfo.h>
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

JmxExporterInfo::JmxExporterInfo() : 
    m_enabledInBroker(false),
    m_enabledInBrokerHasBeenSet(false)
{
}

JmxExporterInfo::JmxExporterInfo(JsonView jsonValue) : 
    m_enabledInBroker(false),
    m_enabledInBrokerHasBeenSet(false)
{
  *this = jsonValue;
}

JmxExporterInfo& JmxExporterInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabledInBroker"))
  {
    m_enabledInBroker = jsonValue.GetBool("enabledInBroker");

    m_enabledInBrokerHasBeenSet = true;
  }

  return *this;
}

JsonValue JmxExporterInfo::Jsonize() const
{
  JsonValue payload;

  if(m_enabledInBrokerHasBeenSet)
  {
   payload.WithBool("enabledInBroker", m_enabledInBroker);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
