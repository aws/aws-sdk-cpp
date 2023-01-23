/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetV2LoggingOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetV2LoggingOptionsResult::GetV2LoggingOptionsResult() : 
    m_defaultLogLevel(LogLevel::NOT_SET),
    m_disableAllLogs(false)
{
}

GetV2LoggingOptionsResult::GetV2LoggingOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_defaultLogLevel(LogLevel::NOT_SET),
    m_disableAllLogs(false)
{
  *this = result;
}

GetV2LoggingOptionsResult& GetV2LoggingOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("defaultLogLevel"))
  {
    m_defaultLogLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("defaultLogLevel"));

  }

  if(jsonValue.ValueExists("disableAllLogs"))
  {
    m_disableAllLogs = jsonValue.GetBool("disableAllLogs");

  }



  return *this;
}
