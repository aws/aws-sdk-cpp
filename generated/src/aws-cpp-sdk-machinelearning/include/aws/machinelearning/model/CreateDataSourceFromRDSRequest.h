/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RDSDataSpec.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class CreateDataSourceFromRDSRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API CreateDataSourceFromRDSRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSourceFromRDS"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    CreateDataSourceFromRDSRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    CreateDataSourceFromRDSRequest& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li> <p>DatabaseInformation -</p> <ul> <li> <p> <code>DatabaseName</code> - The
     * name of the Amazon RDS database.</p> </li> <li> <p> <code>InstanceIdentifier
     * </code> - A unique identifier for the Amazon RDS database instance.</p> </li>
     * </ul> </li> <li> <p>DatabaseCredentials - AWS Identity and Access Management
     * (IAM) credentials that are used to connect to the Amazon RDS database.</p> </li>
     * <li> <p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an
     * EC2 instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="https://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p> </li> <li> <p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p> </li> <li> <p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p> </li> <li> <p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p> </li> <li> <p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p> </li> <li>
     * <p>DataSchemaUri - The Amazon S3 location of the <code>DataSchema</code>.</p>
     * </li> <li> <p>DataSchema - A JSON string representing the schema. This is not
     * required if <code>DataSchemaUri</code> is specified. </p> </li> <li>
     * <p>DataRearrangement - A JSON string that represents the splitting and
     * rearrangement requirements for the <code>Datasource</code>. </p> <p> Sample -
     * <code> "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p>
     * </li> </ul>
     */
    inline const RDSDataSpec& GetRDSData() const { return m_rDSData; }
    inline bool RDSDataHasBeenSet() const { return m_rDSDataHasBeenSet; }
    template<typename RDSDataT = RDSDataSpec>
    void SetRDSData(RDSDataT&& value) { m_rDSDataHasBeenSet = true; m_rDSData = std::forward<RDSDataT>(value); }
    template<typename RDSDataT = RDSDataSpec>
    CreateDataSourceFromRDSRequest& WithRDSData(RDSDataT&& value) { SetRDSData(std::forward<RDSDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p/>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    CreateDataSourceFromRDSRequest& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the <code/>DataSource<code/>
     * needs to be used for <code>MLModel</code> training. </p>
     */
    inline bool GetComputeStatistics() const { return m_computeStatistics; }
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }
    inline CreateDataSourceFromRDSRequest& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    RDSDataSpec m_rDSData;
    bool m_rDSDataHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    bool m_computeStatistics{false};
    bool m_computeStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
