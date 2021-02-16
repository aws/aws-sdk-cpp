﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/DataCatalogType.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains information about a data catalog in an AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DataCatalog">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API DataCatalog
  {
  public:
    DataCatalog();
    DataCatalog(Aws::Utils::Json::JsonView jsonValue);
    DataCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline DataCatalog& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline DataCatalog& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data catalog. The catalog name must be unique for the AWS
     * account and can use a maximum of 128 alphanumeric, underscore, at sign, or
     * hyphen characters.</p>
     */
    inline DataCatalog& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline DataCatalog& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline DataCatalog& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the data catalog.</p>
     */
    inline DataCatalog& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of data catalog: <code>LAMBDA</code> for a federated catalog or
     * <code>HIVE</code> for an external hive metastore. <code>GLUE</code> refers to
     * the <code>AwsDataCatalog</code> that already exists in your account, of which
     * you can have only one.</p>
     */
    inline const DataCatalogType& GetType() const{ return m_type; }

    /**
     * <p>The type of data catalog: <code>LAMBDA</code> for a federated catalog or
     * <code>HIVE</code> for an external hive metastore. <code>GLUE</code> refers to
     * the <code>AwsDataCatalog</code> that already exists in your account, of which
     * you can have only one.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data catalog: <code>LAMBDA</code> for a federated catalog or
     * <code>HIVE</code> for an external hive metastore. <code>GLUE</code> refers to
     * the <code>AwsDataCatalog</code> that already exists in your account, of which
     * you can have only one.</p>
     */
    inline void SetType(const DataCatalogType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data catalog: <code>LAMBDA</code> for a federated catalog or
     * <code>HIVE</code> for an external hive metastore. <code>GLUE</code> refers to
     * the <code>AwsDataCatalog</code> that already exists in your account, of which
     * you can have only one.</p>
     */
    inline void SetType(DataCatalogType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data catalog: <code>LAMBDA</code> for a federated catalog or
     * <code>HIVE</code> for an external hive metastore. <code>GLUE</code> refers to
     * the <code>AwsDataCatalog</code> that already exists in your account, of which
     * you can have only one.</p>
     */
    inline DataCatalog& WithType(const DataCatalogType& value) { SetType(value); return *this;}

    /**
     * <p>The type of data catalog: <code>LAMBDA</code> for a federated catalog or
     * <code>HIVE</code> for an external hive metastore. <code>GLUE</code> refers to
     * the <code>AwsDataCatalog</code> that already exists in your account, of which
     * you can have only one.</p>
     */
    inline DataCatalog& WithType(DataCatalogType&& value) { SetType(std::move(value)); return *this;}


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
     * </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

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
     * </ul> </li> </ul>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

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
     * </ul> </li> </ul>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

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
     * </ul> </li> </ul>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

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
     * </ul> </li> </ul>
     */
    inline DataCatalog& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    DataCatalogType m_type;
    bool m_typeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
