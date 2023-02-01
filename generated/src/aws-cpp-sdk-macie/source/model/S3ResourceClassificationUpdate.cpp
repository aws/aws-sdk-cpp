/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
