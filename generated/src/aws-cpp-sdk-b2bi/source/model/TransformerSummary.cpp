/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TransformerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

TransformerSummary::TransformerSummary() : 
    m_transformerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileFormat(FileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_mappingTemplateHasBeenSet(false),
    m_status(TransformerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_ediTypeHasBeenSet(false),
    m_sampleDocumentHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

TransformerSummary::TransformerSummary(JsonView jsonValue) : 
    m_transformerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileFormat(FileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_mappingTemplateHasBeenSet(false),
    m_status(TransformerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_ediTypeHasBeenSet(false),
    m_sampleDocumentHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

TransformerSummary& TransformerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transformerId"))
  {
    m_transformerId = jsonValue.GetString("transformerId");

    m_transformerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = FileFormatMapper::GetFileFormatForName(jsonValue.GetString("fileFormat"));

    m_fileFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mappingTemplate"))
  {
    m_mappingTemplate = jsonValue.GetString("mappingTemplate");

    m_mappingTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TransformerStatusMapper::GetTransformerStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ediType"))
  {
    m_ediType = jsonValue.GetObject("ediType");

    m_ediTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleDocument"))
  {
    m_sampleDocument = jsonValue.GetString("sampleDocument");

    m_sampleDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_transformerIdHasBeenSet)
  {
   payload.WithString("transformerId", m_transformerId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", FileFormatMapper::GetNameForFileFormat(m_fileFormat));
  }

  if(m_mappingTemplateHasBeenSet)
  {
   payload.WithString("mappingTemplate", m_mappingTemplate);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TransformerStatusMapper::GetNameForTransformerStatus(m_status));
  }

  if(m_ediTypeHasBeenSet)
  {
   payload.WithObject("ediType", m_ediType.Jsonize());

  }

  if(m_sampleDocumentHasBeenSet)
  {
   payload.WithString("sampleDocument", m_sampleDocument);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
