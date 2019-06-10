/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/MergeHunkDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

MergeHunkDetail::MergeHunkDetail() : 
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_hunkContentHasBeenSet(false)
{
}

MergeHunkDetail::MergeHunkDetail(JsonView jsonValue) : 
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_hunkContentHasBeenSet(false)
{
  *this = jsonValue;
}

MergeHunkDetail& MergeHunkDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startLine"))
  {
    m_startLine = jsonValue.GetInteger("startLine");

    m_startLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endLine"))
  {
    m_endLine = jsonValue.GetInteger("endLine");

    m_endLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hunkContent"))
  {
    m_hunkContent = jsonValue.GetString("hunkContent");

    m_hunkContentHasBeenSet = true;
  }

  return *this;
}

JsonValue MergeHunkDetail::Jsonize() const
{
  JsonValue payload;

  if(m_startLineHasBeenSet)
  {
   payload.WithInteger("startLine", m_startLine);

  }

  if(m_endLineHasBeenSet)
  {
   payload.WithInteger("endLine", m_endLine);

  }

  if(m_hunkContentHasBeenSet)
  {
   payload.WithString("hunkContent", m_hunkContent);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
