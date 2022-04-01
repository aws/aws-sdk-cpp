/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/GetMedicalTranscriptionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMedicalTranscriptionJobResult::GetMedicalTranscriptionJobResult()
{
}

GetMedicalTranscriptionJobResult::GetMedicalTranscriptionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMedicalTranscriptionJobResult& GetMedicalTranscriptionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MedicalTranscriptionJob"))
  {
    m_medicalTranscriptionJob = jsonValue.GetObject("MedicalTranscriptionJob");

  }



  return *this;
}
