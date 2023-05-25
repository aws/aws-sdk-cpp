/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationEfsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationEfsResult::DescribeLocationEfsResult() : 
    m_inTransitEncryption(EfsInTransitEncryption::NOT_SET)
{
}

DescribeLocationEfsResult::DescribeLocationEfsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_inTransitEncryption(EfsInTransitEncryption::NOT_SET)
{
  *this = result;
}

DescribeLocationEfsResult& DescribeLocationEfsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("Ec2Config"))
  {
    m_ec2Config = jsonValue.GetObject("Ec2Config");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("AccessPointArn"))
  {
    m_accessPointArn = jsonValue.GetString("AccessPointArn");

  }

  if(jsonValue.ValueExists("FileSystemAccessRoleArn"))
  {
    m_fileSystemAccessRoleArn = jsonValue.GetString("FileSystemAccessRoleArn");

  }

  if(jsonValue.ValueExists("InTransitEncryption"))
  {
    m_inTransitEncryption = EfsInTransitEncryptionMapper::GetEfsInTransitEncryptionForName(jsonValue.GetString("InTransitEncryption"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
