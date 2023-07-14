/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/OperationStatusFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

OperationStatusFilter::OperationStatusFilter() : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false)
{
}

OperationStatusFilter::OperationStatusFilter(JsonView jsonValue) : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

OperationStatusFilter& OperationStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusValuesMapper::GetStatusValuesForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue OperationStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusValuesMapper::GetNameForStatusValues(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
