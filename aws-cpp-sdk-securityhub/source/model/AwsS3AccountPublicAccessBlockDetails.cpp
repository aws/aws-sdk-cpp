/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3AccountPublicAccessBlockDetails.h>
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

AwsS3AccountPublicAccessBlockDetails::AwsS3AccountPublicAccessBlockDetails() : 
    m_blockPublicAcls(false),
    m_blockPublicAclsHasBeenSet(false),
    m_blockPublicPolicy(false),
    m_blockPublicPolicyHasBeenSet(false),
    m_ignorePublicAcls(false),
    m_ignorePublicAclsHasBeenSet(false),
    m_restrictPublicBuckets(false),
    m_restrictPublicBucketsHasBeenSet(false)
{
}

AwsS3AccountPublicAccessBlockDetails::AwsS3AccountPublicAccessBlockDetails(JsonView jsonValue) : 
    m_blockPublicAcls(false),
    m_blockPublicAclsHasBeenSet(false),
    m_blockPublicPolicy(false),
    m_blockPublicPolicyHasBeenSet(false),
    m_ignorePublicAcls(false),
    m_ignorePublicAclsHasBeenSet(false),
    m_restrictPublicBuckets(false),
    m_restrictPublicBucketsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3AccountPublicAccessBlockDetails& AwsS3AccountPublicAccessBlockDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockPublicAcls"))
  {
    m_blockPublicAcls = jsonValue.GetBool("BlockPublicAcls");

    m_blockPublicAclsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockPublicPolicy"))
  {
    m_blockPublicPolicy = jsonValue.GetBool("BlockPublicPolicy");

    m_blockPublicPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IgnorePublicAcls"))
  {
    m_ignorePublicAcls = jsonValue.GetBool("IgnorePublicAcls");

    m_ignorePublicAclsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestrictPublicBuckets"))
  {
    m_restrictPublicBuckets = jsonValue.GetBool("RestrictPublicBuckets");

    m_restrictPublicBucketsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3AccountPublicAccessBlockDetails::Jsonize() const
{
  JsonValue payload;

  if(m_blockPublicAclsHasBeenSet)
  {
   payload.WithBool("BlockPublicAcls", m_blockPublicAcls);

  }

  if(m_blockPublicPolicyHasBeenSet)
  {
   payload.WithBool("BlockPublicPolicy", m_blockPublicPolicy);

  }

  if(m_ignorePublicAclsHasBeenSet)
  {
   payload.WithBool("IgnorePublicAcls", m_ignorePublicAcls);

  }

  if(m_restrictPublicBucketsHasBeenSet)
  {
   payload.WithBool("RestrictPublicBuckets", m_restrictPublicBuckets);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
