﻿/*
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
#include <aws/es/model/AccessPoliciesStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AccessPoliciesStatus::AccessPoliciesStatus() : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AccessPoliciesStatus::AccessPoliciesStatus(const JsonValue& jsonValue) : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPoliciesStatus& AccessPoliciesStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetString("Options");

    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPoliciesStatus::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   payload.WithString("Options", m_options);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws