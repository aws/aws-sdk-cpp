/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CrawlFilterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

CrawlFilterConfiguration::CrawlFilterConfiguration() : 
    m_patternObjectFilterHasBeenSet(false),
    m_type(CrawlFilterConfigurationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CrawlFilterConfiguration::CrawlFilterConfiguration(JsonView jsonValue)
  : CrawlFilterConfiguration()
{
  *this = jsonValue;
}

CrawlFilterConfiguration& CrawlFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("patternObjectFilter"))
  {
    m_patternObjectFilter = jsonValue.GetObject("patternObjectFilter");

    m_patternObjectFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = CrawlFilterConfigurationTypeMapper::GetCrawlFilterConfigurationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_patternObjectFilterHasBeenSet)
  {
   payload.WithObject("patternObjectFilter", m_patternObjectFilter.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CrawlFilterConfigurationTypeMapper::GetNameForCrawlFilterConfigurationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
