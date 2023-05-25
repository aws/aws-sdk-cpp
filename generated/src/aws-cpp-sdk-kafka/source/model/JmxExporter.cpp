/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/JmxExporter.h>
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

JmxExporter::JmxExporter() : 
    m_enabledInBroker(false),
    m_enabledInBrokerHasBeenSet(false)
{
}

JmxExporter::JmxExporter(JsonView jsonValue) : 
    m_enabledInBroker(false),
    m_enabledInBrokerHasBeenSet(false)
{
  *this = jsonValue;
}

JmxExporter& JmxExporter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabledInBroker"))
  {
    m_enabledInBroker = jsonValue.GetBool("enabledInBroker");

    m_enabledInBrokerHasBeenSet = true;
  }

  return *this;
}

JsonValue JmxExporter::Jsonize() const
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
