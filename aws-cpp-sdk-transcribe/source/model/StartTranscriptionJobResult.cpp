/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/StartTranscriptionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartTranscriptionJobResult::StartTranscriptionJobResult()
{
}

StartTranscriptionJobResult::StartTranscriptionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartTranscriptionJobResult& StartTranscriptionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TranscriptionJob"))
  {
    m_transcriptionJob = jsonValue.GetObject("TranscriptionJob");

  }



  return *this;
}
