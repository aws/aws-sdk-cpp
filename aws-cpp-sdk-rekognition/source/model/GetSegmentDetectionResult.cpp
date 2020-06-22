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

#include <aws/rekognition/model/GetSegmentDetectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSegmentDetectionResult::GetSegmentDetectionResult() : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
}

GetSegmentDetectionResult::GetSegmentDetectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
  *this = result;
}

GetSegmentDetectionResult& GetSegmentDetectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
    Array<JsonView> videoMetadataJsonList = jsonValue.GetArray("VideoMetadata");
    for(unsigned videoMetadataIndex = 0; videoMetadataIndex < videoMetadataJsonList.GetLength(); ++videoMetadataIndex)
    {
      m_videoMetadata.push_back(videoMetadataJsonList[videoMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AudioMetadata"))
  {
    Array<JsonView> audioMetadataJsonList = jsonValue.GetArray("AudioMetadata");
    for(unsigned audioMetadataIndex = 0; audioMetadataIndex < audioMetadataJsonList.GetLength(); ++audioMetadataIndex)
    {
      m_audioMetadata.push_back(audioMetadataJsonList[audioMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Segments"))
  {
    Array<JsonView> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SelectedSegmentTypes"))
  {
    Array<JsonView> selectedSegmentTypesJsonList = jsonValue.GetArray("SelectedSegmentTypes");
    for(unsigned selectedSegmentTypesIndex = 0; selectedSegmentTypesIndex < selectedSegmentTypesJsonList.GetLength(); ++selectedSegmentTypesIndex)
    {
      m_selectedSegmentTypes.push_back(selectedSegmentTypesJsonList[selectedSegmentTypesIndex].AsObject());
    }
  }



  return *this;
}
