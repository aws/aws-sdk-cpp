/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/PositioningConfigStatus.h>
#include <aws/iotwireless/model/SidewalkStartImportInfo.h>
#include <aws/iotwireless/model/Tag.h>

#include <utility>

namespace Aws {
namespace IoTWireless {
namespace Model {

/**
 */
class StartWirelessDeviceImportTaskRequest : public IoTWirelessRequest {
 public:
  AWS_IOTWIRELESS_API StartWirelessDeviceImportTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartWirelessDeviceImportTask"; }

  AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the Sidewalk destination that describes the IoT rule to route
   * messages from the devices in the import task that are onboarded to AWS IoT
   * Wireless.</p>
   */
  inline const Aws::String& GetDestinationName() const { return m_destinationName; }
  inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
  template <typename DestinationNameT = Aws::String>
  void SetDestinationName(DestinationNameT&& value) {
    m_destinationNameHasBeenSet = true;
    m_destinationName = std::forward<DestinationNameT>(value);
  }
  template <typename DestinationNameT = Aws::String>
  StartWirelessDeviceImportTaskRequest& WithDestinationName(DestinationNameT&& value) {
    SetDestinationName(std::forward<DestinationNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  StartWirelessDeviceImportTaskRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  StartWirelessDeviceImportTaskRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  StartWirelessDeviceImportTaskRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The integration status of the Device Location feature for Sidewalk
   * devices.</p>
   */
  inline PositioningConfigStatus GetPositioning() const { return m_positioning; }
  inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }
  inline void SetPositioning(PositioningConfigStatus value) {
    m_positioningHasBeenSet = true;
    m_positioning = value;
  }
  inline StartWirelessDeviceImportTaskRequest& WithPositioning(PositioningConfigStatus value) {
    SetPositioning(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Sidewalk-related parameters for importing wireless devices that need to
   * be provisioned in bulk.</p>
   */
  inline const SidewalkStartImportInfo& GetSidewalk() const { return m_sidewalk; }
  inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
  template <typename SidewalkT = SidewalkStartImportInfo>
  void SetSidewalk(SidewalkT&& value) {
    m_sidewalkHasBeenSet = true;
    m_sidewalk = std::forward<SidewalkT>(value);
  }
  template <typename SidewalkT = SidewalkStartImportInfo>
  StartWirelessDeviceImportTaskRequest& WithSidewalk(SidewalkT&& value) {
    SetSidewalk(std::forward<SidewalkT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationName;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;

  PositioningConfigStatus m_positioning{PositioningConfigStatus::NOT_SET};

  SidewalkStartImportInfo m_sidewalk;
  bool m_destinationNameHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_positioningHasBeenSet = false;
  bool m_sidewalkHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
