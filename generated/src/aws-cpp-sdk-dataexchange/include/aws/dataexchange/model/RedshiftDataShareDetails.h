/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to the affected scope in this Redshift data
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RedshiftDataShareDetails">AWS
   * API Reference</a></p>
   */
  class RedshiftDataShareDetails
  {
  public:
    AWS_DATAEXCHANGE_API RedshiftDataShareDetails();
    AWS_DATAEXCHANGE_API RedshiftDataShareDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RedshiftDataShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}

    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithFunction(const char* value) { SetFunction(value); return *this;}


    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetView() const{ return m_view; }

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline bool ViewHasBeenSet() const { return m_viewHasBeenSet; }

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetView(const Aws::String& value) { m_viewHasBeenSet = true; m_view = value; }

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetView(Aws::String&& value) { m_viewHasBeenSet = true; m_view = std::move(value); }

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline void SetView(const char* value) { m_viewHasBeenSet = true; m_view.assign(value); }

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithView(const Aws::String& value) { SetView(value); return *this;}

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithView(Aws::String&& value) { SetView(std::move(value)); return *this;}

    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline RedshiftDataShareDetails& WithView(const char* value) { SetView(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_view;
    bool m_viewHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
