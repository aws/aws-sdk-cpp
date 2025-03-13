/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAddonConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAddonConfigurationResult::DescribeAddonConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAddonConfigurationResult& DescribeAddonConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("addonName"))
  {
    m_addonName = jsonValue.GetString("addonName");
    m_addonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addonVersion"))
  {
    m_addonVersion = jsonValue.GetString("addonVersion");
    m_addonVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationSchema"))
  {
    m_configurationSchema = jsonValue.GetString("configurationSchema");
    m_configurationSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("podIdentityConfiguration"))
  {
    Aws::Utils::Array<JsonView> podIdentityConfigurationJsonList = jsonValue.GetArray("podIdentityConfiguration");
    for(unsigned podIdentityConfigurationIndex = 0; podIdentityConfigurationIndex < podIdentityConfigurationJsonList.GetLength(); ++podIdentityConfigurationIndex)
    {
      m_podIdentityConfiguration.push_back(podIdentityConfigurationJsonList[podIdentityConfigurationIndex].AsObject());
    }
    m_podIdentityConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
