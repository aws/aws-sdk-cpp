/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Permission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Permission::Permission(JsonView jsonValue)
{
  *this = jsonValue;
}

Permission& Permission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("service"))
  {
    m_service = ServiceMapper::GetServiceForName(jsonValue.GetString("service"));
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operation"))
  {
    m_operation = OperationMapper::GetOperationForName(jsonValue.GetString("operation"));
    m_operationHasBeenSet = true;
  }
  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", ServiceMapper::GetNameForService(m_service));
  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", OperationMapper::GetNameForOperation(m_operation));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
