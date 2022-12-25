/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> videoMetadataJsonList = jsonValue.GetArray("VideoMetadata");
    for(unsigned videoMetadataIndex = 0; videoMetadataIndex < videoMetadataJsonList.GetLength(); ++videoMetadataIndex)
    {
      m_videoMetadata.push_back(videoMetadataJsonList[videoMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AudioMetadata"))
  {
    Aws::Utils::Array<JsonView> audioMetadataJsonList = jsonValue.GetArray("AudioMetadata");
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
    Aws::Utils::Array<JsonView> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SelectedSegmentTypes"))
  {
    Aws::Utils::Array<JsonView> selectedSegmentTypesJsonList = jsonValue.GetArray("SelectedSegmentTypes");
    for(unsigned selectedSegmentTypesIndex = 0; selectedSegmentTypesIndex < selectedSegmentTypesJsonList.GetLength(); ++selectedSegmentTypesIndex)
    {
      m_selectedSegmentTypes.push_back(selectedSegmentTypesJsonList[selectedSegmentTypesIndex].AsObject());
    }
  }



  return *this;
}
