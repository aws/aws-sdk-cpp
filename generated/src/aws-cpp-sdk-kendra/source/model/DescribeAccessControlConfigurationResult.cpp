/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeAccessControlConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessControlList"))
  {
    Aws::Utils::Array<JsonView> accessControlListJsonList = jsonValue.GetArray("AccessControlList");
    for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
    {
      m_accessControlList.push_back(accessControlListJsonList[accessControlListIndex].AsObject());
    }
    m_accessControlListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HierarchicalAccessControlList"))
  {
    Aws::Utils::Array<JsonView> hierarchicalAccessControlListJsonList = jsonValue.GetArray("HierarchicalAccessControlList");
    for(unsigned hierarchicalAccessControlListIndex = 0; hierarchicalAccessControlListIndex < hierarchicalAccessControlListJsonList.GetLength(); ++hierarchicalAccessControlListIndex)
    {
      m_hierarchicalAccessControlList.push_back(hierarchicalAccessControlListJsonList[hierarchicalAccessControlListIndex].AsObject());
    }
    m_hierarchicalAccessControlListHasBeenSet = true;
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
