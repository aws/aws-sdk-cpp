﻿/*
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

#include <aws/clouddirectory/model/BatchListIndex.h>
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

BatchListIndex::BatchListIndex() : 
    m_rangesOnIndexedValuesHasBeenSet(false),
    m_indexReferenceHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListIndex::BatchListIndex(JsonView jsonValue) : 
    m_rangesOnIndexedValuesHasBeenSet(false),
    m_indexReferenceHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListIndex& BatchListIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RangesOnIndexedValues"))
  {
    Array<JsonView> rangesOnIndexedValuesJsonList = jsonValue.GetArray("RangesOnIndexedValues");
    for(unsigned rangesOnIndexedValuesIndex = 0; rangesOnIndexedValuesIndex < rangesOnIndexedValuesJsonList.GetLength(); ++rangesOnIndexedValuesIndex)
    {
      m_rangesOnIndexedValues.push_back(rangesOnIndexedValuesJsonList[rangesOnIndexedValuesIndex].AsObject());
    }
    m_rangesOnIndexedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexReference"))
  {
    m_indexReference = jsonValue.GetObject("IndexReference");

    m_indexReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListIndex::Jsonize() const
{
  JsonValue payload;

  if(m_rangesOnIndexedValuesHasBeenSet)
  {
   Array<JsonValue> rangesOnIndexedValuesJsonList(m_rangesOnIndexedValues.size());
   for(unsigned rangesOnIndexedValuesIndex = 0; rangesOnIndexedValuesIndex < rangesOnIndexedValuesJsonList.GetLength(); ++rangesOnIndexedValuesIndex)
   {
     rangesOnIndexedValuesJsonList[rangesOnIndexedValuesIndex].AsObject(m_rangesOnIndexedValues[rangesOnIndexedValuesIndex].Jsonize());
   }
   payload.WithArray("RangesOnIndexedValues", std::move(rangesOnIndexedValuesJsonList));

  }

  if(m_indexReferenceHasBeenSet)
  {
   payload.WithObject("IndexReference", m_indexReference.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
