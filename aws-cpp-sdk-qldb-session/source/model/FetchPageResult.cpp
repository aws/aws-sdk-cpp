/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/FetchPageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

FetchPageResult::FetchPageResult() : 
    m_pageHasBeenSet(false)
{
}

FetchPageResult::FetchPageResult(JsonView jsonValue) : 
    m_pageHasBeenSet(false)
{
  *this = jsonValue;
}

FetchPageResult& FetchPageResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetObject("Page");

    m_pageHasBeenSet = true;
  }

  return *this;
}

JsonValue FetchPageResult::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithObject("Page", m_page.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
