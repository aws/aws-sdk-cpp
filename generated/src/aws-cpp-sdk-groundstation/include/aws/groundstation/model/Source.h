/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ConfigDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigCapabilityType.h>
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
   * <p>Dataflow details for the source side.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_GROUNDSTATION_API Source() = default;
    AWS_GROUNDSTATION_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional details for a <code>Config</code>, if type is
     * <code>dataflow-endpoint</code> or <code>antenna-downlink-demod-decode</code>
     * </p>
     */
    inline const ConfigDetails& GetConfigDetails() const { return m_configDetails; }
    inline bool ConfigDetailsHasBeenSet() const { return m_configDetailsHasBeenSet; }
    template<typename ConfigDetailsT = ConfigDetails>
    void SetConfigDetails(ConfigDetailsT&& value) { m_configDetailsHasBeenSet = true; m_configDetails = std::forward<ConfigDetailsT>(value); }
    template<typename ConfigDetailsT = ConfigDetails>
    Source& WithConfigDetails(ConfigDetailsT&& value) { SetConfigDetails(std::forward<ConfigDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const { return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    template<typename ConfigIdT = Aws::String>
    void SetConfigId(ConfigIdT&& value) { m_configIdHasBeenSet = true; m_configId = std::forward<ConfigIdT>(value); }
    template<typename ConfigIdT = Aws::String>
    Source& WithConfigId(ConfigIdT&& value) { SetConfigId(std::forward<ConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline ConfigCapabilityType GetConfigType() const { return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(ConfigCapabilityType value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline Source& WithConfigType(ConfigCapabilityType value) { SetConfigType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a dataflow source.</p>
     */
    inline const Aws::String& GetDataflowSourceRegion() const { return m_dataflowSourceRegion; }
    inline bool DataflowSourceRegionHasBeenSet() const { return m_dataflowSourceRegionHasBeenSet; }
    template<typename DataflowSourceRegionT = Aws::String>
    void SetDataflowSourceRegion(DataflowSourceRegionT&& value) { m_dataflowSourceRegionHasBeenSet = true; m_dataflowSourceRegion = std::forward<DataflowSourceRegionT>(value); }
    template<typename DataflowSourceRegionT = Aws::String>
    Source& WithDataflowSourceRegion(DataflowSourceRegionT&& value) { SetDataflowSourceRegion(std::forward<DataflowSourceRegionT>(value)); return *this;}
    ///@}
  private:

    ConfigDetails m_configDetails;
    bool m_configDetailsHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType{ConfigCapabilityType::NOT_SET};
    bool m_configTypeHasBeenSet = false;

    Aws::String m_dataflowSourceRegion;
    bool m_dataflowSourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
