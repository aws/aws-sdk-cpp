/*
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
#include <aws/organizations/model/PolicyTargetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

PolicyTargetSummary::PolicyTargetSummary() : 
    m_targetIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PolicyTargetSummary::PolicyTargetSummary(const JsonValue& jsonValue) : 
    m_targetIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyTargetSummary& PolicyTargetSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyTargetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TargetTypeMapper::GetNameForTargetType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws