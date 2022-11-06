/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKeyPhrasesDetectionJobsResult::ListKeyPhrasesDetectionJobsResult()
{
}

ListKeyPhrasesDetectionJobsResult::ListKeyPhrasesDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKeyPhrasesDetectionJobsResult& ListKeyPhrasesDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyPhrasesDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> keyPhrasesDetectionJobPropertiesListJsonList = jsonValue.GetArray("KeyPhrasesDetectionJobPropertiesList");
    for(unsigned keyPhrasesDetectionJobPropertiesListIndex = 0; keyPhrasesDetectionJobPropertiesListIndex < keyPhrasesDetectionJobPropertiesListJsonList.GetLength(); ++keyPhrasesDetectionJobPropertiesListIndex)
    {
      m_keyPhrasesDetectionJobPropertiesList.push_back(keyPhrasesDetectionJobPropertiesListJsonList[keyPhrasesDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
