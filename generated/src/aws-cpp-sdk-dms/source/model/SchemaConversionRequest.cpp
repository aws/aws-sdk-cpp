/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SchemaConversionRequest.h>
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

SchemaConversionRequest::SchemaConversionRequest() : 
    m_statusHasBeenSet(false),
    m_requestIdentifierHasBeenSet(false),
    m_migrationProjectArnHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_exportSqlDetailsHasBeenSet(false)
{
}

SchemaConversionRequest::SchemaConversionRequest(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_requestIdentifierHasBeenSet(false),
    m_migrationProjectArnHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_exportSqlDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaConversionRequest& SchemaConversionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestIdentifier"))
  {
    m_requestIdentifier = jsonValue.GetString("RequestIdentifier");

    m_requestIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationProjectArn"))
  {
    m_migrationProjectArn = jsonValue.GetString("MigrationProjectArn");

    m_migrationProjectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportSqlDetails"))
  {
    m_exportSqlDetails = jsonValue.GetObject("ExportSqlDetails");

    m_exportSqlDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaConversionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_requestIdentifierHasBeenSet)
  {
   payload.WithString("RequestIdentifier", m_requestIdentifier);

  }

  if(m_migrationProjectArnHasBeenSet)
  {
   payload.WithString("MigrationProjectArn", m_migrationProjectArn);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_exportSqlDetailsHasBeenSet)
  {
   payload.WithObject("ExportSqlDetails", m_exportSqlDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
