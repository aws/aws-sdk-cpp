/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/JobParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

JobParameters::JobParameters() : 
    m_formatHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_archiveIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sNSTopicHasBeenSet(false),
    m_retrievalByteRangeHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_inventoryRetrievalParametersHasBeenSet(false),
    m_selectParametersHasBeenSet(false),
    m_outputLocationHasBeenSet(false)
{
}

JobParameters::JobParameters(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_archiveIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sNSTopicHasBeenSet(false),
    m_retrievalByteRangeHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_inventoryRetrievalParametersHasBeenSet(false),
    m_selectParametersHasBeenSet(false),
    m_outputLocationHasBeenSet(false)
{
  *this = jsonValue;
}

JobParameters& JobParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");

    m_archiveIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SNSTopic"))
  {
    m_sNSTopic = jsonValue.GetString("SNSTopic");

    m_sNSTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetrievalByteRange"))
  {
    m_retrievalByteRange = jsonValue.GetString("RetrievalByteRange");

    m_retrievalByteRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetString("Tier");

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InventoryRetrievalParameters"))
  {
    m_inventoryRetrievalParameters = jsonValue.GetObject("InventoryRetrievalParameters");

    m_inventoryRetrievalParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectParameters"))
  {
    m_selectParameters = jsonValue.GetObject("SelectParameters");

    m_selectParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue JobParameters::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_archiveIdHasBeenSet)
  {
   payload.WithString("ArchiveId", m_archiveId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sNSTopicHasBeenSet)
  {
   payload.WithString("SNSTopic", m_sNSTopic);

  }

  if(m_retrievalByteRangeHasBeenSet)
  {
   payload.WithString("RetrievalByteRange", m_retrievalByteRange);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", m_tier);

  }

  if(m_inventoryRetrievalParametersHasBeenSet)
  {
   payload.WithObject("InventoryRetrievalParameters", m_inventoryRetrievalParameters.Jsonize());

  }

  if(m_selectParametersHasBeenSet)
  {
   payload.WithObject("SelectParameters", m_selectParameters.Jsonize());

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("OutputLocation", m_outputLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
