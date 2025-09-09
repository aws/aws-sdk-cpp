/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PredefinedAttributeConfiguration.h>
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

PredefinedAttributeConfiguration::PredefinedAttributeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PredefinedAttributeConfiguration& PredefinedAttributeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableValueValidationOnAssociation"))
  {
    m_enableValueValidationOnAssociation = jsonValue.GetBool("EnableValueValidationOnAssociation");
    m_enableValueValidationOnAssociationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsReadOnly"))
  {
    m_isReadOnly = jsonValue.GetBool("IsReadOnly");
    m_isReadOnlyHasBeenSet = true;
  }
  return *this;
}

JsonValue PredefinedAttributeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableValueValidationOnAssociationHasBeenSet)
  {
   payload.WithBool("EnableValueValidationOnAssociation", m_enableValueValidationOnAssociation);

  }

  if(m_isReadOnlyHasBeenSet)
  {
   payload.WithBool("IsReadOnly", m_isReadOnly);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
