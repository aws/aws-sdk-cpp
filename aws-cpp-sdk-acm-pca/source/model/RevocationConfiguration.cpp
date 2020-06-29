/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/RevocationConfiguration.h>
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

RevocationConfiguration::RevocationConfiguration() : 
    m_crlConfigurationHasBeenSet(false)
{
}

RevocationConfiguration::RevocationConfiguration(JsonView jsonValue) : 
    m_crlConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RevocationConfiguration& RevocationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrlConfiguration"))
  {
    m_crlConfiguration = jsonValue.GetObject("CrlConfiguration");

    m_crlConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RevocationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crlConfigurationHasBeenSet)
  {
   payload.WithObject("CrlConfiguration", m_crlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
