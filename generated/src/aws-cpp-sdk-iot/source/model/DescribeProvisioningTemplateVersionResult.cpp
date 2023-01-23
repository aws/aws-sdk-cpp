/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeProvisioningTemplateVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisioningTemplateVersionResult::DescribeProvisioningTemplateVersionResult() : 
    m_versionId(0),
    m_isDefaultVersion(false)
{
}

DescribeProvisioningTemplateVersionResult::DescribeProvisioningTemplateVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionId(0),
    m_isDefaultVersion(false)
{
  *this = result;
}

DescribeProvisioningTemplateVersionResult& DescribeProvisioningTemplateVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetInteger("versionId");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("templateBody"))
  {
    m_templateBody = jsonValue.GetString("templateBody");

  }

  if(jsonValue.ValueExists("isDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("isDefaultVersion");

  }



  return *this;
}
