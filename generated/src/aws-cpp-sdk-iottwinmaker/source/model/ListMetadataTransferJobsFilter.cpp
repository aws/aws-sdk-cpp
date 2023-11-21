/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListMetadataTransferJobsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

ListMetadataTransferJobsFilter::ListMetadataTransferJobsFilter() : 
    m_workspaceIdHasBeenSet(false),
    m_state(MetadataTransferJobState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ListMetadataTransferJobsFilter::ListMetadataTransferJobsFilter(JsonView jsonValue) : 
    m_workspaceIdHasBeenSet(false),
    m_state(MetadataTransferJobState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ListMetadataTransferJobsFilter& ListMetadataTransferJobsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = MetadataTransferJobStateMapper::GetMetadataTransferJobStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ListMetadataTransferJobsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("workspaceId", m_workspaceId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", MetadataTransferJobStateMapper::GetNameForMetadataTransferJobState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
