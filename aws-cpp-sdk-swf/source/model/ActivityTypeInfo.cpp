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

#include <aws/swf/model/ActivityTypeInfo.h>
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

ActivityTypeInfo::ActivityTypeInfo() : 
    m_activityTypeHasBeenSet(false),
    m_status(RegistrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_deprecationDateHasBeenSet(false)
{
}

ActivityTypeInfo::ActivityTypeInfo(JsonView jsonValue) : 
    m_activityTypeHasBeenSet(false),
    m_status(RegistrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_deprecationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityTypeInfo& ActivityTypeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activityType"))
  {
    m_activityType = jsonValue.GetObject("activityType");

    m_activityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deprecationDate"))
  {
    m_deprecationDate = jsonValue.GetDouble("deprecationDate");

    m_deprecationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityTypeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_activityTypeHasBeenSet)
  {
   payload.WithObject("activityType", m_activityType.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RegistrationStatusMapper::GetNameForRegistrationStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_deprecationDateHasBeenSet)
  {
   payload.WithDouble("deprecationDate", m_deprecationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
