/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3ExpressDirectoryBucketConfiguration.h>
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

S3ExpressDirectoryBucketConfiguration::S3ExpressDirectoryBucketConfiguration() : 
    m_bucketPolicyHasBeenSet(false)
{
}

S3ExpressDirectoryBucketConfiguration::S3ExpressDirectoryBucketConfiguration(JsonView jsonValue) : 
    m_bucketPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

S3ExpressDirectoryBucketConfiguration& S3ExpressDirectoryBucketConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketPolicy"))
  {
    m_bucketPolicy = jsonValue.GetString("bucketPolicy");

    m_bucketPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ExpressDirectoryBucketConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketPolicyHasBeenSet)
  {
   payload.WithString("bucketPolicy", m_bucketPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
