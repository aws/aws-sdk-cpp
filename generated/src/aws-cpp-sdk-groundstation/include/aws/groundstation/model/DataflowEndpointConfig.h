/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about the dataflow endpoint <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpointConfig">AWS
   * API Reference</a></p>
   */
  class DataflowEndpointConfig
  {
  public:
    AWS_GROUNDSTATION_API DataflowEndpointConfig() = default;
    AWS_GROUNDSTATION_API DataflowEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DataflowEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetDataflowEndpointName() const { return m_dataflowEndpointName; }
    inline bool DataflowEndpointNameHasBeenSet() const { return m_dataflowEndpointNameHasBeenSet; }
    template<typename DataflowEndpointNameT = Aws::String>
    void SetDataflowEndpointName(DataflowEndpointNameT&& value) { m_dataflowEndpointNameHasBeenSet = true; m_dataflowEndpointName = std::forward<DataflowEndpointNameT>(value); }
    template<typename DataflowEndpointNameT = Aws::String>
    DataflowEndpointConfig& WithDataflowEndpointName(DataflowEndpointNameT&& value) { SetDataflowEndpointName(std::forward<DataflowEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetDataflowEndpointRegion() const { return m_dataflowEndpointRegion; }
    inline bool DataflowEndpointRegionHasBeenSet() const { return m_dataflowEndpointRegionHasBeenSet; }
    template<typename DataflowEndpointRegionT = Aws::String>
    void SetDataflowEndpointRegion(DataflowEndpointRegionT&& value) { m_dataflowEndpointRegionHasBeenSet = true; m_dataflowEndpointRegion = std::forward<DataflowEndpointRegionT>(value); }
    template<typename DataflowEndpointRegionT = Aws::String>
    DataflowEndpointConfig& WithDataflowEndpointRegion(DataflowEndpointRegionT&& value) { SetDataflowEndpointRegion(std::forward<DataflowEndpointRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataflowEndpointName;
    bool m_dataflowEndpointNameHasBeenSet = false;

    Aws::String m_dataflowEndpointRegion;
    bool m_dataflowEndpointRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
