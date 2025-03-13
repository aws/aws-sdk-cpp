/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/DataCatalogType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/athena/model/DataCatalogStatus.h>
#include <aws/athena/model/ConnectionType.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains information about a data catalog in an Amazon Web Services
   * account.</p>  <p>In the Athena console, data catalogs are listed as "data
   * sources" on the <b>Data sources</b> page under the <b>Data source name</b>
   * column.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DataCatalog">AWS
   * API Reference</a></p>
   */
  class DataCatalog
  {
  public:
    AWS_ATHENA_API DataCatalog() = default;
    AWS_ATHENA_API DataCatalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API DataCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data catalog. The catalog name must be unique for the Amazon
     * Web Services account and can use a maximum of 127 alphanumeric, underscore, at
     * sign, or hyphen characters. The remainder of the length constraint of 256 is
     * reserved for use by Athena.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataCatalog& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataCatalog& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data catalog to create: <code>LAMBDA</code> for a federated
     * catalog, <code>GLUE</code> for an Glue Data Catalog, and <code>HIVE</code> for
     * an external Apache Hive metastore. <code>FEDERATED</code> is a federated catalog
     * for which Athena creates the connection and the Lambda function for you based on
     * the parameters that you pass.</p>
     */
    inline DataCatalogType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataCatalogType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataCatalog& WithType(DataCatalogType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Lambda function or functions to use for the data catalog. This
     * is a mapping whose values depend on the catalog type. </p> <ul> <li> <p>For the
     * <code>HIVE</code> data catalog type, use the following syntax. The
     * <code>metadata-function</code> parameter is required. <code>The
     * sdk-version</code> parameter is optional and defaults to the currently supported
     * version.</p> <p> <code>metadata-function=<i>lambda_arn</i>,
     * sdk-version=<i>version_number</i> </code> </p> </li> <li> <p>For the
     * <code>LAMBDA</code> data catalog type, use one of the following sets of required
     * parameters, but not both.</p> <ul> <li> <p>If you have one Lambda function that
     * processes metadata and another for reading the actual data, use the following
     * syntax. Both parameters are required.</p> <p>
     * <code>metadata-function=<i>lambda_arn</i>, record-function=<i>lambda_arn</i>
     * </code> </p> </li> <li> <p> If you have a composite Lambda function that
     * processes both metadata and data, use the following syntax to specify your
     * Lambda function.</p> <p> <code>function=<i>lambda_arn</i> </code> </p> </li>
     * </ul> </li> <li> <p>The <code>GLUE</code> type takes a catalog ID parameter and
     * is required. The <code> <i>catalog_id</i> </code> is the account ID of the
     * Amazon Web Services account to which the Glue catalog belongs.</p> <p>
     * <code>catalog-id=<i>catalog_id</i> </code> </p> <ul> <li> <p>The
     * <code>GLUE</code> data catalog type also applies to the default
     * <code>AwsDataCatalog</code> that already exists in your account, of which you
     * can have only one and cannot modify.</p> </li> </ul> </li> <li> <p>The
     * <code>FEDERATED</code> data catalog type uses one of the following parameters,
     * but not both. Use <code>connection-arn</code> for an existing Glue connection.
     * Use <code>connection-type</code> and <code>connection-properties</code> to
     * specify the configuration setting for a new connection.</p> <ul> <li> <p>
     * <code>connection-arn:<i>&lt;glue_connection_arn_to_reuse&gt;</i> </code> </p>
     * </li> <li> <p> <code>connection-type:MYSQL|REDSHIFT|....,
     * connection-properties:"<i>&lt;json_string&gt;</i>"</code> </p> <p>For <i>
     * <code>&lt;json_string&gt;</code> </i>, use escaped JSON text, as in the
     * following example.</p> <p>
     * <code>"{\"spill_bucket\":\"my_spill\",\"spill_prefix\":\"athena-spill\",\"host\":\"abc12345.snowflakecomputing.com\",\"port\":\"1234\",\"warehouse\":\"DEV_WH\",\"database\":\"TEST\",\"schema\":\"PUBLIC\",\"SecretArn\":\"arn:aws:secretsmanager:ap-south-1:111122223333:secret:snowflake-XHb67j\"}"</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    DataCatalog& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    DataCatalog& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the creation or deletion of the data catalog.</p> <ul> <li>
     * <p>The <code>LAMBDA</code>, <code>GLUE</code>, and <code>HIVE</code> data
     * catalog types are created synchronously. Their status is either
     * <code>CREATE_COMPLETE</code> or <code>CREATE_FAILED</code>.</p> </li> <li>
     * <p>The <code>FEDERATED</code> data catalog type is created asynchronously.</p>
     * </li> </ul> <p>Data catalog creation status:</p> <ul> <li> <p>
     * <code>CREATE_IN_PROGRESS</code>: Federated data catalog creation in
     * progress.</p> </li> <li> <p> <code>CREATE_COMPLETE</code>: Data catalog creation
     * complete.</p> </li> <li> <p> <code>CREATE_FAILED</code>: Data catalog could not
     * be created.</p> </li> <li> <p> <code>CREATE_FAILED_CLEANUP_IN_PROGRESS</code>:
     * Federated data catalog creation failed and is being removed.</p> </li> <li> <p>
     * <code>CREATE_FAILED_CLEANUP_COMPLETE</code>: Federated data catalog creation
     * failed and was removed.</p> </li> <li> <p>
     * <code>CREATE_FAILED_CLEANUP_FAILED</code>: Federated data catalog creation
     * failed but could not be removed.</p> </li> </ul> <p>Data catalog deletion
     * status:</p> <ul> <li> <p> <code>DELETE_IN_PROGRESS</code>: Federated data
     * catalog deletion in progress.</p> </li> <li> <p> <code>DELETE_COMPLETE</code>:
     * Federated data catalog deleted.</p> </li> <li> <p> <code>DELETE_FAILED</code>:
     * Federated data catalog could not be deleted.</p> </li> </ul>
     */
    inline DataCatalogStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataCatalogStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataCatalog& WithStatus(DataCatalogStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connection for a <code>FEDERATED</code> data catalog (for
     * example, <code>REDSHIFT</code>, <code>MYSQL</code>, or <code>SQLSERVER</code>).
     * For information about individual connectors, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/connectors-available.html">Available
     * data source connectors</a>.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline DataCatalog& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text of the error that occurred during data catalog creation or deletion.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    DataCatalog& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataCatalogType m_type{DataCatalogType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    DataCatalogStatus m_status{DataCatalogStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
