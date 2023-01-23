﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutConfigurationAggregatorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutConfigurationAggregatorResult::PutConfigurationAggregatorResult()
{
}

PutConfigurationAggregatorResult::PutConfigurationAggregatorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutConfigurationAggregatorResult& PutConfigurationAggregatorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationAggregator"))
  {
    m_configurationAggregator = jsonValue.GetObject("ConfigurationAggregator");

  }



  return *this;
}
