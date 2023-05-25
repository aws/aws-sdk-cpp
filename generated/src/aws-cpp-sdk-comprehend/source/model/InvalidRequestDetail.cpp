/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/InvalidRequestDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

InvalidRequestDetail::InvalidRequestDetail() : 
    m_reason(InvalidRequestDetailReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

InvalidRequestDetail::InvalidRequestDetail(JsonView jsonValue) : 
    m_reason(InvalidRequestDetailReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidRequestDetail& InvalidRequestDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = InvalidRequestDetailReasonMapper::GetInvalidRequestDetailReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidRequestDetail::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", InvalidRequestDetailReasonMapper::GetNameForInvalidRequestDetailReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
