/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12Delimiters.h>
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

X12Delimiters::X12Delimiters(JsonView jsonValue)
{
  *this = jsonValue;
}

X12Delimiters& X12Delimiters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentSeparator"))
  {
    m_componentSeparator = jsonValue.GetString("componentSeparator");
    m_componentSeparatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataElementSeparator"))
  {
    m_dataElementSeparator = jsonValue.GetString("dataElementSeparator");
    m_dataElementSeparatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("segmentTerminator"))
  {
    m_segmentTerminator = jsonValue.GetString("segmentTerminator");
    m_segmentTerminatorHasBeenSet = true;
  }
  return *this;
}

JsonValue X12Delimiters::Jsonize() const
{
  JsonValue payload;

  if(m_componentSeparatorHasBeenSet)
  {
   payload.WithString("componentSeparator", m_componentSeparator);

  }

  if(m_dataElementSeparatorHasBeenSet)
  {
   payload.WithString("dataElementSeparator", m_dataElementSeparator);

  }

  if(m_segmentTerminatorHasBeenSet)
  {
   payload.WithString("segmentTerminator", m_segmentTerminator);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
