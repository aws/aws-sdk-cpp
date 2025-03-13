/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferenceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

IdNamespaceAssociationInputReferenceConfig::IdNamespaceAssociationInputReferenceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IdNamespaceAssociationInputReferenceConfig& IdNamespaceAssociationInputReferenceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputReferenceArn"))
  {
    m_inputReferenceArn = jsonValue.GetString("inputReferenceArn");
    m_inputReferenceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("manageResourcePolicies"))
  {
    m_manageResourcePolicies = jsonValue.GetBool("manageResourcePolicies");
    m_manageResourcePoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue IdNamespaceAssociationInputReferenceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_inputReferenceArnHasBeenSet)
  {
   payload.WithString("inputReferenceArn", m_inputReferenceArn);

  }

  if(m_manageResourcePoliciesHasBeenSet)
  {
   payload.WithBool("manageResourcePolicies", m_manageResourcePolicies);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
