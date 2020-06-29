/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DataRepositoryConfiguration::DataRepositoryConfiguration() : 
    m_importPathHasBeenSet(false),
    m_exportPathHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false)
{
}

DataRepositoryConfiguration::DataRepositoryConfiguration(JsonView jsonValue) : 
    m_importPathHasBeenSet(false),
    m_exportPathHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false)
{
  *this = jsonValue;
}

DataRepositoryConfiguration& DataRepositoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportPath"))
  {
    m_importPath = jsonValue.GetString("ImportPath");

    m_importPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportPath"))
  {
    m_exportPath = jsonValue.GetString("ExportPath");

    m_exportPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedFileChunkSize"))
  {
    m_importedFileChunkSize = jsonValue.GetInteger("ImportedFileChunkSize");

    m_importedFileChunkSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataRepositoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_importPathHasBeenSet)
  {
   payload.WithString("ImportPath", m_importPath);

  }

  if(m_exportPathHasBeenSet)
  {
   payload.WithString("ExportPath", m_exportPath);

  }

  if(m_importedFileChunkSizeHasBeenSet)
  {
   payload.WithInteger("ImportedFileChunkSize", m_importedFileChunkSize);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
