/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/TumblingWindow.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a time interval window used for data aggregate computations (for
   * example, average, sum, count, and so on).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MetricWindow">AWS
   * API Reference</a></p>
   */
  class MetricWindow
  {
  public:
    AWS_IOTSITEWISE_API MetricWindow() = default;
    AWS_IOTSITEWISE_API MetricWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API MetricWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tumbling time interval window.</p>
     */
    inline const TumblingWindow& GetTumbling() const { return m_tumbling; }
    inline bool TumblingHasBeenSet() const { return m_tumblingHasBeenSet; }
    template<typename TumblingT = TumblingWindow>
    void SetTumbling(TumblingT&& value) { m_tumblingHasBeenSet = true; m_tumbling = std::forward<TumblingT>(value); }
    template<typename TumblingT = TumblingWindow>
    MetricWindow& WithTumbling(TumblingT&& value) { SetTumbling(std::forward<TumblingT>(value)); return *this;}
    ///@}
  private:

    TumblingWindow m_tumbling;
    bool m_tumblingHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
