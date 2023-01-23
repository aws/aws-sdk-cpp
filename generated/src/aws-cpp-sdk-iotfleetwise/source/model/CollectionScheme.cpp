/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CollectionScheme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CollectionScheme::CollectionScheme() : 
    m_timeBasedCollectionSchemeHasBeenSet(false),
    m_conditionBasedCollectionSchemeHasBeenSet(false)
{
}

CollectionScheme::CollectionScheme(JsonView jsonValue) : 
    m_timeBasedCollectionSchemeHasBeenSet(false),
    m_conditionBasedCollectionSchemeHasBeenSet(false)
{
  *this = jsonValue;
}

CollectionScheme& CollectionScheme::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeBasedCollectionScheme"))
  {
    m_timeBasedCollectionScheme = jsonValue.GetObject("timeBasedCollectionScheme");

    m_timeBasedCollectionSchemeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conditionBasedCollectionScheme"))
  {
    m_conditionBasedCollectionScheme = jsonValue.GetObject("conditionBasedCollectionScheme");

    m_conditionBasedCollectionSchemeHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectionScheme::Jsonize() const
{
  JsonValue payload;

  if(m_timeBasedCollectionSchemeHasBeenSet)
  {
   payload.WithObject("timeBasedCollectionScheme", m_timeBasedCollectionScheme.Jsonize());

  }

  if(m_conditionBasedCollectionSchemeHasBeenSet)
  {
   payload.WithObject("conditionBasedCollectionScheme", m_conditionBasedCollectionScheme.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
