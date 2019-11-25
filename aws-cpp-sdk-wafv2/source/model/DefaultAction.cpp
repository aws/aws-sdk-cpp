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

#include <aws/wafv2/model/DefaultAction.h>
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

DefaultAction::DefaultAction() : 
    m_blockHasBeenSet(false),
    m_allowHasBeenSet(false)
{
}

DefaultAction::DefaultAction(JsonView jsonValue) : 
    m_blockHasBeenSet(false),
    m_allowHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultAction& DefaultAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetObject("Block");

    m_blockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Allow"))
  {
    m_allow = jsonValue.GetObject("Allow");

    m_allowHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultAction::Jsonize() const
{
  JsonValue payload;

  if(m_blockHasBeenSet)
  {
   payload.WithObject("Block", m_block.Jsonize());

  }

  if(m_allowHasBeenSet)
  {
   payload.WithObject("Allow", m_allow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
