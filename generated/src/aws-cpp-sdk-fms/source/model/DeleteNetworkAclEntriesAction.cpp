/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DeleteNetworkAclEntriesAction.h>
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

DeleteNetworkAclEntriesAction::DeleteNetworkAclEntriesAction() : 
    m_descriptionHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_networkAclEntriesToBeDeletedHasBeenSet(false),
    m_fMSCanRemediate(false),
    m_fMSCanRemediateHasBeenSet(false)
{
}

DeleteNetworkAclEntriesAction::DeleteNetworkAclEntriesAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_networkAclEntriesToBeDeletedHasBeenSet(false),
    m_fMSCanRemediate(false),
    m_fMSCanRemediateHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteNetworkAclEntriesAction& DeleteNetworkAclEntriesAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAclId"))
  {
    m_networkAclId = jsonValue.GetObject("NetworkAclId");

    m_networkAclIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAclEntriesToBeDeleted"))
  {
    Aws::Utils::Array<JsonView> networkAclEntriesToBeDeletedJsonList = jsonValue.GetArray("NetworkAclEntriesToBeDeleted");
    for(unsigned networkAclEntriesToBeDeletedIndex = 0; networkAclEntriesToBeDeletedIndex < networkAclEntriesToBeDeletedJsonList.GetLength(); ++networkAclEntriesToBeDeletedIndex)
    {
      m_networkAclEntriesToBeDeleted.push_back(networkAclEntriesToBeDeletedJsonList[networkAclEntriesToBeDeletedIndex].AsObject());
    }
    m_networkAclEntriesToBeDeletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FMSCanRemediate"))
  {
    m_fMSCanRemediate = jsonValue.GetBool("FMSCanRemediate");

    m_fMSCanRemediateHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteNetworkAclEntriesAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_networkAclIdHasBeenSet)
  {
   payload.WithObject("NetworkAclId", m_networkAclId.Jsonize());

  }

  if(m_networkAclEntriesToBeDeletedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkAclEntriesToBeDeletedJsonList(m_networkAclEntriesToBeDeleted.size());
   for(unsigned networkAclEntriesToBeDeletedIndex = 0; networkAclEntriesToBeDeletedIndex < networkAclEntriesToBeDeletedJsonList.GetLength(); ++networkAclEntriesToBeDeletedIndex)
   {
     networkAclEntriesToBeDeletedJsonList[networkAclEntriesToBeDeletedIndex].AsObject(m_networkAclEntriesToBeDeleted[networkAclEntriesToBeDeletedIndex].Jsonize());
   }
   payload.WithArray("NetworkAclEntriesToBeDeleted", std::move(networkAclEntriesToBeDeletedJsonList));

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
