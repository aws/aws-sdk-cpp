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
#include <aws/waf/model/WafAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

WafAction::WafAction() : 
    m_type(WafActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

WafAction::WafAction(const JsonValue& jsonValue) : 
    m_type(WafActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

WafAction& WafAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = WafActionTypeMapper::GetWafActionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue WafAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", WafActionTypeMapper::GetNameForWafActionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws