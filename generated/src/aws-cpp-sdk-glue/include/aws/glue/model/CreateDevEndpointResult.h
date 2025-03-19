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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class CreateDevEndpointResult
  {
  public:
    AWS_GLUE_API CreateDevEndpointResult() = default;
    AWS_GLUE_API CreateDevEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateDevEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    CreateDevEndpointResult& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CreateDevEndpointResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateDevEndpointResult& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateDevEndpointResult& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ID assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateDevEndpointResult& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role assigned to the new
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateDevEndpointResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the YARN endpoint used by this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetYarnEndpointAddress() const { return m_yarnEndpointAddress; }
    template<typename YarnEndpointAddressT = Aws::String>
    void SetYarnEndpointAddress(YarnEndpointAddressT&& value) { m_yarnEndpointAddressHasBeenSet = true; m_yarnEndpointAddress = std::forward<YarnEndpointAddressT>(value); }
    template<typename YarnEndpointAddressT = Aws::String>
    CreateDevEndpointResult& WithYarnEndpointAddress(YarnEndpointAddressT&& value) { SetYarnEndpointAddress(std::forward<YarnEndpointAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline int GetZeppelinRemoteSparkInterpreterPort() const { return m_zeppelinRemoteSparkInterpreterPort; }
    inline void SetZeppelinRemoteSparkInterpreterPort(int value) { m_zeppelinRemoteSparkInterpreterPortHasBeenSet = true; m_zeppelinRemoteSparkInterpreterPort = value; }
    inline CreateDevEndpointResult& WithZeppelinRemoteSparkInterpreterPort(int value) { SetZeppelinRemoteSparkInterpreterPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * DevEndpoint.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline CreateDevEndpointResult& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * May be a value of Standard, G.1X, or G.2X.</p>
     */
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline CreateDevEndpointResult& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for running your
     * ETL scripts on development endpoints. </p> <p>For more information about the
     * available Glue versions and corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p>
     */
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    CreateDevEndpointResult& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline CreateDevEndpointResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateDevEndpointResult& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateDevEndpointResult& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paths to one or more Python libraries in an S3 bucket that will be loaded
     * in your <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const { return m_extraPythonLibsS3Path; }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    void SetExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::forward<ExtraPythonLibsS3PathT>(value); }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    CreateDevEndpointResult& WithExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { SetExtraPythonLibsS3Path(std::forward<ExtraPythonLibsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to one or more Java <code>.jar</code> files in an S3 bucket that will be
     * loaded in your <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetExtraJarsS3Path() const { return m_extraJarsS3Path; }
    template<typename ExtraJarsS3PathT = Aws::String>
    void SetExtraJarsS3Path(ExtraJarsS3PathT&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::forward<ExtraJarsS3PathT>(value); }
    template<typename ExtraJarsS3PathT = Aws::String>
    CreateDevEndpointResult& WithExtraJarsS3Path(ExtraJarsS3PathT&& value) { SetExtraJarsS3Path(std::forward<ExtraJarsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    CreateDevEndpointResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure being used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    CreateDevEndpointResult& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    CreateDevEndpointResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map of arguments used to configure this <code>DevEndpoint</code>.</p>
     * <p>Valid arguments are:</p> <ul> <li> <p> <code>"--enable-glue-datacatalog":
     * ""</code> </p> </li> </ul> <p>You can specify a version of Python support for
     * development endpoints by using the <code>Arguments</code> parameter in the
     * <code>CreateDevEndpoint</code> or <code>UpdateDevEndpoint</code> APIs. If no
     * arguments are provided, the version defaults to Python 2.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const { return m_arguments; }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    CreateDevEndpointResult& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
    CreateDevEndpointResult& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
      m_argumentsHasBeenSet = true; m_arguments.emplace(std::forward<ArgumentsKeyT>(key), std::forward<ArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDevEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_yarnEndpointAddress;
    bool m_yarnEndpointAddressHasBeenSet = false;

    int m_zeppelinRemoteSparkInterpreterPort{0};
    bool m_zeppelinRemoteSparkInterpreterPortHasBeenSet = false;

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

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

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
