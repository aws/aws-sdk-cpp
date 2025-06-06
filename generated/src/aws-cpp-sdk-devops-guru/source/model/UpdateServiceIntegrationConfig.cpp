﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/UpdateServiceIntegrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

UpdateServiceIntegrationConfig::UpdateServiceIntegrationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateServiceIntegrationConfig& UpdateServiceIntegrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpsCenter"))
  {
    m_opsCenter = jsonValue.GetObject("OpsCenter");
    m_opsCenterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogsAnomalyDetection"))
  {
    m_logsAnomalyDetection = jsonValue.GetObject("LogsAnomalyDetection");
    m_logsAnomalyDetectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KMSServerSideEncryption"))
  {
    m_kMSServerSideEncryption = jsonValue.GetObject("KMSServerSideEncryption");
    m_kMSServerSideEncryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateServiceIntegrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_opsCenterHasBeenSet)
  {
   payload.WithObject("OpsCenter", m_opsCenter.Jsonize());

  }

  if(m_logsAnomalyDetectionHasBeenSet)
  {
   payload.WithObject("LogsAnomalyDetection", m_logsAnomalyDetection.Jsonize());

  }

  if(m_kMSServerSideEncryptionHasBeenSet)
  {
   payload.WithObject("KMSServerSideEncryption", m_kMSServerSideEncryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
