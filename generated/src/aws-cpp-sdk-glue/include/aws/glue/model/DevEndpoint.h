/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A development endpoint where a developer can remotely debug extract,
   * transform, and load (ETL) scripts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DevEndpoint">AWS
   * API Reference</a></p>
   */
  class DevEndpoint
  {
  public:
    AWS_GLUE_API DevEndpoint();
    AWS_GLUE_API DevEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DevEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetYarnEndpointAddress() const{ return m_yarnEndpointAddress; }

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline bool YarnEndpointAddressHasBeenSet() const { return m_yarnEndpointAddressHasBeenSet; }

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline void SetYarnEndpointAddress(const Aws::String& value) { m_yarnEndpointAddressHasBeenSet = true; m_yarnEndpointAddress = value; }

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline void SetYarnEndpointAddress(Aws::String&& value) { m_yarnEndpointAddressHasBeenSet = true; m_yarnEndpointAddress = std::move(value); }

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline void SetYarnEndpointAddress(const char* value) { m_yarnEndpointAddressHasBeenSet = true; m_yarnEndpointAddress.assign(value); }

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithYarnEndpointAddress(const Aws::String& value) { SetYarnEndpointAddress(value); return *this;}

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithYarnEndpointAddress(Aws::String&& value) { SetYarnEndpointAddress(std::move(value)); return *this;}

    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithYarnEndpointAddress(const char* value) { SetYarnEndpointAddress(value); return *this;}


    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline const Aws::String& GetPrivateAddress() const{ return m_privateAddress; }

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline bool PrivateAddressHasBeenSet() const { return m_privateAddressHasBeenSet; }

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline void SetPrivateAddress(const Aws::String& value) { m_privateAddressHasBeenSet = true; m_privateAddress = value; }

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline void SetPrivateAddress(Aws::String&& value) { m_privateAddressHasBeenSet = true; m_privateAddress = std::move(value); }

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline void SetPrivateAddress(const char* value) { m_privateAddressHasBeenSet = true; m_privateAddress.assign(value); }

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline DevEndpoint& WithPrivateAddress(const Aws::String& value) { SetPrivateAddress(value); return *this;}

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline DevEndpoint& WithPrivateAddress(Aws::String&& value) { SetPrivateAddress(std::move(value)); return *this;}

    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline DevEndpoint& WithPrivateAddress(const char* value) { SetPrivateAddress(value); return *this;}


    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline int GetZeppelinRemoteSparkInterpreterPort() const{ return m_zeppelinRemoteSparkInterpreterPort; }

    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline bool ZeppelinRemoteSparkInterpreterPortHasBeenSet() const { return m_zeppelinRemoteSparkInterpreterPortHasBeenSet; }

    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline void SetZeppelinRemoteSparkInterpreterPort(int value) { m_zeppelinRemoteSparkInterpreterPortHasBeenSet = true; m_zeppelinRemoteSparkInterpreterPort = value; }

    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline DevEndpoint& WithZeppelinRemoteSparkInterpreterPort(int value) { SetZeppelinRemoteSparkInterpreterPort(value); return *this;}


    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetPublicAddress() const{ return m_publicAddress; }

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline bool PublicAddressHasBeenSet() const { return m_publicAddressHasBeenSet; }

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline void SetPublicAddress(const Aws::String& value) { m_publicAddressHasBeenSet = true; m_publicAddress = value; }

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline void SetPublicAddress(Aws::String&& value) { m_publicAddressHasBeenSet = true; m_publicAddress = std::move(value); }

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline void SetPublicAddress(const char* value) { m_publicAddressHasBeenSet = true; m_publicAddress.assign(value); }

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithPublicAddress(const Aws::String& value) { SetPublicAddress(value); return *this;}

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithPublicAddress(Aws::String&& value) { SetPublicAddress(std::move(value)); return *this;}

    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithPublicAddress(const char* value) { SetPublicAddress(value); return *this;}


    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> </ul> <p>Known issue: when a
     * development endpoint is created with the <code>G.2X</code>
     * <code>WorkerType</code> configuration, the Spark drivers for the development
     * endpoint will run on 4 vCPU, 16 GB of memory, and a 64 GB disk. </p>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> </ul> <p>Known issue: when a
     * development endpoint is created with the <code>G.2X</code>
     * <code>WorkerType</code> configuration, the Spark drivers for the development
     * endpoint will run on 4 vCPU, 16 GB of memory, and a 64 GB disk. </p>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> </ul> <p>Known issue: when a
     * development endpoint is created with the <code>G.2X</code>
     * <code>WorkerType</code> configuration, the Spark drivers for the development
     * endpoint will run on 4 vCPU, 16 GB of memory, and a 64 GB disk. </p>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> </ul> <p>Known issue: when a
     * development endpoint is created with the <code>G.2X</code>
     * <code>WorkerType</code> configuration, the Spark drivers for the development
     * endpoint will run on 4 vCPU, 16 GB of memory, and a 64 GB disk. </p>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> </ul> <p>Known issue: when a
     * development endpoint is created with the <code>G.2X</code>
     * <code>WorkerType</code> configuration, the Spark drivers for the development
     * endpoint will run on 4 vCPU, 16 GB of memory, and a 64 GB disk. </p>
     */
    inline DevEndpoint& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> </ul> <p>Known issue: when a
     * development endpoint is created with the <code>G.2X</code>
     * <code>WorkerType</code> configuration, the Spark drivers for the development
     * endpoint will run on 4 vCPU, 16 GB of memory, and a 64 GB disk. </p>
     */
    inline DevEndpoint& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline DevEndpoint& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline DevEndpoint& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Development endpoints that are created without
     * specifying a Glue version default to Glue 0.9.</p> <p>You can specify a version
     * of Python support for development endpoints by using the <code>Arguments</code>
     * parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline DevEndpoint& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p> <p>The maximum number of workers you can define
     * are 299 for <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p> <p>The maximum number of workers you can define
     * are 299 for <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p> <p>The maximum number of workers you can define
     * are 299 for <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p> <p>The maximum number of workers you can define
     * are 299 for <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline DevEndpoint& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * <code>DevEndpoint</code>.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * <code>DevEndpoint</code>.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline DevEndpoint& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline DevEndpoint& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline DevEndpoint& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const{ return m_extraPythonLibsS3Path; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline void SetExtraPythonLibsS3Path(const Aws::String& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = value; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline void SetExtraPythonLibsS3Path(Aws::String&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::move(value); }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline void SetExtraPythonLibsS3Path(const char* value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path.assign(value); }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline DevEndpoint& WithExtraPythonLibsS3Path(const Aws::String& value) { SetExtraPythonLibsS3Path(value); return *this;}

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline DevEndpoint& WithExtraPythonLibsS3Path(Aws::String&& value) { SetExtraPythonLibsS3Path(std::move(value)); return *this;}

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline DevEndpoint& WithExtraPythonLibsS3Path(const char* value) { SetExtraPythonLibsS3Path(value); return *this;}


    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline const Aws::String& GetExtraJarsS3Path() const{ return m_extraJarsS3Path; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline void SetExtraJarsS3Path(const Aws::String& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = value; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline void SetExtraJarsS3Path(Aws::String&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::move(value); }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline void SetExtraJarsS3Path(const char* value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path.assign(value); }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline DevEndpoint& WithExtraJarsS3Path(const Aws::String& value) { SetExtraJarsS3Path(value); return *this;}

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline DevEndpoint& WithExtraJarsS3Path(Aws::String&& value) { SetExtraJarsS3Path(std::move(value)); return *this;}

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline DevEndpoint& WithExtraJarsS3Path(const char* value) { SetExtraJarsS3Path(value); return *this;}


    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The status of the last update.</p>
     */
    inline const Aws::String& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }

    /**
     * <p>The status of the last update.</p>
     */
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the last update.</p>
     */
    inline void SetLastUpdateStatus(const Aws::String& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }

    /**
     * <p>The status of the last update.</p>
     */
    inline void SetLastUpdateStatus(Aws::String&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::move(value); }

    /**
     * <p>The status of the last update.</p>
     */
    inline void SetLastUpdateStatus(const char* value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus.assign(value); }

    /**
     * <p>The status of the last update.</p>
     */
    inline DevEndpoint& WithLastUpdateStatus(const Aws::String& value) { SetLastUpdateStatus(value); return *this;}

    /**
     * <p>The status of the last update.</p>
     */
    inline DevEndpoint& WithLastUpdateStatus(Aws::String&& value) { SetLastUpdateStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the last update.</p>
     */
    inline DevEndpoint& WithLastUpdateStatus(const char* value) { SetLastUpdateStatus(value); return *this;}


    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline DevEndpoint& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline DevEndpoint& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }

    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }

    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline DevEndpoint& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline DevEndpoint& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline DevEndpoint& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline DevEndpoint& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline DevEndpoint& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetPublicKeys() const{ return m_publicKeys; }

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline bool PublicKeysHasBeenSet() const { return m_publicKeysHasBeenSet; }

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline void SetPublicKeys(const Aws::Vector<Aws::String>& value) { m_publicKeysHasBeenSet = true; m_publicKeys = value; }

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline void SetPublicKeys(Aws::Vector<Aws::String>&& value) { m_publicKeysHasBeenSet = true; m_publicKeys = std::move(value); }

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline DevEndpoint& WithPublicKeys(const Aws::Vector<Aws::String>& value) { SetPublicKeys(value); return *this;}

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline DevEndpoint& WithPublicKeys(Aws::Vector<Aws::String>&& value) { SetPublicKeys(std::move(value)); return *this;}

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline DevEndpoint& AddPublicKeys(const Aws::String& value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(value); return *this; }

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline DevEndpoint& AddPublicKeys(Aws::String&& value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of public keys to be used by the <code>DevEndpoints</code> for
     * authentication. Using this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API operation with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline DevEndpoint& AddPublicKeys(const char* value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(value); return *this; }


    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline DevEndpoint& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline DevEndpoint& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_yarnEndpointAddress;
    bool m_yarnEndpointAddressHasBeenSet = false;

    Aws::String m_privateAddress;
    bool m_privateAddressHasBeenSet = false;

    int m_zeppelinRemoteSparkInterpreterPort;
    bool m_zeppelinRemoteSparkInterpreterPortHasBeenSet = false;

    Aws::String m_publicAddress;
    bool m_publicAddressHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_extraPythonLibsS3Path;
    bool m_extraPythonLibsS3PathHasBeenSet = false;

    Aws::String m_extraJarsS3Path;
    bool m_extraJarsS3PathHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicKeys;
    bool m_publicKeysHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
