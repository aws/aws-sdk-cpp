/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/Output.h>
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

Output::Output() : 
    m_nameHasBeenSet(false),
    m_kinesisStreamsOutputHasBeenSet(false),
    m_kinesisFirehoseOutputHasBeenSet(false),
    m_lambdaOutputHasBeenSet(false),
    m_destinationSchemaHasBeenSet(false)
{
}

Output::Output(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_kinesisStreamsOutputHasBeenSet(false),
    m_kinesisFirehoseOutputHasBeenSet(false),
    m_lambdaOutputHasBeenSet(false),
    m_destinationSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamsOutput"))
  {
    m_kinesisStreamsOutput = jsonValue.GetObject("KinesisStreamsOutput");

    m_kinesisStreamsOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseOutput"))
  {
    m_kinesisFirehoseOutput = jsonValue.GetObject("KinesisFirehoseOutput");

    m_kinesisFirehoseOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaOutput"))
  {
    m_lambdaOutput = jsonValue.GetObject("LambdaOutput");

    m_lambdaOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSchema"))
  {
    m_destinationSchema = jsonValue.GetObject("DestinationSchema");

    m_destinationSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_kinesisStreamsOutputHasBeenSet)
  {
   payload.WithObject("KinesisStreamsOutput", m_kinesisStreamsOutput.Jsonize());

  }

  if(m_kinesisFirehoseOutputHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseOutput", m_kinesisFirehoseOutput.Jsonize());

  }

  if(m_lambdaOutputHasBeenSet)
  {
   payload.WithObject("LambdaOutput", m_lambdaOutput.Jsonize());

  }

  if(m_destinationSchemaHasBeenSet)
  {
   payload.WithObject("DestinationSchema", m_destinationSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
