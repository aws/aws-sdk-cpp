/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/UpdatePracticeRunConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePracticeRunConfigurationResult::UpdatePracticeRunConfigurationResult() : 
    m_zonalAutoshiftStatus(ZonalAutoshiftStatus::NOT_SET)
{
}

UpdatePracticeRunConfigurationResult::UpdatePracticeRunConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_zonalAutoshiftStatus(ZonalAutoshiftStatus::NOT_SET)
{
  *this = result;
}

UpdatePracticeRunConfigurationResult& UpdatePracticeRunConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("practiceRunConfiguration"))
  {
    m_practiceRunConfiguration = jsonValue.GetObject("practiceRunConfiguration");

  }

  if(jsonValue.ValueExists("zonalAutoshiftStatus"))
  {
    m_zonalAutoshiftStatus = ZonalAutoshiftStatusMapper::GetZonalAutoshiftStatusForName(jsonValue.GetString("zonalAutoshiftStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
