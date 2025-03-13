/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/File.h>
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

File::File(JsonView jsonValue)
{
  *this = jsonValue;
}

File& File::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = jsonValue.GetObject("fileType");
    m_fileTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue File::Jsonize() const
{
  JsonValue payload;

  if(m_fileTypeHasBeenSet)
  {
   payload.WithObject("fileType", m_fileType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
