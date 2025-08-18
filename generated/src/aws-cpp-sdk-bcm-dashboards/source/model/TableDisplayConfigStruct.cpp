/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/TableDisplayConfigStruct.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

TableDisplayConfigStruct::TableDisplayConfigStruct(JsonView jsonValue)
{
  *this = jsonValue;
}

TableDisplayConfigStruct& TableDisplayConfigStruct::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue TableDisplayConfigStruct::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
