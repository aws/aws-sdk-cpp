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

#include <aws/xray/model/Segment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Segment::Segment() : 
    m_idHasBeenSet(false),
    m_documentHasBeenSet(false)
{
}

Segment::Segment(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_documentHasBeenSet(false)
{
  *this = jsonValue;
}

Segment& Segment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Document"))
  {
    m_document = jsonValue.GetString("Document");

    m_documentHasBeenSet = true;
  }

  return *this;
}

JsonValue Segment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithString("Document", m_document);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws