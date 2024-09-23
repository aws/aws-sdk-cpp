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
    AWS_ATHENA_API DataCatalog();
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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataCatalog& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataCatalog& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataCatalog& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataCatalog& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataCatalog& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataCatalog& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data catalog to create: <code>LAMBDA</code> for a federated
     * catalog, <code>GLUE</code> for an Glue Data Catalog, and <code>HIVE</code> for
     * an external Apache Hive metastore. <code>FEDERATED</code> is a federated catalog
     * for which Athena creates the connection and the Lambda function for you based on
     * the parameters that you pass.</p>
     */
    inline const DataCatalogType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataCatalogType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataCatalogType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DataCatalog& WithType(const DataCatalogType& value) { SetType(value); return *this;}
    inline DataCatalog& WithType(DataCatalogType&& value) { SetType(std::move(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline DataCatalog& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline DataCatalog& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline DataCatalog& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline DataCatalog& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline DataCatalog& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline DataCatalog& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline DataCatalog& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline DataCatalog& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline DataCatalog& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
    inline const DataCatalogStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DataCatalogStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DataCatalogStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataCatalog& WithStatus(const DataCatalogStatus& value) { SetStatus(value); return *this;}
    inline DataCatalog& WithStatus(DataCatalogStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connection for a <code>FEDERATED</code> data catalog (for
     * example, <code>REDSHIFT</code>, <code>MYSQL</code>, or <code>SQLSERVER</code>).
     * For information about individual connectors, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/connectors-available.html">Available
     * data source connectors</a>.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline DataCatalog& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline DataCatalog& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text of the error that occurred during data catalog creation or deletion.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline DataCatalog& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline DataCatalog& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline DataCatalog& WithError(const char* value) { SetError(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataCatalogType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    DataCatalogStatus m_status;
    bool m_statusHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
