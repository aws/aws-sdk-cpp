/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CertificateSettings.h>
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

CertificateSettings::CertificateSettings() : 
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_customCertificateArnHasBeenSet(false)
{
}

CertificateSettings::CertificateSettings(JsonView jsonValue) : 
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_customCertificateArnHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateSettings& CertificateSettings::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue CertificateSettings::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
