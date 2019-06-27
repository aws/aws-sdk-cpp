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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/InterconnectState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/directconnect/model/HasLogicalRedundancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
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
   * <p>Information about an interconnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Interconnect">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API CreateInterconnectResult
  {
  public:
    CreateInterconnectResult();
    CreateInterconnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateInterconnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectId() const{ return m_interconnectId; }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline void SetInterconnectId(const Aws::String& value) { m_interconnectId = value; }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline void SetInterconnectId(Aws::String&& value) { m_interconnectId = std::move(value); }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline void SetInterconnectId(const char* value) { m_interconnectId.assign(value); }

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline CreateInterconnectResult& WithInterconnectId(const Aws::String& value) { SetInterconnectId(value); return *this;}

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline CreateInterconnectResult& WithInterconnectId(Aws::String&& value) { SetInterconnectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the interconnect.</p>
     */
    inline CreateInterconnectResult& WithInterconnectId(const char* value) { SetInterconnectId(value); return *this;}


    /**
     * <p>The name of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectName() const{ return m_interconnectName; }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline void SetInterconnectName(const Aws::String& value) { m_interconnectName = value; }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline void SetInterconnectName(Aws::String&& value) { m_interconnectName = std::move(value); }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline void SetInterconnectName(const char* value) { m_interconnectName.assign(value); }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline CreateInterconnectResult& WithInterconnectName(const Aws::String& value) { SetInterconnectName(value); return *this;}

    /**
     * <p>The name of the interconnect.</p>
     */
    inline CreateInterconnectResult& WithInterconnectName(Aws::String&& value) { SetInterconnectName(std::move(value)); return *this;}

    /**
     * <p>The name of the interconnect.</p>
     */
    inline CreateInterconnectResult& WithInterconnectName(const char* value) { SetInterconnectName(value); return *this;}


    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline const InterconnectState& GetInterconnectState() const{ return m_interconnectState; }

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline void SetInterconnectState(const InterconnectState& value) { m_interconnectState = value; }

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline void SetInterconnectState(InterconnectState&& value) { m_interconnectState = std::move(value); }

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline CreateInterconnectResult& WithInterconnectState(const InterconnectState& value) { SetInterconnectState(value); return *this;}

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline CreateInterconnectResult& WithInterconnectState(InterconnectState&& value) { SetInterconnectState(std::move(value)); return *this;}


    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline CreateInterconnectResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline CreateInterconnectResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline CreateInterconnectResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The location of the connection.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The location of the connection.</p>
     */
    inline CreateInterconnectResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the connection.</p>
     */
    inline CreateInterconnectResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the connection.</p>
     */
    inline CreateInterconnectResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidth = value; }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidth = std::move(value); }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidth.assign(value); }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline CreateInterconnectResult& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline CreateInterconnectResult& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline CreateInterconnectResult& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}


    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLoaIssueTime() const{ return m_loaIssueTime; }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline void SetLoaIssueTime(const Aws::Utils::DateTime& value) { m_loaIssueTime = value; }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline void SetLoaIssueTime(Aws::Utils::DateTime&& value) { m_loaIssueTime = std::move(value); }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline CreateInterconnectResult& WithLoaIssueTime(const Aws::Utils::DateTime& value) { SetLoaIssueTime(value); return *this;}

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline CreateInterconnectResult& WithLoaIssueTime(Aws::Utils::DateTime&& value) { SetLoaIssueTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagId = value; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagId = std::move(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const char* value) { m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline CreateInterconnectResult& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline CreateInterconnectResult& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline CreateInterconnectResult& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDevice = value; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDevice = std::move(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDevice.assign(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline CreateInterconnectResult& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline CreateInterconnectResult& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline CreateInterconnectResult& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}


    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapable = value; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline CreateInterconnectResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}


    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline CreateInterconnectResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline CreateInterconnectResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline CreateInterconnectResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}


    /**
     * <p>Indicates whether the interconnect supports a secondary BGP in the same
     * address family (IPv4/IPv6).</p>
     */
    inline const HasLogicalRedundancy& GetHasLogicalRedundancy() const{ return m_hasLogicalRedundancy; }

    /**
     * <p>Indicates whether the interconnect supports a secondary BGP in the same
     * address family (IPv4/IPv6).</p>
     */
    inline void SetHasLogicalRedundancy(const HasLogicalRedundancy& value) { m_hasLogicalRedundancy = value; }

    /**
     * <p>Indicates whether the interconnect supports a secondary BGP in the same
     * address family (IPv4/IPv6).</p>
     */
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy&& value) { m_hasLogicalRedundancy = std::move(value); }

    /**
     * <p>Indicates whether the interconnect supports a secondary BGP in the same
     * address family (IPv4/IPv6).</p>
     */
    inline CreateInterconnectResult& WithHasLogicalRedundancy(const HasLogicalRedundancy& value) { SetHasLogicalRedundancy(value); return *this;}

    /**
     * <p>Indicates whether the interconnect supports a secondary BGP in the same
     * address family (IPv4/IPv6).</p>
     */
    inline CreateInterconnectResult& WithHasLogicalRedundancy(HasLogicalRedundancy&& value) { SetHasLogicalRedundancy(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline CreateInterconnectResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline CreateInterconnectResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline CreateInterconnectResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the interconnect.</p>
     */
    inline CreateInterconnectResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

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

    bool m_jumboFrameCapable;

    Aws::String m_awsDeviceV2;

    HasLogicalRedundancy m_hasLogicalRedundancy;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
