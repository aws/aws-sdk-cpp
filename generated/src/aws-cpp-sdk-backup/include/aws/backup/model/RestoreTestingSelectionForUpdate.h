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
    AWS_BACKUP_API RestoreTestingSelectionForUpdate() = default;
    AWS_BACKUP_API RestoreTestingSelectionForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingSelectionForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    RestoreTestingSelectionForUpdate& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can include a list of specific ARNs, such as <code>ProtectedResourceArns:
     * ["arn:aws:...", "arn:aws:..."]</code> or you can include a wildcard:
     * <code>ProtectedResourceArns: ["*"]</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectedResourceArns() const { return m_protectedResourceArns; }
    inline bool ProtectedResourceArnsHasBeenSet() const { return m_protectedResourceArnsHasBeenSet; }
    template<typename ProtectedResourceArnsT = Aws::Vector<Aws::String>>
    void SetProtectedResourceArns(ProtectedResourceArnsT&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns = std::forward<ProtectedResourceArnsT>(value); }
    template<typename ProtectedResourceArnsT = Aws::Vector<Aws::String>>
    RestoreTestingSelectionForUpdate& WithProtectedResourceArns(ProtectedResourceArnsT&& value) { SetProtectedResourceArns(std::forward<ProtectedResourceArnsT>(value)); return *this;}
    template<typename ProtectedResourceArnsT = Aws::String>
    RestoreTestingSelectionForUpdate& AddProtectedResourceArns(ProtectedResourceArnsT&& value) { m_protectedResourceArnsHasBeenSet = true; m_protectedResourceArns.emplace_back(std::forward<ProtectedResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditions that you define for resources in your restore testing plan
     * using tags.</p>
     */
    inline const ProtectedResourceConditions& GetProtectedResourceConditions() const { return m_protectedResourceConditions; }
    inline bool ProtectedResourceConditionsHasBeenSet() const { return m_protectedResourceConditionsHasBeenSet; }
    template<typename ProtectedResourceConditionsT = ProtectedResourceConditions>
    void SetProtectedResourceConditions(ProtectedResourceConditionsT&& value) { m_protectedResourceConditionsHasBeenSet = true; m_protectedResourceConditions = std::forward<ProtectedResourceConditionsT>(value); }
    template<typename ProtectedResourceConditionsT = ProtectedResourceConditions>
    RestoreTestingSelectionForUpdate& WithProtectedResourceConditions(ProtectedResourceConditionsT&& value) { SetProtectedResourceConditions(std::forward<ProtectedResourceConditionsT>(value)); return *this;}
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
    RestoreTestingSelectionForUpdate& WithRestoreMetadataOverrides(RestoreMetadataOverridesT&& value) { SetRestoreMetadataOverrides(std::forward<RestoreMetadataOverridesT>(value)); return *this;}
    template<typename RestoreMetadataOverridesKeyT = Aws::String, typename RestoreMetadataOverridesValueT = Aws::String>
    RestoreTestingSelectionForUpdate& AddRestoreMetadataOverrides(RestoreMetadataOverridesKeyT&& key, RestoreMetadataOverridesValueT&& value) {
      m_restoreMetadataOverridesHasBeenSet = true; m_restoreMetadataOverrides.emplace(std::forward<RestoreMetadataOverridesKeyT>(key), std::forward<RestoreMetadataOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This value represents the time, in hours, data is retained after a restore
     * test so that optional validation can be completed.</p> <p>Accepted value is an
     * integer between 0 and 168 (the hourly equivalent of seven days).</p>
     */
    inline int GetValidationWindowHours() const { return m_validationWindowHours; }
    inline bool ValidationWindowHoursHasBeenSet() const { return m_validationWindowHoursHasBeenSet; }
    inline void SetValidationWindowHours(int value) { m_validationWindowHoursHasBeenSet = true; m_validationWindowHours = value; }
    inline RestoreTestingSelectionForUpdate& WithValidationWindowHours(int value) { SetValidationWindowHours(value); return *this;}
    ///@}
  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_protectedResourceArns;
    bool m_protectedResourceArnsHasBeenSet = false;

    ProtectedResourceConditions m_protectedResourceConditions;
    bool m_protectedResourceConditionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_restoreMetadataOverrides;
    bool m_restoreMetadataOverridesHasBeenSet = false;

    int m_validationWindowHours{0};
    bool m_validationWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
