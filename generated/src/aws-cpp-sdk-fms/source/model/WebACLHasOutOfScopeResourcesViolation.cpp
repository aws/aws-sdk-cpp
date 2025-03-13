/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/WebACLHasOutOfScopeResourcesViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

WebACLHasOutOfScopeResourcesViolation::WebACLHasOutOfScopeResourcesViolation(JsonView jsonValue)
{
  *this = jsonValue;
}

WebACLHasOutOfScopeResourcesViolation& WebACLHasOutOfScopeResourcesViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebACLArn"))
  {
    m_webACLArn = jsonValue.GetString("WebACLArn");
    m_webACLArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutOfScopeResourceList"))
  {
    Aws::Utils::Array<JsonView> outOfScopeResourceListJsonList = jsonValue.GetArray("OutOfScopeResourceList");
    for(unsigned outOfScopeResourceListIndex = 0; outOfScopeResourceListIndex < outOfScopeResourceListJsonList.GetLength(); ++outOfScopeResourceListIndex)
    {
      m_outOfScopeResourceList.push_back(outOfScopeResourceListJsonList[outOfScopeResourceListIndex].AsString());
    }
    m_outOfScopeResourceListHasBeenSet = true;
  }
  return *this;
}

JsonValue WebACLHasOutOfScopeResourcesViolation::Jsonize() const
{
  JsonValue payload;

  if(m_webACLArnHasBeenSet)
  {
   payload.WithString("WebACLArn", m_webACLArn);

  }

  if(m_outOfScopeResourceListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outOfScopeResourceListJsonList(m_outOfScopeResourceList.size());
   for(unsigned outOfScopeResourceListIndex = 0; outOfScopeResourceListIndex < outOfScopeResourceListJsonList.GetLength(); ++outOfScopeResourceListIndex)
   {
     outOfScopeResourceListJsonList[outOfScopeResourceListIndex].AsString(m_outOfScopeResourceList[outOfScopeResourceListIndex]);
   }
   payload.WithArray("OutOfScopeResourceList", std::move(outOfScopeResourceListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
