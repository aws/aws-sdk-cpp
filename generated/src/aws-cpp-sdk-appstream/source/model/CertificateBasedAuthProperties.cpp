/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CertificateBasedAuthProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

CertificateBasedAuthProperties::CertificateBasedAuthProperties() : 
    m_status(CertificateBasedAuthStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false)
{
}

CertificateBasedAuthProperties::CertificateBasedAuthProperties(JsonView jsonValue) : 
    m_status(CertificateBasedAuthStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateBasedAuthProperties& CertificateBasedAuthProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateBasedAuthStatusMapper::GetCertificateBasedAuthStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");

    m_certificateAuthorityArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateBasedAuthProperties::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateBasedAuthStatusMapper::GetNameForCertificateBasedAuthStatus(m_status));
  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
