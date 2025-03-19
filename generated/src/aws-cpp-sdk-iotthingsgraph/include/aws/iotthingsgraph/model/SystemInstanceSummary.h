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
    AWS_IOTTHINGSGRAPH_API SystemInstanceSummary() = default;
    AWS_IOTTHINGSGRAPH_API SystemInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API SystemInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the system instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SystemInstanceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the system instance.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SystemInstanceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the system instance.</p>
     */
    inline SystemInstanceDeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SystemInstanceDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SystemInstanceSummary& WithStatus(SystemInstanceDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the system instance.</p>
     */
    inline DeploymentTarget GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(DeploymentTarget value) { m_targetHasBeenSet = true; m_target = value; }
    inline SystemInstanceSummary& WithTarget(DeploymentTarget value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Greengrass group where the system instance is deployed.</p>
     */
    inline const Aws::String& GetGreengrassGroupName() const { return m_greengrassGroupName; }
    inline bool GreengrassGroupNameHasBeenSet() const { return m_greengrassGroupNameHasBeenSet; }
    template<typename GreengrassGroupNameT = Aws::String>
    void SetGreengrassGroupName(GreengrassGroupNameT&& value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName = std::forward<GreengrassGroupNameT>(value); }
    template<typename GreengrassGroupNameT = Aws::String>
    SystemInstanceSummary& WithGreengrassGroupName(GreengrassGroupNameT&& value) { SetGreengrassGroupName(std::forward<GreengrassGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the system instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SystemInstanceSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the system instance was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SystemInstanceSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Greengrass group where the system instance is deployed.</p>
     */
    inline const Aws::String& GetGreengrassGroupId() const { return m_greengrassGroupId; }
    inline bool GreengrassGroupIdHasBeenSet() const { return m_greengrassGroupIdHasBeenSet; }
    template<typename GreengrassGroupIdT = Aws::String>
    void SetGreengrassGroupId(GreengrassGroupIdT&& value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId = std::forward<GreengrassGroupIdT>(value); }
    template<typename GreengrassGroupIdT = Aws::String>
    SystemInstanceSummary& WithGreengrassGroupId(GreengrassGroupIdT&& value) { SetGreengrassGroupId(std::forward<GreengrassGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Greengrass group where the system instance is
     * deployed.</p>
     */
    inline const Aws::String& GetGreengrassGroupVersionId() const { return m_greengrassGroupVersionId; }
    inline bool GreengrassGroupVersionIdHasBeenSet() const { return m_greengrassGroupVersionIdHasBeenSet; }
    template<typename GreengrassGroupVersionIdT = Aws::String>
    void SetGreengrassGroupVersionId(GreengrassGroupVersionIdT&& value) { m_greengrassGroupVersionIdHasBeenSet = true; m_greengrassGroupVersionId = std::forward<GreengrassGroupVersionIdT>(value); }
    template<typename GreengrassGroupVersionIdT = Aws::String>
    SystemInstanceSummary& WithGreengrassGroupVersionId(GreengrassGroupVersionIdT&& value) { SetGreengrassGroupVersionId(std::forward<GreengrassGroupVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SystemInstanceDeploymentStatus m_status{SystemInstanceDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DeploymentTarget m_target{DeploymentTarget::NOT_SET};
    bool m_targetHasBeenSet = false;

    Aws::String m_greengrassGroupName;
    bool m_greengrassGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_greengrassGroupId;
    bool m_greengrassGroupIdHasBeenSet = false;

    Aws::String m_greengrassGroupVersionId;
    bool m_greengrassGroupVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
