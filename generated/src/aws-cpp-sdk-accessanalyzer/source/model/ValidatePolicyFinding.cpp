/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ValidatePolicyFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

ValidatePolicyFinding::ValidatePolicyFinding() : 
    m_findingDetailsHasBeenSet(false),
    m_findingType(ValidatePolicyFindingType::NOT_SET),
    m_findingTypeHasBeenSet(false),
    m_issueCodeHasBeenSet(false),
    m_learnMoreLinkHasBeenSet(false),
    m_locationsHasBeenSet(false)
{
}

ValidatePolicyFinding::ValidatePolicyFinding(JsonView jsonValue) : 
    m_findingDetailsHasBeenSet(false),
    m_findingType(ValidatePolicyFindingType::NOT_SET),
    m_findingTypeHasBeenSet(false),
    m_issueCodeHasBeenSet(false),
    m_learnMoreLinkHasBeenSet(false),
    m_locationsHasBeenSet(false)
{
  *this = jsonValue;
}

ValidatePolicyFinding& ValidatePolicyFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("findingDetails"))
  {
    m_findingDetails = jsonValue.GetString("findingDetails");

    m_findingDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingType"))
  {
    m_findingType = ValidatePolicyFindingTypeMapper::GetValidatePolicyFindingTypeForName(jsonValue.GetString("findingType"));

    m_findingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issueCode"))
  {
    m_issueCode = jsonValue.GetString("issueCode");

    m_issueCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("learnMoreLink"))
  {
    m_learnMoreLink = jsonValue.GetString("learnMoreLink");

    m_learnMoreLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locations"))
  {
    Aws::Utils::Array<JsonView> locationsJsonList = jsonValue.GetArray("locations");
    for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
    {
      m_locations.push_back(locationsJsonList[locationsIndex].AsObject());
    }
    m_locationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidatePolicyFinding::Jsonize() const
{
  JsonValue payload;

  if(m_findingDetailsHasBeenSet)
  {
   payload.WithString("findingDetails", m_findingDetails);

  }

  if(m_findingTypeHasBeenSet)
  {
   payload.WithString("findingType", ValidatePolicyFindingTypeMapper::GetNameForValidatePolicyFindingType(m_findingType));
  }

  if(m_issueCodeHasBeenSet)
  {
   payload.WithString("issueCode", m_issueCode);

  }

  if(m_learnMoreLinkHasBeenSet)
  {
   payload.WithString("learnMoreLink", m_learnMoreLink);

  }

  if(m_locationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsObject(m_locations[locationsIndex].Jsonize());
   }
   payload.WithArray("locations", std::move(locationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
