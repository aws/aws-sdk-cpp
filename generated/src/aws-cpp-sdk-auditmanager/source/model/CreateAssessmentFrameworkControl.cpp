/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/CreateAssessmentFrameworkControl.h>
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

CreateAssessmentFrameworkControl::CreateAssessmentFrameworkControl() : 
    m_idHasBeenSet(false)
{
}

CreateAssessmentFrameworkControl::CreateAssessmentFrameworkControl(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAssessmentFrameworkControl& CreateAssessmentFrameworkControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateAssessmentFrameworkControl::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
