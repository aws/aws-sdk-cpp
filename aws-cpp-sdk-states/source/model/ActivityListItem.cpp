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

#include <aws/states/model/ActivityListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ActivityListItem::ActivityListItem() : 
    m_activityArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

ActivityListItem::ActivityListItem(const JsonValue& jsonValue) : 
    m_activityArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityListItem& ActivityListItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("activityArn"))
  {
    m_activityArn = jsonValue.GetString("activityArn");

    m_activityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityListItem::Jsonize() const
{
  JsonValue payload;

  if(m_activityArnHasBeenSet)
  {
   payload.WithString("activityArn", m_activityArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws