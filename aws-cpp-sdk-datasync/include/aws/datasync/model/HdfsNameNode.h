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
   * <p>The NameNode of the Hadoop Distributed File System (HDFS). The NameNode
   * manages the file system's namespace. The NameNode performs operations such as
   * opening, closing, and renaming files and directories. The NameNode contains the
   * information to map blocks of data to the DataNodes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/HdfsNameNode">AWS
   * API Reference</a></p>
   */
  class HdfsNameNode
  {
  public:
    AWS_DATASYNC_API HdfsNameNode();
    AWS_DATASYNC_API HdfsNameNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API HdfsNameNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline HdfsNameNode& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline HdfsNameNode& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline HdfsNameNode& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The port that the NameNode uses to listen to client requests.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that the NameNode uses to listen to client requests.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that the NameNode uses to listen to client requests.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that the NameNode uses to listen to client requests.</p>
     */
    inline HdfsNameNode& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
