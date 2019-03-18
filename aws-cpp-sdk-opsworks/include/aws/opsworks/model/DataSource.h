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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an app's data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DataSource
  {
  public:
    DataSource();
    DataSource(Aws::Utils::Json::JsonView jsonValue);
    DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline DataSource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline DataSource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data source's type, <code>AutoSelectOpsworksMysqlInstance</code>,
     * <code>OpsworksMysqlInstance</code>, <code>RdsDbInstance</code>, or
     * <code>None</code>.</p>
     */
    inline DataSource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The data source's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The data source's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The data source's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The data source's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The data source's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The data source's ARN.</p>
     */
    inline DataSource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The data source's ARN.</p>
     */
    inline DataSource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The data source's ARN.</p>
     */
    inline DataSource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database name.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name.</p>
     */
    inline DataSource& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name.</p>
     */
    inline DataSource& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name.</p>
     */
    inline DataSource& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
