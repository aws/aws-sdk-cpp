/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateUsageReportSubscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateUsageReportSubscriptionResult::CreateUsageReportSubscriptionResult() : 
    m_schedule(UsageReportSchedule::NOT_SET)
{
}

CreateUsageReportSubscriptionResult::CreateUsageReportSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_schedule(UsageReportSchedule::NOT_SET)
{
  *this = result;
}

CreateUsageReportSubscriptionResult& CreateUsageReportSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = UsageReportScheduleMapper::GetUsageReportScheduleForName(jsonValue.GetString("Schedule"));

  }



  return *this;
}
