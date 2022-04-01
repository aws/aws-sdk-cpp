/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/RegionMapInputValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

RegionMapInputValue::RegionMapInputValue() : 
    m_sseKmsKeyIdHasBeenSet(false)
{
}

RegionMapInputValue::RegionMapInputValue(JsonView jsonValue) : 
    m_sseKmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

RegionMapInputValue& RegionMapInputValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sseKmsKeyId"))
  {
    m_sseKmsKeyId = jsonValue.GetString("sseKmsKeyId");

    m_sseKmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RegionMapInputValue::Jsonize() const
{
  JsonValue payload;

  if(m_sseKmsKeyIdHasBeenSet)
  {
   payload.WithString("sseKmsKeyId", m_sseKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
