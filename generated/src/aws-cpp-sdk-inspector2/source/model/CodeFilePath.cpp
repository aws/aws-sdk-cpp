/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeFilePath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeFilePath::CodeFilePath(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeFilePath& CodeFilePath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");
    m_filePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startLine"))
  {
    m_startLine = jsonValue.GetInteger("startLine");
    m_startLineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endLine"))
  {
    m_endLine = jsonValue.GetInteger("endLine");
    m_endLineHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeFilePath::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_startLineHasBeenSet)
  {
   payload.WithInteger("startLine", m_startLine);

  }

  if(m_endLineHasBeenSet)
  {
   payload.WithInteger("endLine", m_endLine);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
