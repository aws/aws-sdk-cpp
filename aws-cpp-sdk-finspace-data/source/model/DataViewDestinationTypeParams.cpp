/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DataViewDestinationTypeParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

DataViewDestinationTypeParams::DataViewDestinationTypeParams() : 
    m_destinationTypeHasBeenSet(false)
{
}

DataViewDestinationTypeParams::DataViewDestinationTypeParams(JsonView jsonValue) : 
    m_destinationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DataViewDestinationTypeParams& DataViewDestinationTypeParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationType"))
  {
    m_destinationType = jsonValue.GetString("destinationType");

    m_destinationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataViewDestinationTypeParams::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("destinationType", m_destinationType);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
