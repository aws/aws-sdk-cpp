﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeApplicableIndividualAssessmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicableIndividualAssessmentsResult::DescribeApplicableIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeApplicableIndividualAssessmentsResult& DescribeApplicableIndividualAssessmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IndividualAssessmentNames"))
  {
    Aws::Utils::Array<JsonView> individualAssessmentNamesJsonList = jsonValue.GetArray("IndividualAssessmentNames");
    for(unsigned individualAssessmentNamesIndex = 0; individualAssessmentNamesIndex < individualAssessmentNamesJsonList.GetLength(); ++individualAssessmentNamesIndex)
    {
      m_individualAssessmentNames.push_back(individualAssessmentNamesJsonList[individualAssessmentNamesIndex].AsString());
    }
    m_individualAssessmentNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
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
