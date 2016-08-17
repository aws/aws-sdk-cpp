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
#include <aws/kinesisanalytics/model/OutputDescription.h>
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

OutputDescription::OutputDescription() : 
    m_outputIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_kinesisStreamsOutputDescriptionHasBeenSet(false),
    m_kinesisFirehoseOutputDescriptionHasBeenSet(false),
    m_destinationSchemaHasBeenSet(false)
{
}

OutputDescription::OutputDescription(const JsonValue& jsonValue) : 
    m_outputIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_kinesisStreamsOutputDescriptionHasBeenSet(false),
    m_kinesisFirehoseOutputDescriptionHasBeenSet(false),
    m_destinationSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDescription& OutputDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OutputId"))
  {
    m_outputId = jsonValue.GetString("OutputId");

    m_outputIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamsOutputDescription"))
  {
    m_kinesisStreamsOutputDescription = jsonValue.GetObject("KinesisStreamsOutputDescription");

    m_kinesisStreamsOutputDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseOutputDescription"))
  {
    m_kinesisFirehoseOutputDescription = jsonValue.GetObject("KinesisFirehoseOutputDescription");

    m_kinesisFirehoseOutputDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSchema"))
  {
    m_destinationSchema = jsonValue.GetObject("DestinationSchema");

    m_destinationSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputDescription::Jsonize() const
{
  JsonValue payload;

  if(m_outputIdHasBeenSet)
  {
   payload.WithString("OutputId", m_outputId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_kinesisStreamsOutputDescriptionHasBeenSet)
  {
   payload.WithObject("KinesisStreamsOutputDescription", m_kinesisStreamsOutputDescription.Jsonize());

  }

  if(m_kinesisFirehoseOutputDescriptionHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseOutputDescription", m_kinesisFirehoseOutputDescription.Jsonize());

  }

  if(m_destinationSchemaHasBeenSet)
  {
   payload.WithObject("DestinationSchema", m_destinationSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws