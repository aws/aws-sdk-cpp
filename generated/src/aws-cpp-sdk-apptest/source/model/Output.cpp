/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/Output.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

Output::Output(JsonView jsonValue)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("file"))
  {
    m_file = jsonValue.GetObject("file");
    m_fileHasBeenSet = true;
  }
  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_fileHasBeenSet)
  {
   payload.WithObject("file", m_file.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
