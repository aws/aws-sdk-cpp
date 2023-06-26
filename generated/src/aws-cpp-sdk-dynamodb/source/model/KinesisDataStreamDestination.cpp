/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/KinesisDataStreamDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

KinesisDataStreamDestination::KinesisDataStreamDestination() : 
    m_streamArnHasBeenSet(false),
    m_destinationStatus(DestinationStatus::NOT_SET),
    m_destinationStatusHasBeenSet(false),
    m_destinationStatusDescriptionHasBeenSet(false)
{
}

KinesisDataStreamDestination::KinesisDataStreamDestination(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_destinationStatus(DestinationStatus::NOT_SET),
    m_destinationStatusHasBeenSet(false),
    m_destinationStatusDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisDataStreamDestination& KinesisDataStreamDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationStatus"))
  {
    m_destinationStatus = DestinationStatusMapper::GetDestinationStatusForName(jsonValue.GetString("DestinationStatus"));

    m_destinationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationStatusDescription"))
  {
    m_destinationStatusDescription = jsonValue.GetString("DestinationStatusDescription");

    m_destinationStatusDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisDataStreamDestination::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_destinationStatusHasBeenSet)
  {
   payload.WithString("DestinationStatus", DestinationStatusMapper::GetNameForDestinationStatus(m_destinationStatus));
  }

  if(m_destinationStatusDescriptionHasBeenSet)
  {
   payload.WithString("DestinationStatusDescription", m_destinationStatusDescription);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
