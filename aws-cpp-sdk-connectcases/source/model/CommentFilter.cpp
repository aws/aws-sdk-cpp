/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CommentFilter.h>
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

CommentFilter::CommentFilter()
{
}

CommentFilter::CommentFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

CommentFilter& CommentFilter::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue CommentFilter::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
