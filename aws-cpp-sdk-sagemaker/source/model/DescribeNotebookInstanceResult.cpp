/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotebookInstanceResult::DescribeNotebookInstanceResult() : 
    m_notebookInstanceStatus(NotebookInstanceStatus::NOT_SET),
    m_instanceType(InstanceType::NOT_SET),
    m_directInternetAccess(DirectInternetAccess::NOT_SET)
{
}

DescribeNotebookInstanceResult::DescribeNotebookInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_notebookInstanceStatus(NotebookInstanceStatus::NOT_SET),
    m_instanceType(InstanceType::NOT_SET),
    m_directInternetAccess(DirectInternetAccess::NOT_SET)
{
  *this = result;
}

DescribeNotebookInstanceResult& DescribeNotebookInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("NotebookInstanceArn"))
  {
    m_notebookInstanceArn = jsonValue.GetString("NotebookInstanceArn");

  }

  if(jsonValue.ValueExists("NotebookInstanceName"))
  {
    m_notebookInstanceName = jsonValue.GetString("NotebookInstanceName");

  }

  if(jsonValue.ValueExists("NotebookInstanceStatus"))
  {
    m_notebookInstanceStatus = NotebookInstanceStatusMapper::GetNotebookInstanceStatusForName(jsonValue.GetString("NotebookInstanceStatus"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("InstanceType"));

  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Array<JsonValue> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");

  }

  if(jsonValue.ValueExists("DirectInternetAccess"))
  {
    m_directInternetAccess = DirectInternetAccessMapper::GetDirectInternetAccessForName(jsonValue.GetString("DirectInternetAccess"));

  }



  return *this;
}
