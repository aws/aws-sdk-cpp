/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/StatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

StatusReason::StatusReason(JsonView jsonValue)
{
  *this = jsonValue;
}

StatusReason& StatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = ReasonCodeMapper::GetReasonCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", ReasonCodeMapper::GetNameForReasonCode(m_code));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
