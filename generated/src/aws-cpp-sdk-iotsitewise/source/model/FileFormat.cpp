/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/FileFormat.h>
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

FileFormat::FileFormat() : 
    m_csvHasBeenSet(false),
    m_parquetHasBeenSet(false)
{
}

FileFormat::FileFormat(JsonView jsonValue) : 
    m_csvHasBeenSet(false),
    m_parquetHasBeenSet(false)
{
  *this = jsonValue;
}

FileFormat& FileFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("csv"))
  {
    m_csv = jsonValue.GetObject("csv");

    m_csvHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parquet"))
  {
    m_parquet = jsonValue.GetObject("parquet");

    m_parquetHasBeenSet = true;
  }

  return *this;
}

JsonValue FileFormat::Jsonize() const
{
  JsonValue payload;

  if(m_csvHasBeenSet)
  {
   payload.WithObject("csv", m_csv.Jsonize());

  }

  if(m_parquetHasBeenSet)
  {
   payload.WithObject("parquet", m_parquet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
