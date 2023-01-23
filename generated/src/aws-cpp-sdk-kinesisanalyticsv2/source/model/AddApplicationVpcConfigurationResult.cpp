/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/AddApplicationVpcConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddApplicationVpcConfigurationResult::AddApplicationVpcConfigurationResult() : 
    m_applicationVersionId(0)
{
}

AddApplicationVpcConfigurationResult::AddApplicationVpcConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationVersionId(0)
{
  *this = result;
}

AddApplicationVpcConfigurationResult& AddApplicationVpcConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("VpcConfigurationDescription"))
  {
    m_vpcConfigurationDescription = jsonValue.GetObject("VpcConfigurationDescription");

  }



  return *this;
}
