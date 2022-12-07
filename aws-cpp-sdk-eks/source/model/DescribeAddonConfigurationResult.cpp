/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAddonConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAddonConfigurationResult::DescribeAddonConfigurationResult()
{
}

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

  }

  if(jsonValue.ValueExists("addonVersion"))
  {
    m_addonVersion = jsonValue.GetString("addonVersion");

  }

  if(jsonValue.ValueExists("configurationSchema"))
  {
    m_configurationSchema = jsonValue.GetString("configurationSchema");

  }



  return *this;
}
