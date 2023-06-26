/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RuleMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

RuleMetadata::RuleMetadata() : 
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_ruleTagsHasBeenSet(false)
{
}

RuleMetadata::RuleMetadata(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_ruleTagsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleMetadata& RuleMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShortDescription"))
  {
    m_shortDescription = jsonValue.GetString("ShortDescription");

    m_shortDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongDescription"))
  {
    m_longDescription = jsonValue.GetString("LongDescription");

    m_longDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleTags"))
  {
    Aws::Utils::Array<JsonView> ruleTagsJsonList = jsonValue.GetArray("RuleTags");
    for(unsigned ruleTagsIndex = 0; ruleTagsIndex < ruleTagsJsonList.GetLength(); ++ruleTagsIndex)
    {
      m_ruleTags.push_back(ruleTagsJsonList[ruleTagsIndex].AsString());
    }
    m_ruleTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_shortDescriptionHasBeenSet)
  {
   payload.WithString("ShortDescription", m_shortDescription);

  }

  if(m_longDescriptionHasBeenSet)
  {
   payload.WithString("LongDescription", m_longDescription);

  }

  if(m_ruleTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleTagsJsonList(m_ruleTags.size());
   for(unsigned ruleTagsIndex = 0; ruleTagsIndex < ruleTagsJsonList.GetLength(); ++ruleTagsIndex)
   {
     ruleTagsJsonList[ruleTagsIndex].AsString(m_ruleTags[ruleTagsIndex]);
   }
   payload.WithArray("RuleTags", std::move(ruleTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
