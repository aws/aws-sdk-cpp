/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/RDSDatabase.h>
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
   * <p>The datasource details that are specific to Amazon RDS.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RDSMetadata">AWS
   * API Reference</a></p>
   */
  class RDSMetadata
  {
  public:
    AWS_MACHINELEARNING_API RDSMetadata() = default;
    AWS_MACHINELEARNING_API RDSMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RDSMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline const RDSDatabase& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = RDSDatabase>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = RDSDatabase>
    RDSMetadata& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatabaseUserName() const { return m_databaseUserName; }
    inline bool DatabaseUserNameHasBeenSet() const { return m_databaseUserNameHasBeenSet; }
    template<typename DatabaseUserNameT = Aws::String>
    void SetDatabaseUserName(DatabaseUserNameT&& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = std::forward<DatabaseUserNameT>(value); }
    template<typename DatabaseUserNameT = Aws::String>
    RDSMetadata& WithDatabaseUserName(DatabaseUserNameT&& value) { SetDatabaseUserName(std::forward<DatabaseUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline const Aws::String& GetSelectSqlQuery() const { return m_selectSqlQuery; }
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }
    template<typename SelectSqlQueryT = Aws::String>
    void SetSelectSqlQuery(SelectSqlQueryT&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::forward<SelectSqlQueryT>(value); }
    template<typename SelectSqlQueryT = Aws::String>
    RDSMetadata& WithSelectSqlQuery(SelectSqlQueryT&& value) { SetSelectSqlQuery(std::forward<SelectSqlQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetResourceRole() const { return m_resourceRole; }
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }
    template<typename ResourceRoleT = Aws::String>
    void SetResourceRole(ResourceRoleT&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::forward<ResourceRoleT>(value); }
    template<typename ResourceRoleT = Aws::String>
    RDSMetadata& WithResourceRole(ResourceRoleT&& value) { SetResourceRole(std::forward<ResourceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    RDSMetadata& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline const Aws::String& GetDataPipelineId() const { return m_dataPipelineId; }
    inline bool DataPipelineIdHasBeenSet() const { return m_dataPipelineIdHasBeenSet; }
    template<typename DataPipelineIdT = Aws::String>
    void SetDataPipelineId(DataPipelineIdT&& value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId = std::forward<DataPipelineIdT>(value); }
    template<typename DataPipelineIdT = Aws::String>
    RDSMetadata& WithDataPipelineId(DataPipelineIdT&& value) { SetDataPipelineId(std::forward<DataPipelineIdT>(value)); return *this;}
    ///@}
  private:

    RDSDatabase m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_databaseUserName;
    bool m_databaseUserNameHasBeenSet = false;

    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet = false;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::String m_dataPipelineId;
    bool m_dataPipelineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
