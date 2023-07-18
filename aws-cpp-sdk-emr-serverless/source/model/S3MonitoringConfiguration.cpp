/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/S3MonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

S3MonitoringConfiguration::S3MonitoringConfiguration() : 
    m_logUriHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false)
{
}

S3MonitoringConfiguration::S3MonitoringConfiguration(JsonView jsonValue) : 
    m_logUriHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3MonitoringConfiguration& S3MonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logUri"))
  {
    m_logUri = jsonValue.GetString("logUri");

    m_logUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3MonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logUriHasBeenSet)
  {
   payload.WithString("logUri", m_logUri);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
