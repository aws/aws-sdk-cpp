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
    AWS_GLUE_API CreateDevEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDevEndpoint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to be assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    CreateDevEndpointRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role for the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateDevEndpointRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security group IDs for the security groups to be used by the new
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateDevEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateDevEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ID for the new <code>DevEndpoint</code> to use.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateDevEndpointRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key to be used by this <code>DevEndpoint</code> for
     * authentication. This attribute is provided for backward compatibility because
     * the recommended attribute to use is public keys.</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    CreateDevEndpointRequest& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetPublicKeys() const { return m_publicKeys; }
    inline bool PublicKeysHasBeenSet() const { return m_publicKeysHasBeenSet; }
    template<typename PublicKeysT = Aws::Vector<Aws::String>>
    void SetPublicKeys(PublicKeysT&& value) { m_publicKeysHasBeenSet = true; m_publicKeys = std::forward<PublicKeysT>(value); }
    template<typename PublicKeysT = Aws::Vector<Aws::String>>
    CreateDevEndpointRequest& WithPublicKeys(PublicKeysT&& value) { SetPublicKeys(std::forward<PublicKeysT>(value)); return *this;}
    template<typename PublicKeysT = Aws::String>
    CreateDevEndpointRequest& AddPublicKeys(PublicKeysT&& value) { m_publicKeysHasBeenSet = true; m_publicKeys.emplace_back(std::forward<PublicKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of Glue Data Processing Units (DPUs) to allocate to this
     * <code>DevEndpoint</code>.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline CreateDevEndpointRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
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
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline CreateDevEndpointRequest& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    CreateDevEndpointRequest& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p> <p>The maximum number of workers you can define
     * are 299 for <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline CreateDevEndpointRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not yet supported.</p> 
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const { return m_extraPythonLibsS3Path; }
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    void SetExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::forward<ExtraPythonLibsS3PathT>(value); }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    CreateDevEndpointRequest& WithExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { SetExtraPythonLibsS3Path(std::forward<ExtraPythonLibsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetExtraJarsS3Path() const { return m_extraJarsS3Path; }
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }
    template<typename ExtraJarsS3PathT = Aws::String>
    void SetExtraJarsS3Path(ExtraJarsS3PathT&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::forward<ExtraJarsS3PathT>(value); }
    template<typename ExtraJarsS3PathT = Aws::String>
    CreateDevEndpointRequest& WithExtraJarsS3Path(ExtraJarsS3PathT&& value) { SetExtraJarsS3Path(std::forward<ExtraJarsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    CreateDevEndpointRequest& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to use with this DevEndpoint. You may use tags to limit access to
     * the DevEndpoint. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDevEndpointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDevEndpointRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    CreateDevEndpointRequest& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
    CreateDevEndpointRequest& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
      m_argumentsHasBeenSet = true; m_arguments.emplace(std::forward<ArgumentsKeyT>(key), std::forward<ArgumentsValueT>(value)); return *this;
    }
    ///@}
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

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers{0};
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
