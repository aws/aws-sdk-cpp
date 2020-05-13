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

#include <aws/macie2/model/DescribeBucketsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBucketsRequest::DescribeBucketsRequest() : 
    m_criteriaHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false)
{
}

Aws::String DescribeBucketsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_criteriaHasBeenSet)
  {
   JsonValue criteriaJsonMap;
   for(auto& criteriaItem : m_criteria)
   {
     criteriaJsonMap.WithObject(criteriaItem.first, criteriaItem.second.Jsonize());
   }
   payload.WithObject("criteria", std::move(criteriaJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_sortCriteriaHasBeenSet)
  {
   payload.WithObject("sortCriteria", m_sortCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




