/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingAggregationAccountDetails.h>
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

FindingAggregationAccountDetails::FindingAggregationAccountDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

FindingAggregationAccountDetails& FindingAggregationAccountDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("account"))
  {
    m_account = jsonValue.GetString("account");
    m_accountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfActiveFindings"))
  {
    m_numberOfActiveFindings = jsonValue.GetInteger("numberOfActiveFindings");
    m_numberOfActiveFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("details"))
  {
    Aws::Map<Aws::String, JsonView> detailsJsonMap = jsonValue.GetObject("details").GetAllObjects();
    for(auto& detailsItem : detailsJsonMap)
    {
      m_details[detailsItem.first] = detailsItem.second.AsInteger();
    }
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingAggregationAccountDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("account", m_account);

  }

  if(m_numberOfActiveFindingsHasBeenSet)
  {
   payload.WithInteger("numberOfActiveFindings", m_numberOfActiveFindings);

  }

  if(m_detailsHasBeenSet)
  {
   JsonValue detailsJsonMap;
   for(auto& detailsItem : m_details)
   {
     detailsJsonMap.WithInteger(detailsItem.first, detailsItem.second);
   }
   payload.WithObject("details", std::move(detailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
