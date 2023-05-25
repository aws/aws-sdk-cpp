/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CertificateInfo.h>
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

CertificateInfo::CertificateInfo() : 
    m_certificateIdHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_state(CertificateState::NOT_SET),
    m_stateHasBeenSet(false),
    m_expiryDateTimeHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CertificateInfo::CertificateInfo(JsonView jsonValue) : 
    m_certificateIdHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_state(CertificateState::NOT_SET),
    m_stateHasBeenSet(false),
    m_expiryDateTimeHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateInfo& CertificateInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateId"))
  {
    m_certificateId = jsonValue.GetString("CertificateId");

    m_certificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommonName"))
  {
    m_commonName = jsonValue.GetString("CommonName");

    m_commonNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CertificateStateMapper::GetCertificateStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
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

  return *this;
}

JsonValue CertificateInfo::Jsonize() const
{
  JsonValue payload;

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  if(m_commonNameHasBeenSet)
  {
   payload.WithString("CommonName", m_commonName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CertificateStateMapper::GetNameForCertificateState(m_state));
  }

  if(m_expiryDateTimeHasBeenSet)
  {
   payload.WithDouble("ExpiryDateTime", m_expiryDateTime.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
