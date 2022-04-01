/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

EC2TagFilter::EC2TagFilter() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(EC2TagFilterType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EC2TagFilter::EC2TagFilter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(EC2TagFilterType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EC2TagFilter& EC2TagFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EC2TagFilterTypeMapper::GetEC2TagFilterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2TagFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EC2TagFilterTypeMapper::GetNameForEC2TagFilterType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
