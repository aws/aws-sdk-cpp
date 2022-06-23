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

Permission::Permission() : 
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_service(Service::NOT_SET),
    m_serviceHasBeenSet(false)
{
}

Permission::Permission(JsonView jsonValue) : 
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_service(Service::NOT_SET),
    m_serviceHasBeenSet(false)
{
  *this = jsonValue;
}

Permission& Permission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operation"))
  {
    m_operation = OperationMapper::GetOperationForName(jsonValue.GetString("operation"));

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = ServiceMapper::GetServiceForName(jsonValue.GetString("service"));

    m_serviceHasBeenSet = true;
  }

  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", OperationMapper::GetNameForOperation(m_operation));
  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", ServiceMapper::GetNameForService(m_service));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
