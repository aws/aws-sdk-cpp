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
    AWS_BACKUP_API RestoreTestingSelectionForCreate() = default;
    AWS_BACKUP_API RestoreTestingSelectionForCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>. </p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    RestoreTestingSelectionForCreate& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each protected resource can be filtered by its specific ARNs, such as
     * <code>ProtectedResourceArns: ["arn:aws:...", "arn:aws:..."]</code> or by a
     * wildcard: <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectedResourceArns() const { return m_protectedResourceArns; }
    inline bool ProtectedResourceArnsHasBeenSet() const { return m_protectedResourceArnsHasBeenSet; }
    template<typename ProtectedResourceArnsT = Aws::Vector<Aws::String>>
    void SetProtectedResourceArns(ProtectedResourceArnsT&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = std::forward<ProtectedResourceArnsT>(value); }
    template<typename ProtectedResourceArnsT = Aws::Vector<Aws::String>>
    RestoreTestingSelectionForCreate& WithProtectedResourceArns(ProtectedResourceArnsT&& value) { SetProtectedResourceArns(std::forward<ProtectedResourceArnsT>(value)); return *this;}
    template<typename ProtectedResourceArnsT = Aws::String>
    RestoreTestingSelectionForCreate& AddProtectedResourceArns(ProtectedResourceArnsT&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.emplace_back(std::forward<ProtectedResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you have included the wildcard in ProtectedResourceArns, you can include
     * resource conditions, such as <code>ProtectedResourceConditions: { StringEquals:
     * [{ key: "XXXX", value: "YYYY" }]</code>.</p>
     */
    inline const ProtectedResourceConditions& GetProtectedResourceConditions() const { return m_protectedResourceConditions; }
    inline bool ProtectedResourceConditionsHasBeenSet() const { return m_protectedResourceConditionsHasBeenSet; }
    template<typename ProtectedResourceConditionsT = ProtectedResourceConditions>
    void SetProtectedResourceConditions(ProtectedResourceConditionsT&& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = std::forward<ProtectedResourceConditionsT>(value); }
    template<typename ProtectedResourceConditionsT = ProtectedResourceConditions>
    RestoreTestingSelectionForCreate& WithProtectedResourceConditions(ProtectedResourceConditionsT&& value) { SetProtectedResourceConditions(std::forward<ProtectedResourceConditionsT>(value)); return *this;}
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
    inline const Aws::String& GetProtectedResourceType() const { return m_protectedResourceType; }
    inline bool ProtectedResourceTypeHasBeenSet() const { return m_protectedResourceTypeHasBeenSet; }
    template<typename ProtectedResourceTypeT = Aws::String>
    void SetProtectedResourceType(ProtectedResourceTypeT&& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = std::forward<ProtectedResourceTypeT>(value); }
    template<typename ProtectedResourceTypeT = Aws::String>
    RestoreTestingSelectionForCreate& WithProtectedResourceType(ProtectedResourceTypeT&& value) { SetProtectedResourceType(std::forward<ProtectedResourceTypeT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetRestoreMetadataOverrides() const { return m_restoreMetadataOverrides; }
    inline bool RestoreMetadataOverridesHasBeenSet() const { return m_restoreMetadataOverridesHasBeenSet; }
    template<typename RestoreMetadataOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetRestoreMetadataOverrides(RestoreMetadataOverridesT&& value) { m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides = std::forward<RestoreMetadataOverridesT>(value); }
    template<typename RestoreMetadataOverridesT = Aws::Map<Aws::String, Aws::String>>
    RestoreTestingSelectionForCreate& WithRestoreMetadataOverrides(RestoreMetadataOverridesT&& value) { SetRestoreMetadataOverrides(std::forward<RestoreMetadataOverridesT>(value)); return *this;}
    template<typename RestoreMetadataOverridesKeyT = Aws::String, typename RestoreMetadataOverridesValueT = Aws::String>
    RestoreTestingSelectionForCreate& AddRestoreMetadataOverrides(RestoreMetadataOverridesKeyT&& key, RestoreMetadataOverridesValueT&& value) {
      m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::forward<RestoreMetadataOverridesKeyT>(key), std::forward<RestoreMetadataOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique name of the restore testing selection that belongs to the related
     * restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const { return m_restoreTestingSelectionName; }
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    void SetRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::forward<RestoreTestingSelectionNameT>(value); }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    RestoreTestingSelectionForCreate& WithRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { SetRestoreTestingSelectionName(std::forward<RestoreTestingSelectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is amount of hours (0 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline int GetValidationWindowHours() const { return m_validationWindowHours; }
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

    int m_validationWindowHours{0};
    bool m_validationWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
