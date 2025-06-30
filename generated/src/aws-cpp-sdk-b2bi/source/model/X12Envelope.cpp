/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12Envelope.h>
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

X12Envelope::X12Envelope(JsonView jsonValue)
{
  *this = jsonValue;
}

X12Envelope& X12Envelope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("common"))
  {
    m_common = jsonValue.GetObject("common");
    m_commonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wrapOptions"))
  {
    m_wrapOptions = jsonValue.GetObject("wrapOptions");
    m_wrapOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue X12Envelope::Jsonize() const
{
  JsonValue payload;

  if(m_commonHasBeenSet)
  {
   payload.WithObject("common", m_common.Jsonize());

  }

  if(m_wrapOptionsHasBeenSet)
  {
   payload.WithObject("wrapOptions", m_wrapOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
