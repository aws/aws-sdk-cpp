/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GetVoiceToneAnalysisTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetVoiceToneAnalysisTaskRequest::GetVoiceToneAnalysisTaskRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_voiceToneAnalysisTaskIdHasBeenSet(false),
    m_isCaller(false),
    m_isCallerHasBeenSet(false)
{
}

Aws::String GetVoiceToneAnalysisTaskRequest::SerializePayload() const
{
  return {};
}

void GetVoiceToneAnalysisTaskRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_isCallerHasBeenSet)
    {
      ss << m_isCaller;
      uri.AddQueryStringParameter("isCaller", ss.str());
      ss.str("");
    }

}



