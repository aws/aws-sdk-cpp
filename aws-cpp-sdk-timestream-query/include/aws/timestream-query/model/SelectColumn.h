/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/Type.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Details of the column that is returned by the query. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/SelectColumn">AWS
   * API Reference</a></p>
   */
  class SelectColumn
  {
  public:
    AWS_TIMESTREAMQUERY_API SelectColumn();
    AWS_TIMESTREAMQUERY_API SelectColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API SelectColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the column.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the column.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the column.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the column.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the column.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the column.</p>
     */
    inline SelectColumn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the column.</p>
     */
    inline SelectColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the column.</p>
     */
    inline SelectColumn& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Type& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline SelectColumn& WithType(const Type& value) { SetType(value); return *this;}

    
    inline SelectColumn& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> Database that has this column.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> Database that has this column.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> Database that has this column.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> Database that has this column.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> Database that has this column.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> Database that has this column.</p>
     */
    inline SelectColumn& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> Database that has this column.</p>
     */
    inline SelectColumn& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> Database that has this column.</p>
     */
    inline SelectColumn& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Table within the database that has this column. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline SelectColumn& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline SelectColumn& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Table within the database that has this column. </p>
     */
    inline SelectColumn& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>True, if the column name was aliased by the query. False otherwise.</p>
     */
    inline bool GetAliased() const{ return m_aliased; }

    /**
     * <p>True, if the column name was aliased by the query. False otherwise.</p>
     */
    inline bool AliasedHasBeenSet() const { return m_aliasedHasBeenSet; }

    /**
     * <p>True, if the column name was aliased by the query. False otherwise.</p>
     */
    inline void SetAliased(bool value) { m_aliasedHasBeenSet = true; m_aliased = value; }

    /**
     * <p>True, if the column name was aliased by the query. False otherwise.</p>
     */
    inline SelectColumn& WithAliased(bool value) { SetAliased(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    bool m_aliased;
    bool m_aliasedHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
