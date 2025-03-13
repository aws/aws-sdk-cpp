/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/CreateNetworkAclEntriesAction.h>
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

CreateNetworkAclEntriesAction::CreateNetworkAclEntriesAction(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateNetworkAclEntriesAction& CreateNetworkAclEntriesAction::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("NetworkAclEntriesToBeCreated"))
  {
    Aws::Utils::Array<JsonView> networkAclEntriesToBeCreatedJsonList = jsonValue.GetArray("NetworkAclEntriesToBeCreated");
    for(unsigned networkAclEntriesToBeCreatedIndex = 0; networkAclEntriesToBeCreatedIndex < networkAclEntriesToBeCreatedJsonList.GetLength(); ++networkAclEntriesToBeCreatedIndex)
    {
      m_networkAclEntriesToBeCreated.push_back(networkAclEntriesToBeCreatedJsonList[networkAclEntriesToBeCreatedIndex].AsObject());
    }
    m_networkAclEntriesToBeCreatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FMSCanRemediate"))
  {
    m_fMSCanRemediate = jsonValue.GetBool("FMSCanRemediate");
    m_fMSCanRemediateHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateNetworkAclEntriesAction::Jsonize() const
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

  if(m_networkAclEntriesToBeCreatedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkAclEntriesToBeCreatedJsonList(m_networkAclEntriesToBeCreated.size());
   for(unsigned networkAclEntriesToBeCreatedIndex = 0; networkAclEntriesToBeCreatedIndex < networkAclEntriesToBeCreatedJsonList.GetLength(); ++networkAclEntriesToBeCreatedIndex)
   {
     networkAclEntriesToBeCreatedJsonList[networkAclEntriesToBeCreatedIndex].AsObject(m_networkAclEntriesToBeCreated[networkAclEntriesToBeCreatedIndex].Jsonize());
   }
   payload.WithArray("NetworkAclEntriesToBeCreated", std::move(networkAclEntriesToBeCreatedJsonList));

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
