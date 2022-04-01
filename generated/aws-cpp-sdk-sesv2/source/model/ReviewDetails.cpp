/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReviewDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ReviewDetails::ReviewDetails() : 
    m_status(ReviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_caseIdHasBeenSet(false)
{
}

ReviewDetails::ReviewDetails(JsonView jsonValue) : 
    m_status(ReviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_caseIdHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewDetails& ReviewDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaseId"))
  {
    m_caseId = jsonValue.GetString("CaseId");

    m_caseIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReviewStatusMapper::GetNameForReviewStatus(m_status));
  }

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("CaseId", m_caseId);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
