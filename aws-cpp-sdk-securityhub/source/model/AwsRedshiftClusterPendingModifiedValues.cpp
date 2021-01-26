/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterPendingModifiedValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterPendingModifiedValues::AwsRedshiftClusterPendingModifiedValues() : 
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false)
{
}

AwsRedshiftClusterPendingModifiedValues::AwsRedshiftClusterPendingModifiedValues(JsonView jsonValue) : 
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterPendingModifiedValues& AwsRedshiftClusterPendingModifiedValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomatedSnapshotRetentionPeriod"))
  {
    m_automatedSnapshotRetentionPeriod = jsonValue.GetInteger("AutomatedSnapshotRetentionPeriod");

    m_automatedSnapshotRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");

    m_clusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterType"))
  {
    m_clusterType = jsonValue.GetString("ClusterType");

    m_clusterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterVersion"))
  {
    m_clusterVersion = jsonValue.GetString("ClusterVersion");

    m_clusterVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionType"))
  {
    m_encryptionType = jsonValue.GetString("EncryptionType");

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnhancedVpcRouting"))
  {
    m_enhancedVpcRouting = jsonValue.GetBool("EnhancedVpcRouting");

    m_enhancedVpcRoutingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceTrackName"))
  {
    m_maintenanceTrackName = jsonValue.GetString("MaintenanceTrackName");

    m_maintenanceTrackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUserPassword"))
  {
    m_masterUserPassword = jsonValue.GetString("MasterUserPassword");

    m_masterUserPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNodes"))
  {
    m_numberOfNodes = jsonValue.GetInteger("NumberOfNodes");

    m_numberOfNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterPendingModifiedValues::Jsonize() const
{
  JsonValue payload;

  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("AutomatedSnapshotRetentionPeriod", m_automatedSnapshotRetentionPeriod);

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("ClusterIdentifier", m_clusterIdentifier);

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("ClusterType", m_clusterType);

  }

  if(m_clusterVersionHasBeenSet)
  {
   payload.WithString("ClusterVersion", m_clusterVersion);

  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("EncryptionType", m_encryptionType);

  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
   payload.WithBool("EnhancedVpcRouting", m_enhancedVpcRouting);

  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
   payload.WithString("MaintenanceTrackName", m_maintenanceTrackName);

  }

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("MasterUserPassword", m_masterUserPassword);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_numberOfNodesHasBeenSet)
  {
   payload.WithInteger("NumberOfNodes", m_numberOfNodes);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
