/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/MinimumHealthyHosts.h>
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

MinimumHealthyHosts::MinimumHealthyHosts() : 
    m_type(MinimumHealthyHostsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

MinimumHealthyHosts::MinimumHealthyHosts(JsonView jsonValue) : 
    m_type(MinimumHealthyHostsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

MinimumHealthyHosts& MinimumHealthyHosts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = MinimumHealthyHostsTypeMapper::GetMinimumHealthyHostsTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue MinimumHealthyHosts::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MinimumHealthyHostsTypeMapper::GetNameForMinimumHealthyHostsType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
