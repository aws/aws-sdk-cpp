/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergOrphanFileDeletionMetrics.h>
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
   * <p>A structure that contains orphan file deletion metrics for the optimizer
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OrphanFileDeletionMetrics">AWS
   * API Reference</a></p>
   */
  class OrphanFileDeletionMetrics
  {
  public:
    AWS_GLUE_API OrphanFileDeletionMetrics() = default;
    AWS_GLUE_API OrphanFileDeletionMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API OrphanFileDeletionMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure containing the Iceberg orphan file deletion metrics for the
     * optimizer run.</p>
     */
    inline const IcebergOrphanFileDeletionMetrics& GetIcebergMetrics() const { return m_icebergMetrics; }
    inline bool IcebergMetricsHasBeenSet() const { return m_icebergMetricsHasBeenSet; }
    template<typename IcebergMetricsT = IcebergOrphanFileDeletionMetrics>
    void SetIcebergMetrics(IcebergMetricsT&& value) { m_icebergMetricsHasBeenSet = true; m_icebergMetrics = std::forward<IcebergMetricsT>(value); }
    template<typename IcebergMetricsT = IcebergOrphanFileDeletionMetrics>
    OrphanFileDeletionMetrics& WithIcebergMetrics(IcebergMetricsT&& value) { SetIcebergMetrics(std::forward<IcebergMetricsT>(value)); return *this;}
    ///@}
  private:

    IcebergOrphanFileDeletionMetrics m_icebergMetrics;
    bool m_icebergMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
