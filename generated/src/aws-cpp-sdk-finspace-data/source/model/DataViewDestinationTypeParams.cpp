/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DataViewDestinationTypeParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

DataViewDestinationTypeParams::DataViewDestinationTypeParams() : 
    m_destinationTypeHasBeenSet(false),
    m_s3DestinationExportFileFormat(ExportFileFormat::NOT_SET),
    m_s3DestinationExportFileFormatHasBeenSet(false),
    m_s3DestinationExportFileFormatOptionsHasBeenSet(false)
{
}

DataViewDestinationTypeParams::DataViewDestinationTypeParams(JsonView jsonValue) : 
    m_destinationTypeHasBeenSet(false),
    m_s3DestinationExportFileFormat(ExportFileFormat::NOT_SET),
    m_s3DestinationExportFileFormatHasBeenSet(false),
    m_s3DestinationExportFileFormatOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DataViewDestinationTypeParams& DataViewDestinationTypeParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationType"))
  {
    m_destinationType = jsonValue.GetString("destinationType");

    m_destinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3DestinationExportFileFormat"))
  {
    m_s3DestinationExportFileFormat = ExportFileFormatMapper::GetExportFileFormatForName(jsonValue.GetString("s3DestinationExportFileFormat"));

    m_s3DestinationExportFileFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3DestinationExportFileFormatOptions"))
  {
    Aws::Map<Aws::String, JsonView> s3DestinationExportFileFormatOptionsJsonMap = jsonValue.GetObject("s3DestinationExportFileFormatOptions").GetAllObjects();
    for(auto& s3DestinationExportFileFormatOptionsItem : s3DestinationExportFileFormatOptionsJsonMap)
    {
      m_s3DestinationExportFileFormatOptions[s3DestinationExportFileFormatOptionsItem.first] = s3DestinationExportFileFormatOptionsItem.second.AsString();
    }
    m_s3DestinationExportFileFormatOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataViewDestinationTypeParams::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("destinationType", m_destinationType);

  }

  if(m_s3DestinationExportFileFormatHasBeenSet)
  {
   payload.WithString("s3DestinationExportFileFormat", ExportFileFormatMapper::GetNameForExportFileFormat(m_s3DestinationExportFileFormat));
  }

  if(m_s3DestinationExportFileFormatOptionsHasBeenSet)
  {
   JsonValue s3DestinationExportFileFormatOptionsJsonMap;
   for(auto& s3DestinationExportFileFormatOptionsItem : m_s3DestinationExportFileFormatOptions)
   {
     s3DestinationExportFileFormatOptionsJsonMap.WithString(s3DestinationExportFileFormatOptionsItem.first, s3DestinationExportFileFormatOptionsItem.second);
   }
   payload.WithObject("s3DestinationExportFileFormatOptions", std::move(s3DestinationExportFileFormatOptionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
