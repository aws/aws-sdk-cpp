/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
