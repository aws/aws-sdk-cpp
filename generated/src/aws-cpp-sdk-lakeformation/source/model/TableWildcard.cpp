/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TableWildcard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

TableWildcard::TableWildcard()
{
}

TableWildcard::TableWildcard(JsonView jsonValue)
{
  *this = jsonValue;
}

TableWildcard& TableWildcard::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue TableWildcard::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
