/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ContinuousIntegrationScanEvent.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Configuration settings for continuous integration scans that run
   * automatically when code changes are made.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ContinuousIntegrationScanConfiguration">AWS
   * API Reference</a></p>
   */
  class ContinuousIntegrationScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API ContinuousIntegrationScanConfiguration() = default;
    AWS_INSPECTOR2_API ContinuousIntegrationScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ContinuousIntegrationScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository events that trigger continuous integration scans, such as pull
     * requests or commits.</p>
     */
    inline const Aws::Vector<ContinuousIntegrationScanEvent>& GetSupportedEvents() const { return m_supportedEvents; }
    inline bool SupportedEventsHasBeenSet() const { return m_supportedEventsHasBeenSet; }
    template<typename SupportedEventsT = Aws::Vector<ContinuousIntegrationScanEvent>>
    void SetSupportedEvents(SupportedEventsT&& value) { m_supportedEventsHasBeenSet = true; m_supportedEvents = std::forward<SupportedEventsT>(value); }
    template<typename SupportedEventsT = Aws::Vector<ContinuousIntegrationScanEvent>>
    ContinuousIntegrationScanConfiguration& WithSupportedEvents(SupportedEventsT&& value) { SetSupportedEvents(std::forward<SupportedEventsT>(value)); return *this;}
    inline ContinuousIntegrationScanConfiguration& AddSupportedEvents(ContinuousIntegrationScanEvent value) { m_supportedEventsHasBeenSet = true; m_supportedEvents.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<ContinuousIntegrationScanEvent> m_supportedEvents;
    bool m_supportedEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
