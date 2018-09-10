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

#include <aws/waf/model/WebACLSummary.h>
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

WebACLSummary::WebACLSummary() : 
    m_webACLIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

WebACLSummary::WebACLSummary(JsonView jsonValue) : 
    m_webACLIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

WebACLSummary& WebACLSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebACLId"))
  {
    m_webACLId = jsonValue.GetString("WebACLId");

    m_webACLIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue WebACLSummary::Jsonize() const
{
  JsonValue payload;

  if(m_webACLIdHasBeenSet)
  {
   payload.WithString("WebACLId", m_webACLId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
