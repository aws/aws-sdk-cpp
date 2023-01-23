/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssignContactCategoryActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AssignContactCategoryActionDefinition::AssignContactCategoryActionDefinition()
{
}

AssignContactCategoryActionDefinition::AssignContactCategoryActionDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

AssignContactCategoryActionDefinition& AssignContactCategoryActionDefinition::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AssignContactCategoryActionDefinition::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
