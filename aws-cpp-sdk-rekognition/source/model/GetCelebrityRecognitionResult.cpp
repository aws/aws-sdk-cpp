/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetCelebrityRecognitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCelebrityRecognitionResult::GetCelebrityRecognitionResult() : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
}

GetCelebrityRecognitionResult::GetCelebrityRecognitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
  *this = result;
}

GetCelebrityRecognitionResult& GetCelebrityRecognitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = VideoJobStatusMapper::GetVideoJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("VideoMetadata"))
  {
    m_videoMetadata = jsonValue.GetObject("VideoMetadata");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Celebrities"))
  {
    Aws::Utils::Array<JsonView> celebritiesJsonList = jsonValue.GetArray("Celebrities");
    for(unsigned celebritiesIndex = 0; celebritiesIndex < celebritiesJsonList.GetLength(); ++celebritiesIndex)
    {
      m_celebrities.push_back(celebritiesJsonList[celebritiesIndex].AsObject());
    }
  }



  return *this;
}
