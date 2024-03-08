/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/ProtectedResourceConditions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingSelectionForUpdate">AWS
   * API Reference</a></p>
   */
  class RestoreTestingSelectionForUpdate
  {
  public:
    AWS_BACKUP_API RestoreTestingSelectionForUpdate();
    AWS_BACKUP_API RestoreTestingSelectionForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline RestoreTestingSelectionForUpdate& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectedResourceArns() const{ return m_protectedResourceArns; }

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline bool ProtectedResourceArnsHasBeenSet() const { return m_protectedResourceArnsHasBeenSet; }

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline void SetProtectedResourceArns(const Aws::Vector<Aws::String>& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = value; }

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline void SetProtectedResourceArns(Aws::Vector<Aws::String>&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = std::move(value); }

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithProtectedResourceArns(const Aws::Vector<Aws::String>& value) { SetProtectedResourceArns(value); return *this;}

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithProtectedResourceArns(Aws::Vector<Aws::String>&& value) { SetProtectedResourceArns(std::move(value)); return *this;}

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddProtectedResourceArns(const Aws::String& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(value); return *this; }

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddProtectedResourceArns(Aws::String&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddProtectedResourceArns(const char* value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(value); return *this; }


    /**
     * <p>A list of conditions that you define for resources in your restore testing
     * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
     * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
     * are case sensitive.</p>
     */
    inline const ProtectedResourceConditions& GetProtectedResourceConditions() const{ return m_protectedResourceConditions; }

    /**
     * <p>A list of conditions that you define for resources in your restore testing
     * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
     * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
     * are case sensitive.</p>
     */
    inline bool ProtectedResourceConditionsHasBeenSet() const { return m_protectedResourceConditionsHasBeenSet; }

    /**
     * <p>A list of conditions that you define for resources in your restore testing
     * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
     * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
     * are case sensitive.</p>
     */
    inline void SetProtectedResourceConditions(const ProtectedResourceConditions& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = value; }

    /**
     * <p>A list of conditions that you define for resources in your restore testing
     * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
     * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
     * are case sensitive.</p>
     */
    inline void SetProtectedResourceConditions(ProtectedResourceConditions&& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = std::move(value); }

    /**
     * <p>A list of conditions that you define for resources in your restore testing
     * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
     * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
     * are case sensitive.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithProtectedResourceConditions(const ProtectedResourceConditions& value) { SetProtectedResourceConditions(value); return *this;}

    /**
     * <p>A list of conditions that you define for resources in your restore testing
     * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
     * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
     * are case sensitive.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithProtectedResourceConditions(ProtectedResourceConditions&& value) { SetProtectedResourceConditions(std::move(value)); return *this;}


    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRestoreMetadataOverrides() const{ return m_restoreMetadataOverrides; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline bool RestoreMetadataOverridesHasBeenSet() const { return m_restoreMetadataOverridesHasBeenSet; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline void SetRestoreMetadataOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides = value; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline void SetRestoreMetadataOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides = std::move(value); }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithRestoreMetadataOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetRestoreMetadataOverrides(value); return *this;}

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& WithRestoreMetadataOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetRestoreMetadataOverrides(std::move(value)); return *this;}

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(const Aws::String& key, const Aws::String& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, value); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(Aws::String&& key, const Aws::String& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(const Aws::String& key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(Aws::String&& key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(const char* key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(Aws::String&& key, const char* value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(const char* key, const char* value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, value); return *this; }


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
    inline RestoreTestingSelectionForUpdate& WithValidationWindowHours(int value) { SetValidationWindowHours(value); return *this;}

  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_protectedResourceArns;
    bool m_protectedResourceArnsHasBeenSet = false;

    ProtectedResourceConditions m_protectedResourceConditions;
    bool m_protectedResourceConditionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_restoreMetadataOverrides;
    bool m_restoreMetadataOverridesHasBeenSet = false;

    int m_validationWindowHours;
    bool m_validationWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
