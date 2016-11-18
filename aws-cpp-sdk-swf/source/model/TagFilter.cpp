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
#include <aws/swf/model/TagFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

TagFilter::TagFilter() : 
    m_tagHasBeenSet(false)
{
}

TagFilter::TagFilter(const JsonValue& jsonValue) : 
    m_tagHasBeenSet(false)
{
  *this = jsonValue;
}

TagFilter& TagFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("tag"))
  {
    m_tag = jsonValue.GetString("tag");

    m_tagHasBeenSet = true;
  }

  return *this;
}

JsonValue TagFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagHasBeenSet)
  {
   payload.WithString("tag", m_tag);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws