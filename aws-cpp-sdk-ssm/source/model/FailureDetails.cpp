/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/FailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

FailureDetails::FailureDetails() : 
    m_failureStageHasBeenSet(false),
    m_failureTypeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

FailureDetails::FailureDetails(JsonView jsonValue) : 
    m_failureStageHasBeenSet(false),
    m_failureTypeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

FailureDetails& FailureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureStage"))
  {
    m_failureStage = jsonValue.GetString("FailureStage");

    m_failureStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureType"))
  {
    m_failureType = jsonValue.GetString("FailureType");

    m_failureTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    Aws::Map<Aws::String, JsonView> detailsJsonMap = jsonValue.GetObject("Details").GetAllObjects();
    for(auto& detailsItem : detailsJsonMap)
    {
      Aws::Utils::Array<JsonView> automationParameterValueListJsonList = detailsItem.second.AsArray();
      Aws::Vector<Aws::String> automationParameterValueListList;
      automationParameterValueListList.reserve((size_t)automationParameterValueListJsonList.GetLength());
      for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
      {
        automationParameterValueListList.push_back(automationParameterValueListJsonList[automationParameterValueListIndex].AsString());
      }
      m_details[detailsItem.first] = std::move(automationParameterValueListList);
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_failureStageHasBeenSet)
  {
   payload.WithString("FailureStage", m_failureStage);

  }

  if(m_failureTypeHasBeenSet)
  {
   payload.WithString("FailureType", m_failureType);

  }

  if(m_detailsHasBeenSet)
  {
   JsonValue detailsJsonMap;
   for(auto& detailsItem : m_details)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(detailsItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(detailsItem.second[automationParameterValueListIndex]);
     }
     detailsJsonMap.WithArray(detailsItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Details", std::move(detailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
