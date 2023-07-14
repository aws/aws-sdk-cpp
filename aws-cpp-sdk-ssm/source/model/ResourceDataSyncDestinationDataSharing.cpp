/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncDestinationDataSharing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncDestinationDataSharing::ResourceDataSyncDestinationDataSharing() : 
    m_destinationDataSharingTypeHasBeenSet(false)
{
}

ResourceDataSyncDestinationDataSharing::ResourceDataSyncDestinationDataSharing(JsonView jsonValue) : 
    m_destinationDataSharingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncDestinationDataSharing& ResourceDataSyncDestinationDataSharing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationDataSharingType"))
  {
    m_destinationDataSharingType = jsonValue.GetString("DestinationDataSharingType");

    m_destinationDataSharingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncDestinationDataSharing::Jsonize() const
{
  JsonValue payload;

  if(m_destinationDataSharingTypeHasBeenSet)
  {
   payload.WithString("DestinationDataSharingType", m_destinationDataSharingType);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
