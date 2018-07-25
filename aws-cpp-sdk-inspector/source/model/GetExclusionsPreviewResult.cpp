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

#include <aws/inspector/model/GetExclusionsPreviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExclusionsPreviewResult::GetExclusionsPreviewResult() : 
    m_previewStatus(PreviewStatus::NOT_SET)
{
}

GetExclusionsPreviewResult::GetExclusionsPreviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_previewStatus(PreviewStatus::NOT_SET)
{
  *this = result;
}

GetExclusionsPreviewResult& GetExclusionsPreviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("previewStatus"))
  {
    m_previewStatus = PreviewStatusMapper::GetPreviewStatusForName(jsonValue.GetString("previewStatus"));

  }

  if(jsonValue.ValueExists("exclusionPreviews"))
  {
    Array<JsonView> exclusionPreviewsJsonList = jsonValue.GetArray("exclusionPreviews");
    for(unsigned exclusionPreviewsIndex = 0; exclusionPreviewsIndex < exclusionPreviewsJsonList.GetLength(); ++exclusionPreviewsIndex)
    {
      m_exclusionPreviews.push_back(exclusionPreviewsJsonList[exclusionPreviewsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
