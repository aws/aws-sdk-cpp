/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/gamelift/model/FleetType.h>
#include <aws/gamelift/model/CertificateConfiguration.h>
#include <aws/gamelift/model/IpPermission.h>
#include <aws/gamelift/model/LocationConfiguration.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleetInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateFleetRequest : public GameLiftRequest
  {
  public:
    CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline CreateFleetRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline CreateFleetRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a custom game server build to be deployed on fleet
     * instances. You can use either the build ID or ARN. The build must be uploaded to
     * GameLift and in <code>READY</code> status. This fleet property cannot be changed
     * later.</p>
     */
    inline CreateFleetRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline CreateFleetRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline CreateFleetRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed on
     * fleet instances. You can use either the script ID or ARN. Scripts must be
     * uploaded to GameLift prior to creating the fleet. This fleet property cannot be
     * changed later.</p>
     */
    inline CreateFleetRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}


    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}


    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::move(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(std::move(value)); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(std::move(value)); return *this; }

    /**
     * <p> <b>This parameter is no longer used.</b> To specify where GameLift should
     * store log files once a server process shuts down, use the GameLift server API
     * <code>ProcessReady()</code> and specify one or more directory paths in
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }


    /**
     * <p>The GameLift-supported EC2 instance type to use for all fleet instances.
     * Instance type determines the computing resources that will be used to host your
     * game servers, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of EC2 instance types.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>The GameLift-supported EC2 instance type to use for all fleet instances.
     * Instance type determines the computing resources that will be used to host your
     * game servers, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of EC2 instance types.</p>
     */
    inline bool EC2InstanceTypeHasBeenSet() const { return m_eC2InstanceTypeHasBeenSet; }

    /**
     * <p>The GameLift-supported EC2 instance type to use for all fleet instances.
     * Instance type determines the computing resources that will be used to host your
     * game servers, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of EC2 instance types.</p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>The GameLift-supported EC2 instance type to use for all fleet instances.
     * Instance type determines the computing resources that will be used to host your
     * game servers, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of EC2 instance types.</p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = std::move(value); }

    /**
     * <p>The GameLift-supported EC2 instance type to use for all fleet instances.
     * Instance type determines the computing resources that will be used to host your
     * game servers, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of EC2 instance types.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>The GameLift-supported EC2 instance type to use for all fleet instances.
     * Instance type determines the computing resources that will be used to host your
     * game servers, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of EC2 instance types.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(std::move(value)); return *this;}


    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline const Aws::Vector<IpPermission>& GetEC2InboundPermissions() const{ return m_eC2InboundPermissions; }

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline bool EC2InboundPermissionsHasBeenSet() const { return m_eC2InboundPermissionsHasBeenSet; }

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline void SetEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline void SetEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = std::move(value); }

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { SetEC2InboundPermissions(std::move(value)); return *this;}

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(const IpPermission& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

    /**
     * <p>The allowed IP address ranges and port settings that allow inbound traffic to
     * access game sessions on this fleet. If the fleet is hosting a custom game build,
     * this property must be set before players can connect to game sessions. For
     * Realtime Servers fleets, GameLift automatically sets TCP and UDP ranges. </p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(IpPermission&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling
     * <a>UpdateGameSession</a>.</p> <ul> <li> <p> <b>NoProtection</b> - Game sessions
     * can be terminated during active gameplay as a result of a scale-down event. </p>
     * </li> <li> <p> <b>FullProtection</b> - Game sessions in <code>ACTIVE</code>
     * status cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling
     * <a>UpdateGameSession</a>.</p> <ul> <li> <p> <b>NoProtection</b> - Game sessions
     * can be terminated during active gameplay as a result of a scale-down event. </p>
     * </li> <li> <p> <b>FullProtection</b> - Game sessions in <code>ACTIVE</code>
     * status cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }

    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling
     * <a>UpdateGameSession</a>.</p> <ul> <li> <p> <b>NoProtection</b> - Game sessions
     * can be terminated during active gameplay as a result of a scale-down event. </p>
     * </li> <li> <p> <b>FullProtection</b> - Game sessions in <code>ACTIVE</code>
     * status cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling
     * <a>UpdateGameSession</a>.</p> <ul> <li> <p> <b>NoProtection</b> - Game sessions
     * can be terminated during active gameplay as a result of a scale-down event. </p>
     * </li> <li> <p> <b>FullProtection</b> - Game sessions in <code>ACTIVE</code>
     * status cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling
     * <a>UpdateGameSession</a>.</p> <ul> <li> <p> <b>NoProtection</b> - Game sessions
     * can be terminated during active gameplay as a result of a scale-down event. </p>
     * </li> <li> <p> <b>FullProtection</b> - Game sessions in <code>ACTIVE</code>
     * status cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling
     * <a>UpdateGameSession</a>.</p> <ul> <li> <p> <b>NoProtection</b> - Game sessions
     * can be terminated during active gameplay as a result of a scale-down event. </p>
     * </li> <li> <p> <b>FullProtection</b> - Game sessions in <code>ACTIVE</code>
     * status cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>Instructions for how to launch and maintain server processes on instances in
     * the fleet. The runtime configuration defines one or more server process
     * configurations, each identifying a build executable or Realtime script file and
     * the number of processes of that type to run concurrently. </p>  <p>The
     * <code>RuntimeConfiguration</code> parameter is required unless the fleet is
     * being configured using the older parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions for how to launch and maintain server processes on instances in
     * the fleet. The runtime configuration defines one or more server process
     * configurations, each identifying a build executable or Realtime script file and
     * the number of processes of that type to run concurrently. </p>  <p>The
     * <code>RuntimeConfiguration</code> parameter is required unless the fleet is
     * being configured using the older parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>Instructions for how to launch and maintain server processes on instances in
     * the fleet. The runtime configuration defines one or more server process
     * configurations, each identifying a build executable or Realtime script file and
     * the number of processes of that type to run concurrently. </p>  <p>The
     * <code>RuntimeConfiguration</code> parameter is required unless the fleet is
     * being configured using the older parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for how to launch and maintain server processes on instances in
     * the fleet. The runtime configuration defines one or more server process
     * configurations, each identifying a build executable or Realtime script file and
     * the number of processes of that type to run concurrently. </p>  <p>The
     * <code>RuntimeConfiguration</code> parameter is required unless the fleet is
     * being configured using the older parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>Instructions for how to launch and maintain server processes on instances in
     * the fleet. The runtime configuration defines one or more server process
     * configurations, each identifying a build executable or Realtime script file and
     * the number of processes of that type to run concurrently. </p>  <p>The
     * <code>RuntimeConfiguration</code> parameter is required unless the fleet is
     * being configured using the older parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions for how to launch and maintain server processes on instances in
     * the fleet. The runtime configuration defines one or more server process
     * configurations, each identifying a build executable or Realtime script file and
     * the number of processes of that type to run concurrently. </p>  <p>The
     * <code>RuntimeConfiguration</code> parameter is required unless the fleet is
     * being configured using the older parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }

    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline CreateFleetRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline CreateFleetRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of an AWS CloudWatch metric group to add this fleet to. A metric
     * group is used to aggregate the metrics for multiple fleets. You can specify an
     * existing metric group name or set a new name to create a new metric group. A
     * fleet can be included in only one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }


    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Used when peering your GameLift fleet with a VPC, the unique identifier for
     * the AWS account that owns the VPC. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}


    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your GameLift
     * fleet. The VPC must be in the same Region as your fleet. To look up a VPC ID,
     * use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a> in the
     * AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline CreateFleetRequest& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline CreateFleetRequest& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the AWS Management Console. Learn more about using on-box credentials for
     * your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This property cannot be
     * changed after the fleet is created.</p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}


    /**
     * <p>Prompts GameLift to generate a TLS/SSL certificate for the fleet. TLS
     * certificates are used for encrypting traffic between game clients and the game
     * servers that are running on GameLift. By default, the
     * <code>CertificateConfiguration</code> is set to <code>DISABLED</code>. Learn
     * more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. This property cannot be changed after the fleet
     * is created. </p> <p>Note: This feature requires the AWS Certificate Manager
     * (ACM) service, which is not available in all AWS regions. When working in a
     * region that does not support this feature, a fleet creation request with
     * certificate generation fails with a 4xx error.</p>
     */
    inline const CertificateConfiguration& GetCertificateConfiguration() const{ return m_certificateConfiguration; }

    /**
     * <p>Prompts GameLift to generate a TLS/SSL certificate for the fleet. TLS
     * certificates are used for encrypting traffic between game clients and the game
     * servers that are running on GameLift. By default, the
     * <code>CertificateConfiguration</code> is set to <code>DISABLED</code>. Learn
     * more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. This property cannot be changed after the fleet
     * is created. </p> <p>Note: This feature requires the AWS Certificate Manager
     * (ACM) service, which is not available in all AWS regions. When working in a
     * region that does not support this feature, a fleet creation request with
     * certificate generation fails with a 4xx error.</p>
     */
    inline bool CertificateConfigurationHasBeenSet() const { return m_certificateConfigurationHasBeenSet; }

    /**
     * <p>Prompts GameLift to generate a TLS/SSL certificate for the fleet. TLS
     * certificates are used for encrypting traffic between game clients and the game
     * servers that are running on GameLift. By default, the
     * <code>CertificateConfiguration</code> is set to <code>DISABLED</code>. Learn
     * more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. This property cannot be changed after the fleet
     * is created. </p> <p>Note: This feature requires the AWS Certificate Manager
     * (ACM) service, which is not available in all AWS regions. When working in a
     * region that does not support this feature, a fleet creation request with
     * certificate generation fails with a 4xx error.</p>
     */
    inline void SetCertificateConfiguration(const CertificateConfiguration& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = value; }

    /**
     * <p>Prompts GameLift to generate a TLS/SSL certificate for the fleet. TLS
     * certificates are used for encrypting traffic between game clients and the game
     * servers that are running on GameLift. By default, the
     * <code>CertificateConfiguration</code> is set to <code>DISABLED</code>. Learn
     * more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. This property cannot be changed after the fleet
     * is created. </p> <p>Note: This feature requires the AWS Certificate Manager
     * (ACM) service, which is not available in all AWS regions. When working in a
     * region that does not support this feature, a fleet creation request with
     * certificate generation fails with a 4xx error.</p>
     */
    inline void SetCertificateConfiguration(CertificateConfiguration&& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = std::move(value); }

    /**
     * <p>Prompts GameLift to generate a TLS/SSL certificate for the fleet. TLS
     * certificates are used for encrypting traffic between game clients and the game
     * servers that are running on GameLift. By default, the
     * <code>CertificateConfiguration</code> is set to <code>DISABLED</code>. Learn
     * more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. This property cannot be changed after the fleet
     * is created. </p> <p>Note: This feature requires the AWS Certificate Manager
     * (ACM) service, which is not available in all AWS regions. When working in a
     * region that does not support this feature, a fleet creation request with
     * certificate generation fails with a 4xx error.</p>
     */
    inline CreateFleetRequest& WithCertificateConfiguration(const CertificateConfiguration& value) { SetCertificateConfiguration(value); return *this;}

    /**
     * <p>Prompts GameLift to generate a TLS/SSL certificate for the fleet. TLS
     * certificates are used for encrypting traffic between game clients and the game
     * servers that are running on GameLift. By default, the
     * <code>CertificateConfiguration</code> is set to <code>DISABLED</code>. Learn
     * more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. This property cannot be changed after the fleet
     * is created. </p> <p>Note: This feature requires the AWS Certificate Manager
     * (ACM) service, which is not available in all AWS regions. When working in a
     * region that does not support this feature, a fleet creation request with
     * certificate generation fails with a 4xx error.</p>
     */
    inline CreateFleetRequest& WithCertificateConfiguration(CertificateConfiguration&& value) { SetCertificateConfiguration(std::move(value)); return *this;}


    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocations() const{ return m_locations; }

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline void SetLocations(const Aws::Vector<LocationConfiguration>& value) { m_locationsHasBeenSet = true; m_locations = value; }

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline void SetLocations(Aws::Vector<LocationConfiguration>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline CreateFleetRequest& WithLocations(const Aws::Vector<LocationConfiguration>& value) { SetLocations(value); return *this;}

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline CreateFleetRequest& WithLocations(Aws::Vector<LocationConfiguration>&& value) { SetLocations(std::move(value)); return *this;}

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline CreateFleetRequest& AddLocations(const LocationConfiguration& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }

    /**
     * <p>A set of remote locations to deploy additional instances to and manage as
     * part of the fleet. This parameter can only be used when creating fleets in AWS
     * Regions that support multiple locations. You can add any GameLift-supported AWS
     * Region as a remote location, in the form of an AWS Region code such as
     * <code>us-west-2</code>. To create a fleet with instances in the home Region
     * only, omit this parameter. </p>
     */
    inline CreateFleetRequest& AddLocations(LocationConfiguration&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline CreateFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline CreateFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline CreateFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the fleet is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the <i>AWS General Reference</i> for actual
     * tagging limits.</p>
     */
    inline CreateFleetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet;

    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet;

    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet;

    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet;

    EC2InstanceType m_eC2InstanceType;
    bool m_eC2InstanceTypeHasBeenSet;

    Aws::Vector<IpPermission> m_eC2InboundPermissions;
    bool m_eC2InboundPermissionsHasBeenSet;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet;

    RuntimeConfiguration m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet;

    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet;

    CertificateConfiguration m_certificateConfiguration;
    bool m_certificateConfigurationHasBeenSet;

    Aws::Vector<LocationConfiguration> m_locations;
    bool m_locationsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
