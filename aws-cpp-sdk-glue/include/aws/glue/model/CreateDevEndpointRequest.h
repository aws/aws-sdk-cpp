/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateDevEndpointRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateDevEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDevEndpoint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline CreateDevEndpointRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline CreateDevEndpointRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline CreateDevEndpointRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


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
    inline CreateDevEndpointRequest& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline CreateDevEndpointRequest& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline CreateDevEndpointRequest& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetPublicKeys() const{ return m_publicKeys; }

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline bool PublicKeysHasBeenSet() const { return m_publicKeysHasBeenSet; }

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline void SetPublicKeys(const Aws::Vector<Aws::String>& value) { m_publicKeysHasBeenSet = true; m_publicKeys = value; }

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline void SetPublicKeys(Aws::Vector<Aws::String>&& value) { m_publicKeysHasBeenSet = true; m_publicKeys = std::move(value); }

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline CreateDevEndpointRequest& WithPublicKeys(const Aws::Vector<Aws::String>& value) { SetPublicKeys(value); return *this;}

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline CreateDevEndpointRequest& WithPublicKeys(Aws::Vector<Aws::String>&& value) { SetPublicKeys(std::move(value)); return *this;}

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline CreateDevEndpointRequest& AddPublicKeys(const Aws::String& value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(value); return *this; }

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline CreateDevEndpointRequest& AddPublicKeys(Aws::String&& value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of public keys to be used by the development endpoints for
     * authentication. The use of this attribute is preferred over a single public key
     * because the public keys allow you to have a different private key per
     * client.</p>  <p>If you previously created an endpoint with a public key,
     * you must remove that key to be able to set a list of public keys. Call the
     * <code>UpdateDevEndpoint</code> API with the public key content in the
     * <code>deletePublicKeys</code> attribute, and the list of new keys in the
     * <code>addPublicKeys</code> attribute.</p> 
     */
    inline CreateDevEndpointRequest& AddPublicKeys(const char* value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(value); return *this; }


    /**
     * <p>The number of Glue Data Processing Units (DPUs) to allocate to this
     * <code>DevEndpoint</code>.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of Glue Data Processing Units (DPUs) to allocate to this
     * <code>DevEndpoint</code>.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of Glue Data Processing Units (DPUs) to allocate to this
     * <code>DevEndpoint</code>.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of Glue Data Processing Units (DPUs) to allocate to this
     * <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


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
    inline CreateDevEndpointRequest& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

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
    inline CreateDevEndpointRequest& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


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
    inline CreateDevEndpointRequest& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

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
    inline CreateDevEndpointRequest& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

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
    inline CreateDevEndpointRequest& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


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
    inline CreateDevEndpointRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const{ return m_extraPythonLibsS3Path; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline void SetExtraPythonLibsS3Path(const Aws::String& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = value; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline void SetExtraPythonLibsS3Path(Aws::String&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::move(value); }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline void SetExtraPythonLibsS3Path(const char* value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path.assign(value); }

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline CreateDevEndpointRequest& WithExtraPythonLibsS3Path(const Aws::String& value) { SetExtraPythonLibsS3Path(value); return *this;}

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline CreateDevEndpointRequest& WithExtraPythonLibsS3Path(Aws::String&& value) { SetExtraPythonLibsS3Path(std::move(value)); return *this;}

    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline CreateDevEndpointRequest& WithExtraPythonLibsS3Path(const char* value) { SetExtraPythonLibsS3Path(value); return *this;}


    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetExtraJarsS3Path() const{ return m_extraJarsS3Path; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline void SetExtraJarsS3Path(const Aws::String& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = value; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline void SetExtraJarsS3Path(Aws::String&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::move(value); }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline void SetExtraJarsS3Path(const char* value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path.assign(value); }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithExtraJarsS3Path(const Aws::String& value) { SetExtraJarsS3Path(value); return *this;}

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithExtraJarsS3Path(Aws::String&& value) { SetExtraJarsS3Path(std::move(value)); return *this;}

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithExtraJarsS3Path(const char* value) { SetExtraJarsS3Path(value); return *this;}


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
    inline CreateDevEndpointRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicKeys;
    bool m_publicKeysHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_extraPythonLibsS3Path;
    bool m_extraPythonLibsS3PathHasBeenSet = false;

    Aws::String m_extraJarsS3Path;
    bool m_extraJarsS3PathHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
