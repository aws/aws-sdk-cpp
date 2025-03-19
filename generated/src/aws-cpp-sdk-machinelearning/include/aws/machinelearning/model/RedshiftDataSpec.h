/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/RedshiftDatabase.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RedshiftDatabaseCredentials.h>
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
   * <p>Describes the data specification of an Amazon Redshift
   * <code>DataSource</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RedshiftDataSpec">AWS
   * API Reference</a></p>
   */
  class RedshiftDataSpec
  {
  public:
    AWS_MACHINELEARNING_API RedshiftDataSpec() = default;
    AWS_MACHINELEARNING_API RedshiftDataSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RedshiftDataSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the <code>DatabaseName</code> and <code>ClusterIdentifier</code>
     * for an Amazon Redshift <code>DataSource</code>.</p>
     */
    inline const RedshiftDatabase& GetDatabaseInformation() const { return m_databaseInformation; }
    inline bool DatabaseInformationHasBeenSet() const { return m_databaseInformationHasBeenSet; }
    template<typename DatabaseInformationT = RedshiftDatabase>
    void SetDatabaseInformation(DatabaseInformationT&& value) { m_databaseInformationHasBeenSet = true; m_databaseInformation = std::forward<DatabaseInformationT>(value); }
    template<typename DatabaseInformationT = RedshiftDatabase>
    RedshiftDataSpec& WithDatabaseInformation(DatabaseInformationT&& value) { SetDatabaseInformation(std::forward<DatabaseInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetSelectSqlQuery() const { return m_selectSqlQuery; }
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }
    template<typename SelectSqlQueryT = Aws::String>
    void SetSelectSqlQuery(SelectSqlQueryT&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::forward<SelectSqlQueryT>(value); }
    template<typename SelectSqlQueryT = Aws::String>
    RedshiftDataSpec& WithSelectSqlQuery(SelectSqlQueryT&& value) { SetSelectSqlQuery(std::forward<SelectSqlQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon Redshift database.</p>
     */
    inline const RedshiftDatabaseCredentials& GetDatabaseCredentials() const { return m_databaseCredentials; }
    inline bool DatabaseCredentialsHasBeenSet() const { return m_databaseCredentialsHasBeenSet; }
    template<typename DatabaseCredentialsT = RedshiftDatabaseCredentials>
    void SetDatabaseCredentials(DatabaseCredentialsT&& value) { m_databaseCredentialsHasBeenSet = true; m_databaseCredentials = std::forward<DatabaseCredentialsT>(value); }
    template<typename DatabaseCredentialsT = RedshiftDatabaseCredentials>
    RedshiftDataSpec& WithDatabaseCredentials(DatabaseCredentialsT&& value) { SetDatabaseCredentials(std::forward<DatabaseCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline const Aws::String& GetS3StagingLocation() const { return m_s3StagingLocation; }
    inline bool S3StagingLocationHasBeenSet() const { return m_s3StagingLocationHasBeenSet; }
    template<typename S3StagingLocationT = Aws::String>
    void SetS3StagingLocation(S3StagingLocationT&& value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation = std::forward<S3StagingLocationT>(value); }
    template<typename S3StagingLocationT = Aws::String>
    RedshiftDataSpec& WithS3StagingLocation(S3StagingLocationT&& value) { SetS3StagingLocation(std::forward<S3StagingLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul> <li> <p> <b>
     * <code>percentBegin</code> </b> </p> <p>Use <code>percentBegin</code> to indicate
     * the beginning of the range of the data used to create the Datasource. If you do
     * not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p> </li> <li> <p> <b>
     * <code>percentEnd</code> </b> </p> <p>Use <code>percentEnd</code> to indicate the
     * end of the range of the data used to create the Datasource. If you do not
     * include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p> </li> <li> <p> <b>
     * <code>complement</code> </b> </p> <p>The <code>complement</code> parameter
     * instructs Amazon ML to use the data that is not included in the range of
     * <code>percentBegin</code> to <code>percentEnd</code> to create a datasource. The
     * <code>complement</code> parameter is useful if you need to create complementary
     * datasources for training and evaluation. To create a complementary datasource,
     * use the same values for <code>percentBegin</code> and <code>percentEnd</code>,
     * along with the <code>complement</code> parameter.</p> <p>For example, the
     * following two datasources do not share any data, and can be used to train and
     * evaluate a model. The first datasource has 25 percent of the data, and the
     * second one has 75 percent of the data.</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code> </p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code> </p> </li> <li> <p> <b>
     * <code>strategy</code> </b> </p> <p>To change how Amazon ML splits the data for a
     * datasource, use the <code>strategy</code> parameter.</p> <p>The default value
     * for the <code>strategy</code> parameter is <code>sequential</code>, meaning that
     * Amazon ML takes all of the data records between the <code>percentBegin</code>
     * and <code>percentEnd</code> parameters for the datasource, in the order that the
     * records appear in the input data.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code> </p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code> </p> <p>To randomly split
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
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code> </p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDataRearrangement() const { return m_dataRearrangement; }
    inline bool DataRearrangementHasBeenSet() const { return m_dataRearrangementHasBeenSet; }
    template<typename DataRearrangementT = Aws::String>
    void SetDataRearrangement(DataRearrangementT&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = std::forward<DataRearrangementT>(value); }
    template<typename DataRearrangementT = Aws::String>
    RedshiftDataSpec& WithDataRearrangement(DataRearrangementT&& value) { SetDataRearrangement(std::forward<DataRearrangementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p>"recordAnnotationFieldName": "F1",</p>
     * <p>"recordWeightFieldName": "F2",</p> <p>"targetFieldName": "F3",</p>
     * <p>"dataFormat": "CSV",</p> <p>"dataFileContainsHeader": true,</p>
     * <p>"attributes": [</p> <p>{ "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p>
     * <p>"excludedVariableNames": [ "F6" ] }</p>
     */
    inline const Aws::String& GetDataSchema() const { return m_dataSchema; }
    inline bool DataSchemaHasBeenSet() const { return m_dataSchemaHasBeenSet; }
    template<typename DataSchemaT = Aws::String>
    void SetDataSchema(DataSchemaT&& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = std::forward<DataSchemaT>(value); }
    template<typename DataSchemaT = Aws::String>
    RedshiftDataSpec& WithDataSchema(DataSchemaT&& value) { SetDataSchema(std::forward<DataSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSchemaUri() const { return m_dataSchemaUri; }
    inline bool DataSchemaUriHasBeenSet() const { return m_dataSchemaUriHasBeenSet; }
    template<typename DataSchemaUriT = Aws::String>
    void SetDataSchemaUri(DataSchemaUriT&& value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri = std::forward<DataSchemaUriT>(value); }
    template<typename DataSchemaUriT = Aws::String>
    RedshiftDataSpec& WithDataSchemaUri(DataSchemaUriT&& value) { SetDataSchemaUri(std::forward<DataSchemaUriT>(value)); return *this;}
    ///@}
  private:

    RedshiftDatabase m_databaseInformation;
    bool m_databaseInformationHasBeenSet = false;

    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet = false;

    RedshiftDatabaseCredentials m_databaseCredentials;
    bool m_databaseCredentialsHasBeenSet = false;

    Aws::String m_s3StagingLocation;
    bool m_s3StagingLocationHasBeenSet = false;

    Aws::String m_dataRearrangement;
    bool m_dataRearrangementHasBeenSet = false;

    Aws::String m_dataSchema;
    bool m_dataSchemaHasBeenSet = false;

    Aws::String m_dataSchemaUri;
    bool m_dataSchemaUriHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
