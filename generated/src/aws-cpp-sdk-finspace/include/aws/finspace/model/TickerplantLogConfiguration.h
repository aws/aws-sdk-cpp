/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> A configuration to store the Tickerplant logs. It consists of a list of
   * volumes that will be mounted to your cluster. For the cluster type
   * <code>Tickerplant</code>, the location of the TP volume on the cluster will be
   * available by using the global variable <code>.aws.tp_log_path</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/TickerplantLogConfiguration">AWS
   * API Reference</a></p>
   */
  class TickerplantLogConfiguration
  {
  public:
    AWS_FINSPACE_API TickerplantLogConfiguration() = default;
    AWS_FINSPACE_API TickerplantLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API TickerplantLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTickerplantLogVolumes() const { return m_tickerplantLogVolumes; }
    inline bool TickerplantLogVolumesHasBeenSet() const { return m_tickerplantLogVolumesHasBeenSet; }
    template<typename TickerplantLogVolumesT = Aws::Vector<Aws::String>>
    void SetTickerplantLogVolumes(TickerplantLogVolumesT&& value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes = std::forward<TickerplantLogVolumesT>(value); }
    template<typename TickerplantLogVolumesT = Aws::Vector<Aws::String>>
    TickerplantLogConfiguration& WithTickerplantLogVolumes(TickerplantLogVolumesT&& value) { SetTickerplantLogVolumes(std::forward<TickerplantLogVolumesT>(value)); return *this;}
    template<typename TickerplantLogVolumesT = Aws::String>
    TickerplantLogConfiguration& AddTickerplantLogVolumes(TickerplantLogVolumesT&& value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes.emplace_back(std::forward<TickerplantLogVolumesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_tickerplantLogVolumes;
    bool m_tickerplantLogVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
