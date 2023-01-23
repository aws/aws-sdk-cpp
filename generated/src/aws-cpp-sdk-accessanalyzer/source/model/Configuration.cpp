/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Configuration::Configuration() : 
    m_ebsSnapshotHasBeenSet(false),
    m_ecrRepositoryHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_efsFileSystemHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_rdsDbClusterSnapshotHasBeenSet(false),
    m_rdsDbSnapshotHasBeenSet(false),
    m_secretsManagerSecretHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_snsTopicHasBeenSet(false),
    m_sqsQueueHasBeenSet(false)
{
}

Configuration::Configuration(JsonView jsonValue) : 
    m_ebsSnapshotHasBeenSet(false),
    m_ecrRepositoryHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_efsFileSystemHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_rdsDbClusterSnapshotHasBeenSet(false),
    m_rdsDbSnapshotHasBeenSet(false),
    m_secretsManagerSecretHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_snsTopicHasBeenSet(false),
    m_sqsQueueHasBeenSet(false)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ebsSnapshot"))
  {
    m_ebsSnapshot = jsonValue.GetObject("ebsSnapshot");

    m_ebsSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrRepository"))
  {
    m_ecrRepository = jsonValue.GetObject("ecrRepository");

    m_ecrRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetObject("iamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("efsFileSystem"))
  {
    m_efsFileSystem = jsonValue.GetObject("efsFileSystem");

    m_efsFileSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKey"))
  {
    m_kmsKey = jsonValue.GetObject("kmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rdsDbClusterSnapshot"))
  {
    m_rdsDbClusterSnapshot = jsonValue.GetObject("rdsDbClusterSnapshot");

    m_rdsDbClusterSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rdsDbSnapshot"))
  {
    m_rdsDbSnapshot = jsonValue.GetObject("rdsDbSnapshot");

    m_rdsDbSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretsManagerSecret"))
  {
    m_secretsManagerSecret = jsonValue.GetObject("secretsManagerSecret");

    m_secretsManagerSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetObject("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsTopic"))
  {
    m_snsTopic = jsonValue.GetObject("snsTopic");

    m_snsTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqsQueue"))
  {
    m_sqsQueue = jsonValue.GetObject("sqsQueue");

    m_sqsQueueHasBeenSet = true;
  }

  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_ebsSnapshotHasBeenSet)
  {
   payload.WithObject("ebsSnapshot", m_ebsSnapshot.Jsonize());

  }

  if(m_ecrRepositoryHasBeenSet)
  {
   payload.WithObject("ecrRepository", m_ecrRepository.Jsonize());

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithObject("iamRole", m_iamRole.Jsonize());

  }

  if(m_efsFileSystemHasBeenSet)
  {
   payload.WithObject("efsFileSystem", m_efsFileSystem.Jsonize());

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithObject("kmsKey", m_kmsKey.Jsonize());

  }

  if(m_rdsDbClusterSnapshotHasBeenSet)
  {
   payload.WithObject("rdsDbClusterSnapshot", m_rdsDbClusterSnapshot.Jsonize());

  }

  if(m_rdsDbSnapshotHasBeenSet)
  {
   payload.WithObject("rdsDbSnapshot", m_rdsDbSnapshot.Jsonize());

  }

  if(m_secretsManagerSecretHasBeenSet)
  {
   payload.WithObject("secretsManagerSecret", m_secretsManagerSecret.Jsonize());

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithObject("s3Bucket", m_s3Bucket.Jsonize());

  }

  if(m_snsTopicHasBeenSet)
  {
   payload.WithObject("snsTopic", m_snsTopic.Jsonize());

  }

  if(m_sqsQueueHasBeenSet)
  {
   payload.WithObject("sqsQueue", m_sqsQueue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
