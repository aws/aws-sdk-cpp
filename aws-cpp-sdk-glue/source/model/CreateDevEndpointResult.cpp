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

#include <aws/glue/model/CreateDevEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDevEndpointResult::CreateDevEndpointResult() : 
    m_zeppelinRemoteSparkInterpreterPort(0),
    m_numberOfNodes(0),
    m_workerType(WorkerType::NOT_SET),
    m_numberOfWorkers(0)
{
}

CreateDevEndpointResult::CreateDevEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_zeppelinRemoteSparkInterpreterPort(0),
    m_numberOfNodes(0),
    m_workerType(WorkerType::NOT_SET),
    m_numberOfWorkers(0)
{
  *this = result;
}

CreateDevEndpointResult& CreateDevEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("YarnEndpointAddress"))
  {
    m_yarnEndpointAddress = jsonValue.GetString("YarnEndpointAddress");

  }

  if(jsonValue.ValueExists("ZeppelinRemoteSparkInterpreterPort"))
  {
    m_zeppelinRemoteSparkInterpreterPort = jsonValue.GetInteger("ZeppelinRemoteSparkInterpreterPort");

  }

  if(jsonValue.ValueExists("NumberOfNodes"))
  {
    m_numberOfNodes = jsonValue.GetInteger("NumberOfNodes");

  }

  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = WorkerTypeMapper::GetWorkerTypeForName(jsonValue.GetString("WorkerType"));

  }

  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");

  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

  }

  if(jsonValue.ValueExists("ExtraPythonLibsS3Path"))
  {
    m_extraPythonLibsS3Path = jsonValue.GetString("ExtraPythonLibsS3Path");

  }

  if(jsonValue.ValueExists("ExtraJarsS3Path"))
  {
    m_extraJarsS3Path = jsonValue.GetString("ExtraJarsS3Path");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("Arguments"))
  {
    Aws::Map<Aws::String, JsonView> argumentsJsonMap = jsonValue.GetObject("Arguments").GetAllObjects();
    for(auto& argumentsItem : argumentsJsonMap)
    {
      m_arguments[argumentsItem.first] = argumentsItem.second.AsString();
    }
  }



  return *this;
}
