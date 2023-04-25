/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The network settings that DataSync Discovery uses to connect with your
   * on-premises storage system's management interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DiscoveryServerConfiguration">AWS
   * API Reference</a></p>
   */
  class DiscoveryServerConfiguration
  {
  public:
    AWS_DATASYNC_API DiscoveryServerConfiguration();
    AWS_DATASYNC_API DiscoveryServerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API DiscoveryServerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline DiscoveryServerConfiguration& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline DiscoveryServerConfiguration& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}

    /**
     * <p>The domain name or IP address of your storage system's management
     * interface.</p>
     */
    inline DiscoveryServerConfiguration& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}


    /**
     * <p>The network port for accessing the storage system's management interface.</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }

    /**
     * <p>The network port for accessing the storage system's management interface.</p>
     */
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }

    /**
     * <p>The network port for accessing the storage system's management interface.</p>
     */
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }

    /**
     * <p>The network port for accessing the storage system's management interface.</p>
     */
    inline DiscoveryServerConfiguration& WithServerPort(int value) { SetServerPort(value); return *this;}

  private:

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    int m_serverPort;
    bool m_serverPortHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
