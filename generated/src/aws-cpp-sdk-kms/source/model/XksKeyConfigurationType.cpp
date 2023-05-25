/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/XksKeyConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

XksKeyConfigurationType::XksKeyConfigurationType() : 
    m_idHasBeenSet(false)
{
}

XksKeyConfigurationType::XksKeyConfigurationType(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

XksKeyConfigurationType& XksKeyConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue XksKeyConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
