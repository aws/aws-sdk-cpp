/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AccessConfiguration::AccessConfiguration() : 
    m_accessType(AccessType::NOT_SET),
    m_accessTypeHasBeenSet(false)
{
}

AccessConfiguration::AccessConfiguration(JsonView jsonValue) : 
    m_accessType(AccessType::NOT_SET),
    m_accessTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessConfiguration& AccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessType"))
  {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("AccessType"));

    m_accessTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessTypeHasBeenSet)
  {
   payload.WithString("AccessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
