/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DescribeNamespaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNamespaceResult::DescribeNamespaceResult() : 
    m_trackingNamespaceVersion(0),
    m_namespaceVersion(0)
{
}

DescribeNamespaceResult::DescribeNamespaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_trackingNamespaceVersion(0),
    m_namespaceVersion(0)
{
  *this = result;
}

DescribeNamespaceResult& DescribeNamespaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

  }

  if(jsonValue.ValueExists("trackingNamespaceName"))
  {
    m_trackingNamespaceName = jsonValue.GetString("trackingNamespaceName");

  }

  if(jsonValue.ValueExists("trackingNamespaceVersion"))
  {
    m_trackingNamespaceVersion = jsonValue.GetInt64("trackingNamespaceVersion");

  }

  if(jsonValue.ValueExists("namespaceVersion"))
  {
    m_namespaceVersion = jsonValue.GetInt64("namespaceVersion");

  }



  return *this;
}
