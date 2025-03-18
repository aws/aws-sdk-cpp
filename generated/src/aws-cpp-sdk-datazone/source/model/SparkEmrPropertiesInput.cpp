/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SparkEmrPropertiesInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SparkEmrPropertiesInput::SparkEmrPropertiesInput(JsonView jsonValue)
{
  *this = jsonValue;
}

SparkEmrPropertiesInput& SparkEmrPropertiesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeArn"))
  {
    m_computeArn = jsonValue.GetString("computeArn");
    m_computeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceProfileArn"))
  {
    m_instanceProfileArn = jsonValue.GetString("instanceProfileArn");
    m_instanceProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("javaVirtualEnv"))
  {
    m_javaVirtualEnv = jsonValue.GetString("javaVirtualEnv");
    m_javaVirtualEnvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logUri"))
  {
    m_logUri = jsonValue.GetString("logUri");
    m_logUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pythonVirtualEnv"))
  {
    m_pythonVirtualEnv = jsonValue.GetString("pythonVirtualEnv");
    m_pythonVirtualEnvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtimeRole"))
  {
    m_runtimeRole = jsonValue.GetString("runtimeRole");
    m_runtimeRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trustedCertificatesS3Uri"))
  {
    m_trustedCertificatesS3Uri = jsonValue.GetString("trustedCertificatesS3Uri");
    m_trustedCertificatesS3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue SparkEmrPropertiesInput::Jsonize() const
{
  JsonValue payload;

  if(m_computeArnHasBeenSet)
  {
   payload.WithString("computeArn", m_computeArn);

  }

  if(m_instanceProfileArnHasBeenSet)
  {
   payload.WithString("instanceProfileArn", m_instanceProfileArn);

  }

  if(m_javaVirtualEnvHasBeenSet)
  {
   payload.WithString("javaVirtualEnv", m_javaVirtualEnv);

  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("logUri", m_logUri);

  }

  if(m_pythonVirtualEnvHasBeenSet)
  {
   payload.WithString("pythonVirtualEnv", m_pythonVirtualEnv);

  }

  if(m_runtimeRoleHasBeenSet)
  {
   payload.WithString("runtimeRole", m_runtimeRole);

  }

  if(m_trustedCertificatesS3UriHasBeenSet)
  {
   payload.WithString("trustedCertificatesS3Uri", m_trustedCertificatesS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
