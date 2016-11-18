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
#include <aws/waf/model/Predicate.h>
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

Predicate::Predicate() : 
    m_negated(false),
    m_negatedHasBeenSet(false),
    m_type(PredicateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dataIdHasBeenSet(false)
{
}

Predicate::Predicate(const JsonValue& jsonValue) : 
    m_negated(false),
    m_negatedHasBeenSet(false),
    m_type(PredicateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dataIdHasBeenSet(false)
{
  *this = jsonValue;
}

Predicate& Predicate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Negated"))
  {
    m_negated = jsonValue.GetBool("Negated");

    m_negatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PredicateTypeMapper::GetPredicateTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataId"))
  {
    m_dataId = jsonValue.GetString("DataId");

    m_dataIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Predicate::Jsonize() const
{
  JsonValue payload;

  if(m_negatedHasBeenSet)
  {
   payload.WithBool("Negated", m_negated);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PredicateTypeMapper::GetNameForPredicateType(m_type));
  }

  if(m_dataIdHasBeenSet)
  {
   payload.WithString("DataId", m_dataId);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws