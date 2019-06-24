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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/OpsItemNotification.h>
#include <aws/ssm/model/RelatedOpsItem.h>
#include <aws/ssm/model/OpsItemDataValue.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
   * and remediate operational issues impacting the performance and health of their
   * AWS resources. For more information, see <a
   * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
   * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItem">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API OpsItem
  {
  public:
    OpsItem();
    OpsItem(Aws::Utils::Json::JsonView jsonValue);
    OpsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline OpsItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline OpsItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS account that created the OpsItem.</p>
     */
    inline OpsItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline OpsItem& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline OpsItem& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The OpsItem description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The OpsItem description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The OpsItem description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The OpsItem description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The OpsItem description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The OpsItem description.</p>
     */
    inline OpsItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The OpsItem description.</p>
     */
    inline OpsItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The OpsItem description.</p>
     */
    inline OpsItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline OpsItem& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline OpsItem& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS account that last updated the OpsItem.</p>
     */
    inline OpsItem& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline OpsItem& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline OpsItem& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline const Aws::Vector<OpsItemNotification>& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline void SetNotifications(const Aws::Vector<OpsItemNotification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline void SetNotifications(Aws::Vector<OpsItemNotification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline OpsItem& WithNotifications(const Aws::Vector<OpsItemNotification>& value) { SetNotifications(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline OpsItem& WithNotifications(Aws::Vector<OpsItemNotification>&& value) { SetNotifications(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline OpsItem& AddNotifications(const OpsItemNotification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline OpsItem& AddNotifications(OpsItemNotification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline OpsItem& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline const Aws::Vector<RelatedOpsItem>& GetRelatedOpsItems() const{ return m_relatedOpsItems; }

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline bool RelatedOpsItemsHasBeenSet() const { return m_relatedOpsItemsHasBeenSet; }

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline void SetRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = value; }

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline void SetRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = std::move(value); }

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline OpsItem& WithRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { SetRelatedOpsItems(value); return *this;}

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline OpsItem& WithRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { SetRelatedOpsItems(std::move(value)); return *this;}

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline OpsItem& AddRelatedOpsItems(const RelatedOpsItem& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(value); return *this; }

    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline OpsItem& AddRelatedOpsItems(RelatedOpsItem&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const OpsItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetStatus(const OpsItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetStatus(OpsItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& WithStatus(const OpsItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& WithStatus(OpsItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItem& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItem& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItem& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline OpsItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline OpsItem& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline OpsItem& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline OpsItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline OpsItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline OpsItem& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline OpsItem& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline OpsItem& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or AWS Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline OpsItem& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const{ return m_operationalData; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { m_operationalDataHasBeenSet = true; m_operationalData = value; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::move(value); }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& WithOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { SetOperationalData(value); return *this;}

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& WithOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { SetOperationalData(std::move(value)); return *this;}

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& AddOperationalData(const Aws::String& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& AddOperationalData(Aws::String&& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), value); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& AddOperationalData(const Aws::String& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& AddOperationalData(Aws::String&& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& AddOperationalData(const char* key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p> <important> <p>Operational data keys
     * <i>can't</i> begin with the following: amazon, aws, amzn, ssm, /amazon, /aws,
     * /amzn, /ssm.</p> </important> <p>You can choose to make the data searchable by
     * other users in the account or you can restrict search access. Searchable data
     * means that all users with access to the OpsItem Overview page (as provided by
     * the <a>DescribeOpsItems</a> API action) can view and search on the specified
     * data. Operational data that is not searchable is only viewable by users who have
     * access to the OpsItem (as provided by the <a>GetOpsItem</a> API action).</p>
     * <p>Use the <code>/aws/resources</code> key in OperationalData to specify a
     * related resource in the request. Use the <code>/aws/automations</code> key in
     * OperationalData to associate an Automation runbook with the OpsItem. To view AWS
     * CLI example commands that use these keys, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline OpsItem& AddOperationalData(const char* key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }

  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Aws::Vector<OpsItemNotification> m_notifications;
    bool m_notificationsHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::Vector<RelatedOpsItem> m_relatedOpsItems;
    bool m_relatedOpsItemsHasBeenSet;

    OpsItemStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::Map<Aws::String, OpsItemDataValue> m_operationalData;
    bool m_operationalDataHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
