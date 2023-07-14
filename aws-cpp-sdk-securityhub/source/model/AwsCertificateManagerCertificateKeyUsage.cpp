﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCertificateManagerCertificateKeyUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCertificateManagerCertificateKeyUsage::AwsCertificateManagerCertificateKeyUsage() : 
    m_nameHasBeenSet(false)
{
}

AwsCertificateManagerCertificateKeyUsage::AwsCertificateManagerCertificateKeyUsage(JsonView jsonValue) : 
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCertificateManagerCertificateKeyUsage& AwsCertificateManagerCertificateKeyUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCertificateManagerCertificateKeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
