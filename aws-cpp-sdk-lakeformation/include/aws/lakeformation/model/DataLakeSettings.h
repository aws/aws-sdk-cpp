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
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/PrincipalPermissions.h>
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
   * <p>The AWS Lake Formation principal.</p><p><h3>See Also:</h3>   <a
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
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetDataLakeAdmins() const{ return m_dataLakeAdmins; }

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline bool DataLakeAdminsHasBeenSet() const { return m_dataLakeAdminsHasBeenSet; }

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline void SetDataLakeAdmins(const Aws::Vector<DataLakePrincipal>& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins = value; }

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline void SetDataLakeAdmins(Aws::Vector<DataLakePrincipal>&& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins = std::move(value); }

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline DataLakeSettings& WithDataLakeAdmins(const Aws::Vector<DataLakePrincipal>& value) { SetDataLakeAdmins(value); return *this;}

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline DataLakeSettings& WithDataLakeAdmins(Aws::Vector<DataLakePrincipal>&& value) { SetDataLakeAdmins(std::move(value)); return *this;}

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline DataLakeSettings& AddDataLakeAdmins(const DataLakePrincipal& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins.push_back(value); return *this; }

    /**
     * <p>A list of AWS Lake Formation principals.</p>
     */
    inline DataLakeSettings& AddDataLakeAdmins(DataLakePrincipal&& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const{ return m_createDatabaseDefaultPermissions; }

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline void SetCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = value; }

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline void SetCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::move(value); }

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline DataLakeSettings& WithCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateDatabaseDefaultPermissions(value); return *this;}

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline DataLakeSettings& WithCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateDatabaseDefaultPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline DataLakeSettings& AddCreateDatabaseDefaultPermissions(const PrincipalPermissions& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(value); return *this; }

    /**
     * <p>A list of up to three principal permissions entries for default create
     * database permissions.</p>
     */
    inline DataLakeSettings& AddCreateDatabaseDefaultPermissions(PrincipalPermissions&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const{ return m_createTableDefaultPermissions; }

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline void SetCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = value; }

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline void SetCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::move(value); }

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline DataLakeSettings& WithCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateTableDefaultPermissions(value); return *this;}

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline DataLakeSettings& WithCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateTableDefaultPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline DataLakeSettings& AddCreateTableDefaultPermissions(const PrincipalPermissions& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(value); return *this; }

    /**
     * <p>A list of up to three principal permissions entries for default create table
     * permissions.</p>
     */
    inline DataLakeSettings& AddCreateTableDefaultPermissions(PrincipalPermissions&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DataLakePrincipal> m_dataLakeAdmins;
    bool m_dataLakeAdminsHasBeenSet;

    Aws::Vector<PrincipalPermissions> m_createDatabaseDefaultPermissions;
    bool m_createDatabaseDefaultPermissionsHasBeenSet;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
