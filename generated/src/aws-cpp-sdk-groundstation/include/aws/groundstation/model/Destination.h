﻿/**
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
    AWS_GROUNDSTATION_API Destination();
    AWS_GROUNDSTATION_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional details for a <code>Config</code>, if type is dataflow endpoint or
     * antenna demod decode.</p>
     */
    inline const ConfigDetails& GetConfigDetails() const{ return m_configDetails; }
    inline bool ConfigDetailsHasBeenSet() const { return m_configDetailsHasBeenSet; }
    inline void SetConfigDetails(const ConfigDetails& value) { m_configDetailsHasBeenSet = true; m_configDetails = value; }
    inline void SetConfigDetails(ConfigDetails&& value) { m_configDetailsHasBeenSet = true; m_configDetails = std::move(value); }
    inline Destination& WithConfigDetails(const ConfigDetails& value) { SetConfigDetails(value); return *this;}
    inline Destination& WithConfigDetails(ConfigDetails&& value) { SetConfigDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    inline void SetConfigId(const Aws::String& value) { m_configIdHasBeenSet = true; m_configId = value; }
    inline void SetConfigId(Aws::String&& value) { m_configIdHasBeenSet = true; m_configId = std::move(value); }
    inline void SetConfigId(const char* value) { m_configIdHasBeenSet = true; m_configId.assign(value); }
    inline Destination& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}
    inline Destination& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}
    inline Destination& WithConfigId(const char* value) { SetConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configTypeHasBeenSet = true; m_configType = std::move(value); }
    inline Destination& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}
    inline Destination& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a dataflow destination.</p>
     */
    inline const Aws::String& GetDataflowDestinationRegion() const{ return m_dataflowDestinationRegion; }
    inline bool DataflowDestinationRegionHasBeenSet() const { return m_dataflowDestinationRegionHasBeenSet; }
    inline void SetDataflowDestinationRegion(const Aws::String& value) { m_dataflowDestinationRegionHasBeenSet = true; m_dataflowDestinationRegion = value; }
    inline void SetDataflowDestinationRegion(Aws::String&& value) { m_dataflowDestinationRegionHasBeenSet = true; m_dataflowDestinationRegion = std::move(value); }
    inline void SetDataflowDestinationRegion(const char* value) { m_dataflowDestinationRegionHasBeenSet = true; m_dataflowDestinationRegion.assign(value); }
    inline Destination& WithDataflowDestinationRegion(const Aws::String& value) { SetDataflowDestinationRegion(value); return *this;}
    inline Destination& WithDataflowDestinationRegion(Aws::String&& value) { SetDataflowDestinationRegion(std::move(value)); return *this;}
    inline Destination& WithDataflowDestinationRegion(const char* value) { SetDataflowDestinationRegion(value); return *this;}
    ///@}
  private:

    ConfigDetails m_configDetails;
    bool m_configDetailsHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType;
    bool m_configTypeHasBeenSet = false;

    Aws::String m_dataflowDestinationRegion;
    bool m_dataflowDestinationRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
