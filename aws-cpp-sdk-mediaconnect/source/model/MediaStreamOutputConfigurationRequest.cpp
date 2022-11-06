/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MediaStreamOutputConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

MediaStreamOutputConfigurationRequest::MediaStreamOutputConfigurationRequest() : 
    m_destinationConfigurationsHasBeenSet(false),
    m_encodingName(EncodingName::NOT_SET),
    m_encodingNameHasBeenSet(false),
    m_encodingParametersHasBeenSet(false),
    m_mediaStreamNameHasBeenSet(false)
{
}

MediaStreamOutputConfigurationRequest::MediaStreamOutputConfigurationRequest(JsonView jsonValue) : 
    m_destinationConfigurationsHasBeenSet(false),
    m_encodingName(EncodingName::NOT_SET),
    m_encodingNameHasBeenSet(false),
    m_encodingParametersHasBeenSet(false),
    m_mediaStreamNameHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamOutputConfigurationRequest& MediaStreamOutputConfigurationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationConfigurations"))
  {
    Aws::Utils::Array<JsonView> destinationConfigurationsJsonList = jsonValue.GetArray("destinationConfigurations");
    for(unsigned destinationConfigurationsIndex = 0; destinationConfigurationsIndex < destinationConfigurationsJsonList.GetLength(); ++destinationConfigurationsIndex)
    {
      m_destinationConfigurations.push_back(destinationConfigurationsJsonList[destinationConfigurationsIndex].AsObject());
    }
    m_destinationConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encodingName"))
  {
    m_encodingName = EncodingNameMapper::GetEncodingNameForName(jsonValue.GetString("encodingName"));

    m_encodingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encodingParameters"))
  {
    m_encodingParameters = jsonValue.GetObject("encodingParameters");

    m_encodingParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaStreamName"))
  {
    m_mediaStreamName = jsonValue.GetString("mediaStreamName");

    m_mediaStreamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStreamOutputConfigurationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_destinationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationConfigurationsJsonList(m_destinationConfigurations.size());
   for(unsigned destinationConfigurationsIndex = 0; destinationConfigurationsIndex < destinationConfigurationsJsonList.GetLength(); ++destinationConfigurationsIndex)
   {
     destinationConfigurationsJsonList[destinationConfigurationsIndex].AsObject(m_destinationConfigurations[destinationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("destinationConfigurations", std::move(destinationConfigurationsJsonList));

  }

  if(m_encodingNameHasBeenSet)
  {
   payload.WithString("encodingName", EncodingNameMapper::GetNameForEncodingName(m_encodingName));
  }

  if(m_encodingParametersHasBeenSet)
  {
   payload.WithObject("encodingParameters", m_encodingParameters.Jsonize());

  }

  if(m_mediaStreamNameHasBeenSet)
  {
   payload.WithString("mediaStreamName", m_mediaStreamName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
