/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentRunWith.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

ComponentRunWith::ComponentRunWith() : 
    m_posixUserHasBeenSet(false)
{
}

ComponentRunWith::ComponentRunWith(JsonView jsonValue) : 
    m_posixUserHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentRunWith& ComponentRunWith::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("posixUser"))
  {
    m_posixUser = jsonValue.GetString("posixUser");

    m_posixUserHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentRunWith::Jsonize() const
{
  JsonValue payload;

  if(m_posixUserHasBeenSet)
  {
   payload.WithString("posixUser", m_posixUser);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
