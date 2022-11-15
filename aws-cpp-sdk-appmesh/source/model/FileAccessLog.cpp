/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/FileAccessLog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

FileAccessLog::FileAccessLog() : 
    m_formatHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

FileAccessLog::FileAccessLog(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

FileAccessLog& FileAccessLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetObject("format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue FileAccessLog::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithObject("format", m_format.Jsonize());

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
