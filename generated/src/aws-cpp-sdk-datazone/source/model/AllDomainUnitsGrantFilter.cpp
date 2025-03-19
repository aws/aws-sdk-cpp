/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AllDomainUnitsGrantFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AllDomainUnitsGrantFilter::AllDomainUnitsGrantFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

AllDomainUnitsGrantFilter& AllDomainUnitsGrantFilter::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AllDomainUnitsGrantFilter::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
