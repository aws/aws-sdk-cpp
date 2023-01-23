/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/AccessLog.h>
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

AccessLog::AccessLog() : 
    m_fileHasBeenSet(false)
{
}

AccessLog::AccessLog(JsonView jsonValue) : 
    m_fileHasBeenSet(false)
{
  *this = jsonValue;
}

AccessLog& AccessLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("file"))
  {
    m_file = jsonValue.GetObject("file");

    m_fileHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessLog::Jsonize() const
{
  JsonValue payload;

  if(m_fileHasBeenSet)
  {
   payload.WithObject("file", m_file.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
