/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeAccessControlConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccessControlConfigurationResult::DescribeAccessControlConfigurationResult()
{
}

DescribeAccessControlConfigurationResult::DescribeAccessControlConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccessControlConfigurationResult& DescribeAccessControlConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("AccessControlList"))
  {
    Aws::Utils::Array<JsonView> accessControlListJsonList = jsonValue.GetArray("AccessControlList");
    for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
    {
      m_accessControlList.push_back(accessControlListJsonList[accessControlListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("HierarchicalAccessControlList"))
  {
    Aws::Utils::Array<JsonView> hierarchicalAccessControlListJsonList = jsonValue.GetArray("HierarchicalAccessControlList");
    for(unsigned hierarchicalAccessControlListIndex = 0; hierarchicalAccessControlListIndex < hierarchicalAccessControlListJsonList.GetLength(); ++hierarchicalAccessControlListIndex)
    {
      m_hierarchicalAccessControlList.push_back(hierarchicalAccessControlListJsonList[hierarchicalAccessControlListIndex].AsObject());
    }
  }



  return *this;
}
