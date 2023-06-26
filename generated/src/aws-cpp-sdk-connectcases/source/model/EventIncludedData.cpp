/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/EventIncludedData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

EventIncludedData::EventIncludedData() : 
    m_caseDataHasBeenSet(false),
    m_relatedItemDataHasBeenSet(false)
{
}

EventIncludedData::EventIncludedData(JsonView jsonValue) : 
    m_caseDataHasBeenSet(false),
    m_relatedItemDataHasBeenSet(false)
{
  *this = jsonValue;
}

EventIncludedData& EventIncludedData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseData"))
  {
    m_caseData = jsonValue.GetObject("caseData");

    m_caseDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedItemData"))
  {
    m_relatedItemData = jsonValue.GetObject("relatedItemData");

    m_relatedItemDataHasBeenSet = true;
  }

  return *this;
}

JsonValue EventIncludedData::Jsonize() const
{
  JsonValue payload;

  if(m_caseDataHasBeenSet)
  {
   payload.WithObject("caseData", m_caseData.Jsonize());

  }

  if(m_relatedItemDataHasBeenSet)
  {
   payload.WithObject("relatedItemData", m_relatedItemData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
