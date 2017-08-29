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

#include <aws/clouddirectory/model/BatchListOutgoingTypedLinks.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListOutgoingTypedLinks::BatchListOutgoingTypedLinks() : 
    m_objectReferenceHasBeenSet(false),
    m_filterAttributeRangesHasBeenSet(false),
    m_filterTypedLinkHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

BatchListOutgoingTypedLinks::BatchListOutgoingTypedLinks(const JsonValue& jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_filterAttributeRangesHasBeenSet(false),
    m_filterTypedLinkHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListOutgoingTypedLinks& BatchListOutgoingTypedLinks::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterAttributeRanges"))
  {
    Array<JsonValue> filterAttributeRangesJsonList = jsonValue.GetArray("FilterAttributeRanges");
    for(unsigned filterAttributeRangesIndex = 0; filterAttributeRangesIndex < filterAttributeRangesJsonList.GetLength(); ++filterAttributeRangesIndex)
    {
      m_filterAttributeRanges.push_back(filterAttributeRangesJsonList[filterAttributeRangesIndex].AsObject());
    }
    m_filterAttributeRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterTypedLink"))
  {
    m_filterTypedLink = jsonValue.GetObject("FilterTypedLink");

    m_filterTypedLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListOutgoingTypedLinks::Jsonize() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_filterAttributeRangesHasBeenSet)
  {
   Array<JsonValue> filterAttributeRangesJsonList(m_filterAttributeRanges.size());
   for(unsigned filterAttributeRangesIndex = 0; filterAttributeRangesIndex < filterAttributeRangesJsonList.GetLength(); ++filterAttributeRangesIndex)
   {
     filterAttributeRangesJsonList[filterAttributeRangesIndex].AsObject(m_filterAttributeRanges[filterAttributeRangesIndex].Jsonize());
   }
   payload.WithArray("FilterAttributeRanges", std::move(filterAttributeRangesJsonList));

  }

  if(m_filterTypedLinkHasBeenSet)
  {
   payload.WithObject("FilterTypedLink", m_filterTypedLink.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
