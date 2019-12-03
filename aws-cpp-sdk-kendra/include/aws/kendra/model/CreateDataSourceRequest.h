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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceType.h>
#include <aws/kendra/model/DataSourceConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API CreateDataSourceRequest : public KendraRequest
  {
  public:
    CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the data source. A data source name can't be changed
     * without deleting and recreating the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that should be associated with this data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The type of repository that contains the data source.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of repository that contains the data source.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of repository that contains the data source.</p>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of repository that contains the data source.</p>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of repository that contains the data source.</p>
     */
    inline CreateDataSourceRequest& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of repository that contains the data source.</p>
     */
    inline CreateDataSourceRequest& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The connector configuration information that is required to access the
     * repository.</p>
     */
    inline const DataSourceConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The connector configuration information that is required to access the
     * repository.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The connector configuration information that is required to access the
     * repository.</p>
     */
    inline void SetConfiguration(const DataSourceConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The connector configuration information that is required to access the
     * repository.</p>
     */
    inline void SetConfiguration(DataSourceConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The connector configuration information that is required to access the
     * repository.</p>
     */
    inline CreateDataSourceRequest& WithConfiguration(const DataSourceConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The connector configuration information that is required to access the
     * repository.</p>
     */
    inline CreateDataSourceRequest& WithConfiguration(DataSourceConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description for the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the data source.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the data source.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline CreateDataSourceRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline CreateDataSourceRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>Sets the frequency that Amazon Kendra will check the documents in your
     * repository and update the index. If you don't set a schedule Amazon Kendra will
     * not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> operation to update the index.</p>
     */
    inline CreateDataSourceRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateDataSourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateDataSourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline CreateDataSourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    DataSourceType m_type;
    bool m_typeHasBeenSet;

    DataSourceConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
