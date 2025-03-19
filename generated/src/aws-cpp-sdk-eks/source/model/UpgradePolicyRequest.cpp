/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpgradePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

UpgradePolicyRequest::UpgradePolicyRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

UpgradePolicyRequest& UpgradePolicyRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportType"))
  {
    m_supportType = SupportTypeMapper::GetSupportTypeForName(jsonValue.GetString("supportType"));
    m_supportTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpgradePolicyRequest::Jsonize() const
{
  JsonValue payload;

  if(m_supportTypeHasBeenSet)
  {
   payload.WithString("supportType", SupportTypeMapper::GetNameForSupportType(m_supportType));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
