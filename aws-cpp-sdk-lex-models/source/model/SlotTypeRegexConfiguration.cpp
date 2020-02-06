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

#include <aws/lex-models/model/SlotTypeRegexConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

SlotTypeRegexConfiguration::SlotTypeRegexConfiguration() : 
    m_patternHasBeenSet(false)
{
}

SlotTypeRegexConfiguration::SlotTypeRegexConfiguration(JsonView jsonValue) : 
    m_patternHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeRegexConfiguration& SlotTypeRegexConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");

    m_patternHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeRegexConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
