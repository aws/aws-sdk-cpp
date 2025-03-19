/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/EnvironmentEnterSessionActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

EnvironmentEnterSessionActionDefinition::EnvironmentEnterSessionActionDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentEnterSessionActionDefinition& EnvironmentEnterSessionActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentEnterSessionActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
