/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/Conditions.h>
#include <aws/backup/model/Condition.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Used to specify a set of resources to a backup plan.</p> <p>Specifying your
   * desired <code>Conditions</code>, <code>ListOfTags</code>,
   * <code>NotResources</code>, and/or <code>Resources</code> is recommended. If none
   * of these are specified, Backup will attempt to select all supported and opted-in
   * storage resources, which could have unintended cost implications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupSelection">AWS
   * API Reference</a></p>
   */
  class BackupSelection
  {
  public:
    AWS_BACKUP_API BackupSelection();
    AWS_BACKUP_API BackupSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetSelectionName() const{ return m_selectionName; }

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline bool SelectionNameHasBeenSet() const { return m_selectionNameHasBeenSet; }

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline void SetSelectionName(const Aws::String& value) { m_selectionNameHasBeenSet = true; m_selectionName = value; }

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline void SetSelectionName(Aws::String&& value) { m_selectionNameHasBeenSet = true; m_selectionName = std::move(value); }

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline void SetSelectionName(const char* value) { m_selectionNameHasBeenSet = true; m_selectionName.assign(value); }

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline BackupSelection& WithSelectionName(const Aws::String& value) { SetSelectionName(value); return *this;}

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline BackupSelection& WithSelectionName(Aws::String&& value) { SetSelectionName(std::move(value)); return *this;}

    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline BackupSelection& WithSelectionName(const char* value) { SetSelectionName(value); return *this;}


    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelection& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelection& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelection& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline BackupSelection& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline BackupSelection& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline BackupSelection& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline BackupSelection& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to assign to a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to assign many resources to a backup plan, consider a different
     * resource selection strategy, such as assigning all resources of a resource type
     * or refining your resource selection using tags.</p>
     */
    inline BackupSelection& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline const Aws::Vector<Condition>& GetListOfTags() const{ return m_listOfTags; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline bool ListOfTagsHasBeenSet() const { return m_listOfTagsHasBeenSet; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline void SetListOfTags(const Aws::Vector<Condition>& value) { m_listOfTagsHasBeenSet = true; m_listOfTags = value; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline void SetListOfTags(Aws::Vector<Condition>&& value) { m_listOfTagsHasBeenSet = true; m_listOfTags = std::move(value); }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline BackupSelection& WithListOfTags(const Aws::Vector<Condition>& value) { SetListOfTags(value); return *this;}

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline BackupSelection& WithListOfTags(Aws::Vector<Condition>&& value) { SetListOfTags(std::move(value)); return *this;}

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline BackupSelection& AddListOfTags(const Condition& value) { m_listOfTagsHasBeenSet = true; m_listOfTags.push_back(value); return *this; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>ListOfTags</code> differs from
     * <code>Conditions</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you assign all resources that match AT LEAST ONE condition (using
     * OR logic).</p> </li> <li> <p> <code>ListOfTags</code> only supports
     * <code>StringEquals</code>. <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>. </p> </li> </ul>
     */
    inline BackupSelection& AddListOfTags(Condition&& value) { m_listOfTagsHasBeenSet = true; m_listOfTags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotResources() const{ return m_notResources; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline bool NotResourcesHasBeenSet() const { return m_notResourcesHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline void SetNotResources(const Aws::Vector<Aws::String>& value) { m_notResourcesHasBeenSet = true; m_notResources = value; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline void SetNotResources(Aws::Vector<Aws::String>&& value) { m_notResourcesHasBeenSet = true; m_notResources = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline BackupSelection& WithNotResources(const Aws::Vector<Aws::String>& value) { SetNotResources(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline BackupSelection& WithNotResources(Aws::Vector<Aws::String>&& value) { SetNotResources(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline BackupSelection& AddNotResources(const Aws::String& value) { m_notResourcesHasBeenSet = true; m_notResources.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline BackupSelection& AddNotResources(Aws::String&& value) { m_notResourcesHasBeenSet = true; m_notResources.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) to exclude from a backup plan. The
     * maximum number of ARNs is 500 without wildcards, or 30 ARNs with wildcards.</p>
     * <p>If you need to exclude many resources from a backup plan, consider a
     * different resource selection strategy, such as assigning only one or a few
     * resource types or refining your resource selection using tags.</p>
     */
    inline BackupSelection& AddNotResources(const char* value) { m_notResourcesHasBeenSet = true; m_notResources.push_back(value); return *this; }


    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>Conditions</code> differs from
     * <code>ListOfTags</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you only assign the resources that match ALL conditions (using
     * AND logic).</p> </li> <li> <p> <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>.
     * <code>ListOfTags</code> only supports <code>StringEquals</code>.</p> </li> </ul>
     */
    inline const Conditions& GetConditions() const{ return m_conditions; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>Conditions</code> differs from
     * <code>ListOfTags</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you only assign the resources that match ALL conditions (using
     * AND logic).</p> </li> <li> <p> <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>.
     * <code>ListOfTags</code> only supports <code>StringEquals</code>.</p> </li> </ul>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>Conditions</code> differs from
     * <code>ListOfTags</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you only assign the resources that match ALL conditions (using
     * AND logic).</p> </li> <li> <p> <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>.
     * <code>ListOfTags</code> only supports <code>StringEquals</code>.</p> </li> </ul>
     */
    inline void SetConditions(const Conditions& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>Conditions</code> differs from
     * <code>ListOfTags</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you only assign the resources that match ALL conditions (using
     * AND logic).</p> </li> <li> <p> <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>.
     * <code>ListOfTags</code> only supports <code>StringEquals</code>.</p> </li> </ul>
     */
    inline void SetConditions(Conditions&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>Conditions</code> differs from
     * <code>ListOfTags</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you only assign the resources that match ALL conditions (using
     * AND logic).</p> </li> <li> <p> <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>.
     * <code>ListOfTags</code> only supports <code>StringEquals</code>.</p> </li> </ul>
     */
    inline BackupSelection& WithConditions(const Conditions& value) { SetConditions(value); return *this;}

    /**
     * <p>A list of conditions that you define to assign resources to your backup plans
     * using tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/CreatedByCryo", "ConditionValue": "true" },</code>. Condition
     * operators are case sensitive.</p> <p> <code>Conditions</code> differs from
     * <code>ListOfTags</code> as follows:</p> <ul> <li> <p>When you specify more than
     * one condition, you only assign the resources that match ALL conditions (using
     * AND logic).</p> </li> <li> <p> <code>Conditions</code> supports
     * <code>StringEquals</code>, <code>StringLike</code>,
     * <code>StringNotEquals</code>, and <code>StringNotLike</code>.
     * <code>ListOfTags</code> only supports <code>StringEquals</code>.</p> </li> </ul>
     */
    inline BackupSelection& WithConditions(Conditions&& value) { SetConditions(std::move(value)); return *this;}

  private:

    Aws::String m_selectionName;
    bool m_selectionNameHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<Condition> m_listOfTags;
    bool m_listOfTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notResources;
    bool m_notResourcesHasBeenSet = false;

    Conditions m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
