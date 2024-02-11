/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CapabilityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

CapabilityConfiguration::CapabilityConfiguration() : 
    m_ediHasBeenSet(false)
{
}

CapabilityConfiguration::CapabilityConfiguration(JsonView jsonValue) : 
    m_ediHasBeenSet(false)
{
  *this = jsonValue;
}

CapabilityConfiguration& CapabilityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("edi"))
  {
    m_edi = jsonValue.GetObject("edi");

    m_ediHasBeenSet = true;
  }

  return *this;
}

JsonValue CapabilityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ediHasBeenSet)
  {
   payload.WithObject("edi", m_edi.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
