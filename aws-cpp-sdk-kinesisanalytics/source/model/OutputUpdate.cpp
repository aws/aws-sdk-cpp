/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/OutputUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

OutputUpdate::OutputUpdate() : 
    m_outputIdHasBeenSet(false),
    m_nameUpdateHasBeenSet(false),
    m_kinesisStreamsOutputUpdateHasBeenSet(false),
    m_kinesisFirehoseOutputUpdateHasBeenSet(false),
    m_destinationSchemaUpdateHasBeenSet(false)
{
}

OutputUpdate::OutputUpdate(const JsonValue& jsonValue) : 
    m_outputIdHasBeenSet(false),
    m_nameUpdateHasBeenSet(false),
    m_kinesisStreamsOutputUpdateHasBeenSet(false),
    m_kinesisFirehoseOutputUpdateHasBeenSet(false),
    m_destinationSchemaUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

OutputUpdate& OutputUpdate::operator =(const JsonValue& jsonValue)
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

  if(m_destinationSchemaUpdateHasBeenSet)
  {
   payload.WithObject("DestinationSchemaUpdate", m_destinationSchemaUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws