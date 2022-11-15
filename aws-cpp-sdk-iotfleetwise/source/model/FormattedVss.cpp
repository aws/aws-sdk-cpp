/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/FormattedVss.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

FormattedVss::FormattedVss() : 
    m_vssJsonHasBeenSet(false)
{
}

FormattedVss::FormattedVss(JsonView jsonValue) : 
    m_vssJsonHasBeenSet(false)
{
  *this = jsonValue;
}

FormattedVss& FormattedVss::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vssJson"))
  {
    m_vssJson = jsonValue.GetString("vssJson");

    m_vssJsonHasBeenSet = true;
  }

  return *this;
}

JsonValue FormattedVss::Jsonize() const
{
  JsonValue payload;

  if(m_vssJsonHasBeenSet)
  {
   payload.WithString("vssJson", m_vssJson);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
