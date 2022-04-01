/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ImportDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ImportDataSource::ImportDataSource() : 
    m_s3UrlHasBeenSet(false),
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false)
{
}

ImportDataSource::ImportDataSource(JsonView jsonValue) : 
    m_s3UrlHasBeenSet(false),
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false)
{
  *this = jsonValue;
}

ImportDataSource& ImportDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

    m_s3UrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DataFormatMapper::GetNameForDataFormat(m_dataFormat));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
