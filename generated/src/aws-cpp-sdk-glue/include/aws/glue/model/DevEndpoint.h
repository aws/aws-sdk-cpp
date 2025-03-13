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
    AWS_GLUE_API DevEndpoint() = default;
    AWS_GLUE_API DevEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DevEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    DevEndpoint& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DevEndpoint& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security group identifiers used in this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    DevEndpoint& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    DevEndpoint& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ID for this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    DevEndpoint& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The YARN endpoint address used by this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetYarnEndpointAddress() const { return m_yarnEndpointAddress; }
    inline bool YarnEndpointAddressHasBeenSet() const { return m_yarnEndpointAddressHasBeenSet; }
    template<typename YarnEndpointAddressT = Aws::String>
    void SetYarnEndpointAddress(YarnEndpointAddressT&& value) { m_yarnEndpointAddressHasBeenSet = true; m_yarnEndpointAddress = std::forward<YarnEndpointAddressT>(value); }
    template<typename YarnEndpointAddressT = Aws::String>
    DevEndpoint& WithYarnEndpointAddress(YarnEndpointAddressT&& value) { SetYarnEndpointAddress(std::forward<YarnEndpointAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A private IP address to access the <code>DevEndpoint</code> within a VPC if
     * the <code>DevEndpoint</code> is created within one. The
     * <code>PrivateAddress</code> field is present only when you create the
     * <code>DevEndpoint</code> within your VPC.</p>
     */
    inline const Aws::String& GetPrivateAddress() const { return m_privateAddress; }
    inline bool PrivateAddressHasBeenSet() const { return m_privateAddressHasBeenSet; }
    template<typename PrivateAddressT = Aws::String>
    void SetPrivateAddress(PrivateAddressT&& value) { m_privateAddressHasBeenSet = true; m_privateAddress = std::forward<PrivateAddressT>(value); }
    template<typename PrivateAddressT = Aws::String>
    DevEndpoint& WithPrivateAddress(PrivateAddressT&& value) { SetPrivateAddress(std::forward<PrivateAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline int GetZeppelinRemoteSparkInterpreterPort() const { return m_zeppelinRemoteSparkInterpreterPort; }
    inline bool ZeppelinRemoteSparkInterpreterPortHasBeenSet() const { return m_zeppelinRemoteSparkInterpreterPortHasBeenSet; }
    inline void SetZeppelinRemoteSparkInterpreterPort(int value) { m_zeppelinRemoteSparkInterpreterPortHasBeenSet = true; m_zeppelinRemoteSparkInterpreterPort = value; }
    inline DevEndpoint& WithZeppelinRemoteSparkInterpreterPort(int value) { SetZeppelinRemoteSparkInterpreterPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address used by this <code>DevEndpoint</code>. The
     * <code>PublicAddress</code> field is present only when you create a non-virtual
     * private cloud (VPC) <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetPublicAddress() const { return m_publicAddress; }
    inline bool PublicAddressHasBeenSet() const { return m_publicAddressHasBeenSet; }
    template<typename PublicAddressT = Aws::String>
    void SetPublicAddress(PublicAddressT&& value) { m_publicAddressHasBeenSet = true; m_publicAddress = std::forward<PublicAddressT>(value); }
    template<typename PublicAddressT = Aws::String>
    DevEndpoint& WithPublicAddress(PublicAddressT&& value) { SetPublicAddress(std::forward<PublicAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DevEndpoint& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    inline DevEndpoint& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
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
    DevEndpoint& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
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
    inline DevEndpoint& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * <code>DevEndpoint</code>.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline DevEndpoint& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DevEndpoint& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DevEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paths to one or more Python libraries in an Amazon S3 bucket that should
     * be loaded in your <code>DevEndpoint</code>. Multiple values must be complete
     * paths separated by a comma.</p>  <p>You can only use pure Python libraries
     * with a <code>DevEndpoint</code>. Libraries that rely on C extensions, such as
     * the <a href="http://pandas.pydata.org/">pandas</a> Python data analysis library,
     * are not currently supported.</p> 
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const { return m_extraPythonLibsS3Path; }
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    void SetExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::forward<ExtraPythonLibsS3PathT>(value); }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    DevEndpoint& WithExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { SetExtraPythonLibsS3Path(std::forward<ExtraPythonLibsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline const Aws::String& GetExtraJarsS3Path() const { return m_extraJarsS3Path; }
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }
    template<typename ExtraJarsS3PathT = Aws::String>
    void SetExtraJarsS3Path(ExtraJarsS3PathT&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::forward<ExtraJarsS3PathT>(value); }
    template<typename ExtraJarsS3PathT = Aws::String>
    DevEndpoint& WithExtraJarsS3Path(ExtraJarsS3PathT&& value) { SetExtraJarsS3Path(std::forward<ExtraJarsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DevEndpoint& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last update.</p>
     */
    inline const Aws::String& GetLastUpdateStatus() const { return m_lastUpdateStatus; }
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }
    template<typename LastUpdateStatusT = Aws::String>
    void SetLastUpdateStatus(LastUpdateStatusT&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::forward<LastUpdateStatusT>(value); }
    template<typename LastUpdateStatusT = Aws::String>
    DevEndpoint& WithLastUpdateStatus(LastUpdateStatusT&& value) { SetLastUpdateStatus(std::forward<LastUpdateStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point in time at which this DevEndpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DevEndpoint& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    DevEndpoint& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
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
    DevEndpoint& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetPublicKeys() const { return m_publicKeys; }
    inline bool PublicKeysHasBeenSet() const { return m_publicKeysHasBeenSet; }
    template<typename PublicKeysT = Aws::Vector<Aws::String>>
    void SetPublicKeys(PublicKeysT&& value) { m_publicKeysHasBeenSet = true; m_publicKeys = std::forward<PublicKeysT>(value); }
    template<typename PublicKeysT = Aws::Vector<Aws::String>>
    DevEndpoint& WithPublicKeys(PublicKeysT&& value) { SetPublicKeys(std::forward<PublicKeysT>(value)); return *this;}
    template<typename PublicKeysT = Aws::String>
    DevEndpoint& AddPublicKeys(PublicKeysT&& value) { m_publicKeysHasBeenSet = true; m_publicKeys.emplace_back(std::forward<PublicKeysT>(value)); return *this; }
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
    DevEndpoint& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of arguments used to configure the <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    DevEndpoint& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
    DevEndpoint& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
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

    Aws::String m_yarnEndpointAddress;
    bool m_yarnEndpointAddressHasBeenSet = false;

    Aws::String m_privateAddress;
    bool m_privateAddressHasBeenSet = false;

    int m_zeppelinRemoteSparkInterpreterPort{0};
    bool m_zeppelinRemoteSparkInterpreterPortHasBeenSet = false;

    Aws::String m_publicAddress;
    bool m_publicAddressHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    int m_numberOfNodes{0};
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

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
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
