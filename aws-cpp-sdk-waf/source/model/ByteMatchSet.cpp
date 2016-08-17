/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/model/ByteMatchSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

ByteMatchSet::ByteMatchSet() : 
    m_byteMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_byteMatchTuplesHasBeenSet(false)
{
}

ByteMatchSet::ByteMatchSet(const JsonValue& jsonValue) : 
    m_byteMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_byteMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

ByteMatchSet& ByteMatchSet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ByteMatchSetId"))
  {
    m_byteMatchSetId = jsonValue.GetString("ByteMatchSetId");

    m_byteMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ByteMatchTuples"))
  {
    Array<JsonValue> byteMatchTuplesJsonList = jsonValue.GetArray("ByteMatchTuples");
    for(unsigned byteMatchTuplesIndex = 0; byteMatchTuplesIndex < byteMatchTuplesJsonList.GetLength(); ++byteMatchTuplesIndex)
    {
      m_byteMatchTuples.push_back(byteMatchTuplesJsonList[byteMatchTuplesIndex].AsObject());
    }
    m_byteMatchTuplesHasBeenSet = true;
  }

  return *this;
}

JsonValue ByteMatchSet::Jsonize() const
{
  JsonValue payload;

  if(m_byteMatchSetIdHasBeenSet)
  {
   payload.WithString("ByteMatchSetId", m_byteMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_byteMatchTuplesHasBeenSet)
  {
   Array<JsonValue> byteMatchTuplesJsonList(m_byteMatchTuples.size());
   for(unsigned byteMatchTuplesIndex = 0; byteMatchTuplesIndex < byteMatchTuplesJsonList.GetLength(); ++byteMatchTuplesIndex)
   {
     byteMatchTuplesJsonList[byteMatchTuplesIndex].AsObject(m_byteMatchTuples[byteMatchTuplesIndex].Jsonize());
   }
   payload.WithArray("ByteMatchTuples", std::move(byteMatchTuplesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws