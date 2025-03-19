/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DatasetSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

DatasetSource::DatasetSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DatasetSource& DatasetSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = DatasetSourceTypeMapper::GetDatasetSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceFormat"))
  {
    m_sourceFormat = DatasetSourceFormatMapper::GetDatasetSourceFormatForName(jsonValue.GetString("sourceFormat"));
    m_sourceFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceDetail"))
  {
    m_sourceDetail = jsonValue.GetObject("sourceDetail");
    m_sourceDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", DatasetSourceTypeMapper::GetNameForDatasetSourceType(m_sourceType));
  }

  if(m_sourceFormatHasBeenSet)
  {
   payload.WithString("sourceFormat", DatasetSourceFormatMapper::GetNameForDatasetSourceFormat(m_sourceFormat));
  }

  if(m_sourceDetailHasBeenSet)
  {
   payload.WithObject("sourceDetail", m_sourceDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
