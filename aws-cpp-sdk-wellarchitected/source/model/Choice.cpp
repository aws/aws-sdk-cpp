/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/Choice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

Choice::Choice() : 
    m_choiceIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_helpfulResourceHasBeenSet(false),
    m_improvementPlanHasBeenSet(false),
    m_additionalResourcesHasBeenSet(false)
{
}

Choice::Choice(JsonView jsonValue) : 
    m_choiceIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_helpfulResourceHasBeenSet(false),
    m_improvementPlanHasBeenSet(false),
    m_additionalResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

Choice& Choice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChoiceId"))
  {
    m_choiceId = jsonValue.GetString("ChoiceId");

    m_choiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HelpfulResource"))
  {
    m_helpfulResource = jsonValue.GetObject("HelpfulResource");

    m_helpfulResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImprovementPlan"))
  {
    m_improvementPlan = jsonValue.GetObject("ImprovementPlan");

    m_improvementPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalResources"))
  {
    Aws::Utils::Array<JsonView> additionalResourcesJsonList = jsonValue.GetArray("AdditionalResources");
    for(unsigned additionalResourcesIndex = 0; additionalResourcesIndex < additionalResourcesJsonList.GetLength(); ++additionalResourcesIndex)
    {
      m_additionalResources.push_back(additionalResourcesJsonList[additionalResourcesIndex].AsObject());
    }
    m_additionalResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue Choice::Jsonize() const
{
  JsonValue payload;

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_helpfulResourceHasBeenSet)
  {
   payload.WithObject("HelpfulResource", m_helpfulResource.Jsonize());

  }

  if(m_improvementPlanHasBeenSet)
  {
   payload.WithObject("ImprovementPlan", m_improvementPlan.Jsonize());

  }

  if(m_additionalResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalResourcesJsonList(m_additionalResources.size());
   for(unsigned additionalResourcesIndex = 0; additionalResourcesIndex < additionalResourcesJsonList.GetLength(); ++additionalResourcesIndex)
   {
     additionalResourcesJsonList[additionalResourcesIndex].AsObject(m_additionalResources[additionalResourcesIndex].Jsonize());
   }
   payload.WithArray("AdditionalResources", std::move(additionalResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
