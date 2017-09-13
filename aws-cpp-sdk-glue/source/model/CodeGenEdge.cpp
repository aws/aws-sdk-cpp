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

#include <aws/glue/model/CodeGenEdge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CodeGenEdge::CodeGenEdge() : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetParameterHasBeenSet(false)
{
}

CodeGenEdge::CodeGenEdge(const JsonValue& jsonValue) : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetParameterHasBeenSet(false)
{
  *this = jsonValue;
}

CodeGenEdge& CodeGenEdge::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetParameter"))
  {
    m_targetParameter = jsonValue.GetString("TargetParameter");

    m_targetParameterHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeGenEdge::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_targetParameterHasBeenSet)
  {
   payload.WithString("TargetParameter", m_targetParameter);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
