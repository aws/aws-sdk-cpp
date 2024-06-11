/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/SystemInstanceDeploymentStatus.h>
#include <aws/iotthingsgraph/model/DeploymentTarget.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that contains summary information about a system
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SystemInstanceSummary">AWS
   * API Reference</a></p>
   */
  class SystemInstanceSummary
  {
  public:
    AWS_IOTTHINGSGRAPH_API SystemInstanceSummary();
    AWS_IOTTHINGSGRAPH_API SystemInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API SystemInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the system instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SystemInstanceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SystemInstanceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SystemInstanceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the system instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SystemInstanceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SystemInstanceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SystemInstanceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the system instance.</p>
     */
    inline const SystemInstanceDeploymentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SystemInstanceDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SystemInstanceDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SystemInstanceSummary& WithStatus(const SystemInstanceDeploymentStatus& value) { SetStatus(value); return *this;}
    inline SystemInstanceSummary& WithStatus(SystemInstanceDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the system instance.</p>
     */
    inline const DeploymentTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const DeploymentTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(DeploymentTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline SystemInstanceSummary& WithTarget(const DeploymentTarget& value) { SetTarget(value); return *this;}
    inline SystemInstanceSummary& WithTarget(DeploymentTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Greengrass group where the system instance is deployed.</p>
     */
    inline const Aws::String& GetGreengrassGroupName() const{ return m_greengrassGroupName; }
    inline bool GreengrassGroupNameHasBeenSet() const { return m_greengrassGroupNameHasBeenSet; }
    inline void SetGreengrassGroupName(const Aws::String& value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName = value; }
    inline void SetGreengrassGroupName(Aws::String&& value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName = std::move(value); }
    inline void SetGreengrassGroupName(const char* value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName.assign(value); }
    inline SystemInstanceSummary& WithGreengrassGroupName(const Aws::String& value) { SetGreengrassGroupName(value); return *this;}
    inline SystemInstanceSummary& WithGreengrassGroupName(Aws::String&& value) { SetGreengrassGroupName(std::move(value)); return *this;}
    inline SystemInstanceSummary& WithGreengrassGroupName(const char* value) { SetGreengrassGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the system instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SystemInstanceSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SystemInstanceSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the system instance was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline SystemInstanceSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline SystemInstanceSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Greengrass group where the system instance is deployed.</p>
     */
    inline const Aws::String& GetGreengrassGroupId() const{ return m_greengrassGroupId; }
    inline bool GreengrassGroupIdHasBeenSet() const { return m_greengrassGroupIdHasBeenSet; }
    inline void SetGreengrassGroupId(const Aws::String& value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId = value; }
    inline void SetGreengrassGroupId(Aws::String&& value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId = std::move(value); }
    inline void SetGreengrassGroupId(const char* value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId.assign(value); }
    inline SystemInstanceSummary& WithGreengrassGroupId(const Aws::String& value) { SetGreengrassGroupId(value); return *this;}
    inline SystemInstanceSummary& WithGreengrassGroupId(Aws::String&& value) { SetGreengrassGroupId(std::move(value)); return *this;}
    inline SystemInstanceSummary& WithGreengrassGroupId(const char* value) { SetGreengrassGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Greengrass group where the system instance is
     * deployed.</p>
     */
    inline const Aws::String& GetGreengrassGroupVersionId() const{ return m_greengrassGroupVersionId; }
    inline bool GreengrassGroupVersionIdHasBeenSet() const { return m_greengrassGroupVersionIdHasBeenSet; }
    inline void SetGreengrassGroupVersionId(const Aws::String& value) { m_greengrassGroupVersionIdHasBeenSet = true; m_greengrassGroupVersionId = value; }
    inline void SetGreengrassGroupVersionId(Aws::String&& value) { m_greengrassGroupVersionIdHasBeenSet = true; m_greengrassGroupVersionId = std::move(value); }
    inline void SetGreengrassGroupVersionId(const char* value) { m_greengrassGroupVersionIdHasBeenSet = true; m_greengrassGroupVersionId.assign(value); }
    inline SystemInstanceSummary& WithGreengrassGroupVersionId(const Aws::String& value) { SetGreengrassGroupVersionId(value); return *this;}
    inline SystemInstanceSummary& WithGreengrassGroupVersionId(Aws::String&& value) { SetGreengrassGroupVersionId(std::move(value)); return *this;}
    inline SystemInstanceSummary& WithGreengrassGroupVersionId(const char* value) { SetGreengrassGroupVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SystemInstanceDeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    DeploymentTarget m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_greengrassGroupName;
    bool m_greengrassGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_greengrassGroupId;
    bool m_greengrassGroupIdHasBeenSet = false;

    Aws::String m_greengrassGroupVersionId;
    bool m_greengrassGroupVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
