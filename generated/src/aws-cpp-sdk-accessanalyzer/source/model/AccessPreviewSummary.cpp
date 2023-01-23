/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessPreviewSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

AccessPreviewSummary::AccessPreviewSummary() : 
    m_idHasBeenSet(false),
    m_analyzerArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(AccessPreviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

AccessPreviewSummary::AccessPreviewSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_analyzerArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(AccessPreviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPreviewSummary& AccessPreviewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("analyzerArn"))
  {
    m_analyzerArn = jsonValue.GetString("analyzerArn");

    m_analyzerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AccessPreviewStatusMapper::GetAccessPreviewStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetObject("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPreviewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_analyzerArnHasBeenSet)
  {
   payload.WithString("analyzerArn", m_analyzerArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AccessPreviewStatusMapper::GetNameForAccessPreviewStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithObject("statusReason", m_statusReason.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
