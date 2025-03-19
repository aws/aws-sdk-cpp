/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/DomainDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

DomainDescription::DomainDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainDescription& DomainDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");
    m_encryptionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repositoryCount"))
  {
    m_repositoryCount = jsonValue.GetInteger("repositoryCount");
    m_repositoryCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetSizeBytes"))
  {
    m_assetSizeBytes = jsonValue.GetInt64("assetSizeBytes");
    m_assetSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("s3BucketArn");
    m_s3BucketArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DomainStatusMapper::GetNameForDomainStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_repositoryCountHasBeenSet)
  {
   payload.WithInteger("repositoryCount", m_repositoryCount);

  }

  if(m_assetSizeBytesHasBeenSet)
  {
   payload.WithInt64("assetSizeBytes", m_assetSizeBytes);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("s3BucketArn", m_s3BucketArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
