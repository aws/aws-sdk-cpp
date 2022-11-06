/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetFaceSearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFaceSearchResult::GetFaceSearchResult() : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
}

GetFaceSearchResult::GetFaceSearchResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
  *this = result;
}

GetFaceSearchResult& GetFaceSearchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("VideoMetadata"))
  {
    m_videoMetadata = jsonValue.GetObject("VideoMetadata");

  }

  if(jsonValue.ValueExists("Persons"))
  {
    Aws::Utils::Array<JsonView> personsJsonList = jsonValue.GetArray("Persons");
    for(unsigned personsIndex = 0; personsIndex < personsJsonList.GetLength(); ++personsIndex)
    {
      m_persons.push_back(personsJsonList[personsIndex].AsObject());
    }
  }



  return *this;
}
