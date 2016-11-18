/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudhsm/model/DescribeHsmResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHsmResult::DescribeHsmResult() : 
    m_status(HsmStatus::NOT_SET),
    m_subscriptionType(SubscriptionType::NOT_SET)
{
}

DescribeHsmResult::DescribeHsmResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_status(HsmStatus::NOT_SET),
    m_subscriptionType(SubscriptionType::NOT_SET)
{
  *this = result;
}

DescribeHsmResult& DescribeHsmResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("HsmArn"))
  {
    m_hsmArn = jsonValue.GetString("HsmArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = HsmStatusMapper::GetHsmStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

  }

  if(jsonValue.ValueExists("EniId"))
  {
    m_eniId = jsonValue.GetString("EniId");

  }

  if(jsonValue.ValueExists("EniIp"))
  {
    m_eniIp = jsonValue.GetString("EniIp");

  }

  if(jsonValue.ValueExists("SubscriptionType"))
  {
    m_subscriptionType = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("SubscriptionType"));

  }

  if(jsonValue.ValueExists("SubscriptionStartDate"))
  {
    m_subscriptionStartDate = jsonValue.GetString("SubscriptionStartDate");

  }

  if(jsonValue.ValueExists("SubscriptionEndDate"))
  {
    m_subscriptionEndDate = jsonValue.GetString("SubscriptionEndDate");

  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

  }

  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");

  }

  if(jsonValue.ValueExists("VendorName"))
  {
    m_vendorName = jsonValue.GetString("VendorName");

  }

  if(jsonValue.ValueExists("HsmType"))
  {
    m_hsmType = jsonValue.GetString("HsmType");

  }

  if(jsonValue.ValueExists("SoftwareVersion"))
  {
    m_softwareVersion = jsonValue.GetString("SoftwareVersion");

  }

  if(jsonValue.ValueExists("SshPublicKey"))
  {
    m_sshPublicKey = jsonValue.GetString("SshPublicKey");

  }

  if(jsonValue.ValueExists("SshKeyLastUpdated"))
  {
    m_sshKeyLastUpdated = jsonValue.GetString("SshKeyLastUpdated");

  }

  if(jsonValue.ValueExists("ServerCertUri"))
  {
    m_serverCertUri = jsonValue.GetString("ServerCertUri");

  }

  if(jsonValue.ValueExists("ServerCertLastUpdated"))
  {
    m_serverCertLastUpdated = jsonValue.GetString("ServerCertLastUpdated");

  }

  if(jsonValue.ValueExists("Partitions"))
  {
    Array<JsonValue> partitionsJsonList = jsonValue.GetArray("Partitions");
    for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
    {
      m_partitions.push_back(partitionsJsonList[partitionsIndex].AsString());
    }
  }



  return *this;
}
