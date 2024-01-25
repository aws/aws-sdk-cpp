/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CrlDistributionPointExtensionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

CrlDistributionPointExtensionConfiguration::CrlDistributionPointExtensionConfiguration() : 
    m_omitExtension(false),
    m_omitExtensionHasBeenSet(false)
{
}

CrlDistributionPointExtensionConfiguration::CrlDistributionPointExtensionConfiguration(JsonView jsonValue) : 
    m_omitExtension(false),
    m_omitExtensionHasBeenSet(false)
{
  *this = jsonValue;
}

CrlDistributionPointExtensionConfiguration& CrlDistributionPointExtensionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OmitExtension"))
  {
    m_omitExtension = jsonValue.GetBool("OmitExtension");

    m_omitExtensionHasBeenSet = true;
  }

  return *this;
}

JsonValue CrlDistributionPointExtensionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_omitExtensionHasBeenSet)
  {
   payload.WithBool("OmitExtension", m_omitExtension);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
