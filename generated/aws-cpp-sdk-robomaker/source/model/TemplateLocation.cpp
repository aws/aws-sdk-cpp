/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/TemplateLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

TemplateLocation::TemplateLocation() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

TemplateLocation::TemplateLocation(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateLocation& TemplateLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Key"))
  {
    m_s3Key = jsonValue.GetString("s3Key");

    m_s3KeyHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
