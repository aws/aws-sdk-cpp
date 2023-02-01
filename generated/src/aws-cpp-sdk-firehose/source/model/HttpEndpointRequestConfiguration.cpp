/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/HttpEndpointRequestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

HttpEndpointRequestConfiguration::HttpEndpointRequestConfiguration() : 
    m_contentEncoding(ContentEncoding::NOT_SET),
    m_contentEncodingHasBeenSet(false),
    m_commonAttributesHasBeenSet(false)
{
}

HttpEndpointRequestConfiguration::HttpEndpointRequestConfiguration(JsonView jsonValue) : 
    m_contentEncoding(ContentEncoding::NOT_SET),
    m_contentEncodingHasBeenSet(false),
    m_commonAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

HttpEndpointRequestConfiguration& HttpEndpointRequestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentEncoding"))
  {
    m_contentEncoding = ContentEncodingMapper::GetContentEncodingForName(jsonValue.GetString("ContentEncoding"));

    m_contentEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommonAttributes"))
  {
    Aws::Utils::Array<JsonView> commonAttributesJsonList = jsonValue.GetArray("CommonAttributes");
    for(unsigned commonAttributesIndex = 0; commonAttributesIndex < commonAttributesJsonList.GetLength(); ++commonAttributesIndex)
    {
      m_commonAttributes.push_back(commonAttributesJsonList[commonAttributesIndex].AsObject());
    }
    m_commonAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpEndpointRequestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contentEncodingHasBeenSet)
  {
   payload.WithString("ContentEncoding", ContentEncodingMapper::GetNameForContentEncoding(m_contentEncoding));
  }

  if(m_commonAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commonAttributesJsonList(m_commonAttributes.size());
   for(unsigned commonAttributesIndex = 0; commonAttributesIndex < commonAttributesJsonList.GetLength(); ++commonAttributesIndex)
   {
     commonAttributesJsonList[commonAttributesIndex].AsObject(m_commonAttributes[commonAttributesIndex].Jsonize());
   }
   payload.WithArray("CommonAttributes", std::move(commonAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
