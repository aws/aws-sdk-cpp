/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/CreateDetectorVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDetectorVersionResult::CreateDetectorVersionResult() : 
    m_status(DetectorVersionStatus::NOT_SET)
{
}

CreateDetectorVersionResult::CreateDetectorVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DetectorVersionStatus::NOT_SET)
{
  *this = result;
}

CreateDetectorVersionResult& CreateDetectorVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

  }

  if(jsonValue.ValueExists("detectorVersionId"))
  {
    m_detectorVersionId = jsonValue.GetString("detectorVersionId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectorVersionStatusMapper::GetDetectorVersionStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
