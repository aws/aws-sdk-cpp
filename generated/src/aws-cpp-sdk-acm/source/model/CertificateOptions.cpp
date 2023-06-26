/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

CertificateOptions::CertificateOptions() : 
    m_certificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference::NOT_SET),
    m_certificateTransparencyLoggingPreferenceHasBeenSet(false)
{
}

CertificateOptions::CertificateOptions(JsonView jsonValue) : 
    m_certificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference::NOT_SET),
    m_certificateTransparencyLoggingPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateOptions& CertificateOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateTransparencyLoggingPreference"))
  {
    m_certificateTransparencyLoggingPreference = CertificateTransparencyLoggingPreferenceMapper::GetCertificateTransparencyLoggingPreferenceForName(jsonValue.GetString("CertificateTransparencyLoggingPreference"));

    m_certificateTransparencyLoggingPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateOptions::Jsonize() const
{
  JsonValue payload;

  if(m_certificateTransparencyLoggingPreferenceHasBeenSet)
  {
   payload.WithString("CertificateTransparencyLoggingPreference", CertificateTransparencyLoggingPreferenceMapper::GetNameForCertificateTransparencyLoggingPreference(m_certificateTransparencyLoggingPreference));
  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
