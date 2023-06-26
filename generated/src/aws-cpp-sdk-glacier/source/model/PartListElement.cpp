/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/PartListElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

PartListElement::PartListElement() : 
    m_rangeInBytesHasBeenSet(false),
    m_sHA256TreeHashHasBeenSet(false)
{
}

PartListElement::PartListElement(JsonView jsonValue) : 
    m_rangeInBytesHasBeenSet(false),
    m_sHA256TreeHashHasBeenSet(false)
{
  *this = jsonValue;
}

PartListElement& PartListElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RangeInBytes"))
  {
    m_rangeInBytes = jsonValue.GetString("RangeInBytes");

    m_rangeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SHA256TreeHash"))
  {
    m_sHA256TreeHash = jsonValue.GetString("SHA256TreeHash");

    m_sHA256TreeHashHasBeenSet = true;
  }

  return *this;
}

JsonValue PartListElement::Jsonize() const
{
  JsonValue payload;

  if(m_rangeInBytesHasBeenSet)
  {
   payload.WithString("RangeInBytes", m_rangeInBytes);

  }

  if(m_sHA256TreeHashHasBeenSet)
  {
   payload.WithString("SHA256TreeHash", m_sHA256TreeHash);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
