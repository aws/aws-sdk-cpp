/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobOutputDataConfig.h>
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

JobOutputDataConfig::JobOutputDataConfig() : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3PathHasBeenSet(false)
{
}

JobOutputDataConfig::JobOutputDataConfig(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3PathHasBeenSet(false)
{
  *this = jsonValue;
}

JobOutputDataConfig& JobOutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Path"))
  {
    m_s3Path = jsonValue.GetString("s3Path");

    m_s3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue JobOutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_s3PathHasBeenSet)
  {
   payload.WithString("s3Path", m_s3Path);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
