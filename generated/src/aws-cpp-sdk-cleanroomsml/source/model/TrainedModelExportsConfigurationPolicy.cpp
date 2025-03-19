/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelExportsConfigurationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

TrainedModelExportsConfigurationPolicy::TrainedModelExportsConfigurationPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainedModelExportsConfigurationPolicy& TrainedModelExportsConfigurationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxSize"))
  {
    m_maxSize = jsonValue.GetObject("maxSize");
    m_maxSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filesToExport"))
  {
    Aws::Utils::Array<JsonView> filesToExportJsonList = jsonValue.GetArray("filesToExport");
    for(unsigned filesToExportIndex = 0; filesToExportIndex < filesToExportJsonList.GetLength(); ++filesToExportIndex)
    {
      m_filesToExport.push_back(TrainedModelExportFileTypeMapper::GetTrainedModelExportFileTypeForName(filesToExportJsonList[filesToExportIndex].AsString()));
    }
    m_filesToExportHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainedModelExportsConfigurationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_maxSizeHasBeenSet)
  {
   payload.WithObject("maxSize", m_maxSize.Jsonize());

  }

  if(m_filesToExportHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesToExportJsonList(m_filesToExport.size());
   for(unsigned filesToExportIndex = 0; filesToExportIndex < filesToExportJsonList.GetLength(); ++filesToExportIndex)
   {
     filesToExportJsonList[filesToExportIndex].AsString(TrainedModelExportFileTypeMapper::GetNameForTrainedModelExportFileType(m_filesToExport[filesToExportIndex]));
   }
   payload.WithArray("filesToExport", std::move(filesToExportJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
