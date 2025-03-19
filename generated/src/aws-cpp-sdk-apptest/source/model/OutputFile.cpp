/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/OutputFile.h>
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

OutputFile::OutputFile(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputFile& OutputFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileLocation"))
  {
    m_fileLocation = jsonValue.GetString("fileLocation");
    m_fileLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputFile::Jsonize() const
{
  JsonValue payload;

  if(m_fileLocationHasBeenSet)
  {
   payload.WithString("fileLocation", m_fileLocation);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
