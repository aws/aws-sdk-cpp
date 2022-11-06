/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListAssignmentsForHITResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssignmentsForHITResult::ListAssignmentsForHITResult() : 
    m_numResults(0)
{
}

ListAssignmentsForHITResult::ListAssignmentsForHITResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListAssignmentsForHITResult& ListAssignmentsForHITResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NumResults"))
  {
    m_numResults = jsonValue.GetInteger("NumResults");

  }

  if(jsonValue.ValueExists("Assignments"))
  {
    Aws::Utils::Array<JsonView> assignmentsJsonList = jsonValue.GetArray("Assignments");
    for(unsigned assignmentsIndex = 0; assignmentsIndex < assignmentsJsonList.GetLength(); ++assignmentsIndex)
    {
      m_assignments.push_back(assignmentsJsonList[assignmentsIndex].AsObject());
    }
  }



  return *this;
}
