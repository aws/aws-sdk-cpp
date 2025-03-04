/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/CapabilityReportEndpoint.h>
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
   * <p>Report of all capabilities supported by the device.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CapabilityReport">AWS
   * API Reference</a></p>
   */
  class CapabilityReport
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReport();
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the capability report.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CapabilityReport& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CapabilityReport& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CapabilityReport& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric identifier of the node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }
    inline CapabilityReport& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline CapabilityReport& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline CapabilityReport& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoints used in the capability report.</p>
     */
    inline const Aws::Vector<CapabilityReportEndpoint>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<CapabilityReportEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<CapabilityReportEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline CapabilityReport& WithEndpoints(const Aws::Vector<CapabilityReportEndpoint>& value) { SetEndpoints(value); return *this;}
    inline CapabilityReport& WithEndpoints(Aws::Vector<CapabilityReportEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline CapabilityReport& AddEndpoints(const CapabilityReportEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline CapabilityReport& AddEndpoints(CapabilityReportEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::Vector<CapabilityReportEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
