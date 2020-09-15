/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClientAuthentication.h>
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

ClientAuthentication::ClientAuthentication() : 
    m_saslHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
}

ClientAuthentication::ClientAuthentication(JsonView jsonValue) : 
    m_saslHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
  *this = jsonValue;
}

ClientAuthentication& ClientAuthentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sasl"))
  {
    m_sasl = jsonValue.GetObject("sasl");

    m_saslHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tls"))
  {
    m_tls = jsonValue.GetObject("tls");

    m_tlsHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientAuthentication::Jsonize() const
{
  JsonValue payload;

  if(m_saslHasBeenSet)
  {
   payload.WithObject("sasl", m_sasl.Jsonize());

  }

  if(m_tlsHasBeenSet)
  {
   payload.WithObject("tls", m_tls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
