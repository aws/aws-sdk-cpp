/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Properties associated with the integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IntegrationConfig">AWS
 * API Reference</a></p>
 */
class IntegrationConfig {
 public:
  AWS_GLUE_API IntegrationConfig() = default;
  AWS_GLUE_API IntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the frequency at which CDC (Change Data Capture) pulls or
   * incremental loads should occur. This parameter provides flexibility to align the
   * refresh rate with your specific data update patterns, system load
   * considerations, and performance optimization goals. Time increment can be set
   * from 15 minutes to 8640 minutes (six days).</p>
   */
  inline const Aws::String& GetRefreshInterval() const { return m_refreshInterval; }
  inline bool RefreshIntervalHasBeenSet() const { return m_refreshIntervalHasBeenSet; }
  template <typename RefreshIntervalT = Aws::String>
  void SetRefreshInterval(RefreshIntervalT&& value) {
    m_refreshIntervalHasBeenSet = true;
    m_refreshInterval = std::forward<RefreshIntervalT>(value);
  }
  template <typename RefreshIntervalT = Aws::String>
  IntegrationConfig& WithRefreshInterval(RefreshIntervalT&& value) {
    SetRefreshInterval(std::forward<RefreshIntervalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A collection of key-value pairs that specify additional properties for the
   * integration source. These properties provide configuration options that can be
   * used to customize the behavior of the ODB source during data integration
   * operations. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSourceProperties() const { return m_sourceProperties; }
  inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }
  template <typename SourcePropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetSourceProperties(SourcePropertiesT&& value) {
    m_sourcePropertiesHasBeenSet = true;
    m_sourceProperties = std::forward<SourcePropertiesT>(value);
  }
  template <typename SourcePropertiesT = Aws::Map<Aws::String, Aws::String>>
  IntegrationConfig& WithSourceProperties(SourcePropertiesT&& value) {
    SetSourceProperties(std::forward<SourcePropertiesT>(value));
    return *this;
  }
  template <typename SourcePropertiesKeyT = Aws::String, typename SourcePropertiesValueT = Aws::String>
  IntegrationConfig& AddSourceProperties(SourcePropertiesKeyT&& key, SourcePropertiesValueT&& value) {
    m_sourcePropertiesHasBeenSet = true;
    m_sourceProperties.emplace(std::forward<SourcePropertiesKeyT>(key), std::forward<SourcePropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables continuous synchronization for on-demand data extractions from SaaS
   * applications to Amazon Web Services data services like Amazon Redshift and
   * Amazon S3.</p>
   */
  inline bool GetContinuousSync() const { return m_continuousSync; }
  inline bool ContinuousSyncHasBeenSet() const { return m_continuousSyncHasBeenSet; }
  inline void SetContinuousSync(bool value) {
    m_continuousSyncHasBeenSet = true;
    m_continuousSync = value;
  }
  inline IntegrationConfig& WithContinuousSync(bool value) {
    SetContinuousSync(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional custom namespace for the integration's target. Supply this
   * parameter only when the target is an Amazon S3 Tables table bucket; it is not
   * accepted for other target types. The integration replicates data into the
   * namespace you specify, reusing it if it already exists. If you omit this
   * parameter, the target namespace defaults to <code>zetl_</code> followed by the
   * integration ID, with hyphens converted to underscores.</p> <p>The value is
   * immutable after the integration is created; <code>ModifyIntegration</code>
   * rejects changes to it. It must be a valid Amazon S3 Tables namespace name: 1 to
   * 255 characters using lowercase letters, numbers, and underscores, with no
   * leading or trailing underscore and no reserved <code>aws</code> prefix.</p>
   */
  inline const Aws::String& GetTargetNamespace() const { return m_targetNamespace; }
  inline bool TargetNamespaceHasBeenSet() const { return m_targetNamespaceHasBeenSet; }
  template <typename TargetNamespaceT = Aws::String>
  void SetTargetNamespace(TargetNamespaceT&& value) {
    m_targetNamespaceHasBeenSet = true;
    m_targetNamespace = std::forward<TargetNamespaceT>(value);
  }
  template <typename TargetNamespaceT = Aws::String>
  IntegrationConfig& WithTargetNamespace(TargetNamespaceT&& value) {
    SetTargetNamespace(std::forward<TargetNamespaceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_refreshInterval;

  Aws::Map<Aws::String, Aws::String> m_sourceProperties;

  bool m_continuousSync{false};

  Aws::String m_targetNamespace;
  bool m_refreshIntervalHasBeenSet = false;
  bool m_sourcePropertiesHasBeenSet = false;
  bool m_continuousSyncHasBeenSet = false;
  bool m_targetNamespaceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
