/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/CapacityProviderStatus.h>
#include <aws/ecs/model/AutoScalingGroupProvider.h>
#include <aws/ecs/model/CapacityProviderUpdateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Tag.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The details for a capacity provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CapacityProvider">AWS
   * API Reference</a></p>
   */
  class CapacityProvider
  {
  public:
    AWS_ECS_API CapacityProvider() = default;
    AWS_ECS_API CapacityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API CapacityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
    inline bool CapacityProviderArnHasBeenSet() const { return m_capacityProviderArnHasBeenSet; }
    template<typename CapacityProviderArnT = Aws::String>
    void SetCapacityProviderArn(CapacityProviderArnT&& value) { m_capacityProviderArnHasBeenSet = true; m_capacityProviderArn = std::forward<CapacityProviderArnT>(value); }
    template<typename CapacityProviderArnT = Aws::String>
    CapacityProvider& WithCapacityProviderArn(CapacityProviderArnT&& value) { SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the capacity provider.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CapacityProvider& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline CapacityProviderStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CapacityProviderStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CapacityProvider& WithStatus(CapacityProviderStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline const AutoScalingGroupProvider& GetAutoScalingGroupProvider() const { return m_autoScalingGroupProvider; }
    inline bool AutoScalingGroupProviderHasBeenSet() const { return m_autoScalingGroupProviderHasBeenSet; }
    template<typename AutoScalingGroupProviderT = AutoScalingGroupProvider>
    void SetAutoScalingGroupProvider(AutoScalingGroupProviderT&& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = std::forward<AutoScalingGroupProviderT>(value); }
    template<typename AutoScalingGroupProviderT = AutoScalingGroupProvider>
    CapacityProvider& WithAutoScalingGroupProvider(AutoScalingGroupProviderT&& value) { SetAutoScalingGroupProvider(std::forward<AutoScalingGroupProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline CapacityProviderUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(CapacityProviderUpdateStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline CapacityProvider& WithUpdateStatus(CapacityProviderUpdateStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline const Aws::String& GetUpdateStatusReason() const { return m_updateStatusReason; }
    inline bool UpdateStatusReasonHasBeenSet() const { return m_updateStatusReasonHasBeenSet; }
    template<typename UpdateStatusReasonT = Aws::String>
    void SetUpdateStatusReason(UpdateStatusReasonT&& value) { m_updateStatusReasonHasBeenSet = true; m_updateStatusReason = std::forward<UpdateStatusReasonT>(value); }
    template<typename UpdateStatusReasonT = Aws::String>
    CapacityProvider& WithUpdateStatusReason(UpdateStatusReasonT&& value) { SetUpdateStatusReason(std::forward<UpdateStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the capacity provider to help you categorize
     * and organize it. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CapacityProvider& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CapacityProvider& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_capacityProviderArn;
    bool m_capacityProviderArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapacityProviderStatus m_status{CapacityProviderStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AutoScalingGroupProvider m_autoScalingGroupProvider;
    bool m_autoScalingGroupProviderHasBeenSet = false;

    CapacityProviderUpdateStatus m_updateStatus{CapacityProviderUpdateStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_updateStatusReason;
    bool m_updateStatusReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
