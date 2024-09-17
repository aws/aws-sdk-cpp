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
   * <p>This contains metadata about a specific restore testing selection.</p>
   * <p>ProtectedResourceType is required, such as Amazon EBS or Amazon EC2.</p>
   * <p>This consists of <code>RestoreTestingSelectionName</code>,
   * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
   * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
   * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
   * resource type can have one single value.</p> <p>A restore testing selection can
   * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
   * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
   * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
   * <p> <code>ProtectedResourceConditions</code> examples include as
   * <code>StringEquals</code> and <code>StringNotEquals</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingSelectionForCreate">AWS
   * API Reference</a></p>
   */
  class RestoreTestingSelectionForCreate
  {
  public:
    AWS_BACKUP_API RestoreTestingSelectionForCreate();
    AWS_BACKUP_API RestoreTestingSelectionForCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>. </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline RestoreTestingSelectionForCreate& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline RestoreTestingSelectionForCreate& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline RestoreTestingSelectionForCreate& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each protected resource can be filtered by its specific ARNs, such as
     * <code>ProtectedResourceArns: ["arn:aws:...", "arn:aws:..."]</code> or by a
     * wildcard: <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectedResourceArns() const{ return m_protectedResourceArns; }
    inline bool ProtectedResourceArnsHasBeenSet() const { return m_protectedResourceArnsHasBeenSet; }
    inline void SetProtectedResourceArns(const Aws::Vector<Aws::String>& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = value; }
    inline void SetProtectedResourceArns(Aws::Vector<Aws::String>&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = std::move(value); }
    inline RestoreTestingSelectionForCreate& WithProtectedResourceArns(const Aws::Vector<Aws::String>& value) { SetProtectedResourceArns(value); return *this;}
    inline RestoreTestingSelectionForCreate& WithProtectedResourceArns(Aws::Vector<Aws::String>&& value) { SetProtectedResourceArns(std::move(value)); return *this;}
    inline RestoreTestingSelectionForCreate& AddProtectedResourceArns(const Aws::String& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(value); return *this; }
    inline RestoreTestingSelectionForCreate& AddProtectedResourceArns(Aws::String&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(std::move(value)); return *this; }
    inline RestoreTestingSelectionForCreate& AddProtectedResourceArns(const char* value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you have included the wildcard in ProtectedResourceArns, you can include
     * resource conditions, such as <code>ProtectedResourceConditions: { StringEquals:
     * [{ key: "XXXX", value: "YYYY" }]</code>.</p>
     */
    inline const ProtectedResourceConditions& GetProtectedResourceConditions() const{ return m_protectedResourceConditions; }
    inline bool ProtectedResourceConditionsHasBeenSet() const { return m_protectedResourceConditionsHasBeenSet; }
    inline void SetProtectedResourceConditions(const ProtectedResourceConditions& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = value; }
    inline void SetProtectedResourceConditions(ProtectedResourceConditions&& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = std::move(value); }
    inline RestoreTestingSelectionForCreate& WithProtectedResourceConditions(const ProtectedResourceConditions& value) { SetProtectedResourceConditions(value); return *this;}
    inline RestoreTestingSelectionForCreate& WithProtectedResourceConditions(ProtectedResourceConditions&& value) { SetProtectedResourceConditions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource included in a restore testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     * <p>Supported resource types accepted include:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>S3</code> for
     * Amazon S3</p> </li> </ul>
     */
    inline const Aws::String& GetProtectedResourceType() const{ return m_protectedResourceType; }
    inline bool ProtectedResourceTypeHasBeenSet() const { return m_protectedResourceTypeHasBeenSet; }
    inline void SetProtectedResourceType(const Aws::String& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = value; }
    inline void SetProtectedResourceType(Aws::String&& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = std::move(value); }
    inline void SetProtectedResourceType(const char* value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType.assign(value); }
    inline RestoreTestingSelectionForCreate& WithProtectedResourceType(const Aws::String& value) { SetProtectedResourceType(value); return *this;}
    inline RestoreTestingSelectionForCreate& WithProtectedResourceType(Aws::String&& value) { SetProtectedResourceType(std::move(value)); return *this;}
    inline RestoreTestingSelectionForCreate& WithProtectedResourceType(const char* value) { SetProtectedResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can override certain restore metadata keys by including the parameter
     * <code>RestoreMetadataOverrides</code> in the body of
     * <code>RestoreTestingSelection</code>. Key values are not case sensitive.</p>
     * <p>See the complete list of <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-testing-inferred-metadata.html">restore
     * testing inferred metadata</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRestoreMetadataOverrides() const{ return m_restoreMetadataOverrides; }
    inline bool RestoreMetadataOverridesHasBeenSet() const { return m_restoreMetadataOverridesHasBeenSet; }
    inline void SetRestoreMetadataOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides = value; }
    inline void SetRestoreMetadataOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides = std::move(value); }
    inline RestoreTestingSelectionForCreate& WithRestoreMetadataOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetRestoreMetadataOverrides(value); return *this;}
    inline RestoreTestingSelectionForCreate& WithRestoreMetadataOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetRestoreMetadataOverrides(std::move(value)); return *this;}
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(const Aws::String& key, const Aws::String& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, value); return *this; }
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(Aws::String&& key, const Aws::String& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), value); return *this; }
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(const Aws::String& key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, std::move(value)); return *this; }
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(Aws::String&& key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), std::move(value)); return *this; }
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(const char* key, Aws::String&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, std::move(value)); return *this; }
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(Aws::String&& key, const char* value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::move(key), value); return *this; }
    inline RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(const char* key, const char* value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique name of the restore testing selection that belongs to the related
     * restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = value; }
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::move(value); }
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName.assign(value); }
    inline RestoreTestingSelectionForCreate& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}
    inline RestoreTestingSelectionForCreate& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}
    inline RestoreTestingSelectionForCreate& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is amount of hours (1 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline int GetValidationWindowHours() const{ return m_validationWindowHours; }
    inline bool ValidationWindowHoursHasBeenSet() const { return m_validationWindowHoursHasBeenSet; }
    inline void SetValidationWindowHours(int value) { m_validationWindowHoursHasBeenSet = true; m_validationWindowHours = value; }
    inline RestoreTestingSelectionForCreate& WithValidationWindowHours(int value) { SetValidationWindowHours(value); return *this;}
    ///@}
  private:

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

    Aws::String m_restoreTestingSelectionName;
    bool m_restoreTestingSelectionNameHasBeenSet = false;

    int m_validationWindowHours;
    bool m_validationWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
