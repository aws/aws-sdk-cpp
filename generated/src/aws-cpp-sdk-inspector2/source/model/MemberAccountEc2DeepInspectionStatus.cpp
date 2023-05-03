/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/MemberAccountEc2DeepInspectionStatus.h>
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

MemberAccountEc2DeepInspectionStatus::MemberAccountEc2DeepInspectionStatus() : 
    m_accountIdHasBeenSet(false),
    m_activateDeepInspection(false),
    m_activateDeepInspectionHasBeenSet(false)
{
}

MemberAccountEc2DeepInspectionStatus::MemberAccountEc2DeepInspectionStatus(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_activateDeepInspection(false),
    m_activateDeepInspectionHasBeenSet(false)
{
  *this = jsonValue;
}

MemberAccountEc2DeepInspectionStatus& MemberAccountEc2DeepInspectionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activateDeepInspection"))
  {
    m_activateDeepInspection = jsonValue.GetBool("activateDeepInspection");

    m_activateDeepInspectionHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberAccountEc2DeepInspectionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_activateDeepInspectionHasBeenSet)
  {
   payload.WithBool("activateDeepInspection", m_activateDeepInspection);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
