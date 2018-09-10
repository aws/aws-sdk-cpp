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

#include <aws/iot/model/SalesforceAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SalesforceAction::SalesforceAction() : 
    m_tokenHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

SalesforceAction::SalesforceAction(JsonView jsonValue) : 
    m_tokenHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceAction& SalesforceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceAction::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
