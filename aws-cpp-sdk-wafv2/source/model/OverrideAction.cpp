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

#include <aws/wafv2/model/OverrideAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

OverrideAction::OverrideAction() : 
    m_countHasBeenSet(false),
    m_noneHasBeenSet(false)
{
}

OverrideAction::OverrideAction(JsonView jsonValue) : 
    m_countHasBeenSet(false),
    m_noneHasBeenSet(false)
{
  *this = jsonValue;
}

OverrideAction& OverrideAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetObject("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("None"))
  {
    m_none = jsonValue.GetObject("None");

    m_noneHasBeenSet = true;
  }

  return *this;
}

JsonValue OverrideAction::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithObject("Count", m_count.Jsonize());

  }

  if(m_noneHasBeenSet)
  {
   payload.WithObject("None", m_none.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
