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

#include <aws/lightsail/model/AutoSnapshotAddOnRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AutoSnapshotAddOnRequest::AutoSnapshotAddOnRequest() : 
    m_snapshotTimeOfDayHasBeenSet(false)
{
}

AutoSnapshotAddOnRequest::AutoSnapshotAddOnRequest(JsonView jsonValue) : 
    m_snapshotTimeOfDayHasBeenSet(false)
{
  *this = jsonValue;
}

AutoSnapshotAddOnRequest& AutoSnapshotAddOnRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("snapshotTimeOfDay"))
  {
    m_snapshotTimeOfDay = jsonValue.GetString("snapshotTimeOfDay");

    m_snapshotTimeOfDayHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoSnapshotAddOnRequest::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotTimeOfDayHasBeenSet)
  {
   payload.WithString("snapshotTimeOfDay", m_snapshotTimeOfDay);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
