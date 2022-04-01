﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SlackMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SlackMetadata::SlackMetadata() : 
    m_oAuthScopesHasBeenSet(false)
{
}

SlackMetadata::SlackMetadata(JsonView jsonValue) : 
    m_oAuthScopesHasBeenSet(false)
{
  *this = jsonValue;
}

SlackMetadata& SlackMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oAuthScopes"))
  {
    Array<JsonView> oAuthScopesJsonList = jsonValue.GetArray("oAuthScopes");
    for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
    {
      m_oAuthScopes.push_back(oAuthScopesJsonList[oAuthScopesIndex].AsString());
    }
    m_oAuthScopesHasBeenSet = true;
  }

  return *this;
}

JsonValue SlackMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_oAuthScopesHasBeenSet)
  {
   Array<JsonValue> oAuthScopesJsonList(m_oAuthScopes.size());
   for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
   {
     oAuthScopesJsonList[oAuthScopesIndex].AsString(m_oAuthScopes[oAuthScopesIndex]);
   }
   payload.WithArray("oAuthScopes", std::move(oAuthScopesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
