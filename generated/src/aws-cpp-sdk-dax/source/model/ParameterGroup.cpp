/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/ParameterGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

ParameterGroup::ParameterGroup() : 
    m_parameterGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ParameterGroup::ParameterGroup(JsonView jsonValue) : 
    m_parameterGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterGroup& ParameterGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterGroupName"))
  {
    m_parameterGroupName = jsonValue.GetString("ParameterGroupName");

    m_parameterGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
