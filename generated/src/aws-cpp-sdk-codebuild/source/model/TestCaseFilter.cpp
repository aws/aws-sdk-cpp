/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/TestCaseFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

TestCaseFilter::TestCaseFilter() : 
    m_statusHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

TestCaseFilter::TestCaseFilter(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
  *this = jsonValue;
}

TestCaseFilter& TestCaseFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyword"))
  {
    m_keyword = jsonValue.GetString("keyword");

    m_keywordHasBeenSet = true;
  }

  return *this;
}

JsonValue TestCaseFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_keywordHasBeenSet)
  {
   payload.WithString("keyword", m_keyword);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
