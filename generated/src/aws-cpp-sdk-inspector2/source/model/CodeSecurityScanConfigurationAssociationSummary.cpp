/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSecurityScanConfigurationAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeSecurityScanConfigurationAssociationSummary::CodeSecurityScanConfigurationAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeSecurityScanConfigurationAssociationSummary& CodeSecurityScanConfigurationAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeSecurityScanConfigurationAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
