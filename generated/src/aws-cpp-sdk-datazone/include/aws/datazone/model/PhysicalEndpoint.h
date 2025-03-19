/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AwsLocation.h>
#include <aws/datazone/model/GlueConnection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/Protocol.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The physical endpoints of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PhysicalEndpoint">AWS
   * API Reference</a></p>
   */
  class PhysicalEndpoint
  {
  public:
    AWS_DATAZONE_API PhysicalEndpoint() = default;
    AWS_DATAZONE_API PhysicalEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PhysicalEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of a connection.</p>
     */
    inline const AwsLocation& GetAwsLocation() const { return m_awsLocation; }
    inline bool AwsLocationHasBeenSet() const { return m_awsLocationHasBeenSet; }
    template<typename AwsLocationT = AwsLocation>
    void SetAwsLocation(AwsLocationT&& value) { m_awsLocationHasBeenSet = true; m_awsLocation = std::forward<AwsLocationT>(value); }
    template<typename AwsLocationT = AwsLocation>
    PhysicalEndpoint& WithAwsLocation(AwsLocationT&& value) { SetAwsLocation(std::forward<AwsLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue connection.</p>
     */
    inline const GlueConnection& GetGlueConnection() const { return m_glueConnection; }
    inline bool GlueConnectionHasBeenSet() const { return m_glueConnectionHasBeenSet; }
    template<typename GlueConnectionT = GlueConnection>
    void SetGlueConnection(GlueConnectionT&& value) { m_glueConnectionHasBeenSet = true; m_glueConnection = std::forward<GlueConnectionT>(value); }
    template<typename GlueConnectionT = GlueConnection>
    PhysicalEndpoint& WithGlueConnection(GlueConnectionT&& value) { SetGlueConnection(std::forward<GlueConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue connection name.</p>
     */
    inline const Aws::String& GetGlueConnectionName() const { return m_glueConnectionName; }
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }
    template<typename GlueConnectionNameT = Aws::String>
    void SetGlueConnectionName(GlueConnectionNameT&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::forward<GlueConnectionNameT>(value); }
    template<typename GlueConnectionNameT = Aws::String>
    PhysicalEndpoint& WithGlueConnectionName(GlueConnectionNameT&& value) { SetGlueConnectionName(std::forward<GlueConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host in the physical endpoints of a connection.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    PhysicalEndpoint& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port in the physical endpoints of a connection.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline PhysicalEndpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol in the physical endpoints of a connection.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline PhysicalEndpoint& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage in the physical endpoints of a connection.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    PhysicalEndpoint& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}
  private:

    AwsLocation m_awsLocation;
    bool m_awsLocationHasBeenSet = false;

    GlueConnection m_glueConnection;
    bool m_glueConnectionHasBeenSet = false;

    Aws::String m_glueConnectionName;
    bool m_glueConnectionNameHasBeenSet = false;

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
