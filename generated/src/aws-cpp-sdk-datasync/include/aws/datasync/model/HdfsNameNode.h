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
    AWS_DATASYNC_API HdfsNameNode() = default;
    AWS_DATASYNC_API HdfsNameNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API HdfsNameNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hostname of the NameNode in the HDFS cluster. This value is the IP
     * address or Domain Name Service (DNS) name of the NameNode. An agent that's
     * installed on-premises uses this hostname to communicate with the NameNode in the
     * network.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    HdfsNameNode& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the NameNode uses to listen to client requests.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline HdfsNameNode& WithPort(int value) { SetPort(value); return *this;}
    ///@}
  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
