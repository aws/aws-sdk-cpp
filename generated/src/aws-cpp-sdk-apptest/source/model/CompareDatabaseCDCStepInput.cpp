/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CompareDatabaseCDCStepInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

CompareDatabaseCDCStepInput::CompareDatabaseCDCStepInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CompareDatabaseCDCStepInput& CompareDatabaseCDCStepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceLocation"))
  {
    m_sourceLocation = jsonValue.GetString("sourceLocation");
    m_sourceLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetLocation"))
  {
    m_targetLocation = jsonValue.GetString("targetLocation");
    m_targetLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetString("outputLocation");
    m_outputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceMetadata"))
  {
    m_sourceMetadata = jsonValue.GetObject("sourceMetadata");
    m_sourceMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetMetadata"))
  {
    m_targetMetadata = jsonValue.GetObject("targetMetadata");
    m_targetMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue CompareDatabaseCDCStepInput::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationHasBeenSet)
  {
   payload.WithString("sourceLocation", m_sourceLocation);

  }

  if(m_targetLocationHasBeenSet)
  {
   payload.WithString("targetLocation", m_targetLocation);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("outputLocation", m_outputLocation);

  }

  if(m_sourceMetadataHasBeenSet)
  {
   payload.WithObject("sourceMetadata", m_sourceMetadata.Jsonize());

  }

  if(m_targetMetadataHasBeenSet)
  {
   payload.WithObject("targetMetadata", m_targetMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
