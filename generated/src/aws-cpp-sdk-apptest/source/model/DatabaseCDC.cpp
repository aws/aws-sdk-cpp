/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/DatabaseCDC.h>
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

DatabaseCDC::DatabaseCDC(JsonView jsonValue)
{
  *this = jsonValue;
}

DatabaseCDC& DatabaseCDC::operator =(JsonView jsonValue)
{
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

JsonValue DatabaseCDC::Jsonize() const
{
  JsonValue payload;

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
