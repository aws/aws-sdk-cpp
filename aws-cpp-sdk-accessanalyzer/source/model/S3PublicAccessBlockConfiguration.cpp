/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3PublicAccessBlockConfiguration.h>
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

S3PublicAccessBlockConfiguration::S3PublicAccessBlockConfiguration() : 
    m_ignorePublicAcls(false),
    m_ignorePublicAclsHasBeenSet(false),
    m_restrictPublicBuckets(false),
    m_restrictPublicBucketsHasBeenSet(false)
{
}

S3PublicAccessBlockConfiguration::S3PublicAccessBlockConfiguration(JsonView jsonValue) : 
    m_ignorePublicAcls(false),
    m_ignorePublicAclsHasBeenSet(false),
    m_restrictPublicBuckets(false),
    m_restrictPublicBucketsHasBeenSet(false)
{
  *this = jsonValue;
}

S3PublicAccessBlockConfiguration& S3PublicAccessBlockConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ignorePublicAcls"))
  {
    m_ignorePublicAcls = jsonValue.GetBool("ignorePublicAcls");

    m_ignorePublicAclsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restrictPublicBuckets"))
  {
    m_restrictPublicBuckets = jsonValue.GetBool("restrictPublicBuckets");

    m_restrictPublicBucketsHasBeenSet = true;
  }

  return *this;
}

JsonValue S3PublicAccessBlockConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ignorePublicAclsHasBeenSet)
  {
   payload.WithBool("ignorePublicAcls", m_ignorePublicAcls);

  }

  if(m_restrictPublicBucketsHasBeenSet)
  {
   payload.WithBool("restrictPublicBuckets", m_restrictPublicBuckets);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
