/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RightsizingRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

RightsizingRecommendation::RightsizingRecommendation() : 
    m_accountIdHasBeenSet(false),
    m_currentInstanceHasBeenSet(false),
    m_rightsizingType(RightsizingType::NOT_SET),
    m_rightsizingTypeHasBeenSet(false),
    m_modifyRecommendationDetailHasBeenSet(false),
    m_terminateRecommendationDetailHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false)
{
}

RightsizingRecommendation::RightsizingRecommendation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_currentInstanceHasBeenSet(false),
    m_rightsizingType(RightsizingType::NOT_SET),
    m_rightsizingTypeHasBeenSet(false),
    m_modifyRecommendationDetailHasBeenSet(false),
    m_terminateRecommendationDetailHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false)
{
  *this = jsonValue;
}

RightsizingRecommendation& RightsizingRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentInstance"))
  {
    m_currentInstance = jsonValue.GetObject("CurrentInstance");

    m_currentInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RightsizingType"))
  {
    m_rightsizingType = RightsizingTypeMapper::GetRightsizingTypeForName(jsonValue.GetString("RightsizingType"));

    m_rightsizingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifyRecommendationDetail"))
  {
    m_modifyRecommendationDetail = jsonValue.GetObject("ModifyRecommendationDetail");

    m_modifyRecommendationDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminateRecommendationDetail"))
  {
    m_terminateRecommendationDetail = jsonValue.GetObject("TerminateRecommendationDetail");

    m_terminateRecommendationDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> findingReasonCodesJsonList = jsonValue.GetArray("FindingReasonCodes");
    for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
    {
      m_findingReasonCodes.push_back(FindingReasonCodeMapper::GetFindingReasonCodeForName(findingReasonCodesJsonList[findingReasonCodesIndex].AsString()));
    }
    m_findingReasonCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue RightsizingRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_currentInstanceHasBeenSet)
  {
   payload.WithObject("CurrentInstance", m_currentInstance.Jsonize());

  }

  if(m_rightsizingTypeHasBeenSet)
  {
   payload.WithString("RightsizingType", RightsizingTypeMapper::GetNameForRightsizingType(m_rightsizingType));
  }

  if(m_modifyRecommendationDetailHasBeenSet)
  {
   payload.WithObject("ModifyRecommendationDetail", m_modifyRecommendationDetail.Jsonize());

  }

  if(m_terminateRecommendationDetailHasBeenSet)
  {
   payload.WithObject("TerminateRecommendationDetail", m_terminateRecommendationDetail.Jsonize());

  }

  if(m_findingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingReasonCodesJsonList(m_findingReasonCodes.size());
   for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
   {
     findingReasonCodesJsonList[findingReasonCodesIndex].AsString(FindingReasonCodeMapper::GetNameForFindingReasonCode(m_findingReasonCodes[findingReasonCodesIndex]));
   }
   payload.WithArray("FindingReasonCodes", std::move(findingReasonCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
