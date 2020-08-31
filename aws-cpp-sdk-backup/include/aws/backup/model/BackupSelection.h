/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Used to specify a set of resources to a backup plan.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupSelection">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API BackupSelection
  {
  public:
    BackupSelection();
    BackupSelection(Aws::Utils::Json::JsonView jsonValue);
    BackupSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline const Aws::String& GetSelectionName() const{ return m_selectionName; }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline bool SelectionNameHasBeenSet() const { return m_selectionNameHasBeenSet; }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline void SetSelectionName(const Aws::String& value) { m_selectionNameHasBeenSet = true; m_selectionName = value; }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline void SetSelectionName(Aws::String&& value) { m_selectionNameHasBeenSet = true; m_selectionName = std::move(value); }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline void SetSelectionName(const char* value) { m_selectionNameHasBeenSet = true; m_selectionName.assign(value); }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline BackupSelection& WithSelectionName(const Aws::String& value) { SetSelectionName(value); return *this;}

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline BackupSelection& WithSelectionName(Aws::String&& value) { SetSelectionName(std::move(value)); return *this;}

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline BackupSelection& WithSelectionName(const char* value) { SetSelectionName(value); return *this;}


    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelection& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelection& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that AWS Backup uses to authenticate when backing up
     * the target resource; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelection& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline BackupSelection& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline BackupSelection& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline BackupSelection& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline BackupSelection& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that contain Amazon Resource Names (ARNs) of resources to
     * assign to a backup plan.</p>
     */
    inline BackupSelection& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline const Aws::Vector<Condition>& GetListOfTags() const{ return m_listOfTags; }

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline bool ListOfTagsHasBeenSet() const { return m_listOfTagsHasBeenSet; }

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline void SetListOfTags(const Aws::Vector<Condition>& value) { m_listOfTagsHasBeenSet = true; m_listOfTags = value; }

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline void SetListOfTags(Aws::Vector<Condition>&& value) { m_listOfTagsHasBeenSet = true; m_listOfTags = std::move(value); }

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline BackupSelection& WithListOfTags(const Aws::Vector<Condition>& value) { SetListOfTags(value); return *this;}

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline BackupSelection& WithListOfTags(Aws::Vector<Condition>&& value) { SetListOfTags(std::move(value)); return *this;}

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline BackupSelection& AddListOfTags(const Condition& value) { m_listOfTagsHasBeenSet = true; m_listOfTags.push_back(value); return *this; }

    /**
     * <p>An array of conditions used to specify a set of resources to assign to a
     * backup plan; for example, <code>"StringEquals": {"ec2:ResourceTag/Department":
     * "accounting"</code>.</p>
     */
    inline BackupSelection& AddListOfTags(Condition&& value) { m_listOfTagsHasBeenSet = true; m_listOfTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_selectionName;
    bool m_selectionNameHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet;

    Aws::Vector<Condition> m_listOfTags;
    bool m_listOfTagsHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
