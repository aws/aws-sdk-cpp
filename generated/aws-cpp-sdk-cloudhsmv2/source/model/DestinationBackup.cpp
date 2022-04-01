/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/DestinationBackup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

DestinationBackup::DestinationBackup() : 
    m_createTimestampHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceBackupHasBeenSet(false),
    m_sourceClusterHasBeenSet(false)
{
}

DestinationBackup::DestinationBackup(JsonView jsonValue) : 
    m_createTimestampHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceBackupHasBeenSet(false),
    m_sourceClusterHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationBackup& DestinationBackup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("SourceRegion");

    m_sourceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceBackup"))
  {
    m_sourceBackup = jsonValue.GetString("SourceBackup");

    m_sourceBackupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceCluster"))
  {
    m_sourceCluster = jsonValue.GetString("SourceCluster");

    m_sourceClusterHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationBackup::Jsonize() const
{
  JsonValue payload;

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("SourceRegion", m_sourceRegion);

  }

  if(m_sourceBackupHasBeenSet)
  {
   payload.WithString("SourceBackup", m_sourceBackup);

  }

  if(m_sourceClusterHasBeenSet)
  {
   payload.WithString("SourceCluster", m_sourceCluster);

  }

  return payload;
}

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
