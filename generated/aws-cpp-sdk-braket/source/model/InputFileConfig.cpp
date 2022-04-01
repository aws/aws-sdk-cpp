/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/InputFileConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

InputFileConfig::InputFileConfig() : 
    m_channelNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
}

InputFileConfig::InputFileConfig(JsonView jsonValue) : 
    m_channelNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

InputFileConfig& InputFileConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetObject("dataSource");

    m_dataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue InputFileConfig::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
