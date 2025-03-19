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
    AWS_DATAEXCHANGE_API RedshiftDataShareDetails() = default;
    AWS_DATAEXCHANGE_API RedshiftDataShareDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RedshiftDataShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the underlying Redshift data share that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RedshiftDataShareDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name in the Redshift data share that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    RedshiftDataShareDetails& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A function name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = Aws::String>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = Aws::String>
    RedshiftDataShareDetails& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A table name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    RedshiftDataShareDetails& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A schema name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    RedshiftDataShareDetails& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A view name in the Redshift database that is being affected by this
     * notification.</p>
     */
    inline const Aws::String& GetView() const { return m_view; }
    inline bool ViewHasBeenSet() const { return m_viewHasBeenSet; }
    template<typename ViewT = Aws::String>
    void SetView(ViewT&& value) { m_viewHasBeenSet = true; m_view = std::forward<ViewT>(value); }
    template<typename ViewT = Aws::String>
    RedshiftDataShareDetails& WithView(ViewT&& value) { SetView(std::forward<ViewT>(value)); return *this;}
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
