/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/gamelift/model/IpPermission.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
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
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline CreateFleetRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline CreateFleetRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a build to be deployed on the new fleet. The custom
     * game server build must have been successfully uploaded to Amazon GameLift and be
     * in a <code>READY</code> status. This fleet setting cannot be changed once the
     * fleet is created.</p>
     */
    inline CreateFleetRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a Realtime script to be deployed on the new fleet. The
     * Realtime script must have been successfully uploaded to Amazon GameLift. This
     * fleet setting cannot be changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a run-time configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}


    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a run-time configuration
     * will continue to work.)</p>
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
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline bool EC2InstanceTypeHasBeenSet() const { return m_eC2InstanceTypeHasBeenSet; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = std::move(value); }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(std::move(value)); return *this;}


    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline const Aws::Vector<IpPermission>& GetEC2InboundPermissions() const{ return m_eC2InboundPermissions; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline bool EC2InboundPermissionsHasBeenSet() const { return m_eC2InboundPermissionsHasBeenSet; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline void SetEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline void SetEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = std::move(value); }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { SetEC2InboundPermissions(std::move(value)); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(const IpPermission& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * game sessions that running on the fleet. For fleets using a custom game build,
     * this parameter is required before game sessions running on the fleet can accept
     * connections. For Realtime Servers fleets, Amazon GameLift automatically sets TCP
     * and UDP ranges for use by the Realtime servers. You can specify multiple
     * permission settings or add more by updating the fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(IpPermission&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using <a>UpdateFleetAttributes</a>, but
     * this change will only affect sessions created after the policy change. You can
     * also set protection for individual instances using <a>UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The run-time configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * run-time configuration with at least one server process configuration.</p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The run-time configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * run-time configuration with at least one server process configuration.</p>
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The run-time configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * run-time configuration with at least one server process configuration.</p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The run-time configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * run-time configuration with at least one server process configuration.</p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The run-time configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * run-time configuration with at least one server process configuration.</p>
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The run-time configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * run-time configuration with at least one server process configuration.</p>
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}


    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Name of an Amazon CloudWatch metric group to add this fleet to. A metric
     * group aggregates the metrics for all fleets in the group. Specify an existing
     * metric group name, or provide a new name to create a new metric group. A fleet
     * can only be included in one metric group at a time. </p>
     */
    inline CreateFleetRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }


    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings. </p>
     */
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}


    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>. </p>
     */
    inline CreateFleetRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>Indicates whether to use on-demand instances or spot instances for this
     * fleet. If empty, the default is ON_DEMAND. Both categories of instances use
     * identical hardware and configurations based on the instance type selected for
     * this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }

    /**
     * <p>Indicates whether to use on-demand instances or spot instances for this
     * fleet. If empty, the default is ON_DEMAND. Both categories of instances use
     * identical hardware and configurations based on the instance type selected for
     * this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }

    /**
     * <p>Indicates whether to use on-demand instances or spot instances for this
     * fleet. If empty, the default is ON_DEMAND. Both categories of instances use
     * identical hardware and configurations based on the instance type selected for
     * this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>Indicates whether to use on-demand instances or spot instances for this
     * fleet. If empty, the default is ON_DEMAND. Both categories of instances use
     * identical hardware and configurations based on the instance type selected for
     * this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }

    /**
     * <p>Indicates whether to use on-demand instances or spot instances for this
     * fleet. If empty, the default is ON_DEMAND. Both categories of instances use
     * identical hardware and configurations based on the instance type selected for
     * this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline CreateFleetRequest& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>Indicates whether to use on-demand instances or spot instances for this
     * fleet. If empty, the default is ON_DEMAND. Both categories of instances use
     * identical hardware and configurations based on the instance type selected for
     * this fleet. Learn more about <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. </p>
     */
    inline CreateFleetRequest& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline CreateFleetRequest& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}

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
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
