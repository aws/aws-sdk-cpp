/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/EncryptionInTransit.h>
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

EncryptionInTransit::EncryptionInTransit() : 
    m_clientBroker(ClientBroker::NOT_SET),
    m_clientBrokerHasBeenSet(false),
    m_inCluster(false),
    m_inClusterHasBeenSet(false)
{
}

EncryptionInTransit::EncryptionInTransit(JsonView jsonValue) : 
    m_clientBroker(ClientBroker::NOT_SET),
    m_clientBrokerHasBeenSet(false),
    m_inCluster(false),
    m_inClusterHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionInTransit& EncryptionInTransit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientBroker"))
  {
    m_clientBroker = ClientBrokerMapper::GetClientBrokerForName(jsonValue.GetString("clientBroker"));

    m_clientBrokerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inCluster"))
  {
    m_inCluster = jsonValue.GetBool("inCluster");

    m_inClusterHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionInTransit::Jsonize() const
{
  JsonValue payload;

  if(m_clientBrokerHasBeenSet)
  {
   payload.WithString("clientBroker", ClientBrokerMapper::GetNameForClientBroker(m_clientBroker));
  }

  if(m_inClusterHasBeenSet)
  {
   payload.WithBool("inCluster", m_inCluster);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
