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

#include <aws/batch/model/ContainerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ContainerSummary::ContainerSummary() : 
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

ContainerSummary::ContainerSummary(const JsonValue& jsonValue) : 
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerSummary& ContainerSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
