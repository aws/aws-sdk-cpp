/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeFrameworkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFrameworkResult::DescribeFrameworkResult()
{
}

DescribeFrameworkResult::DescribeFrameworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFrameworkResult& DescribeFrameworkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FrameworkName"))
  {
    m_frameworkName = jsonValue.GetString("FrameworkName");

  }

  if(jsonValue.ValueExists("FrameworkArn"))
  {
    m_frameworkArn = jsonValue.GetString("FrameworkArn");

  }

  if(jsonValue.ValueExists("FrameworkDescription"))
  {
    m_frameworkDescription = jsonValue.GetString("FrameworkDescription");

  }

  if(jsonValue.ValueExists("FrameworkControls"))
  {
    Aws::Utils::Array<JsonView> frameworkControlsJsonList = jsonValue.GetArray("FrameworkControls");
    for(unsigned frameworkControlsIndex = 0; frameworkControlsIndex < frameworkControlsJsonList.GetLength(); ++frameworkControlsIndex)
    {
      m_frameworkControls.push_back(frameworkControlsJsonList[frameworkControlsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = jsonValue.GetString("DeploymentStatus");

  }

  if(jsonValue.ValueExists("FrameworkStatus"))
  {
    m_frameworkStatus = jsonValue.GetString("FrameworkStatus");

  }

  if(jsonValue.ValueExists("IdempotencyToken"))
  {
    m_idempotencyToken = jsonValue.GetString("IdempotencyToken");

  }



  return *this;
}
