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

#include <aws/guardduty/model/BlockPublicAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

BlockPublicAccess::BlockPublicAccess() : 
    m_ignorePublicAcls(false),
    m_ignorePublicAclsHasBeenSet(false),
    m_restrictPublicBuckets(false),
    m_restrictPublicBucketsHasBeenSet(false),
    m_blockPublicAcls(false),
    m_blockPublicAclsHasBeenSet(false),
    m_blockPublicPolicy(false),
    m_blockPublicPolicyHasBeenSet(false)
{
}

BlockPublicAccess::BlockPublicAccess(JsonView jsonValue) : 
    m_ignorePublicAcls(false),
    m_ignorePublicAclsHasBeenSet(false),
    m_restrictPublicBuckets(false),
    m_restrictPublicBucketsHasBeenSet(false),
    m_blockPublicAcls(false),
    m_blockPublicAclsHasBeenSet(false),
    m_blockPublicPolicy(false),
    m_blockPublicPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

BlockPublicAccess& BlockPublicAccess::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue BlockPublicAccess::Jsonize() const
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

  if(m_blockPublicAclsHasBeenSet)
  {
   payload.WithBool("blockPublicAcls", m_blockPublicAcls);

  }

  if(m_blockPublicPolicyHasBeenSet)
  {
   payload.WithBool("blockPublicPolicy", m_blockPublicPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
