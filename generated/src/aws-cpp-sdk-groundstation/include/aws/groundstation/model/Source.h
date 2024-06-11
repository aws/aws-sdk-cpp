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
    AWS_GROUNDSTATION_API Source();
    AWS_GROUNDSTATION_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional details for a <code>Config</code>, if type is
     * <code>dataflow-endpoint</code> or <code>antenna-downlink-demod-decode</code>
     * </p>
     */
    inline const ConfigDetails& GetConfigDetails() const{ return m_configDetails; }
    inline bool ConfigDetailsHasBeenSet() const { return m_configDetailsHasBeenSet; }
    inline void SetConfigDetails(const ConfigDetails& value) { m_configDetailsHasBeenSet = true; m_configDetails = value; }
    inline void SetConfigDetails(ConfigDetails&& value) { m_configDetailsHasBeenSet = true; m_configDetails = std::move(value); }
    inline Source& WithConfigDetails(const ConfigDetails& value) { SetConfigDetails(value); return *this;}
    inline Source& WithConfigDetails(ConfigDetails&& value) { SetConfigDetails(std::move(value)); return *this;}
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
    inline Source& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}
    inline Source& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}
    inline Source& WithConfigId(const char* value) { SetConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configTypeHasBeenSet = true; m_configType = std::move(value); }
    inline Source& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}
    inline Source& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a dataflow source.</p>
     */
    inline const Aws::String& GetDataflowSourceRegion() const{ return m_dataflowSourceRegion; }
    inline bool DataflowSourceRegionHasBeenSet() const { return m_dataflowSourceRegionHasBeenSet; }
    inline void SetDataflowSourceRegion(const Aws::String& value) { m_dataflowSourceRegionHasBeenSet = true; m_dataflowSourceRegion = value; }
    inline void SetDataflowSourceRegion(Aws::String&& value) { m_dataflowSourceRegionHasBeenSet = true; m_dataflowSourceRegion = std::move(value); }
    inline void SetDataflowSourceRegion(const char* value) { m_dataflowSourceRegionHasBeenSet = true; m_dataflowSourceRegion.assign(value); }
    inline Source& WithDataflowSourceRegion(const Aws::String& value) { SetDataflowSourceRegion(value); return *this;}
    inline Source& WithDataflowSourceRegion(Aws::String&& value) { SetDataflowSourceRegion(std::move(value)); return *this;}
    inline Source& WithDataflowSourceRegion(const char* value) { SetDataflowSourceRegion(value); return *this;}
    ///@}
  private:

    ConfigDetails m_configDetails;
    bool m_configDetailsHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType;
    bool m_configTypeHasBeenSet = false;

    Aws::String m_dataflowSourceRegion;
    bool m_dataflowSourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
