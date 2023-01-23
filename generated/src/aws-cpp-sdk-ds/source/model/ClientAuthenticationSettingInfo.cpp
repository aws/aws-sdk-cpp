/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ClientAuthenticationSettingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

ClientAuthenticationSettingInfo::ClientAuthenticationSettingInfo() : 
    m_type(ClientAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ClientAuthenticationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

ClientAuthenticationSettingInfo::ClientAuthenticationSettingInfo(JsonView jsonValue) : 
    m_type(ClientAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ClientAuthenticationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ClientAuthenticationSettingInfo& ClientAuthenticationSettingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ClientAuthenticationTypeMapper::GetClientAuthenticationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ClientAuthenticationStatusMapper::GetClientAuthenticationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientAuthenticationSettingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ClientAuthenticationTypeMapper::GetNameForClientAuthenticationType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ClientAuthenticationStatusMapper::GetNameForClientAuthenticationStatus(m_status));
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
