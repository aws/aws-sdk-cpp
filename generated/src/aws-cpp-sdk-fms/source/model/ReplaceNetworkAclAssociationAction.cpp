/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ReplaceNetworkAclAssociationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ReplaceNetworkAclAssociationAction::ReplaceNetworkAclAssociationAction() : 
    m_descriptionHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_fMSCanRemediate(false),
    m_fMSCanRemediateHasBeenSet(false)
{
}

ReplaceNetworkAclAssociationAction::ReplaceNetworkAclAssociationAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_fMSCanRemediate(false),
    m_fMSCanRemediateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplaceNetworkAclAssociationAction& ReplaceNetworkAclAssociationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetObject("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAclId"))
  {
    m_networkAclId = jsonValue.GetObject("NetworkAclId");

    m_networkAclIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FMSCanRemediate"))
  {
    m_fMSCanRemediate = jsonValue.GetBool("FMSCanRemediate");

    m_fMSCanRemediateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplaceNetworkAclAssociationAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithObject("AssociationId", m_associationId.Jsonize());

  }

  if(m_networkAclIdHasBeenSet)
  {
   payload.WithObject("NetworkAclId", m_networkAclId.Jsonize());

  }

  if(m_fMSCanRemediateHasBeenSet)
  {
   payload.WithBool("FMSCanRemediate", m_fMSCanRemediate);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
