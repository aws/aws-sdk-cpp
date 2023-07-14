/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateSummary.h>
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

CertificateSummary::CertificateSummary() : 
    m_certificateArnHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

CertificateSummary::CertificateSummary(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateSummary& CertificateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
