/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/CommandCapability.h>
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
   * <p>The endpoint for a managed thing when sending a command.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CommandEndpoint">AWS
   * API Reference</a></p>
   */
  class CommandEndpoint
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CommandEndpoint();
    AWS_IOTMANAGEDINTEGRATIONS_API CommandEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CommandEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the endpoint for a managed thing.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline CommandEndpoint& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline CommandEndpoint& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline CommandEndpoint& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the endpoint with an id, a name, and the relevant capabilities for
     * sending commands.</p>
     */
    inline const Aws::Vector<CommandCapability>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<CommandCapability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<CommandCapability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline CommandEndpoint& WithCapabilities(const Aws::Vector<CommandCapability>& value) { SetCapabilities(value); return *this;}
    inline CommandEndpoint& WithCapabilities(Aws::Vector<CommandCapability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CommandEndpoint& AddCapabilities(const CommandCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline CommandEndpoint& AddCapabilities(CommandCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::Vector<CommandCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
