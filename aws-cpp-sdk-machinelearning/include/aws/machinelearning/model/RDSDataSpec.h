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
#include <aws/machinelearning/model/RDSDatabase.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RDSDatabaseCredentials.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>The data specification of an Amazon Relational Database Service (Amazon RDS)
   * <code>DataSource</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RDSDataSpec">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API RDSDataSpec
  {
  public:
    RDSDataSpec();
    RDSDataSpec(Aws::Utils::Json::JsonView jsonValue);
    RDSDataSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the <code>DatabaseName</code> and <code>InstanceIdentifier</code>
     * of an Amazon RDS database.</p>
     */
    inline const RDSDatabase& GetDatabaseInformation() const{ return m_databaseInformation; }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>InstanceIdentifier</code>
     * of an Amazon RDS database.</p>
     */
    inline bool DatabaseInformationHasBeenSet() const { return m_databaseInformationHasBeenSet; }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>InstanceIdentifier</code>
     * of an Amazon RDS database.</p>
     */
    inline void SetDatabaseInformation(const RDSDatabase& value) { m_databaseInformationHasBeenSet = true; m_databaseInformation = value; }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>InstanceIdentifier</code>
     * of an Amazon RDS database.</p>
     */
    inline void SetDatabaseInformation(RDSDatabase&& value) { m_databaseInformationHasBeenSet = true; m_databaseInformation = std::move(value); }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>InstanceIdentifier</code>
     * of an Amazon RDS database.</p>
     */
    inline RDSDataSpec& WithDatabaseInformation(const RDSDatabase& value) { SetDatabaseInformation(value); return *this;}

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>InstanceIdentifier</code>
     * of an Amazon RDS database.</p>
     */
    inline RDSDataSpec& WithDatabaseInformation(RDSDatabase&& value) { SetDatabaseInformation(std::move(value)); return *this;}


    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetSelectSqlQuery() const{ return m_selectSqlQuery; }

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline void SetSelectSqlQuery(const Aws::String& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = value; }

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline void SetSelectSqlQuery(Aws::String&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::move(value); }

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline void SetSelectSqlQuery(const char* value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery.assign(value); }

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline RDSDataSpec& WithSelectSqlQuery(const Aws::String& value) { SetSelectSqlQuery(value); return *this;}

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline RDSDataSpec& WithSelectSqlQuery(Aws::String&& value) { SetSelectSqlQuery(std::move(value)); return *this;}

    /**
     * <p>The query that is used to retrieve the observation data for the
     * <code>DataSource</code>.</p>
     */
    inline RDSDataSpec& WithSelectSqlQuery(const char* value) { SetSelectSqlQuery(value); return *this;}


    /**
     * <p>The AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon RDS database.</p>
     */
    inline const RDSDatabaseCredentials& GetDatabaseCredentials() const{ return m_databaseCredentials; }

    /**
     * <p>The AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon RDS database.</p>
     */
    inline bool DatabaseCredentialsHasBeenSet() const { return m_databaseCredentialsHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon RDS database.</p>
     */
    inline void SetDatabaseCredentials(const RDSDatabaseCredentials& value) { m_databaseCredentialsHasBeenSet = true; m_databaseCredentials = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon RDS database.</p>
     */
    inline void SetDatabaseCredentials(RDSDatabaseCredentials&& value) { m_databaseCredentialsHasBeenSet = true; m_databaseCredentials = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon RDS database.</p>
     */
    inline RDSDataSpec& WithDatabaseCredentials(const RDSDatabaseCredentials& value) { SetDatabaseCredentials(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon RDS database.</p>
     */
    inline RDSDataSpec& WithDatabaseCredentials(RDSDatabaseCredentials&& value) { SetDatabaseCredentials(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline const Aws::String& GetS3StagingLocation() const{ return m_s3StagingLocation; }

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline bool S3StagingLocationHasBeenSet() const { return m_s3StagingLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline void SetS3StagingLocation(const Aws::String& value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation = value; }

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline void SetS3StagingLocation(Aws::String&& value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline void SetS3StagingLocation(const char* value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation.assign(value); }

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline RDSDataSpec& WithS3StagingLocation(const Aws::String& value) { SetS3StagingLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline RDSDataSpec& WithS3StagingLocation(Aws::String&& value) { SetS3StagingLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location for staging Amazon RDS data. The data retrieved from
     * Amazon RDS using <code>SelectSqlQuery</code> is stored in this location.</p>
     */
    inline RDSDataSpec& WithS3StagingLocation(const char* value) { SetS3StagingLocation(value); return *this;}


    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline const Aws::String& GetDataRearrangement() const{ return m_dataRearrangement; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline bool DataRearrangementHasBeenSet() const { return m_dataRearrangementHasBeenSet; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline void SetDataRearrangement(const Aws::String& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = value; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline void SetDataRearrangement(Aws::String&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = std::move(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline void SetDataRearrangement(const char* value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement.assign(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline RDSDataSpec& WithDataRearrangement(const Aws::String& value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline RDSDataSpec& WithDataRearrangement(Aws::String&& value) { SetDataRearrangement(std::move(value)); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline RDSDataSpec& WithDataRearrangement(const char* value) { SetDataRearrangement(value); return *this;}


    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline const Aws::String& GetDataSchema() const{ return m_dataSchema; }

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline bool DataSchemaHasBeenSet() const { return m_dataSchemaHasBeenSet; }

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline void SetDataSchema(const Aws::String& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = value; }

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline void SetDataSchema(Aws::String&& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = std::move(value); }

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline void SetDataSchema(const char* value) { m_dataSchemaHasBeenSet = true; m_dataSchema.assign(value); }

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline RDSDataSpec& WithDataSchema(const Aws::String& value) { SetDataSchema(value); return *this;}

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline RDSDataSpec& WithDataSchema(Aws::String&& value) { SetDataSchema(std::move(value)); return *this;}

    /**
     * <p>A JSON string that represents the schema for an Amazon RDS
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code></p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p> <?oxy_insert_end>
     */
    inline RDSDataSpec& WithDataSchema(const char* value) { SetDataSchema(value); return *this;}


    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline const Aws::String& GetDataSchemaUri() const{ return m_dataSchemaUri; }

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline bool DataSchemaUriHasBeenSet() const { return m_dataSchemaUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline void SetDataSchemaUri(const Aws::String& value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri = value; }

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline void SetDataSchemaUri(Aws::String&& value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline void SetDataSchemaUri(const char* value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri.assign(value); }

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline RDSDataSpec& WithDataSchemaUri(const Aws::String& value) { SetDataSchemaUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline RDSDataSpec& WithDataSchemaUri(Aws::String&& value) { SetDataSchemaUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the <code>DataSchema</code>. </p>
     */
    inline RDSDataSpec& WithDataSchemaUri(const char* value) { SetDataSchemaUri(value); return *this;}


    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSDataSpec& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSDataSpec& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon Elastic
     * Compute Cloud (Amazon EC2) instance to carry out the copy operation from Amazon
     * RDS to an Amazon S3 task. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSDataSpec& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}


    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSDataSpec& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSDataSpec& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by AWS Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSDataSpec& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline RDSDataSpec& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline RDSDataSpec& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID to be used to access a VPC-based RDS DB instance. This
     * attribute is used by Data Pipeline to carry out the copy task from Amazon RDS to
     * Amazon S3.</p>
     */
    inline RDSDataSpec& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline RDSDataSpec& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline RDSDataSpec& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline RDSDataSpec& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline RDSDataSpec& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs to be used to access a VPC-based RDS DB instance.
     * Ensure that there are appropriate ingress rules set up to allow access to the
     * RDS DB instance. This attribute is used by Data Pipeline to carry out the copy
     * operation from Amazon RDS to an Amazon S3 task.</p>
     */
    inline RDSDataSpec& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    RDSDatabase m_databaseInformation;
    bool m_databaseInformationHasBeenSet;

    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet;

    RDSDatabaseCredentials m_databaseCredentials;
    bool m_databaseCredentialsHasBeenSet;

    Aws::String m_s3StagingLocation;
    bool m_s3StagingLocationHasBeenSet;

    Aws::String m_dataRearrangement;
    bool m_dataRearrangementHasBeenSet;

    Aws::String m_dataSchema;
    bool m_dataSchemaHasBeenSet;

    Aws::String m_dataSchemaUri;
    bool m_dataSchemaUriHasBeenSet;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
