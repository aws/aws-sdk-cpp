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


    ///@{
    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RedshiftDataShareDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RedshiftDataShareDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RedshiftDataShareDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline RedshiftDataShareDetails& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline RedshiftDataShareDetails& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline RedshiftDataShareDetails& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }
    inline RedshiftDataShareDetails& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}
    inline RedshiftDataShareDetails& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}
    inline RedshiftDataShareDetails& WithFunction(const char* value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline RedshiftDataShareDetails& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline RedshiftDataShareDetails& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline RedshiftDataShareDetails& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline RedshiftDataShareDetails& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline RedshiftDataShareDetails& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline RedshiftDataShareDetails& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetView() const{ return m_view; }
    inline bool ViewHasBeenSet() const { return m_viewHasBeenSet; }
    inline void SetView(const Aws::String& value) { m_viewHasBeenSet = true; m_view = value; }
    inline void SetView(Aws::String&& value) { m_viewHasBeenSet = true; m_view = std::move(value); }
    inline void SetView(const char* value) { m_viewHasBeenSet = true; m_view.assign(value); }
    inline RedshiftDataShareDetails& WithView(const Aws::String& value) { SetView(value); return *this;}
    inline RedshiftDataShareDetails& WithView(Aws::String&& value) { SetView(std::move(value)); return *this;}
    inline RedshiftDataShareDetails& WithView(const char* value) { SetView(value); return *this;}
    ///@}
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
