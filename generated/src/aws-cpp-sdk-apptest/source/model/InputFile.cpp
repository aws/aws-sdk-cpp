/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/InputFile.h>
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

InputFile::InputFile(JsonView jsonValue)
{
  *this = jsonValue;
}

InputFile& InputFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceLocation"))
  {
    m_sourceLocation = jsonValue.GetString("sourceLocation");
    m_sourceLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetLocation"))
  {
    m_targetLocation = jsonValue.GetString("targetLocation");
    m_targetLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileMetadata"))
  {
    m_fileMetadata = jsonValue.GetObject("fileMetadata");
    m_fileMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue InputFile::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationHasBeenSet)
  {
   payload.WithString("sourceLocation", m_sourceLocation);

  }

  if(m_targetLocationHasBeenSet)
  {
   payload.WithString("targetLocation", m_targetLocation);

  }

  if(m_fileMetadataHasBeenSet)
  {
   payload.WithObject("fileMetadata", m_fileMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
