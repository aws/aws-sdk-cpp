/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ServerlessClientAuthentication.h>
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

ServerlessClientAuthentication::ServerlessClientAuthentication() : 
    m_saslHasBeenSet(false)
{
}

ServerlessClientAuthentication::ServerlessClientAuthentication(JsonView jsonValue) : 
    m_saslHasBeenSet(false)
{
  *this = jsonValue;
}

ServerlessClientAuthentication& ServerlessClientAuthentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sasl"))
  {
    m_sasl = jsonValue.GetObject("sasl");

    m_saslHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerlessClientAuthentication::Jsonize() const
{
  JsonValue payload;

  if(m_saslHasBeenSet)
  {
   payload.WithObject("sasl", m_sasl.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
