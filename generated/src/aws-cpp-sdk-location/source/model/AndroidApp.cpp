/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/AndroidApp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

AndroidApp::AndroidApp(JsonView jsonValue)
{
  *this = jsonValue;
}

AndroidApp& AndroidApp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Package"))
  {
    m_package = jsonValue.GetString("Package");
    m_packageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertificateFingerprint"))
  {
    m_certificateFingerprint = jsonValue.GetString("CertificateFingerprint");
    m_certificateFingerprintHasBeenSet = true;
  }
  return *this;
}

JsonValue AndroidApp::Jsonize() const
{
  JsonValue payload;

  if(m_packageHasBeenSet)
  {
   payload.WithString("Package", m_package);

  }

  if(m_certificateFingerprintHasBeenSet)
  {
   payload.WithString("CertificateFingerprint", m_certificateFingerprint);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
