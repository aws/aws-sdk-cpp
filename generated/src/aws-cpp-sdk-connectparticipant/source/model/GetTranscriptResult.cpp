/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/GetTranscriptResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTranscriptResult::GetTranscriptResult()
{
}

GetTranscriptResult::GetTranscriptResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTranscriptResult& GetTranscriptResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InitialContactId"))
  {
    m_initialContactId = jsonValue.GetString("InitialContactId");

  }

  if(jsonValue.ValueExists("Transcript"))
  {
    Aws::Utils::Array<JsonView> transcriptJsonList = jsonValue.GetArray("Transcript");
    for(unsigned transcriptIndex = 0; transcriptIndex < transcriptJsonList.GetLength(); ++transcriptIndex)
    {
      m_transcript.push_back(transcriptJsonList[transcriptIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
