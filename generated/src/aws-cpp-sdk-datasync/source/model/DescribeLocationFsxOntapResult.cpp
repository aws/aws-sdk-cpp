/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationFsxOntapResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationFsxOntapResult::DescribeLocationFsxOntapResult()
{
}

DescribeLocationFsxOntapResult::DescribeLocationFsxOntapResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationFsxOntapResult& DescribeLocationFsxOntapResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetObject("Protocol");

  }

  if(jsonValue.ValueExists("SecurityGroupArns"))
  {
    Aws::Utils::Array<JsonView> securityGroupArnsJsonList = jsonValue.GetArray("SecurityGroupArns");
    for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
    {
      m_securityGroupArns.push_back(securityGroupArnsJsonList[securityGroupArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("StorageVirtualMachineArn"))
  {
    m_storageVirtualMachineArn = jsonValue.GetString("StorageVirtualMachineArn");

  }

  if(jsonValue.ValueExists("FsxFilesystemArn"))
  {
    m_fsxFilesystemArn = jsonValue.GetString("FsxFilesystemArn");

  }



  return *this;
}
