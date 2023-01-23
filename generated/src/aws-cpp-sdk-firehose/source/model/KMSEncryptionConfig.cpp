/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/KMSEncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

KMSEncryptionConfig::KMSEncryptionConfig() : 
    m_aWSKMSKeyARNHasBeenSet(false)
{
}

KMSEncryptionConfig::KMSEncryptionConfig(JsonView jsonValue) : 
    m_aWSKMSKeyARNHasBeenSet(false)
{
  *this = jsonValue;
}

KMSEncryptionConfig& KMSEncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AWSKMSKeyARN"))
  {
    m_aWSKMSKeyARN = jsonValue.GetString("AWSKMSKeyARN");

    m_aWSKMSKeyARNHasBeenSet = true;
  }

  return *this;
}

JsonValue KMSEncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_aWSKMSKeyARNHasBeenSet)
  {
   payload.WithString("AWSKMSKeyARN", m_aWSKMSKeyARN);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
