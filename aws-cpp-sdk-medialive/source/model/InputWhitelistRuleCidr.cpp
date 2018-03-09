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

#include <aws/medialive/model/InputWhitelistRuleCidr.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputWhitelistRuleCidr::InputWhitelistRuleCidr() : 
    m_cidrHasBeenSet(false)
{
}

InputWhitelistRuleCidr::InputWhitelistRuleCidr(const JsonValue& jsonValue) : 
    m_cidrHasBeenSet(false)
{
  *this = jsonValue;
}

InputWhitelistRuleCidr& InputWhitelistRuleCidr::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("cidr"))
  {
    m_cidr = jsonValue.GetString("cidr");

    m_cidrHasBeenSet = true;
  }

  return *this;
}

JsonValue InputWhitelistRuleCidr::Jsonize() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("cidr", m_cidr);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
