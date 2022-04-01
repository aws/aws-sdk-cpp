/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CloudWatchEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CloudWatchEncryption::CloudWatchEncryption() : 
    m_cloudWatchEncryptionMode(CloudWatchEncryptionMode::NOT_SET),
    m_cloudWatchEncryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

CloudWatchEncryption::CloudWatchEncryption(JsonView jsonValue) : 
    m_cloudWatchEncryptionMode(CloudWatchEncryptionMode::NOT_SET),
    m_cloudWatchEncryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchEncryption& CloudWatchEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchEncryptionMode"))
  {
    m_cloudWatchEncryptionMode = CloudWatchEncryptionModeMapper::GetCloudWatchEncryptionModeForName(jsonValue.GetString("CloudWatchEncryptionMode"));

    m_cloudWatchEncryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchEncryptionModeHasBeenSet)
  {
   payload.WithString("CloudWatchEncryptionMode", CloudWatchEncryptionModeMapper::GetNameForCloudWatchEncryptionMode(m_cloudWatchEncryptionMode));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
