/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CertificateProviderSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CertificateProviderSummary::CertificateProviderSummary() : 
    m_certificateProviderNameHasBeenSet(false),
    m_certificateProviderArnHasBeenSet(false)
{
}

CertificateProviderSummary::CertificateProviderSummary(JsonView jsonValue) : 
    m_certificateProviderNameHasBeenSet(false),
    m_certificateProviderArnHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateProviderSummary& CertificateProviderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateProviderName"))
  {
    m_certificateProviderName = jsonValue.GetString("certificateProviderName");

    m_certificateProviderNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateProviderArn"))
  {
    m_certificateProviderArn = jsonValue.GetString("certificateProviderArn");

    m_certificateProviderArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateProviderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_certificateProviderNameHasBeenSet)
  {
   payload.WithString("certificateProviderName", m_certificateProviderName);

  }

  if(m_certificateProviderArnHasBeenSet)
  {
   payload.WithString("certificateProviderArn", m_certificateProviderArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
