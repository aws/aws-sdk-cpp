/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/PrincipalPermissions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure representing a list of Lake Formation principals designated as
   * data lake administrators and lists of principal permission entries for default
   * create database and default create table permissions.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DataLakeSettings">AWS
   * API Reference</a></p>
   */
  class DataLakeSettings
  {
  public:
    AWS_LAKEFORMATION_API DataLakeSettings();
    AWS_LAKEFORMATION_API DataLakeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataLakeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetDataLakeAdmins() const{ return m_dataLakeAdmins; }

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline bool DataLakeAdminsHasBeenSet() const { return m_dataLakeAdminsHasBeenSet; }

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline void SetDataLakeAdmins(const Aws::Vector<DataLakePrincipal>& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins = value; }

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline void SetDataLakeAdmins(Aws::Vector<DataLakePrincipal>&& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins = std::move(value); }

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline DataLakeSettings& WithDataLakeAdmins(const Aws::Vector<DataLakePrincipal>& value) { SetDataLakeAdmins(value); return *this;}

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline DataLakeSettings& WithDataLakeAdmins(Aws::Vector<DataLakePrincipal>&& value) { SetDataLakeAdmins(std::move(value)); return *this;}

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline DataLakeSettings& AddDataLakeAdmins(const DataLakePrincipal& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins.push_back(value); return *this; }

    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline DataLakeSettings& AddDataLakeAdmins(DataLakePrincipal&& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const{ return m_createDatabaseDefaultPermissions; }

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline void SetCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = value; }

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline void SetCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::move(value); }

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& WithCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateDatabaseDefaultPermissions(value); return *this;}

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& WithCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateDatabaseDefaultPermissions(std::move(value)); return *this;}

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& AddCreateDatabaseDefaultPermissions(const PrincipalPermissions& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(value); return *this; }

    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& AddCreateDatabaseDefaultPermissions(PrincipalPermissions&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const{ return m_createTableDefaultPermissions; }

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline void SetCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = value; }

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline void SetCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::move(value); }

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& WithCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateTableDefaultPermissions(value); return *this;}

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& WithCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateTableDefaultPermissions(std::move(value)); return *this;}

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& AddCreateTableDefaultPermissions(const PrincipalPermissions& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(value); return *this; }

    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline DataLakeSettings& AddCreateTableDefaultPermissions(PrincipalPermissions&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CrossAccountVersion is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, and 3.</p>
     */
    inline DataLakeSettings& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustedResourceOwners() const{ return m_trustedResourceOwners; }

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline bool TrustedResourceOwnersHasBeenSet() const { return m_trustedResourceOwnersHasBeenSet; }

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline void SetTrustedResourceOwners(const Aws::Vector<Aws::String>& value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners = value; }

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline void SetTrustedResourceOwners(Aws::Vector<Aws::String>&& value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners = std::move(value); }

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline DataLakeSettings& WithTrustedResourceOwners(const Aws::Vector<Aws::String>& value) { SetTrustedResourceOwners(value); return *this;}

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline DataLakeSettings& WithTrustedResourceOwners(Aws::Vector<Aws::String>&& value) { SetTrustedResourceOwners(std::move(value)); return *this;}

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline DataLakeSettings& AddTrustedResourceOwners(const Aws::String& value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners.push_back(value); return *this; }

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline DataLakeSettings& AddTrustedResourceOwners(Aws::String&& value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline DataLakeSettings& AddTrustedResourceOwners(const char* value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners.push_back(value); return *this; }


    /**
     * <p>Whether to allow Amazon EMR clusters to access data managed by Lake
     * Formation. </p> <p>If true, you allow Amazon EMR clusters to access data in
     * Amazon S3 locations that are registered with Lake Formation.</p> <p>If false or
     * null, no Amazon EMR clusters will be able to access data in Amazon S3 locations
     * that are registered with Lake Formation.</p> <p>For more information, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/getting-started-setup.html#emr-switch">(Optional)
     * Allow Data Filtering on Amazon EMR</a>.</p>
     */
    inline bool GetAllowExternalDataFiltering() const{ return m_allowExternalDataFiltering; }

    /**
     * <p>Whether to allow Amazon EMR clusters to access data managed by Lake
     * Formation. </p> <p>If true, you allow Amazon EMR clusters to access data in
     * Amazon S3 locations that are registered with Lake Formation.</p> <p>If false or
     * null, no Amazon EMR clusters will be able to access data in Amazon S3 locations
     * that are registered with Lake Formation.</p> <p>For more information, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/getting-started-setup.html#emr-switch">(Optional)
     * Allow Data Filtering on Amazon EMR</a>.</p>
     */
    inline bool AllowExternalDataFilteringHasBeenSet() const { return m_allowExternalDataFilteringHasBeenSet; }

    /**
     * <p>Whether to allow Amazon EMR clusters to access data managed by Lake
     * Formation. </p> <p>If true, you allow Amazon EMR clusters to access data in
     * Amazon S3 locations that are registered with Lake Formation.</p> <p>If false or
     * null, no Amazon EMR clusters will be able to access data in Amazon S3 locations
     * that are registered with Lake Formation.</p> <p>For more information, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/getting-started-setup.html#emr-switch">(Optional)
     * Allow Data Filtering on Amazon EMR</a>.</p>
     */
    inline void SetAllowExternalDataFiltering(bool value) { m_allowExternalDataFilteringHasBeenSet = true; m_allowExternalDataFiltering = value; }

    /**
     * <p>Whether to allow Amazon EMR clusters to access data managed by Lake
     * Formation. </p> <p>If true, you allow Amazon EMR clusters to access data in
     * Amazon S3 locations that are registered with Lake Formation.</p> <p>If false or
     * null, no Amazon EMR clusters will be able to access data in Amazon S3 locations
     * that are registered with Lake Formation.</p> <p>For more information, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/getting-started-setup.html#emr-switch">(Optional)
     * Allow Data Filtering on Amazon EMR</a>.</p>
     */
    inline DataLakeSettings& WithAllowExternalDataFiltering(bool value) { SetAllowExternalDataFiltering(value); return *this;}


    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetExternalDataFilteringAllowList() const{ return m_externalDataFilteringAllowList; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline bool ExternalDataFilteringAllowListHasBeenSet() const { return m_externalDataFilteringAllowListHasBeenSet; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline void SetExternalDataFilteringAllowList(const Aws::Vector<DataLakePrincipal>& value) { m_externalDataFilteringAllowListHasBeenSet = true; m_externalDataFilteringAllowList = value; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline void SetExternalDataFilteringAllowList(Aws::Vector<DataLakePrincipal>&& value) { m_externalDataFilteringAllowListHasBeenSet = true; m_externalDataFilteringAllowList = std::move(value); }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline DataLakeSettings& WithExternalDataFilteringAllowList(const Aws::Vector<DataLakePrincipal>& value) { SetExternalDataFilteringAllowList(value); return *this;}

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline DataLakeSettings& WithExternalDataFilteringAllowList(Aws::Vector<DataLakePrincipal>&& value) { SetExternalDataFilteringAllowList(std::move(value)); return *this;}

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline DataLakeSettings& AddExternalDataFilteringAllowList(const DataLakePrincipal& value) { m_externalDataFilteringAllowListHasBeenSet = true; m_externalDataFilteringAllowList.push_back(value); return *this; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline DataLakeSettings& AddExternalDataFilteringAllowList(DataLakePrincipal&& value) { m_externalDataFilteringAllowListHasBeenSet = true; m_externalDataFilteringAllowList.push_back(std::move(value)); return *this; }


    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedSessionTagValueList() const{ return m_authorizedSessionTagValueList; }

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline bool AuthorizedSessionTagValueListHasBeenSet() const { return m_authorizedSessionTagValueListHasBeenSet; }

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline void SetAuthorizedSessionTagValueList(const Aws::Vector<Aws::String>& value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList = value; }

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline void SetAuthorizedSessionTagValueList(Aws::Vector<Aws::String>&& value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList = std::move(value); }

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline DataLakeSettings& WithAuthorizedSessionTagValueList(const Aws::Vector<Aws::String>& value) { SetAuthorizedSessionTagValueList(value); return *this;}

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline DataLakeSettings& WithAuthorizedSessionTagValueList(Aws::Vector<Aws::String>&& value) { SetAuthorizedSessionTagValueList(std::move(value)); return *this;}

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline DataLakeSettings& AddAuthorizedSessionTagValueList(const Aws::String& value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList.push_back(value); return *this; }

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline DataLakeSettings& AddAuthorizedSessionTagValueList(Aws::String&& value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList.push_back(std::move(value)); return *this; }

    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline DataLakeSettings& AddAuthorizedSessionTagValueList(const char* value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList.push_back(value); return *this; }

  private:

    Aws::Vector<DataLakePrincipal> m_dataLakeAdmins;
    bool m_dataLakeAdminsHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createDatabaseDefaultPermissions;
    bool m_createDatabaseDefaultPermissionsHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_trustedResourceOwners;
    bool m_trustedResourceOwnersHasBeenSet = false;

    bool m_allowExternalDataFiltering;
    bool m_allowExternalDataFilteringHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_externalDataFilteringAllowList;
    bool m_externalDataFilteringAllowListHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedSessionTagValueList;
    bool m_authorizedSessionTagValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
