/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ExportStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ExportStatus::ExportStatus() : 
    m_completionTimestampHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_state(ExportState::NOT_SET),
    m_stateHasBeenSet(false),
    m_submissionTimestampHasBeenSet(false)
{
}

ExportStatus::ExportStatus(JsonView jsonValue)
  : ExportStatus()
{
  *this = jsonValue;
}

ExportStatus& ExportStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletionTimestamp"))
  {
    m_completionTimestamp = jsonValue.GetDouble("CompletionTimestamp");

    m_completionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ExportStateMapper::GetExportStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmissionTimestamp"))
  {
    m_submissionTimestamp = jsonValue.GetDouble("SubmissionTimestamp");

    m_submissionTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportStatus::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimestampHasBeenSet)
  {
   payload.WithDouble("CompletionTimestamp", m_completionTimestamp.SecondsWithMSPrecision());
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ExportStateMapper::GetNameForExportState(m_state));
  }

  if(m_submissionTimestampHasBeenSet)
  {
   payload.WithDouble("SubmissionTimestamp", m_submissionTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
