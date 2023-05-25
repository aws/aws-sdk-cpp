/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/CatalogResource.h>
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

CatalogResource::CatalogResource()
{
}

CatalogResource::CatalogResource(JsonView jsonValue)
{
  *this = jsonValue;
}

CatalogResource& CatalogResource::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue CatalogResource::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
