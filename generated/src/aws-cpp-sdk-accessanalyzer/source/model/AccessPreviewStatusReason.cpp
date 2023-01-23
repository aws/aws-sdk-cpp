/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessPreviewStatusReason.h>
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

AccessPreviewStatusReason::AccessPreviewStatusReason() : 
    m_code(AccessPreviewStatusReasonCode::NOT_SET),
    m_codeHasBeenSet(false)
{
}

AccessPreviewStatusReason::AccessPreviewStatusReason(JsonView jsonValue) : 
    m_code(AccessPreviewStatusReasonCode::NOT_SET),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPreviewStatusReason& AccessPreviewStatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = AccessPreviewStatusReasonCodeMapper::GetAccessPreviewStatusReasonCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPreviewStatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", AccessPreviewStatusReasonCodeMapper::GetNameForAccessPreviewStatusReasonCode(m_code));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
