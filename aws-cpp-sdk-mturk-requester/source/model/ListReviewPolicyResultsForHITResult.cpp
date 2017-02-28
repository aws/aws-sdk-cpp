/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReviewPolicyResultsForHITResult::ListReviewPolicyResultsForHITResult()
{
}

ListReviewPolicyResultsForHITResult::ListReviewPolicyResultsForHITResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReviewPolicyResultsForHITResult& ListReviewPolicyResultsForHITResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("HITId"))
  {
    m_hITId = jsonValue.GetString("HITId");

  }

  if(jsonValue.ValueExists("AssignmentReviewPolicy"))
  {
    m_assignmentReviewPolicy = jsonValue.GetObject("AssignmentReviewPolicy");

  }

  if(jsonValue.ValueExists("HITReviewPolicy"))
  {
    m_hITReviewPolicy = jsonValue.GetObject("HITReviewPolicy");

  }

  if(jsonValue.ValueExists("AssignmentReviewReport"))
  {
    m_assignmentReviewReport = jsonValue.GetObject("AssignmentReviewReport");

  }

  if(jsonValue.ValueExists("HITReviewReport"))
  {
    m_hITReviewReport = jsonValue.GetObject("HITReviewReport");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
