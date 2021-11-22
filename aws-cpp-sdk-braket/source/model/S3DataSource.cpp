/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/S3DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

S3DataSource::S3DataSource() : 
    m_s3UriHasBeenSet(false)
{
}

S3DataSource::S3DataSource(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSource& S3DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
