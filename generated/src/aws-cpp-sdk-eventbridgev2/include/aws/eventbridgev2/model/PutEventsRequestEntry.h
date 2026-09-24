/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/PutEventsSystemMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>A single event entry in a PutEvents request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PutEventsRequestEntry">AWS
 * API Reference</a></p>
 */
class PutEventsRequestEntry {
 public:
  AWS_EVENTBRIDGEV2_API PutEventsRequestEntry() = default;
  AWS_EVENTBRIDGEV2_API PutEventsRequestEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API PutEventsRequestEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The source of the event. The <code>aws.</code> value prefix is
   * service-reserved and cannot be used as a value.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  PutEventsRequestEntry& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDetailType() const { return m_detailType; }
  inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
  template <typename DetailTypeT = Aws::String>
  void SetDetailType(DetailTypeT&& value) {
    m_detailTypeHasBeenSet = true;
    m_detailType = std::forward<DetailTypeT>(value);
  }
  template <typename DetailTypeT = Aws::String>
  PutEventsRequestEntry& WithDetailType(DetailTypeT&& value) {
    SetDetailType(std::forward<DetailTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event payload, as a valid JSON string.</p>
   */
  inline const Aws::String& GetDetail() const { return m_detail; }
  inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
  template <typename DetailT = Aws::String>
  void SetDetail(DetailT&& value) {
    m_detailHasBeenSet = true;
    m_detail = std::forward<DetailT>(value);
  }
  template <typename DetailT = Aws::String>
  PutEventsRequestEntry& WithDetail(DetailT&& value) {
    SetDetail(std::forward<DetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARNs of resources the event concerns. Included in the event delivered to
   * subscribers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  PutEventsRequestEntry& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Aws::String>
  PutEventsRequestEntry& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the event occurred. Defaults to the time the service receives the
   * event when omitted.</p>
   */
  inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Utils::DateTime>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Utils::DateTime>
  PutEventsRequestEntry& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PutEventsSystemMetadata& GetSystemMetadata() const { return m_systemMetadata; }
  inline bool SystemMetadataHasBeenSet() const { return m_systemMetadataHasBeenSet; }
  template <typename SystemMetadataT = PutEventsSystemMetadata>
  void SetSystemMetadata(SystemMetadataT&& value) {
    m_systemMetadataHasBeenSet = true;
    m_systemMetadata = std::forward<SystemMetadataT>(value);
  }
  template <typename SystemMetadataT = PutEventsSystemMetadata>
  PutEventsRequestEntry& WithSystemMetadata(SystemMetadataT&& value) {
    SetSystemMetadata(std::forward<SystemMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_source;

  Aws::String m_detailType;

  Aws::String m_detail;

  Aws::Vector<Aws::String> m_resources;

  Aws::Utils::DateTime m_time{};

  PutEventsSystemMetadata m_systemMetadata;
  bool m_sourceHasBeenSet = false;
  bool m_detailTypeHasBeenSet = false;
  bool m_detailHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_timeHasBeenSet = false;
  bool m_systemMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
