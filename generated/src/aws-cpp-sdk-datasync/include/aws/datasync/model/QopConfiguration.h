/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/HdfsRpcProtection.h>
#include <aws/datasync/model/HdfsDataTransferProtection.h>
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
   * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
   * Call (RPC) and data transfer privacy settings configured on the Hadoop
   * Distributed File System (HDFS) cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/QopConfiguration">AWS
   * API Reference</a></p>
   */
  class QopConfiguration
  {
  public:
    AWS_DATASYNC_API QopConfiguration() = default;
    AWS_DATASYNC_API QopConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API QopConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline HdfsRpcProtection GetRpcProtection() const { return m_rpcProtection; }
    inline bool RpcProtectionHasBeenSet() const { return m_rpcProtectionHasBeenSet; }
    inline void SetRpcProtection(HdfsRpcProtection value) { m_rpcProtectionHasBeenSet = true; m_rpcProtection = value; }
    inline QopConfiguration& WithRpcProtection(HdfsRpcProtection value) { SetRpcProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline HdfsDataTransferProtection GetDataTransferProtection() const { return m_dataTransferProtection; }
    inline bool DataTransferProtectionHasBeenSet() const { return m_dataTransferProtectionHasBeenSet; }
    inline void SetDataTransferProtection(HdfsDataTransferProtection value) { m_dataTransferProtectionHasBeenSet = true; m_dataTransferProtection = value; }
    inline QopConfiguration& WithDataTransferProtection(HdfsDataTransferProtection value) { SetDataTransferProtection(value); return *this;}
    ///@}
  private:

    HdfsRpcProtection m_rpcProtection{HdfsRpcProtection::NOT_SET};
    bool m_rpcProtectionHasBeenSet = false;

    HdfsDataTransferProtection m_dataTransferProtection{HdfsDataTransferProtection::NOT_SET};
    bool m_dataTransferProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
