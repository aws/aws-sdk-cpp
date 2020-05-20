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

#include <aws/securityhub/model/StatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StatusReason::StatusReason() : 
    m_reasonCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

StatusReason::StatusReason(JsonView jsonValue) : 
    m_reasonCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

StatusReason& StatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = jsonValue.GetString("ReasonCode");

    m_reasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue StatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("ReasonCode", m_reasonCode);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
