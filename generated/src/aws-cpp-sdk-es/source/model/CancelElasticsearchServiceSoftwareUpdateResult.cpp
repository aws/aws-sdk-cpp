/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelElasticsearchServiceSoftwareUpdateResult::CancelElasticsearchServiceSoftwareUpdateResult()
{
}

CancelElasticsearchServiceSoftwareUpdateResult::CancelElasticsearchServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelElasticsearchServiceSoftwareUpdateResult& CancelElasticsearchServiceSoftwareUpdateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceSoftwareOptions"))
  {
    m_serviceSoftwareOptions = jsonValue.GetObject("ServiceSoftwareOptions");

  }



  return *this;
}
