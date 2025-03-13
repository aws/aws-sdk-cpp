/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ImportSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

ImportSource::ImportSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ImportSource& ImportSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = jsonValue.GetObject("S3");
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue ImportSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
