/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Resource::Resource() : 
    m_arnHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_complianceCheckHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_complianceCheckHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceCheck"))
  {
    m_complianceCheck = jsonValue.GetString("complianceCheck");

    m_complianceCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_complianceCheckHasBeenSet)
  {
   payload.WithString("complianceCheck", m_complianceCheck);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
