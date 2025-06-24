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

CertificateOptions::CertificateOptions(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Export"))
  {
    m_export = CertificateExportMapper::GetCertificateExportForName(jsonValue.GetString("Export"));
    m_exportHasBeenSet = true;
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

  if(m_exportHasBeenSet)
  {
   payload.WithString("Export", CertificateExportMapper::GetNameForCertificateExport(m_export));
  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
