/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppImageConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AppImageConfigDetails::AppImageConfigDetails() : 
    m_appImageConfigArnHasBeenSet(false),
    m_appImageConfigNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_kernelGatewayImageConfigHasBeenSet(false)
{
}

AppImageConfigDetails::AppImageConfigDetails(JsonView jsonValue) : 
    m_appImageConfigArnHasBeenSet(false),
    m_appImageConfigNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_kernelGatewayImageConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AppImageConfigDetails& AppImageConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppImageConfigArn"))
  {
    m_appImageConfigArn = jsonValue.GetString("AppImageConfigArn");

    m_appImageConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppImageConfigName"))
  {
    m_appImageConfigName = jsonValue.GetString("AppImageConfigName");

    m_appImageConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KernelGatewayImageConfig"))
  {
    m_kernelGatewayImageConfig = jsonValue.GetObject("KernelGatewayImageConfig");

    m_kernelGatewayImageConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AppImageConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_appImageConfigArnHasBeenSet)
  {
   payload.WithString("AppImageConfigArn", m_appImageConfigArn);

  }

  if(m_appImageConfigNameHasBeenSet)
  {
   payload.WithString("AppImageConfigName", m_appImageConfigName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_kernelGatewayImageConfigHasBeenSet)
  {
   payload.WithObject("KernelGatewayImageConfig", m_kernelGatewayImageConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
