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
    AWS_DATAZONE_API PhysicalEndpoint();
    AWS_DATAZONE_API PhysicalEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PhysicalEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of a connection.</p>
     */
    inline const AwsLocation& GetAwsLocation() const{ return m_awsLocation; }
    inline bool AwsLocationHasBeenSet() const { return m_awsLocationHasBeenSet; }
    inline void SetAwsLocation(const AwsLocation& value) { m_awsLocationHasBeenSet = true; m_awsLocation = value; }
    inline void SetAwsLocation(AwsLocation&& value) { m_awsLocationHasBeenSet = true; m_awsLocation = std::move(value); }
    inline PhysicalEndpoint& WithAwsLocation(const AwsLocation& value) { SetAwsLocation(value); return *this;}
    inline PhysicalEndpoint& WithAwsLocation(AwsLocation&& value) { SetAwsLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue connection.</p>
     */
    inline const GlueConnection& GetGlueConnection() const{ return m_glueConnection; }
    inline bool GlueConnectionHasBeenSet() const { return m_glueConnectionHasBeenSet; }
    inline void SetGlueConnection(const GlueConnection& value) { m_glueConnectionHasBeenSet = true; m_glueConnection = value; }
    inline void SetGlueConnection(GlueConnection&& value) { m_glueConnectionHasBeenSet = true; m_glueConnection = std::move(value); }
    inline PhysicalEndpoint& WithGlueConnection(const GlueConnection& value) { SetGlueConnection(value); return *this;}
    inline PhysicalEndpoint& WithGlueConnection(GlueConnection&& value) { SetGlueConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue connection name.</p>
     */
    inline const Aws::String& GetGlueConnectionName() const{ return m_glueConnectionName; }
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }
    inline void SetGlueConnectionName(const Aws::String& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = value; }
    inline void SetGlueConnectionName(Aws::String&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::move(value); }
    inline void SetGlueConnectionName(const char* value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName.assign(value); }
    inline PhysicalEndpoint& WithGlueConnectionName(const Aws::String& value) { SetGlueConnectionName(value); return *this;}
    inline PhysicalEndpoint& WithGlueConnectionName(Aws::String&& value) { SetGlueConnectionName(std::move(value)); return *this;}
    inline PhysicalEndpoint& WithGlueConnectionName(const char* value) { SetGlueConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host in the physical endpoints of a connection.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline PhysicalEndpoint& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline PhysicalEndpoint& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline PhysicalEndpoint& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port in the physical endpoints of a connection.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline PhysicalEndpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol in the physical endpoints of a connection.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline PhysicalEndpoint& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline PhysicalEndpoint& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage in the physical endpoints of a connection.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }
    inline PhysicalEndpoint& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline PhysicalEndpoint& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline PhysicalEndpoint& WithStage(const char* value) { SetStage(value); return *this;}
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

    int m_port;
    bool m_portHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
