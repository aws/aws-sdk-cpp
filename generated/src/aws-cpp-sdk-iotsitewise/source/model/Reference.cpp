/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Reference.h>
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

Reference::Reference(JsonView jsonValue)
{
  *this = jsonValue;
}

Reference& Reference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataset"))
  {
    m_dataset = jsonValue.GetObject("dataset");
    m_datasetHasBeenSet = true;
  }
  return *this;
}

JsonValue Reference::Jsonize() const
{
  JsonValue payload;

  if(m_datasetHasBeenSet)
  {
   payload.WithObject("dataset", m_dataset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
