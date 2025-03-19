/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputeLocation.h>
#include <aws/iotsitewise/model/ForwardingConfig.h>
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
   * <p>The processing configuration for the given transform property. You can
   * configure transforms to be kept at the edge or forwarded to the Amazon Web
   * Services Cloud. You can also configure transforms to be computed at the edge or
   * in the cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TransformProcessingConfig">AWS
   * API Reference</a></p>
   */
  class TransformProcessingConfig
  {
  public:
    AWS_IOTSITEWISE_API TransformProcessingConfig() = default;
    AWS_IOTSITEWISE_API TransformProcessingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API TransformProcessingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute location for the given transform property. </p>
     */
    inline ComputeLocation GetComputeLocation() const { return m_computeLocation; }
    inline bool ComputeLocationHasBeenSet() const { return m_computeLocationHasBeenSet; }
    inline void SetComputeLocation(ComputeLocation value) { m_computeLocationHasBeenSet = true; m_computeLocation = value; }
    inline TransformProcessingConfig& WithComputeLocation(ComputeLocation value) { SetComputeLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const ForwardingConfig& GetForwardingConfig() const { return m_forwardingConfig; }
    inline bool ForwardingConfigHasBeenSet() const { return m_forwardingConfigHasBeenSet; }
    template<typename ForwardingConfigT = ForwardingConfig>
    void SetForwardingConfig(ForwardingConfigT&& value) { m_forwardingConfigHasBeenSet = true; m_forwardingConfig = std::forward<ForwardingConfigT>(value); }
    template<typename ForwardingConfigT = ForwardingConfig>
    TransformProcessingConfig& WithForwardingConfig(ForwardingConfigT&& value) { SetForwardingConfig(std::forward<ForwardingConfigT>(value)); return *this;}
    ///@}
  private:

    ComputeLocation m_computeLocation{ComputeLocation::NOT_SET};
    bool m_computeLocationHasBeenSet = false;

    ForwardingConfig m_forwardingConfig;
    bool m_forwardingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
