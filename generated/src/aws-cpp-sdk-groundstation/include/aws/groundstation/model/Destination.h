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
   * <p>Dataflow details for the destination side.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_GROUNDSTATION_API Destination() = default;
    AWS_GROUNDSTATION_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional details for a <code>Config</code>, if type is dataflow endpoint or
     * antenna demod decode.</p>
     */
    inline const ConfigDetails& GetConfigDetails() const { return m_configDetails; }
    inline bool ConfigDetailsHasBeenSet() const { return m_configDetailsHasBeenSet; }
    template<typename ConfigDetailsT = ConfigDetails>
    void SetConfigDetails(ConfigDetailsT&& value) { m_configDetailsHasBeenSet = true; m_configDetails = std::forward<ConfigDetailsT>(value); }
    template<typename ConfigDetailsT = ConfigDetails>
    Destination& WithConfigDetails(ConfigDetailsT&& value) { SetConfigDetails(std::forward<ConfigDetailsT>(value)); return *this;}
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
    Destination& WithConfigId(ConfigIdT&& value) { SetConfigId(std::forward<ConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline ConfigCapabilityType GetConfigType() const { return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(ConfigCapabilityType value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline Destination& WithConfigType(ConfigCapabilityType value) { SetConfigType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a dataflow destination.</p>
     */
    inline const Aws::String& GetDataflowDestinationRegion() const { return m_dataflowDestinationRegion; }
    inline bool DataflowDestinationRegionHasBeenSet() const { return m_dataflowDestinationRegionHasBeenSet; }
    template<typename DataflowDestinationRegionT = Aws::String>
    void SetDataflowDestinationRegion(DataflowDestinationRegionT&& value) { m_dataflowDestinationRegionHasBeenSet = true; m_dataflowDestinationRegion = std::forward<DataflowDestinationRegionT>(value); }
    template<typename DataflowDestinationRegionT = Aws::String>
    Destination& WithDataflowDestinationRegion(DataflowDestinationRegionT&& value) { SetDataflowDestinationRegion(std::forward<DataflowDestinationRegionT>(value)); return *this;}
    ///@}
  private:

    ConfigDetails m_configDetails;
    bool m_configDetailsHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType{ConfigCapabilityType::NOT_SET};
    bool m_configTypeHasBeenSet = false;

    Aws::String m_dataflowDestinationRegion;
    bool m_dataflowDestinationRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
