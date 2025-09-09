/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InputPredefinedAttributeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

InputPredefinedAttributeConfiguration::InputPredefinedAttributeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InputPredefinedAttributeConfiguration& InputPredefinedAttributeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableValueValidationOnAssociation"))
  {
    m_enableValueValidationOnAssociation = jsonValue.GetBool("EnableValueValidationOnAssociation");
    m_enableValueValidationOnAssociationHasBeenSet = true;
  }
  return *this;
}

JsonValue InputPredefinedAttributeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableValueValidationOnAssociationHasBeenSet)
  {
   payload.WithBool("EnableValueValidationOnAssociation", m_enableValueValidationOnAssociation);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
