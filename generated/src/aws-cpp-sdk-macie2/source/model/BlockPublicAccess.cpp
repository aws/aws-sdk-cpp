/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BlockPublicAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BlockPublicAccess::BlockPublicAccess() : 
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

BlockPublicAccess::BlockPublicAccess(JsonView jsonValue) : 
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

BlockPublicAccess& BlockPublicAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockPublicAcls"))
  {
    m_blockPublicAcls = jsonValue.GetBool("blockPublicAcls");

    m_blockPublicAclsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockPublicPolicy"))
  {
    m_blockPublicPolicy = jsonValue.GetBool("blockPublicPolicy");

    m_blockPublicPolicyHasBeenSet = true;
  }

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

JsonValue BlockPublicAccess::Jsonize() const
{
  JsonValue payload;

  if(m_blockPublicAclsHasBeenSet)
  {
   payload.WithBool("blockPublicAcls", m_blockPublicAcls);

  }

  if(m_blockPublicPolicyHasBeenSet)
  {
   payload.WithBool("blockPublicPolicy", m_blockPublicPolicy);

  }

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
} // namespace Macie2
} // namespace Aws
