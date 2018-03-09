/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/CreateOTAUpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateOTAUpdateResult::CreateOTAUpdateResult() : 
    m_otaUpdateStatus(OTAUpdateStatus::NOT_SET)
{
}

CreateOTAUpdateResult::CreateOTAUpdateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_otaUpdateStatus(OTAUpdateStatus::NOT_SET)
{
  *this = result;
}

CreateOTAUpdateResult& CreateOTAUpdateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("otaUpdateId"))
  {
    m_otaUpdateId = jsonValue.GetString("otaUpdateId");

  }

  if(jsonValue.ValueExists("awsIotJobId"))
  {
    m_awsIotJobId = jsonValue.GetString("awsIotJobId");

  }

  if(jsonValue.ValueExists("otaUpdateArn"))
  {
    m_otaUpdateArn = jsonValue.GetString("otaUpdateArn");

  }

  if(jsonValue.ValueExists("awsIotJobArn"))
  {
    m_awsIotJobArn = jsonValue.GetString("awsIotJobArn");

  }

  if(jsonValue.ValueExists("otaUpdateStatus"))
  {
    m_otaUpdateStatus = OTAUpdateStatusMapper::GetOTAUpdateStatusForName(jsonValue.GetString("otaUpdateStatus"));

  }



  return *this;
}
