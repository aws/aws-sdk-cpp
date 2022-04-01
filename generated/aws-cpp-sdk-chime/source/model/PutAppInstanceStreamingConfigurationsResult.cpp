﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PutAppInstanceStreamingConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAppInstanceStreamingConfigurationsResult::PutAppInstanceStreamingConfigurationsResult()
{
}

PutAppInstanceStreamingConfigurationsResult::PutAppInstanceStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutAppInstanceStreamingConfigurationsResult& PutAppInstanceStreamingConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceStreamingConfigurations"))
  {
    Array<JsonView> appInstanceStreamingConfigurationsJsonList = jsonValue.GetArray("AppInstanceStreamingConfigurations");
    for(unsigned appInstanceStreamingConfigurationsIndex = 0; appInstanceStreamingConfigurationsIndex < appInstanceStreamingConfigurationsJsonList.GetLength(); ++appInstanceStreamingConfigurationsIndex)
    {
      m_appInstanceStreamingConfigurations.push_back(appInstanceStreamingConfigurationsJsonList[appInstanceStreamingConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
