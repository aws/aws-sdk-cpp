/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/ConnectCaseInputContent.h>
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

ConnectCaseInputContent::ConnectCaseInputContent(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectCaseInputContent& ConnectCaseInputContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");
    m_caseIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectCaseInputContent::Jsonize() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
