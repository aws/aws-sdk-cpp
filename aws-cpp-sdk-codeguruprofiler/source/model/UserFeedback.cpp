/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/UserFeedback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

UserFeedback::UserFeedback() : 
    m_type(FeedbackType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

UserFeedback::UserFeedback(JsonView jsonValue) : 
    m_type(FeedbackType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

UserFeedback& UserFeedback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FeedbackTypeMapper::GetFeedbackTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserFeedback::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FeedbackTypeMapper::GetNameForFeedbackType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
