/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ImportDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ImportDestination::ImportDestination() : 
    m_suppressionListDestinationHasBeenSet(false)
{
}

ImportDestination::ImportDestination(JsonView jsonValue) : 
    m_suppressionListDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

ImportDestination& ImportDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuppressionListDestination"))
  {
    m_suppressionListDestination = jsonValue.GetObject("SuppressionListDestination");

    m_suppressionListDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportDestination::Jsonize() const
{
  JsonValue payload;

  if(m_suppressionListDestinationHasBeenSet)
  {
   payload.WithObject("SuppressionListDestination", m_suppressionListDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
