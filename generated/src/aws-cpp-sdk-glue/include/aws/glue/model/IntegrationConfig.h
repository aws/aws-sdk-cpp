/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  private:

    Aws::String m_refreshInterval;
    bool m_refreshIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
