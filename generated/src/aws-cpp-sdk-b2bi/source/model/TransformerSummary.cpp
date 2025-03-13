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

TransformerSummary::TransformerSummary(JsonView jsonValue)
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = TransformerStatusMapper::GetTransformerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("inputConversion"))
  {
    m_inputConversion = jsonValue.GetObject("inputConversion");
    m_inputConversionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mapping"))
  {
    m_mapping = jsonValue.GetObject("mapping");
    m_mappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputConversion"))
  {
    m_outputConversion = jsonValue.GetObject("outputConversion");
    m_outputConversionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleDocuments"))
  {
    m_sampleDocuments = jsonValue.GetObject("sampleDocuments");
    m_sampleDocumentsHasBeenSet = true;
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TransformerStatusMapper::GetNameForTransformerStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_inputConversionHasBeenSet)
  {
   payload.WithObject("inputConversion", m_inputConversion.Jsonize());

  }

  if(m_mappingHasBeenSet)
  {
   payload.WithObject("mapping", m_mapping.Jsonize());

  }

  if(m_outputConversionHasBeenSet)
  {
   payload.WithObject("outputConversion", m_outputConversion.Jsonize());

  }

  if(m_sampleDocumentsHasBeenSet)
  {
   payload.WithObject("sampleDocuments", m_sampleDocuments.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
