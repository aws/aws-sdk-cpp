/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeSourceSelfManagedKafkaParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeSourceSelfManagedKafkaParameters::PipeSourceSelfManagedKafkaParameters() : 
    m_additionalBootstrapServersHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_consumerGroupIDHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_serverRootCaCertificateHasBeenSet(false),
    m_startingPosition(SelfManagedKafkaStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

PipeSourceSelfManagedKafkaParameters::PipeSourceSelfManagedKafkaParameters(JsonView jsonValue) : 
    m_additionalBootstrapServersHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_consumerGroupIDHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_serverRootCaCertificateHasBeenSet(false),
    m_startingPosition(SelfManagedKafkaStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
  *this = jsonValue;
}

PipeSourceSelfManagedKafkaParameters& PipeSourceSelfManagedKafkaParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdditionalBootstrapServers"))
  {
    Aws::Utils::Array<JsonView> additionalBootstrapServersJsonList = jsonValue.GetArray("AdditionalBootstrapServers");
    for(unsigned additionalBootstrapServersIndex = 0; additionalBootstrapServersIndex < additionalBootstrapServersJsonList.GetLength(); ++additionalBootstrapServersIndex)
    {
      m_additionalBootstrapServers.push_back(additionalBootstrapServersJsonList[additionalBootstrapServersIndex].AsString());
    }
    m_additionalBootstrapServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumerGroupID"))
  {
    m_consumerGroupID = jsonValue.GetString("ConsumerGroupID");

    m_consumerGroupIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");

    m_credentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");

    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerRootCaCertificate"))
  {
    m_serverRootCaCertificate = jsonValue.GetString("ServerRootCaCertificate");

    m_serverRootCaCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = SelfManagedKafkaStartPositionMapper::GetSelfManagedKafkaStartPositionForName(jsonValue.GetString("StartingPosition"));

    m_startingPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vpc"))
  {
    m_vpc = jsonValue.GetObject("Vpc");

    m_vpcHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeSourceSelfManagedKafkaParameters::Jsonize() const
{
  JsonValue payload;

  if(m_additionalBootstrapServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalBootstrapServersJsonList(m_additionalBootstrapServers.size());
   for(unsigned additionalBootstrapServersIndex = 0; additionalBootstrapServersIndex < additionalBootstrapServersJsonList.GetLength(); ++additionalBootstrapServersIndex)
   {
     additionalBootstrapServersJsonList[additionalBootstrapServersIndex].AsString(m_additionalBootstrapServers[additionalBootstrapServersIndex]);
   }
   payload.WithArray("AdditionalBootstrapServers", std::move(additionalBootstrapServersJsonList));

  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_consumerGroupIDHasBeenSet)
  {
   payload.WithString("ConsumerGroupID", m_consumerGroupID);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_serverRootCaCertificateHasBeenSet)
  {
   payload.WithString("ServerRootCaCertificate", m_serverRootCaCertificate);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", SelfManagedKafkaStartPositionMapper::GetNameForSelfManagedKafkaStartPosition(m_startingPosition));
  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("Vpc", m_vpc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
