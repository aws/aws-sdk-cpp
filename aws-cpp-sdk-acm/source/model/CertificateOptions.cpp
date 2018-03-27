/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

CertificateOptions::CertificateOptions(const JsonValue& jsonValue) : 
    m_certificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference::NOT_SET),
    m_certificateTransparencyLoggingPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateOptions& CertificateOptions::operator =(const JsonValue& jsonValue)
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
