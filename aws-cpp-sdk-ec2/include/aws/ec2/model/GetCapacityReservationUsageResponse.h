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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceUsage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API GetCapacityReservationUsageResponse
  {
  public:
    GetCapacityReservationUsageResponse();
    GetCapacityReservationUsageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCapacityReservationUsageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetCapacityReservationUsageResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationId = value; }

    
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationId = std::move(value); }

    
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationId.assign(value); }

    
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    
    inline void SetInstanceType(const Aws::String& value) { m_instanceType = value; }

    
    inline void SetInstanceType(Aws::String&& value) { m_instanceType = std::move(value); }

    
    inline void SetInstanceType(const char* value) { m_instanceType.assign(value); }

    
    inline GetCapacityReservationUsageResponse& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }

    
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCount = value; }

    
    inline GetCapacityReservationUsageResponse& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}


    
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }

    
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCount = value; }

    
    inline GetCapacityReservationUsageResponse& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}


    
    inline const CapacityReservationState& GetState() const{ return m_state; }

    
    inline void SetState(const CapacityReservationState& value) { m_state = value; }

    
    inline void SetState(CapacityReservationState&& value) { m_state = std::move(value); }

    
    inline GetCapacityReservationUsageResponse& WithState(const CapacityReservationState& value) { SetState(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithState(CapacityReservationState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::Vector<InstanceUsage>& GetInstanceUsages() const{ return m_instanceUsages; }

    
    inline void SetInstanceUsages(const Aws::Vector<InstanceUsage>& value) { m_instanceUsages = value; }

    
    inline void SetInstanceUsages(Aws::Vector<InstanceUsage>&& value) { m_instanceUsages = std::move(value); }

    
    inline GetCapacityReservationUsageResponse& WithInstanceUsages(const Aws::Vector<InstanceUsage>& value) { SetInstanceUsages(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithInstanceUsages(Aws::Vector<InstanceUsage>&& value) { SetInstanceUsages(std::move(value)); return *this;}

    
    inline GetCapacityReservationUsageResponse& AddInstanceUsages(const InstanceUsage& value) { m_instanceUsages.push_back(value); return *this; }

    
    inline GetCapacityReservationUsageResponse& AddInstanceUsages(InstanceUsage&& value) { m_instanceUsages.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetCapacityReservationUsageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::String m_capacityReservationId;

    Aws::String m_instanceType;

    int m_totalInstanceCount;

    int m_availableInstanceCount;

    CapacityReservationState m_state;

    Aws::Vector<InstanceUsage> m_instanceUsages;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
