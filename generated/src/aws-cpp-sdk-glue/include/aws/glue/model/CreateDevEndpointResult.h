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
    AWS_GLUE_API CreateDevEndpointResult();
    AWS_GLUE_API CreateDevEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateDevEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }
    inline CreateDevEndpointResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline CreateDevEndpointResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline CreateDevEndpointResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CreateDevEndpointResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline CreateDevEndpointResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateDevEndpointResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateDevEndpointResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline CreateDevEndpointResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateDevEndpointResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ID assigned to the new <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }
    inline CreateDevEndpointResult& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline CreateDevEndpointResult& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role assigned to the new
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline CreateDevEndpointResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateDevEndpointResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the YARN endpoint used by this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetYarnEndpointAddress() const{ return m_yarnEndpointAddress; }
    inline void SetYarnEndpointAddress(const Aws::String& value) { m_yarnEndpointAddress = value; }
    inline void SetYarnEndpointAddress(Aws::String&& value) { m_yarnEndpointAddress = std::move(value); }
    inline void SetYarnEndpointAddress(const char* value) { m_yarnEndpointAddress.assign(value); }
    inline CreateDevEndpointResult& WithYarnEndpointAddress(const Aws::String& value) { SetYarnEndpointAddress(value); return *this;}
    inline CreateDevEndpointResult& WithYarnEndpointAddress(Aws::String&& value) { SetYarnEndpointAddress(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithYarnEndpointAddress(const char* value) { SetYarnEndpointAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Zeppelin port for the remote Apache Spark interpreter.</p>
     */
    inline int GetZeppelinRemoteSparkInterpreterPort() const{ return m_zeppelinRemoteSparkInterpreterPort; }
    inline void SetZeppelinRemoteSparkInterpreterPort(int value) { m_zeppelinRemoteSparkInterpreterPort = value; }
    inline CreateDevEndpointResult& WithZeppelinRemoteSparkInterpreterPort(int value) { SetZeppelinRemoteSparkInterpreterPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue Data Processing Units (DPUs) allocated to this
     * DevEndpoint.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodes = value; }
    inline CreateDevEndpointResult& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated to the development endpoint.
     * May be a value of Standard, G.1X, or G.2X.</p>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }
    inline void SetWorkerType(const WorkerType& value) { m_workerType = value; }
    inline void SetWorkerType(WorkerType&& value) { m_workerType = std::move(value); }
    inline CreateDevEndpointResult& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}
    inline CreateDevEndpointResult& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}
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
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersion = value; }
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersion = std::move(value); }
    inline void SetGlueVersion(const char* value) { m_glueVersion.assign(value); }
    inline CreateDevEndpointResult& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}
    inline CreateDevEndpointResult& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * to the development endpoint.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkers = value; }
    inline CreateDevEndpointResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Availability Zone where this <code>DevEndpoint</code>
     * is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }
    inline CreateDevEndpointResult& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateDevEndpointResult& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC) used by this
     * <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline CreateDevEndpointResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateDevEndpointResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paths to one or more Python libraries in an S3 bucket that will be loaded
     * in your <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const{ return m_extraPythonLibsS3Path; }
    inline void SetExtraPythonLibsS3Path(const Aws::String& value) { m_extraPythonLibsS3Path = value; }
    inline void SetExtraPythonLibsS3Path(Aws::String&& value) { m_extraPythonLibsS3Path = std::move(value); }
    inline void SetExtraPythonLibsS3Path(const char* value) { m_extraPythonLibsS3Path.assign(value); }
    inline CreateDevEndpointResult& WithExtraPythonLibsS3Path(const Aws::String& value) { SetExtraPythonLibsS3Path(value); return *this;}
    inline CreateDevEndpointResult& WithExtraPythonLibsS3Path(Aws::String&& value) { SetExtraPythonLibsS3Path(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithExtraPythonLibsS3Path(const char* value) { SetExtraPythonLibsS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to one or more Java <code>.jar</code> files in an S3 bucket that will be
     * loaded in your <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetExtraJarsS3Path() const{ return m_extraJarsS3Path; }
    inline void SetExtraJarsS3Path(const Aws::String& value) { m_extraJarsS3Path = value; }
    inline void SetExtraJarsS3Path(Aws::String&& value) { m_extraJarsS3Path = std::move(value); }
    inline void SetExtraJarsS3Path(const char* value) { m_extraJarsS3Path.assign(value); }
    inline CreateDevEndpointResult& WithExtraJarsS3Path(const Aws::String& value) { SetExtraJarsS3Path(value); return *this;}
    inline CreateDevEndpointResult& WithExtraJarsS3Path(Aws::String&& value) { SetExtraJarsS3Path(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithExtraJarsS3Path(const char* value) { SetExtraJarsS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for a current failure in this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline CreateDevEndpointResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline CreateDevEndpointResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure being used with
     * this <code>DevEndpoint</code>.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfiguration.assign(value); }
    inline CreateDevEndpointResult& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline CreateDevEndpointResult& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point in time at which this <code>DevEndpoint</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline CreateDevEndpointResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline CreateDevEndpointResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_arguments = value; }
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_arguments = std::move(value); }
    inline CreateDevEndpointResult& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}
    inline CreateDevEndpointResult& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}
    inline CreateDevEndpointResult& AddArguments(const Aws::String& key, const Aws::String& value) { m_arguments.emplace(key, value); return *this; }
    inline CreateDevEndpointResult& AddArguments(Aws::String&& key, const Aws::String& value) { m_arguments.emplace(std::move(key), value); return *this; }
    inline CreateDevEndpointResult& AddArguments(const Aws::String& key, Aws::String&& value) { m_arguments.emplace(key, std::move(value)); return *this; }
    inline CreateDevEndpointResult& AddArguments(Aws::String&& key, Aws::String&& value) { m_arguments.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDevEndpointResult& AddArguments(const char* key, Aws::String&& value) { m_arguments.emplace(key, std::move(value)); return *this; }
    inline CreateDevEndpointResult& AddArguments(Aws::String&& key, const char* value) { m_arguments.emplace(std::move(key), value); return *this; }
    inline CreateDevEndpointResult& AddArguments(const char* key, const char* value) { m_arguments.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDevEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDevEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDevEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;

    Aws::String m_status;

    Aws::Vector<Aws::String> m_securityGroupIds;

    Aws::String m_subnetId;

    Aws::String m_roleArn;

    Aws::String m_yarnEndpointAddress;

    int m_zeppelinRemoteSparkInterpreterPort;

    int m_numberOfNodes;

    WorkerType m_workerType;

    Aws::String m_glueVersion;

    int m_numberOfWorkers;

    Aws::String m_availabilityZone;

    Aws::String m_vpcId;

    Aws::String m_extraPythonLibsS3Path;

    Aws::String m_extraJarsS3Path;

    Aws::String m_failureReason;

    Aws::String m_securityConfiguration;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Map<Aws::String, Aws::String> m_arguments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
