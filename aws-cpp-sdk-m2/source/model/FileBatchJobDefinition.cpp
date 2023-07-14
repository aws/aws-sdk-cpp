/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/FileBatchJobDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

FileBatchJobDefinition::FileBatchJobDefinition() : 
    m_fileNameHasBeenSet(false),
    m_folderPathHasBeenSet(false)
{
}

FileBatchJobDefinition::FileBatchJobDefinition(JsonView jsonValue) : 
    m_fileNameHasBeenSet(false),
    m_folderPathHasBeenSet(false)
{
  *this = jsonValue;
}

FileBatchJobDefinition& FileBatchJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");

    m_fileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("folderPath"))
  {
    m_folderPath = jsonValue.GetString("folderPath");

    m_folderPathHasBeenSet = true;
  }

  return *this;
}

JsonValue FileBatchJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_folderPathHasBeenSet)
  {
   payload.WithString("folderPath", m_folderPath);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
