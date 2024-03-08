/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingSelectionForGet">AWS
   * API Reference</a></p>
   */
  class RestoreTestingSelectionForGet
  {
  public:
    AWS_BACKUP_API RestoreTestingSelectionForGet();
    AWS_BACKUP_API RestoreTestingSelectionForGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForGet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline RestoreTestingSelectionForGet& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline RestoreTestingSelectionForGet& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline RestoreTestingSelectionForGet& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline RestoreTestingSelectionForGet& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline RestoreTestingSelectionForGet& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForGet& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForGet& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RestoreTestingSelectionForGet& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectedResourceArns() const{ return m_protectedResourceArns; }

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline bool ProtectedResourceArnsHasBeenSet() const { return m_protectedResourceArnsHasBeenSet; }

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline void SetProtectedResourceArns(const Aws::Vector<Aws::String>& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = value; }

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline void SetProtectedResourceArns(Aws::Vector<Aws::String>&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = std::move(value); }

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceArns(const Aws::Vector<Aws::String>& value) { SetProtectedResourceArns(value); return *this;}

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceArns(Aws::Vector<Aws::String>&& value) { SetProtectedResourceArns(std::move(value)); return *this;}

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForGet& AddProtectedResourceArns(const Aws::String& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(value); return *this; }

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForGet& AddProtectedResourceArns(Aws::String&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline RestoreTestingSelectionForGet& AddProtectedResourceArns(const char* value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(value); return *this; }


    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline const ProtectedResourceConditions& GetProtectedResourceConditions() const{ return m_protectedResourceConditions; }

    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline bool ProtectedResourceConditionsHasBeenSet() const { return m_protectedResourceConditionsHasBeenSet; }

    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline void SetProtectedResourceConditions(const ProtectedResourceConditions& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = value; }

    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline void SetProtectedResourceConditions(ProtectedResourceConditions&& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = std::move(value); }

    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceConditions(const ProtectedResourceConditions& value) { SetProtectedResourceConditions(value); return *this;}

    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceConditions(ProtectedResourceConditions&& value) { SetProtectedResourceConditions(std::move(value)); return *this;}


    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline const Aws::String& GetProtectedResourceType() const{ return m_protectedResourceType; }

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline bool ProtectedResourceTypeHasBeenSet() const { return m_protectedResourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetProtectedResourceType(const Aws::String& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetProtectedResourceType(Aws::String&& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetProtectedResourceType(const char* value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceType(const Aws::String& value) { SetProtectedResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceType(Aws::String&& value) { SetProtectedResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline RestoreTestingSelectionForGet& WithProtectedResourceType(const char* value) { SetProtectedResourceType(value); return *this;}


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
    inline RestoreTestingSelectionForGet& WithRestoreMetadataOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetRestoreMetadataOverrides(value); return *this;}

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreMetadataOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetRestoreMetadataOverrides(std::move(value)); return *this;}

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(const Aws::String& key, const Aws::String& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, value); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(Aws::String&& key, const Aws::String& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(const Aws::String& key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(Aws::String&& key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(const char* key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(Aws::String&& key, const char* value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(const char* key, const char* value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, value); return *this; }


    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = value; }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::move(value); }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName.assign(value); }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline RestoreTestingSelectionForGet& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}


    /**
     * <p>This is amount of hours (1 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline int GetValidationWindowHours() const{ return m_validationWindowHours; }

    /**
     * <p>This is amount of hours (1 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline bool ValidationWindowHoursHasBeenSet() const { return m_validationWindowHoursHasBeenSet; }

    /**
     * <p>This is amount of hours (1 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline void SetValidationWindowHours(int value) { m_validationWindowHoursHasBeenSet = true; m_validationWindowHours = value; }

    /**
     * <p>This is amount of hours (1 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline RestoreTestingSelectionForGet& WithValidationWindowHours(int value) { SetValidationWindowHours(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_protectedResourceArns;
    bool m_protectedResourceArnsHasBeenSet = false;

    ProtectedResourceConditions m_protectedResourceConditions;
    bool m_protectedResourceConditionsHasBeenSet = false;

    Aws::String m_protectedResourceType;
    bool m_protectedResourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_restoreMetadataOverrides;
    bool m_restoreMetadataOverridesHasBeenSet = false;

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
