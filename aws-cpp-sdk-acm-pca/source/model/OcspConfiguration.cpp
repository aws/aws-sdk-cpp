/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/OcspConfiguration.h>
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

OcspConfiguration::OcspConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ocspCustomCnameHasBeenSet(false)
{
}

OcspConfiguration::OcspConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ocspCustomCnameHasBeenSet(false)
{
  *this = jsonValue;
}

OcspConfiguration& OcspConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OcspCustomCname"))
  {
    m_ocspCustomCname = jsonValue.GetString("OcspCustomCname");

    m_ocspCustomCnameHasBeenSet = true;
  }

  return *this;
}

JsonValue OcspConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_ocspCustomCnameHasBeenSet)
  {
   payload.WithString("OcspCustomCname", m_ocspCustomCname);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
