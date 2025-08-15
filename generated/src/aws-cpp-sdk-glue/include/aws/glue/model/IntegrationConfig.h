/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Properties associated with the integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IntegrationConfig">AWS
   * API Reference</a></p>
   */
  class IntegrationConfig
  {
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
     * from 15 minutes to 8640 minutes (six days). Currently supports creation of
     * <code>RefreshInterval</code> only.</p>
     */
    inline const Aws::String& GetRefreshInterval() const { return m_refreshInterval; }
    inline bool RefreshIntervalHasBeenSet() const { return m_refreshIntervalHasBeenSet; }
    template<typename RefreshIntervalT = Aws::String>
    void SetRefreshInterval(RefreshIntervalT&& value) { m_refreshIntervalHasBeenSet = true; m_refreshInterval = std::forward<RefreshIntervalT>(value); }
    template<typename RefreshIntervalT = Aws::String>
    IntegrationConfig& WithRefreshInterval(RefreshIntervalT&& value) { SetRefreshInterval(std::forward<RefreshIntervalT>(value)); return *this;}
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
    template<typename SourcePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetSourceProperties(SourcePropertiesT&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::forward<SourcePropertiesT>(value); }
    template<typename SourcePropertiesT = Aws::Map<Aws::String, Aws::String>>
    IntegrationConfig& WithSourceProperties(SourcePropertiesT&& value) { SetSourceProperties(std::forward<SourcePropertiesT>(value)); return *this;}
    template<typename SourcePropertiesKeyT = Aws::String, typename SourcePropertiesValueT = Aws::String>
    IntegrationConfig& AddSourceProperties(SourcePropertiesKeyT&& key, SourcePropertiesValueT&& value) {
      m_sourcePropertiesHasBeenSet = true; m_sourceProperties.emplace(std::forward<SourcePropertiesKeyT>(key), std::forward<SourcePropertiesValueT>(value)); return *this;
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
    inline void SetContinuousSync(bool value) { m_continuousSyncHasBeenSet = true; m_continuousSync = value; }
    inline IntegrationConfig& WithContinuousSync(bool value) { SetContinuousSync(value); return *this;}
    ///@}
  private:

    Aws::String m_refreshInterval;
    bool m_refreshIntervalHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet = false;

    bool m_continuousSync{false};
    bool m_continuousSyncHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
