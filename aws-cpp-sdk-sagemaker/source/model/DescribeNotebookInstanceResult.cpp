/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_directInternetAccess(DirectInternetAccess::NOT_SET),
    m_volumeSizeInGB(0),
    m_rootAccess(RootAccess::NOT_SET)
{
}

DescribeNotebookInstanceResult::DescribeNotebookInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_notebookInstanceStatus(NotebookInstanceStatus::NOT_SET),
    m_instanceType(InstanceType::NOT_SET),
    m_directInternetAccess(DirectInternetAccess::NOT_SET),
    m_volumeSizeInGB(0),
    m_rootAccess(RootAccess::NOT_SET)
{
  *this = result;
}

DescribeNotebookInstanceResult& DescribeNotebookInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
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

  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");

  }

  if(jsonValue.ValueExists("AcceleratorTypes"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("AcceleratorTypes");
    for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
    {
      m_acceleratorTypes.push_back(NotebookInstanceAcceleratorTypeMapper::GetNotebookInstanceAcceleratorTypeForName(acceleratorTypesJsonList[acceleratorTypesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("DefaultCodeRepository"))
  {
    m_defaultCodeRepository = jsonValue.GetString("DefaultCodeRepository");

  }

  if(jsonValue.ValueExists("AdditionalCodeRepositories"))
  {
    Aws::Utils::Array<JsonView> additionalCodeRepositoriesJsonList = jsonValue.GetArray("AdditionalCodeRepositories");
    for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
    {
      m_additionalCodeRepositories.push_back(additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("RootAccess"))
  {
    m_rootAccess = RootAccessMapper::GetRootAccessForName(jsonValue.GetString("RootAccess"));

  }

  if(jsonValue.ValueExists("PlatformIdentifier"))
  {
    m_platformIdentifier = jsonValue.GetString("PlatformIdentifier");

  }

  if(jsonValue.ValueExists("InstanceMetadataServiceConfiguration"))
  {
    m_instanceMetadataServiceConfiguration = jsonValue.GetObject("InstanceMetadataServiceConfiguration");

  }



  return *this;
}
