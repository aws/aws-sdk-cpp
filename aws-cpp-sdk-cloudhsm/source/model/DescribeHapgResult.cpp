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
#include <aws/cloudhsm/model/DescribeHapgResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHapgResult::DescribeHapgResult() : 
    m_state(CloudHsmObjectState::NOT_SET)
{
}

DescribeHapgResult::DescribeHapgResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_state(CloudHsmObjectState::NOT_SET)
{
  *this = result;
}

DescribeHapgResult& DescribeHapgResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("HapgArn"))
  {
    m_hapgArn = jsonValue.GetString("HapgArn");

  }

  if(jsonValue.ValueExists("HapgSerial"))
  {
    m_hapgSerial = jsonValue.GetString("HapgSerial");

  }

  if(jsonValue.ValueExists("HsmsLastActionFailed"))
  {
    Array<JsonValue> hsmsLastActionFailedJsonList = jsonValue.GetArray("HsmsLastActionFailed");
    for(unsigned hsmsLastActionFailedIndex = 0; hsmsLastActionFailedIndex < hsmsLastActionFailedJsonList.GetLength(); ++hsmsLastActionFailedIndex)
    {
      m_hsmsLastActionFailed.push_back(hsmsLastActionFailedJsonList[hsmsLastActionFailedIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HsmsPendingDeletion"))
  {
    Array<JsonValue> hsmsPendingDeletionJsonList = jsonValue.GetArray("HsmsPendingDeletion");
    for(unsigned hsmsPendingDeletionIndex = 0; hsmsPendingDeletionIndex < hsmsPendingDeletionJsonList.GetLength(); ++hsmsPendingDeletionIndex)
    {
      m_hsmsPendingDeletion.push_back(hsmsPendingDeletionJsonList[hsmsPendingDeletionIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HsmsPendingRegistration"))
  {
    Array<JsonValue> hsmsPendingRegistrationJsonList = jsonValue.GetArray("HsmsPendingRegistration");
    for(unsigned hsmsPendingRegistrationIndex = 0; hsmsPendingRegistrationIndex < hsmsPendingRegistrationJsonList.GetLength(); ++hsmsPendingRegistrationIndex)
    {
      m_hsmsPendingRegistration.push_back(hsmsPendingRegistrationJsonList[hsmsPendingRegistrationIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

  }

  if(jsonValue.ValueExists("LastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetString("LastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("PartitionSerialList"))
  {
    Array<JsonValue> partitionSerialListJsonList = jsonValue.GetArray("PartitionSerialList");
    for(unsigned partitionSerialListIndex = 0; partitionSerialListIndex < partitionSerialListJsonList.GetLength(); ++partitionSerialListIndex)
    {
      m_partitionSerialList.push_back(partitionSerialListJsonList[partitionSerialListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CloudHsmObjectStateMapper::GetCloudHsmObjectStateForName(jsonValue.GetString("State"));

  }



  return *this;
}
