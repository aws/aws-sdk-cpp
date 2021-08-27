/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ByteMatchSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

ByteMatchSetSummary::ByteMatchSetSummary() : 
    m_byteMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ByteMatchSetSummary::ByteMatchSetSummary(JsonView jsonValue) : 
    m_byteMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ByteMatchSetSummary& ByteMatchSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ByteMatchSetId"))
  {
    m_byteMatchSetId = jsonValue.GetString("ByteMatchSetId");

    m_byteMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ByteMatchSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_byteMatchSetIdHasBeenSet)
  {
   payload.WithString("ByteMatchSetId", m_byteMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
