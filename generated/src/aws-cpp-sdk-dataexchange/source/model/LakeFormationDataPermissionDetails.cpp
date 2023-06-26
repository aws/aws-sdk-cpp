/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LakeFormationDataPermissionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

LakeFormationDataPermissionDetails::LakeFormationDataPermissionDetails() : 
    m_lFTagPolicyHasBeenSet(false)
{
}

LakeFormationDataPermissionDetails::LakeFormationDataPermissionDetails(JsonView jsonValue) : 
    m_lFTagPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

LakeFormationDataPermissionDetails& LakeFormationDataPermissionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LFTagPolicy"))
  {
    m_lFTagPolicy = jsonValue.GetObject("LFTagPolicy");

    m_lFTagPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeFormationDataPermissionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lFTagPolicyHasBeenSet)
  {
   payload.WithObject("LFTagPolicy", m_lFTagPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
