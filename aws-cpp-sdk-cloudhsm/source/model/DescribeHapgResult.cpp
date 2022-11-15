/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/DescribeHapgResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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

DescribeHapgResult::DescribeHapgResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(CloudHsmObjectState::NOT_SET)
{
  *this = result;
}

DescribeHapgResult& DescribeHapgResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Utils::Array<JsonView> hsmsLastActionFailedJsonList = jsonValue.GetArray("HsmsLastActionFailed");
    for(unsigned hsmsLastActionFailedIndex = 0; hsmsLastActionFailedIndex < hsmsLastActionFailedJsonList.GetLength(); ++hsmsLastActionFailedIndex)
    {
      m_hsmsLastActionFailed.push_back(hsmsLastActionFailedJsonList[hsmsLastActionFailedIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HsmsPendingDeletion"))
  {
    Aws::Utils::Array<JsonView> hsmsPendingDeletionJsonList = jsonValue.GetArray("HsmsPendingDeletion");
    for(unsigned hsmsPendingDeletionIndex = 0; hsmsPendingDeletionIndex < hsmsPendingDeletionJsonList.GetLength(); ++hsmsPendingDeletionIndex)
    {
      m_hsmsPendingDeletion.push_back(hsmsPendingDeletionJsonList[hsmsPendingDeletionIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HsmsPendingRegistration"))
  {
    Aws::Utils::Array<JsonView> hsmsPendingRegistrationJsonList = jsonValue.GetArray("HsmsPendingRegistration");
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
    Aws::Utils::Array<JsonView> partitionSerialListJsonList = jsonValue.GetArray("PartitionSerialList");
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
