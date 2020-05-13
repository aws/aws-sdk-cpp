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

#include <aws/macie2/model/BucketCountByEffectivePermission.h>
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

BucketCountByEffectivePermission::BucketCountByEffectivePermission() : 
    m_publiclyAccessible(0),
    m_publiclyAccessibleHasBeenSet(false),
    m_publiclyReadable(0),
    m_publiclyReadableHasBeenSet(false),
    m_publiclyWritable(0),
    m_publiclyWritableHasBeenSet(false)
{
}

BucketCountByEffectivePermission::BucketCountByEffectivePermission(JsonView jsonValue) : 
    m_publiclyAccessible(0),
    m_publiclyAccessibleHasBeenSet(false),
    m_publiclyReadable(0),
    m_publiclyReadableHasBeenSet(false),
    m_publiclyWritable(0),
    m_publiclyWritableHasBeenSet(false)
{
  *this = jsonValue;
}

BucketCountByEffectivePermission& BucketCountByEffectivePermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetInt64("publiclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyReadable"))
  {
    m_publiclyReadable = jsonValue.GetInt64("publiclyReadable");

    m_publiclyReadableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyWritable"))
  {
    m_publiclyWritable = jsonValue.GetInt64("publiclyWritable");

    m_publiclyWritableHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketCountByEffectivePermission::Jsonize() const
{
  JsonValue payload;

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithInt64("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_publiclyReadableHasBeenSet)
  {
   payload.WithInt64("publiclyReadable", m_publiclyReadable);

  }

  if(m_publiclyWritableHasBeenSet)
  {
   payload.WithInt64("publiclyWritable", m_publiclyWritable);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
