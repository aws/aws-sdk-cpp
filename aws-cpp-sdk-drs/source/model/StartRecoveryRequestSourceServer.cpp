/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/StartRecoveryRequestSourceServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

StartRecoveryRequestSourceServer::StartRecoveryRequestSourceServer() : 
    m_recoverySnapshotIDHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false)
{
}

StartRecoveryRequestSourceServer::StartRecoveryRequestSourceServer(JsonView jsonValue) : 
    m_recoverySnapshotIDHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false)
{
  *this = jsonValue;
}

StartRecoveryRequestSourceServer& StartRecoveryRequestSourceServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recoverySnapshotID"))
  {
    m_recoverySnapshotID = jsonValue.GetString("recoverySnapshotID");

    m_recoverySnapshotIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  return *this;
}

JsonValue StartRecoveryRequestSourceServer::Jsonize() const
{
  JsonValue payload;

  if(m_recoverySnapshotIDHasBeenSet)
  {
   payload.WithString("recoverySnapshotID", m_recoverySnapshotID);

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
