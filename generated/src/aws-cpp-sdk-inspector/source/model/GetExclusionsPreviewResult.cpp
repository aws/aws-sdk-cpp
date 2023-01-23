/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> exclusionPreviewsJsonList = jsonValue.GetArray("exclusionPreviews");
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
