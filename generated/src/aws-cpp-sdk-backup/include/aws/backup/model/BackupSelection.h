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
   * <p>Used to specify a set of resources to a backup plan.</p> <p>We recommend that
   * you specify conditions, tags, or resources to include or exclude. Otherwise,
   * Backup attempts to select all supported and opted-in storage resources, which
   * could have unintended cost implications.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/assigning-resources.html#assigning-resources-json">Assigning
   * resources programmatically</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupSelection">AWS
   * API Reference</a></p>
   */
  class BackupSelection
  {
  public:
    AWS_BACKUP_API BackupSelection() = default;
    AWS_BACKUP_API BackupSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of a resource selection document. Must contain 1 to 50
     * alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetSelectionName() const { return m_selectionName; }
    inline bool SelectionNameHasBeenSet() const { return m_selectionNameHasBeenSet; }
    template<typename SelectionNameT = Aws::String>
    void SetSelectionName(SelectionNameT&& value) { m_selectionNameHasBeenSet = true; m_selectionName = std::forward<SelectionNameT>(value); }
    template<typename SelectionNameT = Aws::String>
    BackupSelection& WithSelectionName(SelectionNameT&& value) { SetSelectionName(std::forward<SelectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that Backup uses to authenticate when backing up the
     * target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    BackupSelection& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the resources to assign to a backup plan.
     * The maximum number of ARNs is 500 without wildcards, or 30 ARNs with
     * wildcards.</p> <p>If you need to assign many resources to a backup plan,
     * consider a different resource selection strategy, such as assigning all
     * resources of a resource type or refining your resource selection using tags.</p>
     * <p>If you specify multiple ARNs, the resources much match any of the ARNs (OR
     * logic).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    BackupSelection& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    BackupSelection& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditions that you define to assign resources to your backup plans using
     * tags. For example, <code>"StringEquals": { "ConditionKey": "backup",
     * "ConditionValue": "daily"}</code>.</p> <p> <code>ListOfTags</code> supports only
     * <code>StringEquals</code>. Condition operators are case sensitive.</p> <p>If you
     * specify multiple conditions, the resources much match any of the conditions (OR
     * logic).</p>
     */
    inline const Aws::Vector<Condition>& GetListOfTags() const { return m_listOfTags; }
    inline bool ListOfTagsHasBeenSet() const { return m_listOfTagsHasBeenSet; }
    template<typename ListOfTagsT = Aws::Vector<Condition>>
    void SetListOfTags(ListOfTagsT&& value) { m_listOfTagsHasBeenSet = true; m_listOfTags = std::forward<ListOfTagsT>(value); }
    template<typename ListOfTagsT = Aws::Vector<Condition>>
    BackupSelection& WithListOfTags(ListOfTagsT&& value) { SetListOfTags(std::forward<ListOfTagsT>(value)); return *this;}
    template<typename ListOfTagsT = Condition>
    BackupSelection& AddListOfTags(ListOfTagsT&& value) { m_listOfTagsHasBeenSet = true; m_listOfTags.emplace_back(std::forward<ListOfTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the resources to exclude from a backup
     * plan. The maximum number of ARNs is 500 without wildcards, or 30 ARNs with
     * wildcards.</p> <p>If you need to exclude many resources from a backup plan,
     * consider a different resource selection strategy, such as assigning only one or
     * a few resource types or refining your resource selection using tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotResources() const { return m_notResources; }
    inline bool NotResourcesHasBeenSet() const { return m_notResourcesHasBeenSet; }
    template<typename NotResourcesT = Aws::Vector<Aws::String>>
    void SetNotResources(NotResourcesT&& value) { m_notResourcesHasBeenSet = true; m_notResources = std::forward<NotResourcesT>(value); }
    template<typename NotResourcesT = Aws::Vector<Aws::String>>
    BackupSelection& WithNotResources(NotResourcesT&& value) { SetNotResources(std::forward<NotResourcesT>(value)); return *this;}
    template<typename NotResourcesT = Aws::String>
    BackupSelection& AddNotResources(NotResourcesT&& value) { m_notResourcesHasBeenSet = true; m_notResources.emplace_back(std::forward<NotResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditions that you define to assign resources to your backup plans using
     * tags. For example, <code>"StringEquals": { "ConditionKey":
     * "aws:ResourceTag/backup", "ConditionValue": "daily" }</code>.</p> <p>
     * <code>Conditions</code> supports <code>StringEquals</code>,
     * <code>StringLike</code>, <code>StringNotEquals</code>, and
     * <code>StringNotLike</code>. Condition operators are case sensitive.</p> <p>If
     * you specify multiple conditions, the resources much match all conditions (AND
     * logic).</p>
     */
    inline const Conditions& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Conditions>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Conditions>
    BackupSelection& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    ///@}
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
