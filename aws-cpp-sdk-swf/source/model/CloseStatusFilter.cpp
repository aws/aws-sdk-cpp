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
#include <aws/swf/model/CloseStatusFilter.h>
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

CloseStatusFilter::CloseStatusFilter() : 
    m_status(CloseStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CloseStatusFilter::CloseStatusFilter(const JsonValue& jsonValue) : 
    m_status(CloseStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CloseStatusFilter& CloseStatusFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = CloseStatusMapper::GetCloseStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CloseStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CloseStatusMapper::GetNameForCloseStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws