/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/SourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

SourceData::SourceData() : 
    m_acmPcaArnHasBeenSet(false),
    m_x509CertificateDataHasBeenSet(false)
{
}

SourceData::SourceData(JsonView jsonValue) : 
    m_acmPcaArnHasBeenSet(false),
    m_x509CertificateDataHasBeenSet(false)
{
  *this = jsonValue;
}

SourceData& SourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acmPcaArn"))
  {
    m_acmPcaArn = jsonValue.GetString("acmPcaArn");

    m_acmPcaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("x509CertificateData"))
  {
    m_x509CertificateData = jsonValue.GetString("x509CertificateData");

    m_x509CertificateDataHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceData::Jsonize() const
{
  JsonValue payload;

  if(m_acmPcaArnHasBeenSet)
  {
   payload.WithString("acmPcaArn", m_acmPcaArn);

  }

  if(m_x509CertificateDataHasBeenSet)
  {
   payload.WithString("x509CertificateData", m_x509CertificateData);

  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
