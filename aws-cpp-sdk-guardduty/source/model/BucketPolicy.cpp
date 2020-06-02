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

#include <aws/guardduty/model/BucketPolicy.h>
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

BucketPolicy::BucketPolicy() : 
    m_allowsPublicReadAccess(false),
    m_allowsPublicReadAccessHasBeenSet(false),
    m_allowsPublicWriteAccess(false),
    m_allowsPublicWriteAccessHasBeenSet(false)
{
}

BucketPolicy::BucketPolicy(JsonView jsonValue) : 
    m_allowsPublicReadAccess(false),
    m_allowsPublicReadAccessHasBeenSet(false),
    m_allowsPublicWriteAccess(false),
    m_allowsPublicWriteAccessHasBeenSet(false)
{
  *this = jsonValue;
}

BucketPolicy& BucketPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowsPublicReadAccess"))
  {
    m_allowsPublicReadAccess = jsonValue.GetBool("allowsPublicReadAccess");

    m_allowsPublicReadAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowsPublicWriteAccess"))
  {
    m_allowsPublicWriteAccess = jsonValue.GetBool("allowsPublicWriteAccess");

    m_allowsPublicWriteAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_allowsPublicReadAccessHasBeenSet)
  {
   payload.WithBool("allowsPublicReadAccess", m_allowsPublicReadAccess);

  }

  if(m_allowsPublicWriteAccessHasBeenSet)
  {
   payload.WithBool("allowsPublicWriteAccess", m_allowsPublicWriteAccess);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
