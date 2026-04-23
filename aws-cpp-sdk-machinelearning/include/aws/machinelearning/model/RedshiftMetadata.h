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
  class AWS_MACHINELEARNING_API RedshiftMetadata
  {
  public:
    RedshiftMetadata();
    RedshiftMetadata(Aws::Utils::Json::JsonView jsonValue);
    RedshiftMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const RedshiftDatabase& GetRedshiftDatabase() const{ return m_redshiftDatabase; }

    
    inline bool RedshiftDatabaseHasBeenSet() const { return m_redshiftDatabaseHasBeenSet; }

    
    inline void SetRedshiftDatabase(const RedshiftDatabase& value) { m_redshiftDatabaseHasBeenSet = true; m_redshiftDatabase = value; }

    
    inline void SetRedshiftDatabase(RedshiftDatabase&& value) { m_redshiftDatabaseHasBeenSet = true; m_redshiftDatabase = std::move(value); }

    
    inline RedshiftMetadata& WithRedshiftDatabase(const RedshiftDatabase& value) { SetRedshiftDatabase(value); return *this;}

    
    inline RedshiftMetadata& WithRedshiftDatabase(RedshiftDatabase&& value) { SetRedshiftDatabase(std::move(value)); return *this;}


    
    inline const Aws::String& GetDatabaseUserName() const{ return m_databaseUserName; }

    
    inline bool DatabaseUserNameHasBeenSet() const { return m_databaseUserNameHasBeenSet; }

    
    inline void SetDatabaseUserName(const Aws::String& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = value; }

    
    inline void SetDatabaseUserName(Aws::String&& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = std::move(value); }

    
    inline void SetDatabaseUserName(const char* value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName.assign(value); }

    
    inline RedshiftMetadata& WithDatabaseUserName(const Aws::String& value) { SetDatabaseUserName(value); return *this;}

    
    inline RedshiftMetadata& WithDatabaseUserName(Aws::String&& value) { SetDatabaseUserName(std::move(value)); return *this;}

    
    inline RedshiftMetadata& WithDatabaseUserName(const char* value) { SetDatabaseUserName(value); return *this;}


    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline const Aws::String& GetSelectSqlQuery() const{ return m_selectSqlQuery; }

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline void SetSelectSqlQuery(const Aws::String& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = value; }

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline void SetSelectSqlQuery(Aws::String&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::move(value); }

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline void SetSelectSqlQuery(const char* value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery.assign(value); }

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline RedshiftMetadata& WithSelectSqlQuery(const Aws::String& value) { SetSelectSqlQuery(value); return *this;}

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline RedshiftMetadata& WithSelectSqlQuery(Aws::String&& value) { SetSelectSqlQuery(std::move(value)); return *this;}

    /**
     * <p> The SQL query that is specified during <a>CreateDataSourceFromRedshift</a>.
     * Returns only if <code>Verbose</code> is true in GetDataSourceInput. </p>
     */
    inline RedshiftMetadata& WithSelectSqlQuery(const char* value) { SetSelectSqlQuery(value); return *this;}

  private:

    RedshiftDatabase m_redshiftDatabase;
    bool m_redshiftDatabaseHasBeenSet;

    Aws::String m_databaseUserName;
    bool m_databaseUserNameHasBeenSet;

    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
