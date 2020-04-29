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

#include <aws/iotsitewise/model/Identity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Identity::Identity() : 
    m_userHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

Identity::Identity(JsonView jsonValue) : 
    m_userHasBeenSet(false),
    m_groupHasBeenSet(false)
{
  *this = jsonValue;
}

Identity& Identity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetObject("group");

    m_groupHasBeenSet = true;
  }

  return *this;
}

JsonValue Identity::Jsonize() const
{
  JsonValue payload;

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  if(m_groupHasBeenSet)
  {
   payload.WithObject("group", m_group.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
