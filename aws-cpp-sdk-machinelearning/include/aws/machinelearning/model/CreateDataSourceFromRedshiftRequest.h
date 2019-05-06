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
#include <aws/machinelearning/model/RedshiftDataSpec.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API CreateDataSourceFromRedshiftRequest : public MachineLearningRequest
  {
  public:
    CreateDataSourceFromRedshiftRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSourceFromRedshift"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The data specification of an Amazon Redshift <code>DataSource</code>:</p>
     * <ul> <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name
     * of the Amazon Redshift database. </li> <li> <code> ClusterIdentifier</code> -
     * The unique ID for the Amazon Redshift cluster.</li> </ul></p></li>
     * <li><p>DatabaseCredentials - The AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon Redshift database.</p></li>
     * <li><p>SelectSqlQuery - The query that is used to retrieve the observation data
     * for the <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon
     * Simple Storage Service (Amazon S3) location for staging Amazon Redshift data.
     * The data retrieved from Amazon Redshift using the <code>SelectSqlQuery</code>
     * query is stored in this location.</p></li> <li><p>DataSchemaUri - The Amazon S3
     * location of the <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON
     * string representing the schema. This is not required if
     * <code>DataSchemaUri</code> is specified. </p></li> <li> <p>DataRearrangement - A
     * JSON string that represents the splitting and rearrangement requirements for the
     * <code>DataSource</code>.</p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline const RedshiftDataSpec& GetDataSpec() const{ return m_dataSpec; }

    /**
     * <p>The data specification of an Amazon Redshift <code>DataSource</code>:</p>
     * <ul> <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name
     * of the Amazon Redshift database. </li> <li> <code> ClusterIdentifier</code> -
     * The unique ID for the Amazon Redshift cluster.</li> </ul></p></li>
     * <li><p>DatabaseCredentials - The AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon Redshift database.</p></li>
     * <li><p>SelectSqlQuery - The query that is used to retrieve the observation data
     * for the <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon
     * Simple Storage Service (Amazon S3) location for staging Amazon Redshift data.
     * The data retrieved from Amazon Redshift using the <code>SelectSqlQuery</code>
     * query is stored in this location.</p></li> <li><p>DataSchemaUri - The Amazon S3
     * location of the <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON
     * string representing the schema. This is not required if
     * <code>DataSchemaUri</code> is specified. </p></li> <li> <p>DataRearrangement - A
     * JSON string that represents the splitting and rearrangement requirements for the
     * <code>DataSource</code>.</p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline bool DataSpecHasBeenSet() const { return m_dataSpecHasBeenSet; }

    /**
     * <p>The data specification of an Amazon Redshift <code>DataSource</code>:</p>
     * <ul> <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name
     * of the Amazon Redshift database. </li> <li> <code> ClusterIdentifier</code> -
     * The unique ID for the Amazon Redshift cluster.</li> </ul></p></li>
     * <li><p>DatabaseCredentials - The AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon Redshift database.</p></li>
     * <li><p>SelectSqlQuery - The query that is used to retrieve the observation data
     * for the <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon
     * Simple Storage Service (Amazon S3) location for staging Amazon Redshift data.
     * The data retrieved from Amazon Redshift using the <code>SelectSqlQuery</code>
     * query is stored in this location.</p></li> <li><p>DataSchemaUri - The Amazon S3
     * location of the <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON
     * string representing the schema. This is not required if
     * <code>DataSchemaUri</code> is specified. </p></li> <li> <p>DataRearrangement - A
     * JSON string that represents the splitting and rearrangement requirements for the
     * <code>DataSource</code>.</p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline void SetDataSpec(const RedshiftDataSpec& value) { m_dataSpecHasBeenSet = true; m_dataSpec = value; }

    /**
     * <p>The data specification of an Amazon Redshift <code>DataSource</code>:</p>
     * <ul> <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name
     * of the Amazon Redshift database. </li> <li> <code> ClusterIdentifier</code> -
     * The unique ID for the Amazon Redshift cluster.</li> </ul></p></li>
     * <li><p>DatabaseCredentials - The AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon Redshift database.</p></li>
     * <li><p>SelectSqlQuery - The query that is used to retrieve the observation data
     * for the <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon
     * Simple Storage Service (Amazon S3) location for staging Amazon Redshift data.
     * The data retrieved from Amazon Redshift using the <code>SelectSqlQuery</code>
     * query is stored in this location.</p></li> <li><p>DataSchemaUri - The Amazon S3
     * location of the <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON
     * string representing the schema. This is not required if
     * <code>DataSchemaUri</code> is specified. </p></li> <li> <p>DataRearrangement - A
     * JSON string that represents the splitting and rearrangement requirements for the
     * <code>DataSource</code>.</p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline void SetDataSpec(RedshiftDataSpec&& value) { m_dataSpecHasBeenSet = true; m_dataSpec = std::move(value); }

    /**
     * <p>The data specification of an Amazon Redshift <code>DataSource</code>:</p>
     * <ul> <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name
     * of the Amazon Redshift database. </li> <li> <code> ClusterIdentifier</code> -
     * The unique ID for the Amazon Redshift cluster.</li> </ul></p></li>
     * <li><p>DatabaseCredentials - The AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon Redshift database.</p></li>
     * <li><p>SelectSqlQuery - The query that is used to retrieve the observation data
     * for the <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon
     * Simple Storage Service (Amazon S3) location for staging Amazon Redshift data.
     * The data retrieved from Amazon Redshift using the <code>SelectSqlQuery</code>
     * query is stored in this location.</p></li> <li><p>DataSchemaUri - The Amazon S3
     * location of the <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON
     * string representing the schema. This is not required if
     * <code>DataSchemaUri</code> is specified. </p></li> <li> <p>DataRearrangement - A
     * JSON string that represents the splitting and rearrangement requirements for the
     * <code>DataSource</code>.</p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSpec(const RedshiftDataSpec& value) { SetDataSpec(value); return *this;}

    /**
     * <p>The data specification of an Amazon Redshift <code>DataSource</code>:</p>
     * <ul> <li><p>DatabaseInformation - <ul> <li> <code>DatabaseName</code> - The name
     * of the Amazon Redshift database. </li> <li> <code> ClusterIdentifier</code> -
     * The unique ID for the Amazon Redshift cluster.</li> </ul></p></li>
     * <li><p>DatabaseCredentials - The AWS Identity and Access Management (IAM)
     * credentials that are used to connect to the Amazon Redshift database.</p></li>
     * <li><p>SelectSqlQuery - The query that is used to retrieve the observation data
     * for the <code>Datasource</code>.</p></li> <li><p>S3StagingLocation - The Amazon
     * Simple Storage Service (Amazon S3) location for staging Amazon Redshift data.
     * The data retrieved from Amazon Redshift using the <code>SelectSqlQuery</code>
     * query is stored in this location.</p></li> <li><p>DataSchemaUri - The Amazon S3
     * location of the <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON
     * string representing the schema. This is not required if
     * <code>DataSchemaUri</code> is specified. </p></li> <li> <p>DataRearrangement - A
     * JSON string that represents the splitting and rearrangement requirements for the
     * <code>DataSource</code>.</p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline CreateDataSourceFromRedshiftRequest& WithDataSpec(RedshiftDataSpec&& value) { SetDataSpec(std::move(value)); return *this;}


    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>A fully specified role Amazon Resource Name (ARN). Amazon ML assumes the role
     * on behalf of the user to create the following: </p> <p> <ul> <li><p>A security
     * group to allow Amazon ML to execute the <code>SelectSqlQuery</code> query on an
     * Amazon Redshift cluster</p></li> <li><p>An Amazon S3 bucket policy to grant
     * Amazon ML read/write permissions on the <code>S3StagingLocation</code></p></li>
     * </ul> </p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the <code>DataSource</code>
     * needs to be used for <code>MLModel</code> training.</p>
     */
    inline bool GetComputeStatistics() const{ return m_computeStatistics; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the <code>DataSource</code>
     * needs to be used for <code>MLModel</code> training.</p>
     */
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the <code>DataSource</code>
     * needs to be used for <code>MLModel</code> training.</p>
     */
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the <code>DataSource</code>
     * needs to be used for <code>MLModel</code> training.</p>
     */
    inline CreateDataSourceFromRedshiftRequest& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet;

    RedshiftDataSpec m_dataSpec;
    bool m_dataSpecHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    bool m_computeStatistics;
    bool m_computeStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
