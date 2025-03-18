/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergRetentionConfiguration.h>
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
   * <p>The configuration for a snapshot retention optimizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RetentionConfiguration">AWS
   * API Reference</a></p>
   */
  class RetentionConfiguration
  {
  public:
    AWS_GLUE_API RetentionConfiguration() = default;
    AWS_GLUE_API RetentionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RetentionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for an Iceberg snapshot retention optimizer.</p>
     */
    inline const IcebergRetentionConfiguration& GetIcebergConfiguration() const { return m_icebergConfiguration; }
    inline bool IcebergConfigurationHasBeenSet() const { return m_icebergConfigurationHasBeenSet; }
    template<typename IcebergConfigurationT = IcebergRetentionConfiguration>
    void SetIcebergConfiguration(IcebergConfigurationT&& value) { m_icebergConfigurationHasBeenSet = true; m_icebergConfiguration = std::forward<IcebergConfigurationT>(value); }
    template<typename IcebergConfigurationT = IcebergRetentionConfiguration>
    RetentionConfiguration& WithIcebergConfiguration(IcebergConfigurationT&& value) { SetIcebergConfiguration(std::forward<IcebergConfigurationT>(value)); return *this;}
    ///@}
  private:

    IcebergRetentionConfiguration m_icebergConfiguration;
    bool m_icebergConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
