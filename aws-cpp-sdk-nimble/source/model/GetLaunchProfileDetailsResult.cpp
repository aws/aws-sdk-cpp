/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetLaunchProfileDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLaunchProfileDetailsResult::GetLaunchProfileDetailsResult()
{
}

GetLaunchProfileDetailsResult::GetLaunchProfileDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLaunchProfileDetailsResult& GetLaunchProfileDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("launchProfile"))
  {
    m_launchProfile = jsonValue.GetObject("launchProfile");

  }

  if(jsonValue.ValueExists("streamingImages"))
  {
    Aws::Utils::Array<JsonView> streamingImagesJsonList = jsonValue.GetArray("streamingImages");
    for(unsigned streamingImagesIndex = 0; streamingImagesIndex < streamingImagesJsonList.GetLength(); ++streamingImagesIndex)
    {
      m_streamingImages.push_back(streamingImagesJsonList[streamingImagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("studioComponentSummaries"))
  {
    Aws::Utils::Array<JsonView> studioComponentSummariesJsonList = jsonValue.GetArray("studioComponentSummaries");
    for(unsigned studioComponentSummariesIndex = 0; studioComponentSummariesIndex < studioComponentSummariesJsonList.GetLength(); ++studioComponentSummariesIndex)
    {
      m_studioComponentSummaries.push_back(studioComponentSummariesJsonList[studioComponentSummariesIndex].AsObject());
    }
  }



  return *this;
}
