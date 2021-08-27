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
     * <p>A human-readable description of a fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline CreateFleetRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline CreateFleetRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a build to be deployed on the new fleet. You can use
     * either the build ID or ARN value. The custom game server build must have been
     * successfully uploaded to Amazon GameLift and be in a <code>READY</code> status.
     * This fleet setting cannot be changed once the fleet is created. </p>
     */
    inline CreateFleetRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a Realtime script to be deployed on the new fleet.
     * You can use either the script ID or ARN value. The Realtime script must have
     * been successfully uploaded to Amazon GameLift. This fleet setting cannot be
     * changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}


    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}


    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::move(value); }

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>This parameter is no longer used. Instead, to specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline CreateFleetRequest& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }


    /**
     * <p>The name of an EC2 instance type that is supported in Amazon GameLift. A
     * fleet instance type determines the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>The name of an EC2 instance type that is supported in Amazon GameLift. A
     * fleet instance type determines the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline bool EC2InstanceTypeHasBeenSet() const { return m_eC2InstanceTypeHasBeenSet; }

    /**
     * <p>The name of an EC2 instance type that is supported in Amazon GameLift. A
     * fleet instance type determines the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>The name of an EC2 instance type that is supported in Amazon GameLift. A
     * fleet instance type determines the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = std::move(value); }

    /**
     * <p>The name of an EC2 instance type that is supported in Amazon GameLift. A
     * fleet instance type determines the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>The name of an EC2 instance type that is supported in Amazon GameLift. A
     * fleet instance type determines the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(std::move(value)); return *this;}


    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline const Aws::Vector<IpPermission>& GetEC2InboundPermissions() const{ return m_eC2InboundPermissions; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline bool EC2InboundPermissionsHasBeenSet() const { return m_eC2InboundPermissionsHasBeenSet; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline void SetEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline void SetEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = std::move(value); }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { SetEC2InboundPermissions(std::move(value)); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(const IpPermission& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that are running on the fleet. For fleets using a custom game
     * build, this parameter is required before game sessions running on the fleet can
     * accept connections. For Realtime Servers fleets, Amazon GameLift automatically
     * sets TCP and UDP ranges for use by the Realtime servers. You can specify
     * multiple permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(IpPermission&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> - If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>A game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> - If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }

    /**
     * <p>A game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> - If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>A game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> - If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>A game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> - If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>A game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> - If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime script.
     * The runtime configuration defines the server executables or launch script file,
     * launch parameters, and the number of processes to run concurrently on each
     * instance. When creating a fleet, the runtime configuration must have at least
     * one server process configuration; otherwise the request fails with an invalid
     * request exception. (This parameter replaces the parameters
     * <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>, although
     * requests that contain values for these parameters instead of a runtime
     * configuration will continue to work.) This parameter is required unless the
     * parameters <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>
     * are defined. Runtime configuration replaced these parameters, but fleets that
     * use them will continue to work. </p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime script.
     * The runtime configuration defines the server executables or launch script file,
     * launch parameters, and the number of processes to run concurrently on each
     * instance. When creating a fleet, the runtime configuration must have at least
     * one server process configuration; otherwise the request fails with an invalid
     * request exception. (This parameter replaces the parameters
     * <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>, although
     * requests that contain values for these parameters instead of a runtime
     * configuration will continue to work.) This parameter is required unless the
     * parameters <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>
     * are defined. Runtime configuration replaced these parameters, but fleets that
     * use them will continue to work. </p>
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime script.
     * The runtime configuration defines the server executables or launch script file,
     * launch parameters, and the number of processes to run concurrently on each
     * instance. When creating a fleet, the runtime configuration must have at least
     * one server process configuration; otherwise the request fails with an invalid
     * request exception. (This parameter replaces the parameters
     * <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>, although
     * requests that contain values for these parameters instead of a runtime
     * configuration will continue to work.) This parameter is required unless the
     * parameters <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>
     * are defined. Runtime configuration replaced these parameters, but fleets that
     * use them will continue to work. </p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime script.
     * The runtime configuration defines the server executables or launch script file,
     * launch parameters, and the number of processes to run concurrently on each
     * instance. When creating a fleet, the runtime configuration must have at least
     * one server process configuration; otherwise the request fails with an invalid
     * request exception. (This parameter replaces the parameters
     * <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>, although
     * requests that contain values for these parameters instead of a runtime
     * configuration will continue to work.) This parameter is required unless the
     * parameters <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>
     * are defined. Runtime configuration replaced these parameters, but fleets that
     * use them will continue to work. </p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime script.
     * The runtime configuration defines the server executables or launch script file,
     * launch parameters, and the number of processes to run concurrently on each
     * instance. When creating a fleet, the runtime configuration must have at least
     * one server process configuration; otherwise the request fails with an invalid
     * request exception. (This parameter replaces the parameters
     * <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>, although
     * requests that contain values for these parameters instead of a runtime
     * configuration will continue to work.) This parameter is required unless the
     * parameters <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>
     * are defined. Runtime configuration replaced these parameters, but fleets that
     * use them will continue to work. </p>
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime script.
     * The runtime configuration defines the server executables or launch script file,
     * launch parameters, and the number of processes to run concurrently on each
     * instance. When creating a fleet, the runtime configuration must have at least
     * one server process configuration; otherwise the request fails with an invalid
     * request exception. (This parameter replaces the parameters
     * <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>, although
     * requests that contain values for these parameters instead of a runtime
     * configuration will continue to work.) This parameter is required unless the
     * parameters <code>ServerLaunchPath</code> and <code>ServerLaunchParameters</code>
     * are defined. Runtime configuration replaced these parameters, but fleets that
     * use them will continue to work. </p>
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>A policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>A policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }

    /**
     * <p>A policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>A policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    /**
     * <p>A policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>A policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }


    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AWS account with the VPC that you want to peer
     * your Amazon GameLift fleet with. You can find your account ID in the AWS
     * Management Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}


    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>Indicates whether to use On-Demand instances or Spot instances for this
     * fleet. If empty, the default is <code>ON_DEMAND</code>. Both categories of
     * instances use identical hardware and configurations based on the instance type
     * selected for this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }

    /**
     * <p>Indicates whether to use On-Demand instances or Spot instances for this
     * fleet. If empty, the default is <code>ON_DEMAND</code>. Both categories of
     * instances use identical hardware and configurations based on the instance type
     * selected for this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }

    /**
     * <p>Indicates whether to use On-Demand instances or Spot instances for this
     * fleet. If empty, the default is <code>ON_DEMAND</code>. Both categories of
     * instances use identical hardware and configurations based on the instance type
     * selected for this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>Indicates whether to use On-Demand instances or Spot instances for this
     * fleet. If empty, the default is <code>ON_DEMAND</code>. Both categories of
     * instances use identical hardware and configurations based on the instance type
     * selected for this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }

    /**
     * <p>Indicates whether to use On-Demand instances or Spot instances for this
     * fleet. If empty, the default is <code>ON_DEMAND</code>. Both categories of
     * instances use identical hardware and configurations based on the instance type
     * selected for this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline CreateFleetRequest& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>Indicates whether to use On-Demand instances or Spot instances for this
     * fleet. If empty, the default is <code>ON_DEMAND</code>. Both categories of
     * instances use identical hardware and configurations based on the instance type
     * selected for this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline CreateFleetRequest& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an AWS IAM role that manages access to your AWS
     * services. Fleets with an instance role ARN allow applications that are running
     * on the fleet's instances to assume the role. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. To call this operation with
     * instance role ARN, you must have IAM PassRole permissions. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">IAM
     * policy examples for GameLift</a>. </p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}


    /**
     * <p>Indicates whether to generate a TLS/SSL certificate for the new fleet. TLS
     * certificates are used for encrypting traffic between game clients and game
     * servers running on GameLift. If this parameter is not specified, the default
     * value, DISABLED, is used. This fleet setting cannot be changed once the fleet is
     * created. Learn more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. </p> <p>Note: This feature requires the AWS
     * Certificate Manager (ACM) service, which is available in the AWS global
     * partition but not in all other partitions. When working in a partition that does
     * not support this feature, a request for a new fleet with certificate generation
     * results fails with a 4xx unsupported Region error.</p> <p>Valid values include:
     * </p> <ul> <li> <p> <b>GENERATED</b> - Generate a TLS/SSL certificate for this
     * fleet.</p> </li> <li> <p> <b>DISABLED</b> - (default) Do not generate a TLS/SSL
     * certificate for this fleet.</p> </li> </ul>
     */
    inline const CertificateConfiguration& GetCertificateConfiguration() const{ return m_certificateConfiguration; }

    /**
     * <p>Indicates whether to generate a TLS/SSL certificate for the new fleet. TLS
     * certificates are used for encrypting traffic between game clients and game
     * servers running on GameLift. If this parameter is not specified, the default
     * value, DISABLED, is used. This fleet setting cannot be changed once the fleet is
     * created. Learn more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. </p> <p>Note: This feature requires the AWS
     * Certificate Manager (ACM) service, which is available in the AWS global
     * partition but not in all other partitions. When working in a partition that does
     * not support this feature, a request for a new fleet with certificate generation
     * results fails with a 4xx unsupported Region error.</p> <p>Valid values include:
     * </p> <ul> <li> <p> <b>GENERATED</b> - Generate a TLS/SSL certificate for this
     * fleet.</p> </li> <li> <p> <b>DISABLED</b> - (default) Do not generate a TLS/SSL
     * certificate for this fleet.</p> </li> </ul>
     */
    inline bool CertificateConfigurationHasBeenSet() const { return m_certificateConfigurationHasBeenSet; }

    /**
     * <p>Indicates whether to generate a TLS/SSL certificate for the new fleet. TLS
     * certificates are used for encrypting traffic between game clients and game
     * servers running on GameLift. If this parameter is not specified, the default
     * value, DISABLED, is used. This fleet setting cannot be changed once the fleet is
     * created. Learn more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. </p> <p>Note: This feature requires the AWS
     * Certificate Manager (ACM) service, which is available in the AWS global
     * partition but not in all other partitions. When working in a partition that does
     * not support this feature, a request for a new fleet with certificate generation
     * results fails with a 4xx unsupported Region error.</p> <p>Valid values include:
     * </p> <ul> <li> <p> <b>GENERATED</b> - Generate a TLS/SSL certificate for this
     * fleet.</p> </li> <li> <p> <b>DISABLED</b> - (default) Do not generate a TLS/SSL
     * certificate for this fleet.</p> </li> </ul>
     */
    inline void SetCertificateConfiguration(const CertificateConfiguration& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = value; }

    /**
     * <p>Indicates whether to generate a TLS/SSL certificate for the new fleet. TLS
     * certificates are used for encrypting traffic between game clients and game
     * servers running on GameLift. If this parameter is not specified, the default
     * value, DISABLED, is used. This fleet setting cannot be changed once the fleet is
     * created. Learn more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. </p> <p>Note: This feature requires the AWS
     * Certificate Manager (ACM) service, which is available in the AWS global
     * partition but not in all other partitions. When working in a partition that does
     * not support this feature, a request for a new fleet with certificate generation
     * results fails with a 4xx unsupported Region error.</p> <p>Valid values include:
     * </p> <ul> <li> <p> <b>GENERATED</b> - Generate a TLS/SSL certificate for this
     * fleet.</p> </li> <li> <p> <b>DISABLED</b> - (default) Do not generate a TLS/SSL
     * certificate for this fleet.</p> </li> </ul>
     */
    inline void SetCertificateConfiguration(CertificateConfiguration&& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = std::move(value); }

    /**
     * <p>Indicates whether to generate a TLS/SSL certificate for the new fleet. TLS
     * certificates are used for encrypting traffic between game clients and game
     * servers running on GameLift. If this parameter is not specified, the default
     * value, DISABLED, is used. This fleet setting cannot be changed once the fleet is
     * created. Learn more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. </p> <p>Note: This feature requires the AWS
     * Certificate Manager (ACM) service, which is available in the AWS global
     * partition but not in all other partitions. When working in a partition that does
     * not support this feature, a request for a new fleet with certificate generation
     * results fails with a 4xx unsupported Region error.</p> <p>Valid values include:
     * </p> <ul> <li> <p> <b>GENERATED</b> - Generate a TLS/SSL certificate for this
     * fleet.</p> </li> <li> <p> <b>DISABLED</b> - (default) Do not generate a TLS/SSL
     * certificate for this fleet.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithCertificateConfiguration(const CertificateConfiguration& value) { SetCertificateConfiguration(value); return *this;}

    /**
     * <p>Indicates whether to generate a TLS/SSL certificate for the new fleet. TLS
     * certificates are used for encrypting traffic between game clients and game
     * servers running on GameLift. If this parameter is not specified, the default
     * value, DISABLED, is used. This fleet setting cannot be changed once the fleet is
     * created. Learn more at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-howitworks.html#gamelift-howitworks-security">Securing
     * Client/Server Communication</a>. </p> <p>Note: This feature requires the AWS
     * Certificate Manager (ACM) service, which is available in the AWS global
     * partition but not in all other partitions. When working in a partition that does
     * not support this feature, a request for a new fleet with certificate generation
     * results fails with a 4xx unsupported Region error.</p> <p>Valid values include:
     * </p> <ul> <li> <p> <b>GENERATED</b> - Generate a TLS/SSL certificate for this
     * fleet.</p> </li> <li> <p> <b>DISABLED</b> - (default) Do not generate a TLS/SSL
     * certificate for this fleet.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithCertificateConfiguration(CertificateConfiguration&& value) { SetCertificateConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
