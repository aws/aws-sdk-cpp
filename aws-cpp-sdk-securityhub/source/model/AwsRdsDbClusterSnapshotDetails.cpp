/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbClusterSnapshotDetails.h>
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

AwsRdsDbClusterSnapshotDetails::AwsRdsDbClusterSnapshotDetails() : 
    m_availabilityZonesHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_dbClusterSnapshotIdentifierHasBeenSet(false),
    m_iamDatabaseAuthenticationEnabled(false),
    m_iamDatabaseAuthenticationEnabledHasBeenSet(false)
{
}

AwsRdsDbClusterSnapshotDetails::AwsRdsDbClusterSnapshotDetails(JsonView jsonValue) : 
    m_availabilityZonesHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_dbClusterSnapshotIdentifierHasBeenSet(false),
    m_iamDatabaseAuthenticationEnabled(false),
    m_iamDatabaseAuthenticationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbClusterSnapshotDetails& AwsRdsDbClusterSnapshotDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotCreateTime"))
  {
    m_snapshotCreateTime = jsonValue.GetString("SnapshotCreateTime");

    m_snapshotCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterCreateTime"))
  {
    m_clusterCreateTime = jsonValue.GetString("ClusterCreateTime");

    m_clusterCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUsername"))
  {
    m_masterUsername = jsonValue.GetString("MasterUsername");

    m_masterUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseModel"))
  {
    m_licenseModel = jsonValue.GetString("LicenseModel");

    m_licenseModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotType"))
  {
    m_snapshotType = jsonValue.GetString("SnapshotType");

    m_snapshotTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentProgress"))
  {
    m_percentProgress = jsonValue.GetInteger("PercentProgress");

    m_percentProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageEncrypted"))
  {
    m_storageEncrypted = jsonValue.GetBool("StorageEncrypted");

    m_storageEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterIdentifier"))
  {
    m_dbClusterIdentifier = jsonValue.GetString("DbClusterIdentifier");

    m_dbClusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterSnapshotIdentifier"))
  {
    m_dbClusterSnapshotIdentifier = jsonValue.GetString("DbClusterSnapshotIdentifier");

    m_dbClusterSnapshotIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamDatabaseAuthenticationEnabled"))
  {
    m_iamDatabaseAuthenticationEnabled = jsonValue.GetBool("IamDatabaseAuthenticationEnabled");

    m_iamDatabaseAuthenticationEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbClusterSnapshotDetails::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
   payload.WithString("SnapshotCreateTime", m_snapshotCreateTime);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_clusterCreateTimeHasBeenSet)
  {
   payload.WithString("ClusterCreateTime", m_clusterCreateTime);

  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("MasterUsername", m_masterUsername);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("LicenseModel", m_licenseModel);

  }

  if(m_snapshotTypeHasBeenSet)
  {
   payload.WithString("SnapshotType", m_snapshotType);

  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithInteger("PercentProgress", m_percentProgress);

  }

  if(m_storageEncryptedHasBeenSet)
  {
   payload.WithBool("StorageEncrypted", m_storageEncrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
   payload.WithString("DbClusterIdentifier", m_dbClusterIdentifier);

  }

  if(m_dbClusterSnapshotIdentifierHasBeenSet)
  {
   payload.WithString("DbClusterSnapshotIdentifier", m_dbClusterSnapshotIdentifier);

  }

  if(m_iamDatabaseAuthenticationEnabledHasBeenSet)
  {
   payload.WithBool("IamDatabaseAuthenticationEnabled", m_iamDatabaseAuthenticationEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
