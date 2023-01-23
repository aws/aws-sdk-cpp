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
    AWS_ECS_API CapacityProvider();
    AWS_ECS_API CapacityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API CapacityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProviderArn() const{ return m_capacityProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline bool CapacityProviderArnHasBeenSet() const { return m_capacityProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline void SetCapacityProviderArn(const Aws::String& value) { m_capacityProviderArnHasBeenSet = true; m_capacityProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline void SetCapacityProviderArn(Aws::String&& value) { m_capacityProviderArnHasBeenSet = true; m_capacityProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline void SetCapacityProviderArn(const char* value) { m_capacityProviderArnHasBeenSet = true; m_capacityProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline CapacityProvider& WithCapacityProviderArn(const Aws::String& value) { SetCapacityProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline CapacityProvider& WithCapacityProviderArn(Aws::String&& value) { SetCapacityProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the capacity provider.</p>
     */
    inline CapacityProvider& WithCapacityProviderArn(const char* value) { SetCapacityProviderArn(value); return *this;}


    /**
     * <p>The name of the capacity provider.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline CapacityProvider& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline CapacityProvider& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity provider.</p>
     */
    inline CapacityProvider& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline const CapacityProviderStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline void SetStatus(const CapacityProviderStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline void SetStatus(CapacityProviderStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline CapacityProvider& WithStatus(const CapacityProviderStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the capacity provider. Only capacity providers in an
     * <code>ACTIVE</code> state can be used in a cluster. When a capacity provider is
     * successfully deleted, it has an <code>INACTIVE</code> status.</p>
     */
    inline CapacityProvider& WithStatus(CapacityProviderStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline const AutoScalingGroupProvider& GetAutoScalingGroupProvider() const{ return m_autoScalingGroupProvider; }

    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline bool AutoScalingGroupProviderHasBeenSet() const { return m_autoScalingGroupProviderHasBeenSet; }

    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline void SetAutoScalingGroupProvider(const AutoScalingGroupProvider& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = value; }

    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline void SetAutoScalingGroupProvider(AutoScalingGroupProvider&& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = std::move(value); }

    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline CapacityProvider& WithAutoScalingGroupProvider(const AutoScalingGroupProvider& value) { SetAutoScalingGroupProvider(value); return *this;}

    /**
     * <p>The Auto Scaling group settings for the capacity provider.</p>
     */
    inline CapacityProvider& WithAutoScalingGroupProvider(AutoScalingGroupProvider&& value) { SetAutoScalingGroupProvider(std::move(value)); return *this;}


    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline const CapacityProviderUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline void SetUpdateStatus(const CapacityProviderUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline void SetUpdateStatus(CapacityProviderUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline CapacityProvider& WithUpdateStatus(const CapacityProviderUpdateStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The update status of the capacity provider. The following are the possible
     * states that is returned.</p> <dl> <dt>DELETE_IN_PROGRESS</dt> <dd> <p>The
     * capacity provider is in the process of being deleted.</p> </dd>
     * <dt>DELETE_COMPLETE</dt> <dd> <p>The capacity provider was successfully deleted
     * and has an <code>INACTIVE</code> status.</p> </dd> <dt>DELETE_FAILED</dt> <dd>
     * <p>The capacity provider can't be deleted. The update status reason provides
     * further details about why the delete failed.</p> </dd> </dl>
     */
    inline CapacityProvider& WithUpdateStatus(CapacityProviderUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline const Aws::String& GetUpdateStatusReason() const{ return m_updateStatusReason; }

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline bool UpdateStatusReasonHasBeenSet() const { return m_updateStatusReasonHasBeenSet; }

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline void SetUpdateStatusReason(const Aws::String& value) { m_updateStatusReasonHasBeenSet = true; m_updateStatusReason = value; }

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline void SetUpdateStatusReason(Aws::String&& value) { m_updateStatusReasonHasBeenSet = true; m_updateStatusReason = std::move(value); }

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline void SetUpdateStatusReason(const char* value) { m_updateStatusReasonHasBeenSet = true; m_updateStatusReason.assign(value); }

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline CapacityProvider& WithUpdateStatusReason(const Aws::String& value) { SetUpdateStatusReason(value); return *this;}

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline CapacityProvider& WithUpdateStatusReason(Aws::String&& value) { SetUpdateStatusReason(std::move(value)); return *this;}

    /**
     * <p>The update status reason. This provides further details about the update
     * status for the capacity provider.</p>
     */
    inline CapacityProvider& WithUpdateStatusReason(const char* value) { SetUpdateStatusReason(value); return *this;}


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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

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
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

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
    inline CapacityProvider& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

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
    inline CapacityProvider& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

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
    inline CapacityProvider& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

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
    inline CapacityProvider& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capacityProviderArn;
    bool m_capacityProviderArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapacityProviderStatus m_status;
    bool m_statusHasBeenSet = false;

    AutoScalingGroupProvider m_autoScalingGroupProvider;
    bool m_autoScalingGroupProviderHasBeenSet = false;

    CapacityProviderUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_updateStatusReason;
    bool m_updateStatusReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
