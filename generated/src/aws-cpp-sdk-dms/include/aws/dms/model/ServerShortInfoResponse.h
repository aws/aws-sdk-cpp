/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a server in a Fleet Advisor collector inventory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ServerShortInfoResponse">AWS
   * API Reference</a></p>
   */
  class ServerShortInfoResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ServerShortInfoResponse();
    AWS_DATABASEMIGRATIONSERVICE_API ServerShortInfoResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ServerShortInfoResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The ID of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name address of a server in a Fleet Advisor collector inventory.</p>
     */
    inline ServerShortInfoResponse& WithServerName(const char* value) { SetServerName(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
