/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/securityhub/model/ThreatIntelIndicator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ThreatIntelIndicator::ThreatIntelIndicator() : 
    m_type(ThreatIntelIndicatorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_category(ThreatIntelIndicatorCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceUrlHasBeenSet(false)
{
}

ThreatIntelIndicator::ThreatIntelIndicator(JsonView jsonValue) : 
    m_type(ThreatIntelIndicatorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_category(ThreatIntelIndicatorCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ThreatIntelIndicator& ThreatIntelIndicator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ThreatIntelIndicatorTypeMapper::GetThreatIntelIndicatorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = ThreatIntelIndicatorCategoryMapper::GetThreatIntelIndicatorCategoryForName(jsonValue.GetString("Category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastObservedAt"))
  {
    m_lastObservedAt = jsonValue.GetString("LastObservedAt");

    m_lastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceUrl"))
  {
    m_sourceUrl = jsonValue.GetString("SourceUrl");

    m_sourceUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ThreatIntelIndicator::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ThreatIntelIndicatorTypeMapper::GetNameForThreatIntelIndicatorType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", ThreatIntelIndicatorCategoryMapper::GetNameForThreatIntelIndicatorCategory(m_category));
  }

  if(m_lastObservedAtHasBeenSet)
  {
   payload.WithString("LastObservedAt", m_lastObservedAt);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_sourceUrlHasBeenSet)
  {
   payload.WithString("SourceUrl", m_sourceUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
