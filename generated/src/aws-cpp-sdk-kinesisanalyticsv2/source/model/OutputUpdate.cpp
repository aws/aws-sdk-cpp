/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/OutputUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

OutputUpdate::OutputUpdate() : 
    m_outputIdHasBeenSet(false),
    m_nameUpdateHasBeenSet(false),
    m_kinesisStreamsOutputUpdateHasBeenSet(false),
    m_kinesisFirehoseOutputUpdateHasBeenSet(false),
    m_lambdaOutputUpdateHasBeenSet(false),
    m_destinationSchemaUpdateHasBeenSet(false)
{
}

OutputUpdate::OutputUpdate(JsonView jsonValue) : 
    m_outputIdHasBeenSet(false),
    m_nameUpdateHasBeenSet(false),
    m_kinesisStreamsOutputUpdateHasBeenSet(false),
    m_kinesisFirehoseOutputUpdateHasBeenSet(false),
    m_lambdaOutputUpdateHasBeenSet(false),
    m_destinationSchemaUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

OutputUpdate& OutputUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputId"))
  {
    m_outputId = jsonValue.GetString("OutputId");

    m_outputIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NameUpdate"))
  {
    m_nameUpdate = jsonValue.GetString("NameUpdate");

    m_nameUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamsOutputUpdate"))
  {
    m_kinesisStreamsOutputUpdate = jsonValue.GetObject("KinesisStreamsOutputUpdate");

    m_kinesisStreamsOutputUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseOutputUpdate"))
  {
    m_kinesisFirehoseOutputUpdate = jsonValue.GetObject("KinesisFirehoseOutputUpdate");

    m_kinesisFirehoseOutputUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaOutputUpdate"))
  {
    m_lambdaOutputUpdate = jsonValue.GetObject("LambdaOutputUpdate");

    m_lambdaOutputUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSchemaUpdate"))
  {
    m_destinationSchemaUpdate = jsonValue.GetObject("DestinationSchemaUpdate");

    m_destinationSchemaUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_outputIdHasBeenSet)
  {
   payload.WithString("OutputId", m_outputId);

  }

  if(m_nameUpdateHasBeenSet)
  {
   payload.WithString("NameUpdate", m_nameUpdate);

  }

  if(m_kinesisStreamsOutputUpdateHasBeenSet)
  {
   payload.WithObject("KinesisStreamsOutputUpdate", m_kinesisStreamsOutputUpdate.Jsonize());

  }

  if(m_kinesisFirehoseOutputUpdateHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseOutputUpdate", m_kinesisFirehoseOutputUpdate.Jsonize());

  }

  if(m_lambdaOutputUpdateHasBeenSet)
  {
   payload.WithObject("LambdaOutputUpdate", m_lambdaOutputUpdate.Jsonize());

  }

  if(m_destinationSchemaUpdateHasBeenSet)
  {
   payload.WithObject("DestinationSchemaUpdate", m_destinationSchemaUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
