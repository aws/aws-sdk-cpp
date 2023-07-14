﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/RemoveNotificationChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveNotificationChannelResult::RemoveNotificationChannelResult()
{
}

RemoveNotificationChannelResult::RemoveNotificationChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RemoveNotificationChannelResult& RemoveNotificationChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
