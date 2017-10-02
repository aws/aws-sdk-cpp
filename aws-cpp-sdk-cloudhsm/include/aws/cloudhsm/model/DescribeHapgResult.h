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

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsm/model/CloudHsmObjectState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudHSM
{
namespace Model
{
  /**
   * <p>Contains the output of the <a>DescribeHapg</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHapgResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API DescribeHapgResult
  {
  public:
    DescribeHapgResult();
    DescribeHapgResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeHapgResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline const Aws::String& GetHapgArn() const{ return m_hapgArn; }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline void SetHapgArn(const Aws::String& value) { m_hapgArn = value; }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline void SetHapgArn(Aws::String&& value) { m_hapgArn = std::move(value); }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline void SetHapgArn(const char* value) { m_hapgArn.assign(value); }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithHapgArn(const Aws::String& value) { SetHapgArn(value); return *this;}

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithHapgArn(Aws::String&& value) { SetHapgArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithHapgArn(const char* value) { SetHapgArn(value); return *this;}


    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline const Aws::String& GetHapgSerial() const{ return m_hapgSerial; }

    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline void SetHapgSerial(const Aws::String& value) { m_hapgSerial = value; }

    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline void SetHapgSerial(Aws::String&& value) { m_hapgSerial = std::move(value); }

    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline void SetHapgSerial(const char* value) { m_hapgSerial.assign(value); }

    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithHapgSerial(const Aws::String& value) { SetHapgSerial(value); return *this;}

    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithHapgSerial(Aws::String&& value) { SetHapgSerial(std::move(value)); return *this;}

    /**
     * <p>The serial number of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithHapgSerial(const char* value) { SetHapgSerial(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetHsmsLastActionFailed() const{ return m_hsmsLastActionFailed; }

    /**
     * <p/>
     */
    inline void SetHsmsLastActionFailed(const Aws::Vector<Aws::String>& value) { m_hsmsLastActionFailed = value; }

    /**
     * <p/>
     */
    inline void SetHsmsLastActionFailed(Aws::Vector<Aws::String>&& value) { m_hsmsLastActionFailed = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeHapgResult& WithHsmsLastActionFailed(const Aws::Vector<Aws::String>& value) { SetHsmsLastActionFailed(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeHapgResult& WithHsmsLastActionFailed(Aws::Vector<Aws::String>&& value) { SetHsmsLastActionFailed(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsLastActionFailed(const Aws::String& value) { m_hsmsLastActionFailed.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsLastActionFailed(Aws::String&& value) { m_hsmsLastActionFailed.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsLastActionFailed(const char* value) { m_hsmsLastActionFailed.push_back(value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetHsmsPendingDeletion() const{ return m_hsmsPendingDeletion; }

    /**
     * <p/>
     */
    inline void SetHsmsPendingDeletion(const Aws::Vector<Aws::String>& value) { m_hsmsPendingDeletion = value; }

    /**
     * <p/>
     */
    inline void SetHsmsPendingDeletion(Aws::Vector<Aws::String>&& value) { m_hsmsPendingDeletion = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeHapgResult& WithHsmsPendingDeletion(const Aws::Vector<Aws::String>& value) { SetHsmsPendingDeletion(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeHapgResult& WithHsmsPendingDeletion(Aws::Vector<Aws::String>&& value) { SetHsmsPendingDeletion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsPendingDeletion(const Aws::String& value) { m_hsmsPendingDeletion.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsPendingDeletion(Aws::String&& value) { m_hsmsPendingDeletion.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsPendingDeletion(const char* value) { m_hsmsPendingDeletion.push_back(value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetHsmsPendingRegistration() const{ return m_hsmsPendingRegistration; }

    /**
     * <p/>
     */
    inline void SetHsmsPendingRegistration(const Aws::Vector<Aws::String>& value) { m_hsmsPendingRegistration = value; }

    /**
     * <p/>
     */
    inline void SetHsmsPendingRegistration(Aws::Vector<Aws::String>&& value) { m_hsmsPendingRegistration = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeHapgResult& WithHsmsPendingRegistration(const Aws::Vector<Aws::String>& value) { SetHsmsPendingRegistration(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeHapgResult& WithHsmsPendingRegistration(Aws::Vector<Aws::String>&& value) { SetHsmsPendingRegistration(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsPendingRegistration(const Aws::String& value) { m_hsmsPendingRegistration.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsPendingRegistration(Aws::String&& value) { m_hsmsPendingRegistration.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline DescribeHapgResult& AddHsmsPendingRegistration(const char* value) { m_hsmsPendingRegistration.push_back(value); return *this; }


    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_label = value; }

    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }

    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline void SetLabel(const char* value) { m_label.assign(value); }

    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label for the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::String& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::String&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline void SetLastModifiedTimestamp(const char* value) { m_lastModifiedTimestamp.assign(value); }

    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline DescribeHapgResult& WithLastModifiedTimestamp(const Aws::String& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline DescribeHapgResult& WithLastModifiedTimestamp(Aws::String&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}

    /**
     * <p>The date and time the high-availability partition group was last
     * modified.</p>
     */
    inline DescribeHapgResult& WithLastModifiedTimestamp(const char* value) { SetLastModifiedTimestamp(value); return *this;}


    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionSerialList() const{ return m_partitionSerialList; }

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline void SetPartitionSerialList(const Aws::Vector<Aws::String>& value) { m_partitionSerialList = value; }

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline void SetPartitionSerialList(Aws::Vector<Aws::String>&& value) { m_partitionSerialList = std::move(value); }

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline DescribeHapgResult& WithPartitionSerialList(const Aws::Vector<Aws::String>& value) { SetPartitionSerialList(value); return *this;}

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline DescribeHapgResult& WithPartitionSerialList(Aws::Vector<Aws::String>&& value) { SetPartitionSerialList(std::move(value)); return *this;}

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline DescribeHapgResult& AddPartitionSerialList(const Aws::String& value) { m_partitionSerialList.push_back(value); return *this; }

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline DescribeHapgResult& AddPartitionSerialList(Aws::String&& value) { m_partitionSerialList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of partition serial numbers that belong to the high-availability
     * partition group.</p>
     */
    inline DescribeHapgResult& AddPartitionSerialList(const char* value) { m_partitionSerialList.push_back(value); return *this; }


    /**
     * <p>The state of the high-availability partition group.</p>
     */
    inline const CloudHsmObjectState& GetState() const{ return m_state; }

    /**
     * <p>The state of the high-availability partition group.</p>
     */
    inline void SetState(const CloudHsmObjectState& value) { m_state = value; }

    /**
     * <p>The state of the high-availability partition group.</p>
     */
    inline void SetState(CloudHsmObjectState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithState(const CloudHsmObjectState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the high-availability partition group.</p>
     */
    inline DescribeHapgResult& WithState(CloudHsmObjectState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_hapgArn;

    Aws::String m_hapgSerial;

    Aws::Vector<Aws::String> m_hsmsLastActionFailed;

    Aws::Vector<Aws::String> m_hsmsPendingDeletion;

    Aws::Vector<Aws::String> m_hsmsPendingRegistration;

    Aws::String m_label;

    Aws::String m_lastModifiedTimestamp;

    Aws::Vector<Aws::String> m_partitionSerialList;

    CloudHsmObjectState m_state;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
