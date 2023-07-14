/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAppImageConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppImageConfigResult::DescribeAppImageConfigResult()
{
}

DescribeAppImageConfigResult::DescribeAppImageConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppImageConfigResult& DescribeAppImageConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppImageConfigArn"))
  {
    m_appImageConfigArn = jsonValue.GetString("AppImageConfigArn");

  }

  if(jsonValue.ValueExists("AppImageConfigName"))
  {
    m_appImageConfigName = jsonValue.GetString("AppImageConfigName");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("KernelGatewayImageConfig"))
  {
    m_kernelGatewayImageConfig = jsonValue.GetObject("KernelGatewayImageConfig");

  }



  return *this;
}
