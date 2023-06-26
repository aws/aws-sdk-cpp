/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FeaturedDocumentMissing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

FeaturedDocumentMissing::FeaturedDocumentMissing() : 
    m_idHasBeenSet(false)
{
}

FeaturedDocumentMissing::FeaturedDocumentMissing(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturedDocumentMissing& FeaturedDocumentMissing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturedDocumentMissing::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
