/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatementOutputData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

StatementOutputData::StatementOutputData() : 
    m_textPlainHasBeenSet(false)
{
}

StatementOutputData::StatementOutputData(JsonView jsonValue) : 
    m_textPlainHasBeenSet(false)
{
  *this = jsonValue;
}

StatementOutputData& StatementOutputData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextPlain"))
  {
    m_textPlain = jsonValue.GetString("TextPlain");

    m_textPlainHasBeenSet = true;
  }

  return *this;
}

JsonValue StatementOutputData::Jsonize() const
{
  JsonValue payload;

  if(m_textPlainHasBeenSet)
  {
   payload.WithString("TextPlain", m_textPlain);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
