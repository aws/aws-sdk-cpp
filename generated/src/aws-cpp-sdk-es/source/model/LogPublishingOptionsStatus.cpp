/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/LogPublishingOptionsStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

LogPublishingOptionsStatus::LogPublishingOptionsStatus() : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

LogPublishingOptionsStatus::LogPublishingOptionsStatus(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LogPublishingOptionsStatus& LogPublishingOptionsStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    Aws::Map<Aws::String, JsonView> optionsJsonMap = jsonValue.GetObject("Options").GetAllObjects();
    for(auto& optionsItem : optionsJsonMap)
    {
      m_options[LogTypeMapper::GetLogTypeForName(optionsItem.first)] = optionsItem.second.AsObject();
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LogPublishingOptionsStatus::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   JsonValue optionsJsonMap;
   for(auto& optionsItem : m_options)
   {
     optionsJsonMap.WithObject(LogTypeMapper::GetNameForLogType(optionsItem.first), optionsItem.second.Jsonize());
   }
   payload.WithObject("Options", std::move(optionsJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
