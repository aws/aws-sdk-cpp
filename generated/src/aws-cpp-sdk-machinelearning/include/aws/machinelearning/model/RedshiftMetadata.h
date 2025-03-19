/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/RedshiftDatabase.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>Describes the <code>DataSource</code> details specific to Amazon
   * Redshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RedshiftMetadata">AWS
   * API Reference</a></p>
   */
  class RedshiftMetadata
  {
  public:
    AWS_MACHINELEARNING_API RedshiftMetadata() = default;
    AWS_MACHINELEARNING_API RedshiftMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RedshiftMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RedshiftDatabase& GetRedshiftDatabase() const { return m_redshiftDatabase; }
    inline bool RedshiftDatabaseHasBeenSet() const { return m_redshiftDatabaseHasBeenSet; }
    template<typename RedshiftDatabaseT = RedshiftDatabase>
    void SetRedshiftDatabase(RedshiftDatabaseT&& value) { m_redshiftDatabaseHasBeenSet = true; m_redshiftDatabase = std::forward<RedshiftDatabaseT>(value); }
    template<typename RedshiftDatabaseT = RedshiftDatabase>
    RedshiftMetadata& WithRedshiftDatabase(RedshiftDatabaseT&& value) { SetRedshiftDatabase(std::forward<RedshiftDatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatabaseUserName() const { return m_databaseUserName; }
    inline bool DatabaseUserNameHasBeenSet() const { return m_databaseUserNameHasBeenSet; }
    template<typename DatabaseUserNameT = Aws::String>
    void SetDatabaseUserName(DatabaseUserNameT&& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = std::forward<DatabaseUserNameT>(value); }
    template<typename DatabaseUserNameT = Aws::String>
    RedshiftMetadata& WithDatabaseUserName(DatabaseUserNameT&& value) { SetDatabaseUserName(std::forward<DatabaseUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline const Aws::String& GetSelectSqlQuery() const { return m_selectSqlQuery; }
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }
    template<typename SelectSqlQueryT = Aws::String>
    void SetSelectSqlQuery(SelectSqlQueryT&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::forward<SelectSqlQueryT>(value); }
    template<typename SelectSqlQueryT = Aws::String>
    RedshiftMetadata& WithSelectSqlQuery(SelectSqlQueryT&& value) { SetSelectSqlQuery(std::forward<SelectSqlQueryT>(value)); return *this;}
    ///@}
  private:

    RedshiftDatabase m_redshiftDatabase;
    bool m_redshiftDatabaseHasBeenSet = false;

    Aws::String m_databaseUserName;
    bool m_databaseUserNameHasBeenSet = false;

    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
