/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/AuditContext.h>
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

AuditContext::AuditContext() : 
    m_additionalAuditContextHasBeenSet(false)
{
}

AuditContext::AuditContext(JsonView jsonValue) : 
    m_additionalAuditContextHasBeenSet(false)
{
  *this = jsonValue;
}

AuditContext& AuditContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdditionalAuditContext"))
  {
    m_additionalAuditContext = jsonValue.GetString("AdditionalAuditContext");

    m_additionalAuditContextHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditContext::Jsonize() const
{
  JsonValue payload;

  if(m_additionalAuditContextHasBeenSet)
  {
   payload.WithString("AdditionalAuditContext", m_additionalAuditContext);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
