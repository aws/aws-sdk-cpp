/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListResourceProfileDetectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceProfileDetectionsResult::ListResourceProfileDetectionsResult()
{
}

ListResourceProfileDetectionsResult::ListResourceProfileDetectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceProfileDetectionsResult& ListResourceProfileDetectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detections"))
  {
    Aws::Utils::Array<JsonView> detectionsJsonList = jsonValue.GetArray("detections");
    for(unsigned detectionsIndex = 0; detectionsIndex < detectionsJsonList.GetLength(); ++detectionsIndex)
    {
      m_detections.push_back(detectionsJsonList[detectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
