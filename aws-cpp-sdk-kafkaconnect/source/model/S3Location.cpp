/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

S3Location::S3Location() : 
    m_bucketArnHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
}

S3Location::S3Location(JsonView jsonValue) : 
    m_bucketArnHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketArn"))
  {
    m_bucketArn = jsonValue.GetString("bucketArn");

    m_bucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileKey"))
  {
    m_fileKey = jsonValue.GetString("fileKey");

    m_fileKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectVersion"))
  {
    m_objectVersion = jsonValue.GetString("objectVersion");

    m_objectVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("bucketArn", m_bucketArn);

  }

  if(m_fileKeyHasBeenSet)
  {
   payload.WithString("fileKey", m_fileKey);

  }

  if(m_objectVersionHasBeenSet)
  {
   payload.WithString("objectVersion", m_objectVersion);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
