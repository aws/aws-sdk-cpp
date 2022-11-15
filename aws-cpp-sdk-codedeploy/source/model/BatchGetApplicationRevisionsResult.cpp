/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetApplicationRevisionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetApplicationRevisionsResult::BatchGetApplicationRevisionsResult()
{
}

BatchGetApplicationRevisionsResult::BatchGetApplicationRevisionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetApplicationRevisionsResult& BatchGetApplicationRevisionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("revisions"))
  {
    Aws::Utils::Array<JsonView> revisionsJsonList = jsonValue.GetArray("revisions");
    for(unsigned revisionsIndex = 0; revisionsIndex < revisionsJsonList.GetLength(); ++revisionsIndex)
    {
      m_revisions.push_back(revisionsJsonList[revisionsIndex].AsObject());
    }
  }



  return *this;
}
