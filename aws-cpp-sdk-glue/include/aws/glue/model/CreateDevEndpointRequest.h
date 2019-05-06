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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLUE_API CreateDevEndpointRequest : public GlueRequest
  {
  public:
    CreateDevEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDevEndpoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name to be assigned to the new DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role for the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Security group IDs for the security groups to be used by the new
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline CreateDevEndpointRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline CreateDevEndpointRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID for the new DevEndpoint to use.</p>
     */
    inline CreateDevEndpointRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline CreateDevEndpointRequest& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline CreateDevEndpointRequest& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key to be used by this DevEndpoint for authentication. This
     * attribute is provided for backward compatibility, as the recommended attribute
     * to use is public keys.</p>
     */
    inline CreateDevEndpointRequest& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetPublicKeys() const{ return m_publicKeys; }

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline bool PublicKeysHasBeenSet() const { return m_publicKeysHasBeenSet; }

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline void SetPublicKeys(const Aws::Vector<Aws::String>& value) { m_publicKeysHasBeenSet = true; m_publicKeys = value; }

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline void SetPublicKeys(Aws::Vector<Aws::String>&& value) { m_publicKeysHasBeenSet = true; m_publicKeys = std::move(value); }

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline CreateDevEndpointRequest& WithPublicKeys(const Aws::Vector<Aws::String>& value) { SetPublicKeys(value); return *this;}

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline CreateDevEndpointRequest& WithPublicKeys(Aws::Vector<Aws::String>&& value) { SetPublicKeys(std::move(value)); return *this;}

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline CreateDevEndpointRequest& AddPublicKeys(const Aws::String& value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(value); return *this; }

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline CreateDevEndpointRequest& AddPublicKeys(Aws::String&& value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of public keys to be used by the DevEndpoints for authentication. The
     * use of this attribute is preferred over a single public key because the public
     * keys allow you to have a different private key per client.</p> <note> <p>If you
     * previously created an endpoint with a public key, you must remove that key to be
     * able to set a list of public keys: call the <code>UpdateDevEndpoint</code> API
     * with the public key content in the <code>deletePublicKeys</code> attribute, and
     * the list of new keys in the <code>addPublicKeys</code> attribute.</p> </note>
     */
    inline CreateDevEndpointRequest& AddPublicKeys(const char* value) { m_publicKeysHasBeenSet = true; m_publicKeys.push_back(value); return *this; }


    /**
     * <p>The number of AWS Glue Data Processing Units (DPUs) to allocate to this
     * DevEndpoint.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of AWS Glue Data Processing Units (DPUs) to allocate to this
     * DevEndpoint.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of AWS Glue Data Processing Units (DPUs) to allocate to this
     * DevEndpoint.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of AWS Glue Data Processing Units (DPUs) to allocate to this
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const{ return m_extraPythonLibsS3Path; }

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline void SetExtraPythonLibsS3Path(const Aws::String& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = value; }

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline void SetExtraPythonLibsS3Path(Aws::String&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::move(value); }

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline void SetExtraPythonLibsS3Path(const char* value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path.assign(value); }

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline CreateDevEndpointRequest& WithExtraPythonLibsS3Path(const Aws::String& value) { SetExtraPythonLibsS3Path(value); return *this;}

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline CreateDevEndpointRequest& WithExtraPythonLibsS3Path(Aws::String&& value) { SetExtraPythonLibsS3Path(std::move(value)); return *this;}

    /**
     * <p>Path(s) to one or more Python libraries in an S3 bucket that should be loaded
     * in your DevEndpoint. Multiple values must be complete paths separated by a
     * comma.</p> <p>Please note that only pure Python libraries can currently be used
     * on a DevEndpoint. Libraries that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not yet supported.</p>
     */
    inline CreateDevEndpointRequest& WithExtraPythonLibsS3Path(const char* value) { SetExtraPythonLibsS3Path(value); return *this;}


    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline const Aws::String& GetExtraJarsS3Path() const{ return m_extraJarsS3Path; }

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline void SetExtraJarsS3Path(const Aws::String& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = value; }

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline void SetExtraJarsS3Path(Aws::String&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::move(value); }

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline void SetExtraJarsS3Path(const char* value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path.assign(value); }

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithExtraJarsS3Path(const Aws::String& value) { SetExtraJarsS3Path(value); return *this;}

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithExtraJarsS3Path(Aws::String&& value) { SetExtraJarsS3Path(std::move(value)); return *this;}

    /**
     * <p>Path to one or more Java Jars in an S3 bucket that should be loaded in your
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithExtraJarsS3Path(const char* value) { SetExtraJarsS3Path(value); return *this;}


    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the SecurityConfiguration structure to be used with this
     * DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in AWS Glue, see <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
     * AWS Glue</a> in the developer guide.</p>
     */
    inline CreateDevEndpointRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of arguments used to configure the DevEndpoint.</p>
     */
    inline CreateDevEndpointRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet;

    Aws::Vector<Aws::String> m_publicKeys;
    bool m_publicKeysHasBeenSet;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;

    Aws::String m_extraPythonLibsS3Path;
    bool m_extraPythonLibsS3PathHasBeenSet;

    Aws::String m_extraJarsS3Path;
    bool m_extraJarsS3PathHasBeenSet;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
