/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_LAKEFORMATION_API DataLakeSettings
  {
  public:
    DataLakeSettings();
    DataLakeSettings(Aws::Utils::Json::JsonView jsonValue);
    DataLakeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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
     * Formation permissions or exclusively by IAM permissions. You can override this
     * default setting when you create a database.</p> <p>A null value indicates access
     * control by Lake Formation permissions. A value that assigns ALL to
     * IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
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

  private:

    Aws::Vector<DataLakePrincipal> m_dataLakeAdmins;
    bool m_dataLakeAdminsHasBeenSet;

    Aws::Vector<PrincipalPermissions> m_createDatabaseDefaultPermissions;
    bool m_createDatabaseDefaultPermissionsHasBeenSet;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet;

    Aws::Vector<Aws::String> m_trustedResourceOwners;
    bool m_trustedResourceOwnersHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
