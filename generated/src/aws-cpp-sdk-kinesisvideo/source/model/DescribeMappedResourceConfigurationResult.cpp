/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMappedResourceConfigurationResult::DescribeMappedResourceConfigurationResult()
{
}

DescribeMappedResourceConfigurationResult::DescribeMappedResourceConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMappedResourceConfigurationResult& DescribeMappedResourceConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MappedResourceConfigurationList"))
  {
    Aws::Utils::Array<JsonView> mappedResourceConfigurationListJsonList = jsonValue.GetArray("MappedResourceConfigurationList");
    for(unsigned mappedResourceConfigurationListIndex = 0; mappedResourceConfigurationListIndex < mappedResourceConfigurationListJsonList.GetLength(); ++mappedResourceConfigurationListIndex)
    {
      m_mappedResourceConfigurationList.push_back(mappedResourceConfigurationListJsonList[mappedResourceConfigurationListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
