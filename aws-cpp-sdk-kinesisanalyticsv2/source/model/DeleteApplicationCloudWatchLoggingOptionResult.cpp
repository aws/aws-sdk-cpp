﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteApplicationCloudWatchLoggingOptionResult::DeleteApplicationCloudWatchLoggingOptionResult() : 
    m_applicationVersionId(0)
{
}

DeleteApplicationCloudWatchLoggingOptionResult::DeleteApplicationCloudWatchLoggingOptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationVersionId(0)
{
  *this = result;
}

DeleteApplicationCloudWatchLoggingOptionResult& DeleteApplicationCloudWatchLoggingOptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");

  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

  }

  if(jsonValue.ValueExists("CloudWatchLoggingOptionDescriptions"))
  {
    Array<JsonView> cloudWatchLoggingOptionDescriptionsJsonList = jsonValue.GetArray("CloudWatchLoggingOptionDescriptions");
    for(unsigned cloudWatchLoggingOptionDescriptionsIndex = 0; cloudWatchLoggingOptionDescriptionsIndex < cloudWatchLoggingOptionDescriptionsJsonList.GetLength(); ++cloudWatchLoggingOptionDescriptionsIndex)
    {
      m_cloudWatchLoggingOptionDescriptions.push_back(cloudWatchLoggingOptionDescriptionsJsonList[cloudWatchLoggingOptionDescriptionsIndex].AsObject());
    }
  }



  return *this;
}
