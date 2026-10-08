/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/LifecycleEvent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>Contains lifecycle information for an Amazon Web Services service version,
 * including lifecycle events and version recommendations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/ServiceLifecycle">AWS
 * API Reference</a></p>
 */
class ServiceLifecycle {
 public:
  AWS_HEALTH_API ServiceLifecycle() = default;
  AWS_HEALTH_API ServiceLifecycle(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API ServiceLifecycle& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the Amazon Web Services service.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ServiceLifecycle& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the service.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  ServiceLifecycle& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable title for the lifecycle entry.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ServiceLifecycle& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended version to upgrade to.</p>
   */
  inline const Aws::String& GetRecommendedVersion() const { return m_recommendedVersion; }
  inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }
  template <typename RecommendedVersionT = Aws::String>
  void SetRecommendedVersion(RecommendedVersionT&& value) {
    m_recommendedVersionHasBeenSet = true;
    m_recommendedVersion = std::forward<RecommendedVersionT>(value);
  }
  template <typename RecommendedVersionT = Aws::String>
  ServiceLifecycle& WithRecommendedVersion(RecommendedVersionT&& value) {
    SetRecommendedVersion(std::forward<RecommendedVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of lifecycle events for this service version.</p>
   */
  inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const { return m_lifecycleEvents; }
  inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }
  template <typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
  void SetLifecycleEvents(LifecycleEventsT&& value) {
    m_lifecycleEventsHasBeenSet = true;
    m_lifecycleEvents = std::forward<LifecycleEventsT>(value);
  }
  template <typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
  ServiceLifecycle& WithLifecycleEvents(LifecycleEventsT&& value) {
    SetLifecycleEvents(std::forward<LifecycleEventsT>(value));
    return *this;
  }
  template <typename LifecycleEventsT = LifecycleEvent>
  ServiceLifecycle& AddLifecycleEvents(LifecycleEventsT&& value) {
    m_lifecycleEventsHasBeenSet = true;
    m_lifecycleEvents.emplace_back(std::forward<LifecycleEventsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;

  Aws::String m_version;

  Aws::String m_title;

  Aws::String m_recommendedVersion;

  Aws::Vector<LifecycleEvent> m_lifecycleEvents;
  bool m_serviceHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_recommendedVersionHasBeenSet = false;
  bool m_lifecycleEventsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
