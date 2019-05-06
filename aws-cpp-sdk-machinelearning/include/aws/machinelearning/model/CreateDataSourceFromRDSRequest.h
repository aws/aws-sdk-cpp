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
  class AWS_MACHINELEARNING_API CreateDataSourceFromRDSRequest : public MachineLearningRequest
  {
  public:
    CreateDataSourceFromRDSRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSourceFromRDS"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRDSRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRDSRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.
     * Typically, an Amazon Resource Number (ARN) becomes the ID for a
     * <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRDSRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRDSRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRDSRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRDSRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name of
     * the Amazon RDS database.</li> <li> <code>InstanceIdentifier </code> - A unique
     * identifier for the Amazon RDS database instance.</li> </ul> </p></li>
     * <li><p>DatabaseCredentials - AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon RDS database.</p></li>
     * <li><p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an EC2
     * instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p></li> <li><p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p></li>
     * <li><p>DataSchemaUri - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <br> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline const RDSDataSpec& GetRDSData() const{ return m_rDSData; }

    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name of
     * the Amazon RDS database.</li> <li> <code>InstanceIdentifier </code> - A unique
     * identifier for the Amazon RDS database instance.</li> </ul> </p></li>
     * <li><p>DatabaseCredentials - AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon RDS database.</p></li>
     * <li><p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an EC2
     * instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p></li> <li><p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p></li>
     * <li><p>DataSchemaUri - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <br> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline bool RDSDataHasBeenSet() const { return m_rDSDataHasBeenSet; }

    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name of
     * the Amazon RDS database.</li> <li> <code>InstanceIdentifier </code> - A unique
     * identifier for the Amazon RDS database instance.</li> </ul> </p></li>
     * <li><p>DatabaseCredentials - AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon RDS database.</p></li>
     * <li><p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an EC2
     * instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p></li> <li><p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p></li>
     * <li><p>DataSchemaUri - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <br> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline void SetRDSData(const RDSDataSpec& value) { m_rDSDataHasBeenSet = true; m_rDSData = value; }

    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name of
     * the Amazon RDS database.</li> <li> <code>InstanceIdentifier </code> - A unique
     * identifier for the Amazon RDS database instance.</li> </ul> </p></li>
     * <li><p>DatabaseCredentials - AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon RDS database.</p></li>
     * <li><p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an EC2
     * instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p></li> <li><p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p></li>
     * <li><p>DataSchemaUri - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <br> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline void SetRDSData(RDSDataSpec&& value) { m_rDSDataHasBeenSet = true; m_rDSData = std::move(value); }

    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name of
     * the Amazon RDS database.</li> <li> <code>InstanceIdentifier </code> - A unique
     * identifier for the Amazon RDS database instance.</li> </ul> </p></li>
     * <li><p>DatabaseCredentials - AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon RDS database.</p></li>
     * <li><p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an EC2
     * instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p></li> <li><p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p></li>
     * <li><p>DataSchemaUri - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <br> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline CreateDataSourceFromRDSRequest& WithRDSData(const RDSDataSpec& value) { SetRDSData(value); return *this;}

    /**
     * <p>The data specification of an Amazon RDS <code>DataSource</code>:</p> <ul>
     * <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name of
     * the Amazon RDS database.</li> <li> <code>InstanceIdentifier </code> - A unique
     * identifier for the Amazon RDS database instance.</li> </ul> </p></li>
     * <li><p>DatabaseCredentials - AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon RDS database.</p></li>
     * <li><p>ResourceRole - A role (DataPipelineDefaultResourceRole) assumed by an EC2
     * instance to carry out the copy task from Amazon RDS to Amazon Simple Storage
     * Service (Amazon S3). For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>ServiceRole - A role
     * (DataPipelineDefaultRole) assumed by the AWS Data Pipeline service to monitor
     * the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p></li> <li><p>SecurityInfo - The security
     * information to use to access an RDS DB instance. You need to set up appropriate
     * ingress rules for the security entity IDs provided to allow access to the Amazon
     * RDS instance. Specify a [<code>SubnetId</code>, <code>SecurityGroupIds</code>]
     * pair for a VPC-based RDS DB instance.</p></li> <li><p>SelectSqlQuery - A query
     * that is used to retrieve the observation data for the
     * <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon S3
     * location for staging Amazon RDS data. The data retrieved from Amazon RDS using
     * <code>SelectSqlQuery</code> is stored in this location.</p></li>
     * <li><p>DataSchemaUri - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <br> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline CreateDataSourceFromRDSRequest& WithRDSData(RDSDataSpec&& value) { SetRDSData(std::move(value)); return *this;}


    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline CreateDataSourceFromRDSRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline CreateDataSourceFromRDSRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The role that Amazon ML assumes on behalf of the user to create and activate
     * a data pipeline in the user's account and copy data using the
     * <code>SelectSqlQuery</code> query from Amazon RDS to Amazon S3.</p> <p> </p>
     */
    inline CreateDataSourceFromRDSRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training. </p>
     */
    inline bool GetComputeStatistics() const{ return m_computeStatistics; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training. </p>
     */
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training. </p>
     */
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training. </p>
     */
    inline CreateDataSourceFromRDSRequest& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet;

    RDSDataSpec m_rDSData;
    bool m_rDSDataHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    bool m_computeStatistics;
    bool m_computeStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
