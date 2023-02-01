/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RelatedItemEventIncludedData.h>
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

RelatedItemEventIncludedData::RelatedItemEventIncludedData() : 
    m_includeContent(false),
    m_includeContentHasBeenSet(false)
{
}

RelatedItemEventIncludedData::RelatedItemEventIncludedData(JsonView jsonValue) : 
    m_includeContent(false),
    m_includeContentHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedItemEventIncludedData& RelatedItemEventIncludedData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includeContent"))
  {
    m_includeContent = jsonValue.GetBool("includeContent");

    m_includeContentHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedItemEventIncludedData::Jsonize() const
{
  JsonValue payload;

  if(m_includeContentHasBeenSet)
  {
   payload.WithBool("includeContent", m_includeContent);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
