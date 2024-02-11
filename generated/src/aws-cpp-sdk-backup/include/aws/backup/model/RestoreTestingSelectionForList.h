/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This contains metadata about a restore testing selection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingSelectionForList">AWS
   * API Reference</a></p>
   */
  class RestoreTestingSelectionForList
  {
  public:
    AWS_BACKUP_API RestoreTestingSelectionForList();
    AWS_BACKUP_API RestoreTestingSelectionForList(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is the date and time that a restore testing selection was created, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26,2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>This is the date and time that a restore testing selection was created, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26,2018 12:11:30.087 AM.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>This is the date and time that a restore testing selection was created, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26,2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>This is the date and time that a restore testing selection was created, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26,2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>This is the date and time that a restore testing selection was created, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26,2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingSelectionForList& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>This is the date and time that a restore testing selection was created, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26,2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingSelectionForList& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForList& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForList& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForList& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline const Aws::String& GetProtectedResourceType() const{ return m_protectedResourceType; }

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline bool ProtectedResourceTypeHasBeenSet() const { return m_protectedResourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetProtectedResourceType(const Aws::String& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetProtectedResourceType(Aws::String&& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetProtectedResourceType(const char* value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline RestoreTestingSelectionForList& WithProtectedResourceType(const Aws::String& value) { SetProtectedResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline RestoreTestingSelectionForList& WithProtectedResourceType(Aws::String&& value) { SetProtectedResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline RestoreTestingSelectionForList& WithProtectedResourceType(const char* value) { SetProtectedResourceType(value); return *this;}


    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline RestoreTestingSelectionForList& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline RestoreTestingSelectionForList& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name must consist of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline RestoreTestingSelectionForList& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = value; }

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::move(value); }

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName.assign(value); }

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline RestoreTestingSelectionForList& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline RestoreTestingSelectionForList& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}

    /**
     * <p>Unique name of a restore testing selection.</p>
     */
    inline RestoreTestingSelectionForList& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}


    /**
     * <p>This value represents the time, in hours, data is retained after a restore
     * test so that optional validation can be completed.</p> <p>Accepted value is an
     * integer between 0 and 168 (the hourly equivalent of seven days).</p>
     */
    inline int GetValidationWindowHours() const{ return m_validationWindowHours; }

    /**
     * <p>This value represents the time, in hours, data is retained after a restore
     * test so that optional validation can be completed.</p> <p>Accepted value is an
     * integer between 0 and 168 (the hourly equivalent of seven days).</p>
     */
    inline bool ValidationWindowHoursHasBeenSet() const { return m_validationWindowHoursHasBeenSet; }

    /**
     * <p>This value represents the time, in hours, data is retained after a restore
     * test so that optional validation can be completed.</p> <p>Accepted value is an
     * integer between 0 and 168 (the hourly equivalent of seven days).</p>
     */
    inline void SetValidationWindowHours(int value) { m_validationWindowHoursHasBeenSet = true; m_validationWindowHours = value; }

    /**
     * <p>This value represents the time, in hours, data is retained after a restore
     * test so that optional validation can be completed.</p> <p>Accepted value is an
     * integer between 0 and 168 (the hourly equivalent of seven days).</p>
     */
    inline RestoreTestingSelectionForList& WithValidationWindowHours(int value) { SetValidationWindowHours(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_protectedResourceType;
    bool m_protectedResourceTypeHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    Aws::String m_restoreTestingSelectionName;
    bool m_restoreTestingSelectionNameHasBeenSet = false;

    int m_validationWindowHours;
    bool m_validationWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
