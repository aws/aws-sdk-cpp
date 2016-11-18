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
#include <aws/cloudsearchdomain/model/SuggestStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

SuggestStatus::SuggestStatus() : 
    m_timems(0),
    m_timemsHasBeenSet(false),
    m_ridHasBeenSet(false)
{
}

SuggestStatus::SuggestStatus(const JsonValue& jsonValue) : 
    m_timems(0),
    m_timemsHasBeenSet(false),
    m_ridHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestStatus& SuggestStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("timems"))
  {
    m_timems = jsonValue.GetInt64("timems");

    m_timemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rid"))
  {
    m_rid = jsonValue.GetString("rid");

    m_ridHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestStatus::Jsonize() const
{
  JsonValue payload;

  if(m_timemsHasBeenSet)
  {
   payload.WithInt64("timems", m_timems);

  }

  if(m_ridHasBeenSet)
  {
   payload.WithString("rid", m_rid);

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws