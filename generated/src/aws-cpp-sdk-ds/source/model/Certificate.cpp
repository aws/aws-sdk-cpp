﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/Certificate.h>
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

Certificate::Certificate(JsonView jsonValue)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateId"))
  {
    m_certificateId = jsonValue.GetString("CertificateId");
    m_certificateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = CertificateStateMapper::GetCertificateStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommonName"))
  {
    m_commonName = jsonValue.GetString("CommonName");
    m_commonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegisteredDateTime"))
  {
    m_registeredDateTime = jsonValue.GetDouble("RegisteredDateTime");
    m_registeredDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiryDateTime"))
  {
    m_expiryDateTime = jsonValue.GetDouble("ExpiryDateTime");
    m_expiryDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientCertAuthSettings"))
  {
    m_clientCertAuthSettings = jsonValue.GetObject("ClientCertAuthSettings");
    m_clientCertAuthSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CertificateStateMapper::GetNameForCertificateState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_commonNameHasBeenSet)
  {
   payload.WithString("CommonName", m_commonName);

  }

  if(m_registeredDateTimeHasBeenSet)
  {
   payload.WithDouble("RegisteredDateTime", m_registeredDateTime.SecondsWithMSPrecision());
  }

  if(m_expiryDateTimeHasBeenSet)
  {
   payload.WithDouble("ExpiryDateTime", m_expiryDateTime.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if(m_clientCertAuthSettingsHasBeenSet)
  {
   payload.WithObject("ClientCertAuthSettings", m_clientCertAuthSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
