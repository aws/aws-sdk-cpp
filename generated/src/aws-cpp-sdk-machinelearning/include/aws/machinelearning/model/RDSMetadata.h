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
    AWS_MACHINELEARNING_API RDSMetadata();
    AWS_MACHINELEARNING_API RDSMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RDSMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline const RDSDatabase& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const RDSDatabase& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(RDSDatabase&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline RDSMetadata& WithDatabase(const RDSDatabase& value) { SetDatabase(value); return *this;}
    inline RDSMetadata& WithDatabase(RDSDatabase&& value) { SetDatabase(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatabaseUserName() const{ return m_databaseUserName; }
    inline bool DatabaseUserNameHasBeenSet() const { return m_databaseUserNameHasBeenSet; }
    inline void SetDatabaseUserName(const Aws::String& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = value; }
    inline void SetDatabaseUserName(Aws::String&& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = std::move(value); }
    inline void SetDatabaseUserName(const char* value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName.assign(value); }
    inline RDSMetadata& WithDatabaseUserName(const Aws::String& value) { SetDatabaseUserName(value); return *this;}
    inline RDSMetadata& WithDatabaseUserName(Aws::String&& value) { SetDatabaseUserName(std::move(value)); return *this;}
    inline RDSMetadata& WithDatabaseUserName(const char* value) { SetDatabaseUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline const Aws::String& GetSelectSqlQuery() const{ return m_selectSqlQuery; }
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }
    inline void SetSelectSqlQuery(const Aws::String& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = value; }
    inline void SetSelectSqlQuery(Aws::String&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::move(value); }
    inline void SetSelectSqlQuery(const char* value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery.assign(value); }
    inline RDSMetadata& WithSelectSqlQuery(const Aws::String& value) { SetSelectSqlQuery(value); return *this;}
    inline RDSMetadata& WithSelectSqlQuery(Aws::String&& value) { SetSelectSqlQuery(std::move(value)); return *this;}
    inline RDSMetadata& WithSelectSqlQuery(const char* value) { SetSelectSqlQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }
    inline RDSMetadata& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}
    inline RDSMetadata& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}
    inline RDSMetadata& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline RDSMetadata& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline RDSMetadata& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline RDSMetadata& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline const Aws::String& GetDataPipelineId() const{ return m_dataPipelineId; }
    inline bool DataPipelineIdHasBeenSet() const { return m_dataPipelineIdHasBeenSet; }
    inline void SetDataPipelineId(const Aws::String& value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId = value; }
    inline void SetDataPipelineId(Aws::String&& value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId = std::move(value); }
    inline void SetDataPipelineId(const char* value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId.assign(value); }
    inline RDSMetadata& WithDataPipelineId(const Aws::String& value) { SetDataPipelineId(value); return *this;}
    inline RDSMetadata& WithDataPipelineId(Aws::String&& value) { SetDataPipelineId(std::move(value)); return *this;}
    inline RDSMetadata& WithDataPipelineId(const char* value) { SetDataPipelineId(value); return *this;}
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
