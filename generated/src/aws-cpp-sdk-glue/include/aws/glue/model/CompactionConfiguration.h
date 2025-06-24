/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergCompactionConfiguration.h>
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
   * <p>The configuration for a compaction optimizer. This configuration defines how
   * data files in your table will be compacted to improve query performance and
   * reduce storage costs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CompactionConfiguration">AWS
   * API Reference</a></p>
   */
  class CompactionConfiguration
  {
  public:
    AWS_GLUE_API CompactionConfiguration() = default;
    AWS_GLUE_API CompactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CompactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for an Iceberg compaction optimizer.</p>
     */
    inline const IcebergCompactionConfiguration& GetIcebergConfiguration() const { return m_icebergConfiguration; }
    inline bool IcebergConfigurationHasBeenSet() const { return m_icebergConfigurationHasBeenSet; }
    template<typename IcebergConfigurationT = IcebergCompactionConfiguration>
    void SetIcebergConfiguration(IcebergConfigurationT&& value) { m_icebergConfigurationHasBeenSet = true; m_icebergConfiguration = std::forward<IcebergConfigurationT>(value); }
    template<typename IcebergConfigurationT = IcebergCompactionConfiguration>
    CompactionConfiguration& WithIcebergConfiguration(IcebergConfigurationT&& value) { SetIcebergConfiguration(std::forward<IcebergConfigurationT>(value)); return *this;}
    ///@}
  private:

    IcebergCompactionConfiguration m_icebergConfiguration;
    bool m_icebergConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
