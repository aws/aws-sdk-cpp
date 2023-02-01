/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CaseSummary.h>
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

CaseSummary::CaseSummary() : 
    m_caseIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

CaseSummary::CaseSummary(JsonView jsonValue) : 
    m_caseIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
  *this = jsonValue;
}

CaseSummary& CaseSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");

    m_caseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

    m_templateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CaseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
