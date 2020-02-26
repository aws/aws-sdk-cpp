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

#include <aws/transcribe/model/TranscriptionJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

TranscriptionJobSummary::TranscriptionJobSummary() : 
    m_transcriptionJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_outputLocationType(OutputLocationType::NOT_SET),
    m_outputLocationTypeHasBeenSet(false),
    m_contentRedactionHasBeenSet(false)
{
}

TranscriptionJobSummary::TranscriptionJobSummary(JsonView jsonValue) : 
    m_transcriptionJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_outputLocationType(OutputLocationType::NOT_SET),
    m_outputLocationTypeHasBeenSet(false),
    m_contentRedactionHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptionJobSummary& TranscriptionJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptionJobName"))
  {
    m_transcriptionJobName = jsonValue.GetString("TranscriptionJobName");

    m_transcriptionJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscriptionJobStatus"))
  {
    m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(jsonValue.GetString("TranscriptionJobStatus"));

    m_transcriptionJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputLocationType"))
  {
    m_outputLocationType = OutputLocationTypeMapper::GetOutputLocationTypeForName(jsonValue.GetString("OutputLocationType"));

    m_outputLocationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedaction"))
  {
    m_contentRedaction = jsonValue.GetObject("ContentRedaction");

    m_contentRedactionHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptionJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptionJobNameHasBeenSet)
  {
   payload.WithString("TranscriptionJobName", m_transcriptionJobName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_transcriptionJobStatusHasBeenSet)
  {
   payload.WithString("TranscriptionJobStatus", TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(m_transcriptionJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_outputLocationTypeHasBeenSet)
  {
   payload.WithString("OutputLocationType", OutputLocationTypeMapper::GetNameForOutputLocationType(m_outputLocationType));
  }

  if(m_contentRedactionHasBeenSet)
  {
   payload.WithObject("ContentRedaction", m_contentRedaction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
