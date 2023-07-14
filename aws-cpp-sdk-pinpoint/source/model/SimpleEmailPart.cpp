/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SimpleEmailPart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SimpleEmailPart::SimpleEmailPart() : 
    m_charsetHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

SimpleEmailPart::SimpleEmailPart(JsonView jsonValue) : 
    m_charsetHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleEmailPart& SimpleEmailPart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetString("Charset");

    m_charsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleEmailPart::Jsonize() const
{
  JsonValue payload;

  if(m_charsetHasBeenSet)
  {
   payload.WithString("Charset", m_charset);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
