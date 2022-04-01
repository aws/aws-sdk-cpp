/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/StackInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

StackInstance::StackInstance() : 
    m_accountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_stackInstanceStatus(StackInstanceStatus::NOT_SET),
    m_stackInstanceStatusHasBeenSet(false)
{
}

StackInstance::StackInstance(JsonView jsonValue) : 
    m_accountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_stackInstanceStatus(StackInstanceStatus::NOT_SET),
    m_stackInstanceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

StackInstance& StackInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetString("Account");

    m_accountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackInstanceStatus"))
  {
    m_stackInstanceStatus = StackInstanceStatusMapper::GetStackInstanceStatusForName(jsonValue.GetString("StackInstanceStatus"));

    m_stackInstanceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue StackInstance::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("Account", m_account);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_stackInstanceStatusHasBeenSet)
  {
   payload.WithString("StackInstanceStatus", StackInstanceStatusMapper::GetNameForStackInstanceStatus(m_stackInstanceStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
