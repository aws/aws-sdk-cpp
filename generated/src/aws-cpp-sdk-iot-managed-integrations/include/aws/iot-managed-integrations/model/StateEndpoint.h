/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/StateCapability.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Describe the endpoint with an Id, a name, and the relevant capabilities for
   * reporting state</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/StateEndpoint">AWS
   * API Reference</a></p>
   */
  class StateEndpoint
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API StateEndpoint();
    AWS_IOTMANAGEDINTEGRATIONS_API StateEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API StateEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Numeric identifier of the endpoint</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline StateEndpoint& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline StateEndpoint& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline StateEndpoint& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the endpoint with an id, a name, and the relevant capabilities for
     * the reporting state.</p>
     */
    inline const Aws::Vector<StateCapability>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<StateCapability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<StateCapability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline StateEndpoint& WithCapabilities(const Aws::Vector<StateCapability>& value) { SetCapabilities(value); return *this;}
    inline StateEndpoint& WithCapabilities(Aws::Vector<StateCapability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline StateEndpoint& AddCapabilities(const StateCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline StateEndpoint& AddCapabilities(StateCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::Vector<StateCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
