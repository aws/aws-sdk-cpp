/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CaseRuleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

CaseRuleDetails::CaseRuleDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CaseRuleDetails& CaseRuleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetObject("required");
    m_requiredHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseRuleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_requiredHasBeenSet)
  {
   payload.WithObject("required", m_required.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
