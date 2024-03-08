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
    AWS_FINSPACE_API TickerplantLogConfiguration();
    AWS_FINSPACE_API TickerplantLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API TickerplantLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTickerplantLogVolumes() const{ return m_tickerplantLogVolumes; }

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline bool TickerplantLogVolumesHasBeenSet() const { return m_tickerplantLogVolumesHasBeenSet; }

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline void SetTickerplantLogVolumes(const Aws::Vector<Aws::String>& value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes = value; }

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline void SetTickerplantLogVolumes(Aws::Vector<Aws::String>&& value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes = std::move(value); }

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline TickerplantLogConfiguration& WithTickerplantLogVolumes(const Aws::Vector<Aws::String>& value) { SetTickerplantLogVolumes(value); return *this;}

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline TickerplantLogConfiguration& WithTickerplantLogVolumes(Aws::Vector<Aws::String>&& value) { SetTickerplantLogVolumes(std::move(value)); return *this;}

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline TickerplantLogConfiguration& AddTickerplantLogVolumes(const Aws::String& value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes.push_back(value); return *this; }

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline TickerplantLogConfiguration& AddTickerplantLogVolumes(Aws::String&& value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes.push_back(std::move(value)); return *this; }

    /**
     * <p> The name of the volumes for tickerplant logs. </p>
     */
    inline TickerplantLogConfiguration& AddTickerplantLogVolumes(const char* value) { m_tickerplantLogVolumesHasBeenSet = true; m_tickerplantLogVolumes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_tickerplantLogVolumes;
    bool m_tickerplantLogVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
