/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/KMSServerSideEncryptionIntegrationConfig.h>
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

KMSServerSideEncryptionIntegrationConfig::KMSServerSideEncryptionIntegrationConfig() : 
    m_kMSKeyIdHasBeenSet(false),
    m_optInStatus(OptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false),
    m_type(ServerSideEncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

KMSServerSideEncryptionIntegrationConfig::KMSServerSideEncryptionIntegrationConfig(JsonView jsonValue) : 
    m_kMSKeyIdHasBeenSet(false),
    m_optInStatus(OptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false),
    m_type(ServerSideEncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

KMSServerSideEncryptionIntegrationConfig& KMSServerSideEncryptionIntegrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KMSKeyId"))
  {
    m_kMSKeyId = jsonValue.GetString("KMSKeyId");

    m_kMSKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptInStatus"))
  {
    m_optInStatus = OptInStatusMapper::GetOptInStatusForName(jsonValue.GetString("OptInStatus"));

    m_optInStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ServerSideEncryptionTypeMapper::GetServerSideEncryptionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue KMSServerSideEncryptionIntegrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kMSKeyIdHasBeenSet)
  {
   payload.WithString("KMSKeyId", m_kMSKeyId);

  }

  if(m_optInStatusHasBeenSet)
  {
   payload.WithString("OptInStatus", OptInStatusMapper::GetNameForOptInStatus(m_optInStatus));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ServerSideEncryptionTypeMapper::GetNameForServerSideEncryptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
