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
  class AWS_MACHINELEARNING_API RDSMetadata
  {
  public:
    RDSMetadata();
    RDSMetadata(Aws::Utils::Json::JsonView jsonValue);
    RDSMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline const RDSDatabase& GetDatabase() const{ return m_database; }

    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline void SetDatabase(const RDSDatabase& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline void SetDatabase(RDSDatabase&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline RDSMetadata& WithDatabase(const RDSDatabase& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database details required to connect to an Amazon RDS.</p>
     */
    inline RDSMetadata& WithDatabase(RDSDatabase&& value) { SetDatabase(std::move(value)); return *this;}


    
    inline const Aws::String& GetDatabaseUserName() const{ return m_databaseUserName; }

    
    inline bool DatabaseUserNameHasBeenSet() const { return m_databaseUserNameHasBeenSet; }

    
    inline void SetDatabaseUserName(const Aws::String& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = value; }

    
    inline void SetDatabaseUserName(Aws::String&& value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName = std::move(value); }

    
    inline void SetDatabaseUserName(const char* value) { m_databaseUserNameHasBeenSet = true; m_databaseUserName.assign(value); }

    
    inline RDSMetadata& WithDatabaseUserName(const Aws::String& value) { SetDatabaseUserName(value); return *this;}

    
    inline RDSMetadata& WithDatabaseUserName(Aws::String&& value) { SetDatabaseUserName(std::move(value)); return *this;}

    
    inline RDSMetadata& WithDatabaseUserName(const char* value) { SetDatabaseUserName(value); return *this;}


    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline const Aws::String& GetSelectSqlQuery() const{ return m_selectSqlQuery; }

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline bool SelectSqlQueryHasBeenSet() const { return m_selectSqlQueryHasBeenSet; }

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline void SetSelectSqlQuery(const Aws::String& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = value; }

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline void SetSelectSqlQuery(Aws::String&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = std::move(value); }

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline void SetSelectSqlQuery(const char* value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery.assign(value); }

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline RDSMetadata& WithSelectSqlQuery(const Aws::String& value) { SetSelectSqlQuery(value); return *this;}

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline RDSMetadata& WithSelectSqlQuery(Aws::String&& value) { SetSelectSqlQuery(std::move(value)); return *this;}

    /**
     * <p>The SQL query that is supplied during <a>CreateDataSourceFromRDS</a>. Returns
     * only if <code>Verbose</code> is true in <code>GetDataSourceInput</code>. </p>
     */
    inline RDSMetadata& WithSelectSqlQuery(const char* value) { SetSelectSqlQuery(value); return *this;}


    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSMetadata& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSMetadata& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}

    /**
     * <p>The role (DataPipelineDefaultResourceRole) assumed by an Amazon EC2 instance
     * to carry out the copy task from Amazon RDS to Amazon S3. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSMetadata& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}


    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSMetadata& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSMetadata& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The role (DataPipelineDefaultRole) assumed by the Data Pipeline service to
     * monitor the progress of the copy task from Amazon RDS to Amazon S3. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-iam-roles.html">Role
     * templates</a> for data pipelines.</p>
     */
    inline RDSMetadata& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline const Aws::String& GetDataPipelineId() const{ return m_dataPipelineId; }

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline bool DataPipelineIdHasBeenSet() const { return m_dataPipelineIdHasBeenSet; }

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline void SetDataPipelineId(const Aws::String& value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId = value; }

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline void SetDataPipelineId(Aws::String&& value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId = std::move(value); }

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline void SetDataPipelineId(const char* value) { m_dataPipelineIdHasBeenSet = true; m_dataPipelineId.assign(value); }

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline RDSMetadata& WithDataPipelineId(const Aws::String& value) { SetDataPipelineId(value); return *this;}

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline RDSMetadata& WithDataPipelineId(Aws::String&& value) { SetDataPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Pipeline instance that is used to carry to copy data from
     * Amazon RDS to Amazon S3. You can use the ID to find details about the instance
     * in the Data Pipeline console.</p>
     */
    inline RDSMetadata& WithDataPipelineId(const char* value) { SetDataPipelineId(value); return *this;}

  private:

    RDSDatabase m_database;
    bool m_databaseHasBeenSet;

    Aws::String m_databaseUserName;
    bool m_databaseUserNameHasBeenSet;

    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    Aws::String m_dataPipelineId;
    bool m_dataPipelineIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
