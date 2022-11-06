/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ByteMatchSet::ByteMatchSet(JsonView jsonValue) : 
    m_byteMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_byteMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

ByteMatchSet& ByteMatchSet::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> byteMatchTuplesJsonList = jsonValue.GetArray("ByteMatchTuples");
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
   Aws::Utils::Array<JsonValue> byteMatchTuplesJsonList(m_byteMatchTuples.size());
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
