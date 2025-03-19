/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CertificateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

CertificateConfiguration::CertificateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CertificateConfiguration& CertificateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateType"))
  {
    m_certificateType = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("CertificateType"));
    m_certificateTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_certificateTypeHasBeenSet)
  {
   payload.WithString("CertificateType", CertificateTypeMapper::GetNameForCertificateType(m_certificateType));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
