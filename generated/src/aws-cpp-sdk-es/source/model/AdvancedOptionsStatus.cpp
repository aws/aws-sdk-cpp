/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AdvancedOptionsStatus.h>
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

AdvancedOptionsStatus::AdvancedOptionsStatus() : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AdvancedOptionsStatus::AdvancedOptionsStatus(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedOptionsStatus& AdvancedOptionsStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    Aws::Map<Aws::String, JsonView> optionsJsonMap = jsonValue.GetObject("Options").GetAllObjects();
    for(auto& optionsItem : optionsJsonMap)
    {
      m_options[optionsItem.first] = optionsItem.second.AsString();
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

JsonValue AdvancedOptionsStatus::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   JsonValue optionsJsonMap;
   for(auto& optionsItem : m_options)
   {
     optionsJsonMap.WithString(optionsItem.first, optionsItem.second);
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
