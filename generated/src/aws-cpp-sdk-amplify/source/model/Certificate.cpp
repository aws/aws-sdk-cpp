/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/Certificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

Certificate::Certificate() : 
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_customCertificateArnHasBeenSet(false),
    m_certificateVerificationDNSRecordHasBeenSet(false)
{
}

Certificate::Certificate(JsonView jsonValue) : 
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_customCertificateArnHasBeenSet(false),
    m_certificateVerificationDNSRecordHasBeenSet(false)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customCertificateArn"))
  {
    m_customCertificateArn = jsonValue.GetString("customCertificateArn");

    m_customCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateVerificationDNSRecord"))
  {
    m_certificateVerificationDNSRecord = jsonValue.GetString("certificateVerificationDNSRecord");

    m_certificateVerificationDNSRecordHasBeenSet = true;
  }

  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if(m_customCertificateArnHasBeenSet)
  {
   payload.WithString("customCertificateArn", m_customCertificateArn);

  }

  if(m_certificateVerificationDNSRecordHasBeenSet)
  {
   payload.WithString("certificateVerificationDNSRecord", m_certificateVerificationDNSRecord);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
