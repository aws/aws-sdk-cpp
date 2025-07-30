/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeADAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeADAssessmentResult::DescribeADAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeADAssessmentResult& DescribeADAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Assessment"))
  {
    m_assessment = jsonValue.GetObject("Assessment");
    m_assessmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssessmentReports"))
  {
    Aws::Utils::Array<JsonView> assessmentReportsJsonList = jsonValue.GetArray("AssessmentReports");
    for(unsigned assessmentReportsIndex = 0; assessmentReportsIndex < assessmentReportsJsonList.GetLength(); ++assessmentReportsIndex)
    {
      m_assessmentReports.push_back(assessmentReportsJsonList[assessmentReportsIndex].AsObject());
    }
    m_assessmentReportsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
