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
   * <p>A structure for the table object. A table is a metadata definition that
   * represents your data. You can Grant and Revoke table privileges to a principal.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TableResource">AWS
   * API Reference</a></p>
   */
  class AWS_LAKEFORMATION_API TableResource
  {
  public:
    TableResource();
    TableResource(Aws::Utils::Json::JsonView jsonValue);
    TableResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline TableResource& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline TableResource& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline TableResource& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TableResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableResource& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
