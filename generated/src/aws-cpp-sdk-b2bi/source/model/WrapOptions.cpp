/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/WrapOptions.h>
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

WrapOptions::WrapOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

WrapOptions& WrapOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("wrapBy"))
  {
    m_wrapBy = WrapFormatMapper::GetWrapFormatForName(jsonValue.GetString("wrapBy"));
    m_wrapByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineTerminator"))
  {
    m_lineTerminator = LineTerminatorMapper::GetLineTerminatorForName(jsonValue.GetString("lineTerminator"));
    m_lineTerminatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineLength"))
  {
    m_lineLength = jsonValue.GetInteger("lineLength");
    m_lineLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue WrapOptions::Jsonize() const
{
  JsonValue payload;

  if(m_wrapByHasBeenSet)
  {
   payload.WithString("wrapBy", WrapFormatMapper::GetNameForWrapFormat(m_wrapBy));
  }

  if(m_lineTerminatorHasBeenSet)
  {
   payload.WithString("lineTerminator", LineTerminatorMapper::GetNameForLineTerminator(m_lineTerminator));
  }

  if(m_lineLengthHasBeenSet)
  {
   payload.WithInteger("lineLength", m_lineLength);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
