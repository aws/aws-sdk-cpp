/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ExportSqlDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ExportSqlDetails::ExportSqlDetails() : 
    m_s3ObjectKeyHasBeenSet(false),
    m_objectURLHasBeenSet(false)
{
}

ExportSqlDetails::ExportSqlDetails(JsonView jsonValue) : 
    m_s3ObjectKeyHasBeenSet(false),
    m_objectURLHasBeenSet(false)
{
  *this = jsonValue;
}

ExportSqlDetails& ExportSqlDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ObjectKey"))
  {
    m_s3ObjectKey = jsonValue.GetString("S3ObjectKey");

    m_s3ObjectKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectURL"))
  {
    m_objectURL = jsonValue.GetString("ObjectURL");

    m_objectURLHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportSqlDetails::Jsonize() const
{
  JsonValue payload;

  if(m_s3ObjectKeyHasBeenSet)
  {
   payload.WithString("S3ObjectKey", m_s3ObjectKey);

  }

  if(m_objectURLHasBeenSet)
  {
   payload.WithString("ObjectURL", m_objectURL);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
