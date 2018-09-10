﻿/*
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/InterconnectState.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>An interconnect is a connection that can host other connections.</p> <p>Like
   * a standard AWS Direct Connect connection, an interconnect represents the
   * physical connection between an AWS Direct Connect partner's network and a
   * specific Direct Connect location. An AWS Direct Connect partner who owns an
   * interconnect can provision hosted connections on the interconnect for their end
   * customers, thereby providing the end customers with connectivity to AWS
   * services.</p> <p>The resources of the interconnect, including bandwidth and VLAN
   * numbers, are shared by all of the hosted connections on the interconnect, and
   * the owner of the interconnect determines how these resources are
   * assigned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Interconnect">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API CreateInterconnectResult
  {
  public:
    CreateInterconnectResult();
    CreateInterconnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateInterconnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetInterconnectId() const{ return m_interconnectId; }

    
    inline void SetInterconnectId(const Aws::String& value) { m_interconnectId = value; }

    
    inline void SetInterconnectId(Aws::String&& value) { m_interconnectId = std::move(value); }

    
    inline void SetInterconnectId(const char* value) { m_interconnectId.assign(value); }

    
    inline CreateInterconnectResult& WithInterconnectId(const Aws::String& value) { SetInterconnectId(value); return *this;}

    
    inline CreateInterconnectResult& WithInterconnectId(Aws::String&& value) { SetInterconnectId(std::move(value)); return *this;}

    
    inline CreateInterconnectResult& WithInterconnectId(const char* value) { SetInterconnectId(value); return *this;}


    
    inline const Aws::String& GetInterconnectName() const{ return m_interconnectName; }

    
    inline void SetInterconnectName(const Aws::String& value) { m_interconnectName = value; }

    
    inline void SetInterconnectName(Aws::String&& value) { m_interconnectName = std::move(value); }

    
    inline void SetInterconnectName(const char* value) { m_interconnectName.assign(value); }

    
    inline CreateInterconnectResult& WithInterconnectName(const Aws::String& value) { SetInterconnectName(value); return *this;}

    
    inline CreateInterconnectResult& WithInterconnectName(Aws::String&& value) { SetInterconnectName(std::move(value)); return *this;}

    
    inline CreateInterconnectResult& WithInterconnectName(const char* value) { SetInterconnectName(value); return *this;}


    
    inline const InterconnectState& GetInterconnectState() const{ return m_interconnectState; }

    
    inline void SetInterconnectState(const InterconnectState& value) { m_interconnectState = value; }

    
    inline void SetInterconnectState(InterconnectState&& value) { m_interconnectState = std::move(value); }

    
    inline CreateInterconnectResult& WithInterconnectState(const InterconnectState& value) { SetInterconnectState(value); return *this;}

    
    inline CreateInterconnectResult& WithInterconnectState(InterconnectState&& value) { SetInterconnectState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    
    inline void SetRegion(const char* value) { m_region.assign(value); }

    
    inline CreateInterconnectResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline CreateInterconnectResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    
    inline CreateInterconnectResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    
    inline void SetLocation(const char* value) { m_location.assign(value); }

    
    inline CreateInterconnectResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline CreateInterconnectResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    
    inline CreateInterconnectResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    
    inline void SetBandwidth(const Aws::String& value) { m_bandwidth = value; }

    
    inline void SetBandwidth(Aws::String&& value) { m_bandwidth = std::move(value); }

    
    inline void SetBandwidth(const char* value) { m_bandwidth.assign(value); }

    
    inline CreateInterconnectResult& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    
    inline CreateInterconnectResult& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}

    
    inline CreateInterconnectResult& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}


    /**
     * <p>The time of the most recent call to DescribeInterconnectLoa for this
     * Interconnect.</p>
     */
    inline const Aws::Utils::DateTime& GetLoaIssueTime() const{ return m_loaIssueTime; }

    /**
     * <p>The time of the most recent call to DescribeInterconnectLoa for this
     * Interconnect.</p>
     */
    inline void SetLoaIssueTime(const Aws::Utils::DateTime& value) { m_loaIssueTime = value; }

    /**
     * <p>The time of the most recent call to DescribeInterconnectLoa for this
     * Interconnect.</p>
     */
    inline void SetLoaIssueTime(Aws::Utils::DateTime&& value) { m_loaIssueTime = std::move(value); }

    /**
     * <p>The time of the most recent call to DescribeInterconnectLoa for this
     * Interconnect.</p>
     */
    inline CreateInterconnectResult& WithLoaIssueTime(const Aws::Utils::DateTime& value) { SetLoaIssueTime(value); return *this;}

    /**
     * <p>The time of the most recent call to DescribeInterconnectLoa for this
     * Interconnect.</p>
     */
    inline CreateInterconnectResult& WithLoaIssueTime(Aws::Utils::DateTime&& value) { SetLoaIssueTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    
    inline void SetLagId(const Aws::String& value) { m_lagId = value; }

    
    inline void SetLagId(Aws::String&& value) { m_lagId = std::move(value); }

    
    inline void SetLagId(const char* value) { m_lagId.assign(value); }

    
    inline CreateInterconnectResult& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    
    inline CreateInterconnectResult& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    
    inline CreateInterconnectResult& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDevice = value; }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDevice = std::move(value); }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDevice.assign(value); }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline CreateInterconnectResult& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline CreateInterconnectResult& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline CreateInterconnectResult& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}


    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline CreateInterconnectResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline CreateInterconnectResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline CreateInterconnectResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}

  private:

    Aws::String m_interconnectId;

    Aws::String m_interconnectName;

    InterconnectState m_interconnectState;

    Aws::String m_region;

    Aws::String m_location;

    Aws::String m_bandwidth;

    Aws::Utils::DateTime m_loaIssueTime;

    Aws::String m_lagId;

    Aws::String m_awsDevice;

    Aws::String m_awsDeviceV2;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
