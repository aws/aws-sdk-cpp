/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/S3ResourceClassification.h>
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

S3ResourceClassification::S3ResourceClassification() : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_classificationTypeHasBeenSet(false)
{
}

S3ResourceClassification::S3ResourceClassification(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_classificationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

S3ResourceClassification& S3ResourceClassification::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("classificationType"))
  {
    m_classificationType = jsonValue.GetObject("classificationType");

    m_classificationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ResourceClassification::Jsonize() const
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

  if(m_classificationTypeHasBeenSet)
  {
   payload.WithObject("classificationType", m_classificationType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie
} // namespace Aws
