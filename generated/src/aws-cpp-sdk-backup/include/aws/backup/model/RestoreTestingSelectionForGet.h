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
    AWS_BACKUP_API RestoreTestingSelectionForGet() = default;
    AWS_BACKUP_API RestoreTestingSelectionForGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForGet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that a restore testing selection was created, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CreationTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 201812:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    RestoreTestingSelectionForGet& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    RestoreTestingSelectionForGet& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for
     * example:<code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    RestoreTestingSelectionForGet& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can include specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectedResourceArns() const { return m_protectedResourceArns; }
    inline bool ProtectedResourceArnsHasBeenSet() const { return m_protectedResourceArnsHasBeenSet; }
    template<typename ProtectedResourceArnsT = Aws::Vector<Aws::String>>
    void SetProtectedResourceArns(ProtectedResourceArnsT&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = std::forward<ProtectedResourceArnsT>(value); }
    template<typename ProtectedResourceArnsT = Aws::Vector<Aws::String>>
    RestoreTestingSelectionForGet& WithProtectedResourceArns(ProtectedResourceArnsT&& value) { SetProtectedResourceArns(std::forward<ProtectedResourceArnsT>(value)); return *this;}
    template<typename ProtectedResourceArnsT = Aws::String>
    RestoreTestingSelectionForGet& AddProtectedResourceArns(ProtectedResourceArnsT&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.emplace_back(std::forward<ProtectedResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In a resource testing selection, this parameter filters by specific
     * conditions such as <code>StringEquals</code> or
     * <code>StringNotEquals</code>.</p>
     */
    inline const ProtectedResourceConditions& GetProtectedResourceConditions() const { return m_protectedResourceConditions; }
    inline bool ProtectedResourceConditionsHasBeenSet() const { return m_protectedResourceConditionsHasBeenSet; }
    template<typename ProtectedResourceConditionsT = ProtectedResourceConditions>
    void SetProtectedResourceConditions(ProtectedResourceConditionsT&& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = std::forward<ProtectedResourceConditionsT>(value); }
    template<typename ProtectedResourceConditionsT = ProtectedResourceConditions>
    RestoreTestingSelectionForGet& WithProtectedResourceConditions(ProtectedResourceConditionsT&& value) { SetProtectedResourceConditions(std::forward<ProtectedResourceConditionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource included in a resource testing
     * selection; for example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline const Aws::String& GetProtectedResourceType() const { return m_protectedResourceType; }
    inline bool ProtectedResourceTypeHasBeenSet() const { return m_protectedResourceTypeHasBeenSet; }
    template<typename ProtectedResourceTypeT = Aws::String>
    void SetProtectedResourceType(ProtectedResourceTypeT&& value) { m_protectedResourceTypeHasBeenSet = true; m_protectedResourceType = std::forward<ProtectedResourceTypeT>(value); }
    template<typename ProtectedResourceTypeT = Aws::String>
    RestoreTestingSelectionForGet& WithProtectedResourceType(ProtectedResourceTypeT&& value) { SetProtectedResourceType(std::forward<ProtectedResourceTypeT>(value)); return *this;}
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
    RestoreTestingSelectionForGet& WithRestoreMetadataOverrides(RestoreMetadataOverridesT&& value) { SetRestoreMetadataOverrides(std::forward<RestoreMetadataOverridesT>(value)); return *this;}
    template<typename RestoreMetadataOverridesKeyT = Aws::String, typename RestoreMetadataOverridesValueT = Aws::String>
    RestoreTestingSelectionForGet& AddRestoreMetadataOverrides(RestoreMetadataOverridesKeyT&& key, RestoreMetadataOverridesValueT&& value) {
      m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::forward<RestoreMetadataOverridesKeyT>(key), std::forward<RestoreMetadataOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    RestoreTestingSelectionForGet& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
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
    RestoreTestingSelectionForGet& WithRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { SetRestoreTestingSelectionName(std::forward<RestoreTestingSelectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is amount of hours (1 to 168) available to run a validation script on
     * the data. The data will be deleted upon the completion of the validation script
     * or the end of the specified retention period, whichever comes first.</p>
     */
    inline int GetValidationWindowHours() const { return m_validationWindowHours; }
    inline bool ValidationWindowHoursHasBeenSet() const { return m_validationWindowHoursHasBeenSet; }
    inline void SetValidationWindowHours(int value) { m_validationWindowHoursHasBeenSet = true; m_validationWindowHours = value; }
    inline RestoreTestingSelectionForGet& WithValidationWindowHours(int value) { SetValidationWindowHours(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
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

    int m_validationWindowHours{0};
    bool m_validationWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
