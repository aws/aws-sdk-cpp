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
#include <aws/glacier/model/PartListElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

PartListElement::PartListElement() : 
    m_rangeInBytesHasBeenSet(false),
    m_sHA256TreeHashHasBeenSet(false)
{
}

PartListElement::PartListElement(const JsonValue& jsonValue) : 
    m_rangeInBytesHasBeenSet(false),
    m_sHA256TreeHashHasBeenSet(false)
{
  *this = jsonValue;
}

PartListElement& PartListElement::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RangeInBytes"))
  {
    m_rangeInBytes = jsonValue.GetString("RangeInBytes");

    m_rangeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SHA256TreeHash"))
  {
    m_sHA256TreeHash = jsonValue.GetString("SHA256TreeHash");

    m_sHA256TreeHashHasBeenSet = true;
  }

  return *this;
}

JsonValue PartListElement::Jsonize() const
{
  JsonValue payload;

  if(m_rangeInBytesHasBeenSet)
  {
   payload.WithString("RangeInBytes", m_rangeInBytes);

  }

  if(m_sHA256TreeHashHasBeenSet)
  {
   payload.WithString("SHA256TreeHash", m_sHA256TreeHash);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws