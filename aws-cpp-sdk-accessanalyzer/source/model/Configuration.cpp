/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Configuration::Configuration() : 
    m_iamRoleHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_secretsManagerSecretHasBeenSet(false),
    m_sqsQueueHasBeenSet(false)
{
}

Configuration::Configuration(JsonView jsonValue) : 
    m_iamRoleHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_secretsManagerSecretHasBeenSet(false),
    m_sqsQueueHasBeenSet(false)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetObject("iamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKey"))
  {
    m_kmsKey = jsonValue.GetObject("kmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetObject("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretsManagerSecret"))
  {
    m_secretsManagerSecret = jsonValue.GetObject("secretsManagerSecret");

    m_secretsManagerSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqsQueue"))
  {
    m_sqsQueue = jsonValue.GetObject("sqsQueue");

    m_sqsQueueHasBeenSet = true;
  }

  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_iamRoleHasBeenSet)
  {
   payload.WithObject("iamRole", m_iamRole.Jsonize());

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithObject("kmsKey", m_kmsKey.Jsonize());

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithObject("s3Bucket", m_s3Bucket.Jsonize());

  }

  if(m_secretsManagerSecretHasBeenSet)
  {
   payload.WithObject("secretsManagerSecret", m_secretsManagerSecret.Jsonize());

  }

  if(m_sqsQueueHasBeenSet)
  {
   payload.WithObject("sqsQueue", m_sqsQueue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
