/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SkillsStoreSkill.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

SkillsStoreSkill::SkillsStoreSkill() : 
    m_skillIdHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_sampleUtterancesHasBeenSet(false),
    m_skillDetailsHasBeenSet(false),
    m_supportsLinking(false),
    m_supportsLinkingHasBeenSet(false)
{
}

SkillsStoreSkill::SkillsStoreSkill(JsonView jsonValue) : 
    m_skillIdHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_sampleUtterancesHasBeenSet(false),
    m_skillDetailsHasBeenSet(false),
    m_supportsLinking(false),
    m_supportsLinkingHasBeenSet(false)
{
  *this = jsonValue;
}

SkillsStoreSkill& SkillsStoreSkill::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SkillId"))
  {
    m_skillId = jsonValue.GetString("SkillId");

    m_skillIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkillName"))
  {
    m_skillName = jsonValue.GetString("SkillName");

    m_skillNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShortDescription"))
  {
    m_shortDescription = jsonValue.GetString("ShortDescription");

    m_shortDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconUrl"))
  {
    m_iconUrl = jsonValue.GetString("IconUrl");

    m_iconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("SampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsString());
    }
    m_sampleUtterancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkillDetails"))
  {
    m_skillDetails = jsonValue.GetObject("SkillDetails");

    m_skillDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportsLinking"))
  {
    m_supportsLinking = jsonValue.GetBool("SupportsLinking");

    m_supportsLinkingHasBeenSet = true;
  }

  return *this;
}

JsonValue SkillsStoreSkill::Jsonize() const
{
  JsonValue payload;

  if(m_skillIdHasBeenSet)
  {
   payload.WithString("SkillId", m_skillId);

  }

  if(m_skillNameHasBeenSet)
  {
   payload.WithString("SkillName", m_skillName);

  }

  if(m_shortDescriptionHasBeenSet)
  {
   payload.WithString("ShortDescription", m_shortDescription);

  }

  if(m_iconUrlHasBeenSet)
  {
   payload.WithString("IconUrl", m_iconUrl);

  }

  if(m_sampleUtterancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleUtterancesJsonList(m_sampleUtterances.size());
   for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
   {
     sampleUtterancesJsonList[sampleUtterancesIndex].AsString(m_sampleUtterances[sampleUtterancesIndex]);
   }
   payload.WithArray("SampleUtterances", std::move(sampleUtterancesJsonList));

  }

  if(m_skillDetailsHasBeenSet)
  {
   payload.WithObject("SkillDetails", m_skillDetails.Jsonize());

  }

  if(m_supportsLinkingHasBeenSet)
  {
   payload.WithBool("SupportsLinking", m_supportsLinking);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
