/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareInvitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ShareInvitation::ShareInvitation() : 
    m_shareInvitationIdHasBeenSet(false),
    m_workloadIdHasBeenSet(false)
{
}

ShareInvitation::ShareInvitation(JsonView jsonValue) : 
    m_shareInvitationIdHasBeenSet(false),
    m_workloadIdHasBeenSet(false)
{
  *this = jsonValue;
}

ShareInvitation& ShareInvitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShareInvitationId"))
  {
    m_shareInvitationId = jsonValue.GetString("ShareInvitationId");

    m_shareInvitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareInvitation::Jsonize() const
{
  JsonValue payload;

  if(m_shareInvitationIdHasBeenSet)
  {
   payload.WithString("ShareInvitationId", m_shareInvitationId);

  }

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
