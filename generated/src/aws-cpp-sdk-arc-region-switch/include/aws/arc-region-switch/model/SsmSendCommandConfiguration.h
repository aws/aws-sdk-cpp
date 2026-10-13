/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/SsmDocumentConfig.h>
#include <aws/arc-region-switch/model/SsmSendCommandUngraceful.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Configuration for an AWS Systems Manager <code>SendCommand</code> execution
 * block in a Region switch plan. This execution block runs a Systems Manager
 * document on the managed nodes that you target in each Amazon Web Services Region
 * of the plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/SsmSendCommandConfiguration">AWS
 * API Reference</a></p>
 */
class SsmSendCommandConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API SsmSendCommandConfiguration() = default;
  AWS_ARCREGIONSWITCH_API SsmSendCommandConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API SsmSendCommandConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timeout value specified for the configuration.</p>
   */
  inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
  inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
  inline void SetTimeoutMinutes(int value) {
    m_timeoutMinutesHasBeenSet = true;
    m_timeoutMinutes = value;
  }
  inline SsmSendCommandConfiguration& WithTimeoutMinutes(int value) {
    SetTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Systems Manager document and target configuration for each Amazon Web
   * Services Region in the plan. Provide an entry for each Amazon Web Services
   * Region that you want the command to run in.</p>
   */
  inline const Aws::Map<Aws::String, SsmDocumentConfig>& GetRegionDocuments() const { return m_regionDocuments; }
  inline bool RegionDocumentsHasBeenSet() const { return m_regionDocumentsHasBeenSet; }
  template <typename RegionDocumentsT = Aws::Map<Aws::String, SsmDocumentConfig>>
  void SetRegionDocuments(RegionDocumentsT&& value) {
    m_regionDocumentsHasBeenSet = true;
    m_regionDocuments = std::forward<RegionDocumentsT>(value);
  }
  template <typename RegionDocumentsT = Aws::Map<Aws::String, SsmDocumentConfig>>
  SsmSendCommandConfiguration& WithRegionDocuments(RegionDocumentsT&& value) {
    SetRegionDocuments(std::forward<RegionDocumentsT>(value));
    return *this;
  }
  template <typename RegionDocumentsKeyT = Aws::String, typename RegionDocumentsValueT = SsmDocumentConfig>
  SsmSendCommandConfiguration& AddRegionDocuments(RegionDocumentsKeyT&& key, RegionDocumentsValueT&& value) {
    m_regionDocumentsHasBeenSet = true;
    m_regionDocuments.emplace(std::forward<RegionDocumentsKeyT>(key), std::forward<RegionDocumentsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How often, in minutes, Region switch retries the command if it returns a
   * failure.</p>
   */
  inline double GetRetryIntervalMinutes() const { return m_retryIntervalMinutes; }
  inline bool RetryIntervalMinutesHasBeenSet() const { return m_retryIntervalMinutesHasBeenSet; }
  inline void SetRetryIntervalMinutes(double value) {
    m_retryIntervalMinutesHasBeenSet = true;
    m_retryIntervalMinutes = value;
  }
  inline SsmSendCommandConfiguration& WithRetryIntervalMinutes(double value) {
    SetRetryIntervalMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the settings that determine how the execution block behaves when
   * the plan runs ungracefully, such as whether to skip the command.</p>
   */
  inline const SsmSendCommandUngraceful& GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  template <typename UngracefulT = SsmSendCommandUngraceful>
  void SetUngraceful(UngracefulT&& value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = std::forward<UngracefulT>(value);
  }
  template <typename UngracefulT = SsmSendCommandUngraceful>
  SsmSendCommandConfiguration& WithUngraceful(UngracefulT&& value) {
    SetUngraceful(std::forward<UngracefulT>(value));
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  Aws::Map<Aws::String, SsmDocumentConfig> m_regionDocuments;

  double m_retryIntervalMinutes{0.0};

  SsmSendCommandUngraceful m_ungraceful;
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_regionDocumentsHasBeenSet = false;
  bool m_retryIntervalMinutesHasBeenSet = false;
  bool m_ungracefulHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
