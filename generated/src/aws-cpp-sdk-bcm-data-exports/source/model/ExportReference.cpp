/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExportReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

ExportReference::ExportReference() : 
    m_exportArnHasBeenSet(false),
    m_exportNameHasBeenSet(false),
    m_exportStatusHasBeenSet(false)
{
}

ExportReference::ExportReference(JsonView jsonValue) : 
    m_exportArnHasBeenSet(false),
    m_exportNameHasBeenSet(false),
    m_exportStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ExportReference& ExportReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportArn"))
  {
    m_exportArn = jsonValue.GetString("ExportArn");

    m_exportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportName"))
  {
    m_exportName = jsonValue.GetString("ExportName");

    m_exportNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = jsonValue.GetObject("ExportStatus");

    m_exportStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportReference::Jsonize() const
{
  JsonValue payload;

  if(m_exportArnHasBeenSet)
  {
   payload.WithString("ExportArn", m_exportArn);

  }

  if(m_exportNameHasBeenSet)
  {
   payload.WithString("ExportName", m_exportName);

  }

  if(m_exportStatusHasBeenSet)
  {
   payload.WithObject("ExportStatus", m_exportStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
