/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/PublishMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PublishMetricsResult::PublishMetricsResult()
{
}

PublishMetricsResult::PublishMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PublishMetricsResult& PublishMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
