/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateBlueGreenDeploymentRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateBlueGreenDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBlueGreenDeployment"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentName() const{ return m_blueGreenDeploymentName; }

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline bool BlueGreenDeploymentNameHasBeenSet() const { return m_blueGreenDeploymentNameHasBeenSet; }

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentName(const Aws::String& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = value; }

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentName(Aws::String&& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = std::move(value); }

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentName(const char* value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName.assign(value); }

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline CreateBlueGreenDeploymentRequest& WithBlueGreenDeploymentName(const Aws::String& value) { SetBlueGreenDeploymentName(value); return *this;}

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline CreateBlueGreenDeploymentRequest& WithBlueGreenDeploymentName(Aws::String&& value) { SetBlueGreenDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline CreateBlueGreenDeploymentRequest& WithBlueGreenDeploymentName(const char* value) { SetBlueGreenDeploymentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline const Aws::String& GetTargetEngineVersion() const{ return m_targetEngineVersion; }

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline bool TargetEngineVersionHasBeenSet() const { return m_targetEngineVersionHasBeenSet; }

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline void SetTargetEngineVersion(const Aws::String& value) { m_targetEngineVersionHasBeenSet = true; m_targetEngineVersion = value; }

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline void SetTargetEngineVersion(Aws::String&& value) { m_targetEngineVersionHasBeenSet = true; m_targetEngineVersion = std::move(value); }

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline void SetTargetEngineVersion(const char* value) { m_targetEngineVersionHasBeenSet = true; m_targetEngineVersion.assign(value); }

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetEngineVersion(const Aws::String& value) { SetTargetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetEngineVersion(Aws::String&& value) { SetTargetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetEngineVersion(const char* value) { SetTargetEngineVersion(value); return *this;}


    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline const Aws::String& GetTargetDBParameterGroupName() const{ return m_targetDBParameterGroupName; }

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline bool TargetDBParameterGroupNameHasBeenSet() const { return m_targetDBParameterGroupNameHasBeenSet; }

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline void SetTargetDBParameterGroupName(const Aws::String& value) { m_targetDBParameterGroupNameHasBeenSet = true; m_targetDBParameterGroupName = value; }

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline void SetTargetDBParameterGroupName(Aws::String&& value) { m_targetDBParameterGroupNameHasBeenSet = true; m_targetDBParameterGroupName = std::move(value); }

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline void SetTargetDBParameterGroupName(const char* value) { m_targetDBParameterGroupNameHasBeenSet = true; m_targetDBParameterGroupName.assign(value); }

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetDBParameterGroupName(const Aws::String& value) { SetTargetDBParameterGroupName(value); return *this;}

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetDBParameterGroupName(Aws::String&& value) { SetTargetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetDBParameterGroupName(const char* value) { SetTargetDBParameterGroupName(value); return *this;}


    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline const Aws::String& GetTargetDBClusterParameterGroupName() const{ return m_targetDBClusterParameterGroupName; }

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline bool TargetDBClusterParameterGroupNameHasBeenSet() const { return m_targetDBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline void SetTargetDBClusterParameterGroupName(const Aws::String& value) { m_targetDBClusterParameterGroupNameHasBeenSet = true; m_targetDBClusterParameterGroupName = value; }

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline void SetTargetDBClusterParameterGroupName(Aws::String&& value) { m_targetDBClusterParameterGroupNameHasBeenSet = true; m_targetDBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline void SetTargetDBClusterParameterGroupName(const char* value) { m_targetDBClusterParameterGroupNameHasBeenSet = true; m_targetDBClusterParameterGroupName.assign(value); }

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetDBClusterParameterGroupName(const Aws::String& value) { SetTargetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetDBClusterParameterGroupName(Aws::String&& value) { SetTargetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTargetDBClusterParameterGroupName(const char* value) { SetTargetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline CreateBlueGreenDeploymentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_blueGreenDeploymentName;
    bool m_blueGreenDeploymentNameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_targetEngineVersion;
    bool m_targetEngineVersionHasBeenSet = false;

    Aws::String m_targetDBParameterGroupName;
    bool m_targetDBParameterGroupNameHasBeenSet = false;

    Aws::String m_targetDBClusterParameterGroupName;
    bool m_targetDBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
