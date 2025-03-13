/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergCompactionMetrics.h>
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
   * <p>A structure that contains compaction metrics for the optimizer
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CompactionMetrics">AWS
   * API Reference</a></p>
   */
  class CompactionMetrics
  {
  public:
    AWS_GLUE_API CompactionMetrics() = default;
    AWS_GLUE_API CompactionMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CompactionMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure containing the Iceberg compaction metrics for the optimizer
     * run.</p>
     */
    inline const IcebergCompactionMetrics& GetIcebergMetrics() const { return m_icebergMetrics; }
    inline bool IcebergMetricsHasBeenSet() const { return m_icebergMetricsHasBeenSet; }
    template<typename IcebergMetricsT = IcebergCompactionMetrics>
    void SetIcebergMetrics(IcebergMetricsT&& value) { m_icebergMetricsHasBeenSet = true; m_icebergMetrics = std::forward<IcebergMetricsT>(value); }
    template<typename IcebergMetricsT = IcebergCompactionMetrics>
    CompactionMetrics& WithIcebergMetrics(IcebergMetricsT&& value) { SetIcebergMetrics(std::forward<IcebergMetricsT>(value)); return *this;}
    ///@}
  private:

    IcebergCompactionMetrics m_icebergMetrics;
    bool m_icebergMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
