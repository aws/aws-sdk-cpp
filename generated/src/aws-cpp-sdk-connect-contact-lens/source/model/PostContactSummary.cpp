/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/PostContactSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectContactLens
{
namespace Model
{

PostContactSummary::PostContactSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PostContactSummary& PostContactSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PostContactSummaryStatusMapper::GetPostContactSummaryStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = PostContactSummaryFailureCodeMapper::GetPostContactSummaryFailureCodeForName(jsonValue.GetString("FailureCode"));
    m_failureCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue PostContactSummary::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PostContactSummaryStatusMapper::GetNameForPostContactSummaryStatus(m_status));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", PostContactSummaryFailureCodeMapper::GetNameForPostContactSummaryFailureCode(m_failureCode));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
