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
    AWS_GLUE_API SparkSQL() = default;
    AWS_GLUE_API SparkSQL(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SparkSQL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SparkSQL& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names. You can associate a table
     * name with each input node to use in the SQL query. The name you choose must meet
     * the Spark SQL naming restrictions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    SparkSQL& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    SparkSQL& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A SQL query that must use Spark SQL syntax and return a single data set.</p>
     */
    inline const Aws::String& GetSqlQuery() const { return m_sqlQuery; }
    inline bool SqlQueryHasBeenSet() const { return m_sqlQueryHasBeenSet; }
    template<typename SqlQueryT = Aws::String>
    void SetSqlQuery(SqlQueryT&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::forward<SqlQueryT>(value); }
    template<typename SqlQueryT = Aws::String>
    SparkSQL& WithSqlQuery(SqlQueryT&& value) { SetSqlQuery(std::forward<SqlQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aliases. An alias allows you to specify what name to use in the SQL
     * for a given input. For example, you have a datasource named "MyDataSource". If
     * you specify <code>From</code> as MyDataSource, and <code>Alias</code> as
     * SqlName, then in your SQL you can do:</p> <p> <code>select * from SqlName</code>
     * </p> <p>and that gets data from MyDataSource.</p>
     */
    inline const Aws::Vector<SqlAlias>& GetSqlAliases() const { return m_sqlAliases; }
    inline bool SqlAliasesHasBeenSet() const { return m_sqlAliasesHasBeenSet; }
    template<typename SqlAliasesT = Aws::Vector<SqlAlias>>
    void SetSqlAliases(SqlAliasesT&& value) { m_sqlAliasesHasBeenSet = true; m_sqlAliases = std::forward<SqlAliasesT>(value); }
    template<typename SqlAliasesT = Aws::Vector<SqlAlias>>
    SparkSQL& WithSqlAliases(SqlAliasesT&& value) { SetSqlAliases(std::forward<SqlAliasesT>(value)); return *this;}
    template<typename SqlAliasesT = SqlAlias>
    SparkSQL& AddSqlAliases(SqlAliasesT&& value) { m_sqlAliasesHasBeenSet = true; m_sqlAliases.emplace_back(std::forward<SqlAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the SparkSQL transform.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    SparkSQL& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    SparkSQL& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
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
