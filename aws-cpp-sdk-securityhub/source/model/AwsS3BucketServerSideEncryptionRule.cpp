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

#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionRule.h>
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

AwsS3BucketServerSideEncryptionRule::AwsS3BucketServerSideEncryptionRule() : 
    m_applyServerSideEncryptionByDefaultHasBeenSet(false)
{
}

AwsS3BucketServerSideEncryptionRule::AwsS3BucketServerSideEncryptionRule(JsonView jsonValue) : 
    m_applyServerSideEncryptionByDefaultHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketServerSideEncryptionRule& AwsS3BucketServerSideEncryptionRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplyServerSideEncryptionByDefault"))
  {
    m_applyServerSideEncryptionByDefault = jsonValue.GetObject("ApplyServerSideEncryptionByDefault");

    m_applyServerSideEncryptionByDefaultHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketServerSideEncryptionRule::Jsonize() const
{
  JsonValue payload;

  if(m_applyServerSideEncryptionByDefaultHasBeenSet)
  {
   payload.WithObject("ApplyServerSideEncryptionByDefault", m_applyServerSideEncryptionByDefault.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
