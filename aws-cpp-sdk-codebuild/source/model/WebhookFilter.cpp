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

#include <aws/codebuild/model/WebhookFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

WebhookFilter::WebhookFilter() : 
    m_type(WebhookFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_excludeMatchedPattern(false),
    m_excludeMatchedPatternHasBeenSet(false)
{
}

WebhookFilter::WebhookFilter(JsonView jsonValue) : 
    m_type(WebhookFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_excludeMatchedPattern(false),
    m_excludeMatchedPatternHasBeenSet(false)
{
  *this = jsonValue;
}

WebhookFilter& WebhookFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = WebhookFilterTypeMapper::GetWebhookFilterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");

    m_patternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludeMatchedPattern"))
  {
    m_excludeMatchedPattern = jsonValue.GetBool("excludeMatchedPattern");

    m_excludeMatchedPatternHasBeenSet = true;
  }

  return *this;
}

JsonValue WebhookFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", WebhookFilterTypeMapper::GetNameForWebhookFilterType(m_type));
  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  if(m_excludeMatchedPatternHasBeenSet)
  {
   payload.WithBool("excludeMatchedPattern", m_excludeMatchedPattern);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
