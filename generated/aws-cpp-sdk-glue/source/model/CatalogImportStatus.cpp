/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogImportStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CatalogImportStatus::CatalogImportStatus() : 
    m_importCompleted(false),
    m_importCompletedHasBeenSet(false),
    m_importTimeHasBeenSet(false),
    m_importedByHasBeenSet(false)
{
}

CatalogImportStatus::CatalogImportStatus(JsonView jsonValue) : 
    m_importCompleted(false),
    m_importCompletedHasBeenSet(false),
    m_importTimeHasBeenSet(false),
    m_importedByHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogImportStatus& CatalogImportStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportCompleted"))
  {
    m_importCompleted = jsonValue.GetBool("ImportCompleted");

    m_importCompletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportTime"))
  {
    m_importTime = jsonValue.GetDouble("ImportTime");

    m_importTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedBy"))
  {
    m_importedBy = jsonValue.GetString("ImportedBy");

    m_importedByHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogImportStatus::Jsonize() const
{
  JsonValue payload;

  if(m_importCompletedHasBeenSet)
  {
   payload.WithBool("ImportCompleted", m_importCompleted);

  }

  if(m_importTimeHasBeenSet)
  {
   payload.WithDouble("ImportTime", m_importTime.SecondsWithMSPrecision());
  }

  if(m_importedByHasBeenSet)
  {
   payload.WithString("ImportedBy", m_importedBy);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
