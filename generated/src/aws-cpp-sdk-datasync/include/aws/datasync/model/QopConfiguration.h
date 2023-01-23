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
    AWS_DATASYNC_API QopConfiguration();
    AWS_DATASYNC_API QopConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API QopConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline const HdfsRpcProtection& GetRpcProtection() const{ return m_rpcProtection; }

    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline bool RpcProtectionHasBeenSet() const { return m_rpcProtectionHasBeenSet; }

    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline void SetRpcProtection(const HdfsRpcProtection& value) { m_rpcProtectionHasBeenSet = true; m_rpcProtection = value; }

    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline void SetRpcProtection(HdfsRpcProtection&& value) { m_rpcProtectionHasBeenSet = true; m_rpcProtection = std::move(value); }

    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline QopConfiguration& WithRpcProtection(const HdfsRpcProtection& value) { SetRpcProtection(value); return *this;}

    /**
     * <p>The RPC protection setting configured on the HDFS cluster. This setting
     * corresponds to your <code>hadoop.rpc.protection</code> setting in your
     * <code>core-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline QopConfiguration& WithRpcProtection(HdfsRpcProtection&& value) { SetRpcProtection(std::move(value)); return *this;}


    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline const HdfsDataTransferProtection& GetDataTransferProtection() const{ return m_dataTransferProtection; }

    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline bool DataTransferProtectionHasBeenSet() const { return m_dataTransferProtectionHasBeenSet; }

    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline void SetDataTransferProtection(const HdfsDataTransferProtection& value) { m_dataTransferProtectionHasBeenSet = true; m_dataTransferProtection = value; }

    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline void SetDataTransferProtection(HdfsDataTransferProtection&& value) { m_dataTransferProtectionHasBeenSet = true; m_dataTransferProtection = std::move(value); }

    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline QopConfiguration& WithDataTransferProtection(const HdfsDataTransferProtection& value) { SetDataTransferProtection(value); return *this;}

    /**
     * <p>The data transfer protection setting configured on the HDFS cluster. This
     * setting corresponds to your <code>dfs.data.transfer.protection</code> setting in
     * the <code>hdfs-site.xml</code> file on your Hadoop cluster.</p>
     */
    inline QopConfiguration& WithDataTransferProtection(HdfsDataTransferProtection&& value) { SetDataTransferProtection(std::move(value)); return *this;}

  private:

    HdfsRpcProtection m_rpcProtection;
    bool m_rpcProtectionHasBeenSet = false;

    HdfsDataTransferProtection m_dataTransferProtection;
    bool m_dataTransferProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
