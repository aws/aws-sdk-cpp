/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SqlAlias.h>
#include <aws/glue/model/GlueSchema.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a transform where you enter a SQL query using Spark SQL syntax to
   * transform the data. The output is a single
   * <code>DynamicFrame</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SparkSQL">AWS API
   * Reference</a></p>
   */
  class SparkSQL
  {
  public:
    AWS_GLUE_API SparkSQL();
    AWS_GLUE_API SparkSQL(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SparkSQL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline SparkSQL& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline SparkSQL& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline SparkSQL& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline SparkSQL& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline SparkSQL& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline SparkSQL& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline SparkSQL& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline SparkSQL& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline const Aws::String& GetSqlQuery() const{ return m_sqlQuery; }

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline bool SqlQueryHasBeenSet() const { return m_sqlQueryHasBeenSet; }

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline void SetSqlQuery(const Aws::String& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = value; }

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline void SetSqlQuery(Aws::String&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::move(value); }

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline void SetSqlQuery(const char* value) { m_sqlQueryHasBeenSet = true; m_sqlQuery.assign(value); }

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline SparkSQL& WithSqlQuery(const Aws::String& value) { SetSqlQuery(value); return *this;}

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline SparkSQL& WithSqlQuery(Aws::String&& value) { SetSqlQuery(std::move(value)); return *this;}

    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline SparkSQL& WithSqlQuery(const char* value) { SetSqlQuery(value); return *this;}


    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline const Aws::Vector<SqlAlias>& GetSqlAliases() const{ return m_sqlAliases; }

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline bool SqlAliasesHasBeenSet() const { return m_sqlAliasesHasBeenSet; }

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline void SetSqlAliases(const Aws::Vector<SqlAlias>& value) { m_sqlAliasesHasBeenSet = true; m_sqlAliases = value; }

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline void SetSqlAliases(Aws::Vector<SqlAlias>&& value) { m_sqlAliasesHasBeenSet = true; m_sqlAliases = std::move(value); }

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline SparkSQL& WithSqlAliases(const Aws::Vector<SqlAlias>& value) { SetSqlAliases(value); return *this;}

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline SparkSQL& WithSqlAliases(Aws::Vector<SqlAlias>&& value) { SetSqlAliases(std::move(value)); return *this;}

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline SparkSQL& AddSqlAliases(const SqlAlias& value) { m_sqlAliasesHasBeenSet = true; m_sqlAliases.push_back(value); return *this; }

    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline SparkSQL& AddSqlAliases(SqlAlias&& value) { m_sqlAliasesHasBeenSet = true; m_sqlAliases.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline SparkSQL& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline SparkSQL& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline SparkSQL& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline SparkSQL& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_sqlQuery;
    bool m_sqlQueryHasBeenSet = false;

    Aws::Vector<SqlAlias> m_sqlAliases;
    bool m_sqlAliasesHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
