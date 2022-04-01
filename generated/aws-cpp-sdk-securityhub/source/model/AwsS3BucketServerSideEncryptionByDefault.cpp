/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionByDefault.h>
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

AwsS3BucketServerSideEncryptionByDefault::AwsS3BucketServerSideEncryptionByDefault() : 
    m_sSEAlgorithmHasBeenSet(false),
    m_kMSMasterKeyIDHasBeenSet(false)
{
}

AwsS3BucketServerSideEncryptionByDefault::AwsS3BucketServerSideEncryptionByDefault(JsonView jsonValue) : 
    m_sSEAlgorithmHasBeenSet(false),
    m_kMSMasterKeyIDHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketServerSideEncryptionByDefault& AwsS3BucketServerSideEncryptionByDefault::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SSEAlgorithm"))
  {
    m_sSEAlgorithm = jsonValue.GetString("SSEAlgorithm");

    m_sSEAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSMasterKeyID"))
  {
    m_kMSMasterKeyID = jsonValue.GetString("KMSMasterKeyID");

    m_kMSMasterKeyIDHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketServerSideEncryptionByDefault::Jsonize() const
{
  JsonValue payload;

  if(m_sSEAlgorithmHasBeenSet)
  {
   payload.WithString("SSEAlgorithm", m_sSEAlgorithm);

  }

  if(m_kMSMasterKeyIDHasBeenSet)
  {
   payload.WithString("KMSMasterKeyID", m_kMSMasterKeyID);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
