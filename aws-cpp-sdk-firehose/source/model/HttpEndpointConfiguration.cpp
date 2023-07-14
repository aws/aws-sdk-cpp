/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/HttpEndpointConfiguration.h>
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

HttpEndpointConfiguration::HttpEndpointConfiguration() : 
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accessKeyHasBeenSet(false)
{
}

HttpEndpointConfiguration::HttpEndpointConfiguration(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accessKeyHasBeenSet(false)
{
  *this = jsonValue;
}

HttpEndpointConfiguration& HttpEndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessKey"))
  {
    m_accessKey = jsonValue.GetString("AccessKey");

    m_accessKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpEndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_accessKeyHasBeenSet)
  {
   payload.WithString("AccessKey", m_accessKey);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
