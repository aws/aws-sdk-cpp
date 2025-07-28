/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/InterconnectState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/directconnect/model/HasLogicalRedundancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
#include <aws/directconnect/model/MacSecKey.h>
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
  class CreateInterconnectResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateInterconnectResult() = default;
    AWS_DIRECTCONNECT_API CreateInterconnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateInterconnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectId() const { return m_interconnectId; }
    template<typename InterconnectIdT = Aws::String>
    void SetInterconnectId(InterconnectIdT&& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = std::forward<InterconnectIdT>(value); }
    template<typename InterconnectIdT = Aws::String>
    CreateInterconnectResult& WithInterconnectId(InterconnectIdT&& value) { SetInterconnectId(std::forward<InterconnectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectName() const { return m_interconnectName; }
    template<typename InterconnectNameT = Aws::String>
    void SetInterconnectName(InterconnectNameT&& value) { m_interconnectNameHasBeenSet = true; m_interconnectName = std::forward<InterconnectNameT>(value); }
    template<typename InterconnectNameT = Aws::String>
    CreateInterconnectResult& WithInterconnectName(InterconnectNameT&& value) { SetInterconnectName(std::forward<InterconnectNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline InterconnectState GetInterconnectState() const { return m_interconnectState; }
    inline void SetInterconnectState(InterconnectState value) { m_interconnectStateHasBeenSet = true; m_interconnectState = value; }
    inline CreateInterconnectResult& WithInterconnectState(InterconnectState value) { SetInterconnectState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    CreateInterconnectResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the connection.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateInterconnectResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline const Aws::String& GetBandwidth() const { return m_bandwidth; }
    template<typename BandwidthT = Aws::String>
    void SetBandwidth(BandwidthT&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::forward<BandwidthT>(value); }
    template<typename BandwidthT = Aws::String>
    CreateInterconnectResult& WithBandwidth(BandwidthT&& value) { SetBandwidth(std::forward<BandwidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLoaIssueTime() const { return m_loaIssueTime; }
    template<typename LoaIssueTimeT = Aws::Utils::DateTime>
    void SetLoaIssueTime(LoaIssueTimeT&& value) { m_loaIssueTimeHasBeenSet = true; m_loaIssueTime = std::forward<LoaIssueTimeT>(value); }
    template<typename LoaIssueTimeT = Aws::Utils::DateTime>
    CreateInterconnectResult& WithLoaIssueTime(LoaIssueTimeT&& value) { SetLoaIssueTime(std::forward<LoaIssueTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const { return m_lagId; }
    template<typename LagIdT = Aws::String>
    void SetLagId(LagIdT&& value) { m_lagIdHasBeenSet = true; m_lagId = std::forward<LagIdT>(value); }
    template<typename LagIdT = Aws::String>
    CreateInterconnectResult& WithLagId(LagIdT&& value) { SetLagId(std::forward<LagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline const Aws::String& GetAwsDevice() const { return m_awsDevice; }
    template<typename AwsDeviceT = Aws::String>
    void SetAwsDevice(AwsDeviceT&& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = std::forward<AwsDeviceT>(value); }
    template<typename AwsDeviceT = Aws::String>
    CreateInterconnectResult& WithAwsDevice(AwsDeviceT&& value) { SetAwsDevice(std::forward<AwsDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether jumbo frames are supported.</p>
     */
    inline bool GetJumboFrameCapable() const { return m_jumboFrameCapable; }
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapableHasBeenSet = true; m_jumboFrameCapable = value; }
    inline CreateInterconnectResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the physical connection.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const { return m_awsDeviceV2; }
    template<typename AwsDeviceV2T = Aws::String>
    void SetAwsDeviceV2(AwsDeviceV2T&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::forward<AwsDeviceV2T>(value); }
    template<typename AwsDeviceV2T = Aws::String>
    CreateInterconnectResult& WithAwsDeviceV2(AwsDeviceV2T&& value) { SetAwsDeviceV2(std::forward<AwsDeviceV2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the logical connection. This
     * device might be different than the device that terminates the physical
     * connection.</p>
     */
    inline const Aws::String& GetAwsLogicalDeviceId() const { return m_awsLogicalDeviceId; }
    template<typename AwsLogicalDeviceIdT = Aws::String>
    void SetAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { m_awsLogicalDeviceIdHasBeenSet = true; m_awsLogicalDeviceId = std::forward<AwsLogicalDeviceIdT>(value); }
    template<typename AwsLogicalDeviceIdT = Aws::String>
    CreateInterconnectResult& WithAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { SetAwsLogicalDeviceId(std::forward<AwsLogicalDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the interconnect supports a secondary BGP in the same
     * address family (IPv4/IPv6).</p>
     */
    inline HasLogicalRedundancy GetHasLogicalRedundancy() const { return m_hasLogicalRedundancy; }
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy value) { m_hasLogicalRedundancyHasBeenSet = true; m_hasLogicalRedundancy = value; }
    inline CreateInterconnectResult& WithHasLogicalRedundancy(HasLogicalRedundancy value) { SetHasLogicalRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the interconnect.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInterconnectResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInterconnectResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the interconnect.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    CreateInterconnectResult& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the interconnect supports MAC Security (MACsec).</p>
     */
    inline bool GetMacSecCapable() const { return m_macSecCapable; }
    inline void SetMacSecCapable(bool value) { m_macSecCapableHasBeenSet = true; m_macSecCapable = value; }
    inline CreateInterconnectResult& WithMacSecCapable(bool value) { SetMacSecCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) port link status.</p> <p>The valid values are
     * <code>Encryption Up</code>, which means that there is an active Connection Key
     * Name, or <code>Encryption Down</code>.</p>
     */
    inline const Aws::String& GetPortEncryptionStatus() const { return m_portEncryptionStatus; }
    template<typename PortEncryptionStatusT = Aws::String>
    void SetPortEncryptionStatus(PortEncryptionStatusT&& value) { m_portEncryptionStatusHasBeenSet = true; m_portEncryptionStatus = std::forward<PortEncryptionStatusT>(value); }
    template<typename PortEncryptionStatusT = Aws::String>
    CreateInterconnectResult& WithPortEncryptionStatus(PortEncryptionStatusT&& value) { SetPortEncryptionStatus(std::forward<PortEncryptionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) encryption mode.</p> <p>The valid values are
     * <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline const Aws::String& GetEncryptionMode() const { return m_encryptionMode; }
    template<typename EncryptionModeT = Aws::String>
    void SetEncryptionMode(EncryptionModeT&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::forward<EncryptionModeT>(value); }
    template<typename EncryptionModeT = Aws::String>
    CreateInterconnectResult& WithEncryptionMode(EncryptionModeT&& value) { SetEncryptionMode(std::forward<EncryptionModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) security keys.</p>
     */
    inline const Aws::Vector<MacSecKey>& GetMacSecKeys() const { return m_macSecKeys; }
    template<typename MacSecKeysT = Aws::Vector<MacSecKey>>
    void SetMacSecKeys(MacSecKeysT&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys = std::forward<MacSecKeysT>(value); }
    template<typename MacSecKeysT = Aws::Vector<MacSecKey>>
    CreateInterconnectResult& WithMacSecKeys(MacSecKeysT&& value) { SetMacSecKeys(std::forward<MacSecKeysT>(value)); return *this;}
    template<typename MacSecKeysT = MacSecKey>
    CreateInterconnectResult& AddMacSecKeys(MacSecKeysT&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys.emplace_back(std::forward<MacSecKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInterconnectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_interconnectId;
    bool m_interconnectIdHasBeenSet = false;

    Aws::String m_interconnectName;
    bool m_interconnectNameHasBeenSet = false;

    InterconnectState m_interconnectState{InterconnectState::NOT_SET};
    bool m_interconnectStateHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet = false;

    Aws::Utils::DateTime m_loaIssueTime{};
    bool m_loaIssueTimeHasBeenSet = false;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;

    Aws::String m_awsDevice;
    bool m_awsDeviceHasBeenSet = false;

    bool m_jumboFrameCapable{false};
    bool m_jumboFrameCapableHasBeenSet = false;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet = false;

    Aws::String m_awsLogicalDeviceId;
    bool m_awsLogicalDeviceIdHasBeenSet = false;

    HasLogicalRedundancy m_hasLogicalRedundancy{HasLogicalRedundancy::NOT_SET};
    bool m_hasLogicalRedundancyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    bool m_macSecCapable{false};
    bool m_macSecCapableHasBeenSet = false;

    Aws::String m_portEncryptionStatus;
    bool m_portEncryptionStatusHasBeenSet = false;

    Aws::String m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::Vector<MacSecKey> m_macSecKeys;
    bool m_macSecKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
