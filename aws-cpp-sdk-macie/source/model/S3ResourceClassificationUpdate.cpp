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

#include <aws/macie/model/S3ResourceClassificationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie
{
namespace Model
{

S3ResourceClassificationUpdate::S3ResourceClassificationUpdate() : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_classificationTypeUpdateHasBeenSet(false)
{
}

S3ResourceClassificationUpdate::S3ResourceClassificationUpdate(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_classificationTypeUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

S3ResourceClassificationUpdate& S3ResourceClassificationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("classificationTypeUpdate"))
  {
    m_classificationTypeUpdate = jsonValue.GetObject("classificationTypeUpdate");

    m_classificationTypeUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ResourceClassificationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_classificationTypeUpdateHasBeenSet)
  {
   payload.WithObject("classificationTypeUpdate", m_classificationTypeUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie
} // namespace Aws
