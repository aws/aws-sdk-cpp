/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketDetails.h>
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

AwsS3BucketDetails::AwsS3BucketDetails() : 
    m_ownerIdHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false)
{
}

AwsS3BucketDetails::AwsS3BucketDetails(JsonView jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketDetails& AwsS3BucketDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerName"))
  {
    m_ownerName = jsonValue.GetString("OwnerName");

    m_ownerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");

    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_ownerNameHasBeenSet)
  {
   payload.WithString("OwnerName", m_ownerName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
