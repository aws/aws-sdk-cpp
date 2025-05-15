/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledBaselineInheritanceDrift.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>The types of drift that can be detected for an enabled baseline.</p> <ul>
   * <li> <p> Amazon Web Services Control Tower detects inheritance drift on the
   * enabled baselines that target OUs: <code>AWSControlTowerBaseline</code> and
   * <code>BackupBaseline</code>. </p> </li> <li> <p>Amazon Web Services Control
   * Tower does not detect drift on the baselines that apply to your landing zone:
   * <code>IdentityCenterBaseline</code>, <code>AuditBaseline</code>,
   * <code>LogArchiveBaseline</code>, <code>BackupCentralVaultBaseline</code>, or
   * <code>BackupAdminBaseline</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/types-of-baselines.html">Types
   * of baselines</a>.</p> </li> </ul> <p>Baselines enabled on an OU are inherited by
   * its member accounts as child <code>EnabledBaseline</code> resources. The
   * baseline on the OU serves as the parent <code>EnabledBaseline</code>, which
   * governs the configuration of each child <code>EnabledBaseline</code>.</p> <p>If
   * the baseline configuration of a member account in an OU does not match the
   * configuration of the parent OU, the parent and child baseline is in a state of
   * inheritance drift. This drift could occur in the
   * <code>AWSControlTowerBaseline</code> or the <code>BackupBaseline</code> related
   * to that account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineDriftTypes">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineDriftTypes
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineDriftTypes() = default;
    AWS_CONTROLTOWER_API EnabledBaselineDriftTypes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineDriftTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>At least one account within the target OU does not match the baseline
     * configuration defined on that OU. An account is in inheritance drift when it
     * does not match the configuration of a parent OU, possibly a new parent OU, if
     * the account is moved. </p>
     */
    inline const EnabledBaselineInheritanceDrift& GetInheritance() const { return m_inheritance; }
    inline bool InheritanceHasBeenSet() const { return m_inheritanceHasBeenSet; }
    template<typename InheritanceT = EnabledBaselineInheritanceDrift>
    void SetInheritance(InheritanceT&& value) { m_inheritanceHasBeenSet = true; m_inheritance = std::forward<InheritanceT>(value); }
    template<typename InheritanceT = EnabledBaselineInheritanceDrift>
    EnabledBaselineDriftTypes& WithInheritance(InheritanceT&& value) { SetInheritance(std::forward<InheritanceT>(value)); return *this;}
    ///@}
  private:

    EnabledBaselineInheritanceDrift m_inheritance;
    bool m_inheritanceHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
