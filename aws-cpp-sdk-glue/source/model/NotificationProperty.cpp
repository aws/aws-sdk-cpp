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

#include <aws/glue/model/NotificationProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

NotificationProperty::NotificationProperty() : 
    m_notifyDelayAfter(0),
    m_notifyDelayAfterHasBeenSet(false)
{
}

NotificationProperty::NotificationProperty(JsonView jsonValue) : 
    m_notifyDelayAfter(0),
    m_notifyDelayAfterHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationProperty& NotificationProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotifyDelayAfter"))
  {
    m_notifyDelayAfter = jsonValue.GetInteger("NotifyDelayAfter");

    m_notifyDelayAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationProperty::Jsonize() const
{
  JsonValue payload;

  if(m_notifyDelayAfterHasBeenSet)
  {
   payload.WithInteger("NotifyDelayAfter", m_notifyDelayAfter);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
