/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchListOutgoingTypedLinks::BatchListOutgoingTypedLinks(JsonView jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_filterAttributeRangesHasBeenSet(false),
    m_filterTypedLinkHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListOutgoingTypedLinks& BatchListOutgoingTypedLinks::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterAttributeRanges"))
  {
    Aws::Utils::Array<JsonView> filterAttributeRangesJsonList = jsonValue.GetArray("FilterAttributeRanges");
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
   Aws::Utils::Array<JsonValue> filterAttributeRangesJsonList(m_filterAttributeRanges.size());
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
