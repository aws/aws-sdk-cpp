/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/DataCatalogType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class CreateDataCatalogRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API CreateDataCatalogRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataCatalog"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the data catalog to create. The catalog name must be unique for
     * the Amazon Web Services account and can use a maximum of 127 alphanumeric,
     * underscore, at sign, or hyphen characters. The remainder of the length
     * constraint of 256 is reserved for use by Athena.</p> <p>For
     * <code>FEDERATED</code> type the catalog name has following considerations and
     * limits:</p> <ul> <li> <p>The catalog name allows special characters such as
     * <code>_ , @ , \ , - </code>. These characters are replaced with a hyphen (-)
     * when creating the CFN Stack Name and with an underscore (_) when creating the
     * Lambda Function and Glue Connection Name.</p> </li> <li> <p>The catalog name has
     * a theoretical limit of 128 characters. However, since we use it to create other
     * resources that allow less characters and we prepend a prefix to it, the actual
     * catalog name limit for <code>FEDERATED</code> catalog is 64 - 23 = 41
     * characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataCatalogRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data catalog to create: <code>LAMBDA</code> for a federated
     * catalog, <code>GLUE</code> for an Glue Data Catalog, and <code>HIVE</code> for
     * an external Apache Hive metastore. <code>FEDERATED</code> is a federated catalog
     * for which Athena creates the connection and the Lambda function for you based on
     * the parameters that you pass.</p> <p>For <code>FEDERATED</code> type, we do not
     * support IAM identity center.</p>
     */
    inline DataCatalogType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataCatalogType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateDataCatalogRequest& WithType(DataCatalogType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data catalog to be created.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDataCatalogRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Lambda function or functions to use for creating the data
     * catalog. This is a mapping whose values depend on the catalog type. </p> <ul>
     * <li> <p>For the <code>HIVE</code> data catalog type, use the following syntax.
     * The <code>metadata-function</code> parameter is required. <code>The
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
     * Amazon Web Services account to which the Glue Data Catalog belongs.</p> <p>
     * <code>catalog-id=<i>catalog_id</i> </code> </p> <ul> <li> <p>The
     * <code>GLUE</code> data catalog type also applies to the default
     * <code>AwsDataCatalog</code> that already exists in your account, of which you
     * can have only one and cannot modify.</p> </li> </ul> </li> <li> <p>The
     * <code>FEDERATED</code> data catalog type uses one of the following parameters,
     * but not both. Use <code>connection-arn</code> for an existing Glue connection.
     * Use <code>connection-type</code> and <code>connection-properties</code> to
     * specify the configuration setting for a new connection.</p> <ul> <li> <p>
     * <code>connection-arn:<i>&lt;glue_connection_arn_to_reuse&gt;</i> </code> </p>
     * </li> <li> <p> <code>lambda-role-arn</code> (optional): The execution role to
     * use for the Lambda function. If not provided, one is created.</p> </li> <li> <p>
     * <code>connection-type:MYSQL|REDSHIFT|....,
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
    CreateDataCatalogRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    CreateDataCatalogRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of comma separated tags to add to the data catalog that is created.
     * All the resources that are created by the <code>CreateDataCatalog</code> API
     * operation with <code>FEDERATED</code> type will have the tag
     * <code>federated_athena_datacatalog="true"</code>. This includes the CFN Stack,
     * Glue Connection, Athena DataCatalog, and all the resources created as part of
     * the CFN Stack (Lambda Function, IAM policies/roles).</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataCatalogRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataCatalogRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataCatalogType m_type{DataCatalogType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
