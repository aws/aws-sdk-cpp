/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/HybridUpdateInfoEntry.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about update activities for different components of a
   * hybrid directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/HybridUpdateActivities">AWS
   * API Reference</a></p>
   */
  class HybridUpdateActivities
  {
  public:
    AWS_DIRECTORYSERVICE_API HybridUpdateActivities() = default;
    AWS_DIRECTORYSERVICE_API HybridUpdateActivities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API HybridUpdateActivities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of update activities related to the self-managed instances with SSM in
     * the self-managed instances with SSM hybrid directory configuration.</p>
     */
    inline const Aws::Vector<HybridUpdateInfoEntry>& GetSelfManagedInstances() const { return m_selfManagedInstances; }
    inline bool SelfManagedInstancesHasBeenSet() const { return m_selfManagedInstancesHasBeenSet; }
    template<typename SelfManagedInstancesT = Aws::Vector<HybridUpdateInfoEntry>>
    void SetSelfManagedInstances(SelfManagedInstancesT&& value) { m_selfManagedInstancesHasBeenSet = true; m_selfManagedInstances = std::forward<SelfManagedInstancesT>(value); }
    template<typename SelfManagedInstancesT = Aws::Vector<HybridUpdateInfoEntry>>
    HybridUpdateActivities& WithSelfManagedInstances(SelfManagedInstancesT&& value) { SetSelfManagedInstances(std::forward<SelfManagedInstancesT>(value)); return *this;}
    template<typename SelfManagedInstancesT = HybridUpdateInfoEntry>
    HybridUpdateActivities& AddSelfManagedInstances(SelfManagedInstancesT&& value) { m_selfManagedInstancesHasBeenSet = true; m_selfManagedInstances.emplace_back(std::forward<SelfManagedInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of update activities related to hybrid directory administrator account
     * changes.</p>
     */
    inline const Aws::Vector<HybridUpdateInfoEntry>& GetHybridAdministratorAccount() const { return m_hybridAdministratorAccount; }
    inline bool HybridAdministratorAccountHasBeenSet() const { return m_hybridAdministratorAccountHasBeenSet; }
    template<typename HybridAdministratorAccountT = Aws::Vector<HybridUpdateInfoEntry>>
    void SetHybridAdministratorAccount(HybridAdministratorAccountT&& value) { m_hybridAdministratorAccountHasBeenSet = true; m_hybridAdministratorAccount = std::forward<HybridAdministratorAccountT>(value); }
    template<typename HybridAdministratorAccountT = Aws::Vector<HybridUpdateInfoEntry>>
    HybridUpdateActivities& WithHybridAdministratorAccount(HybridAdministratorAccountT&& value) { SetHybridAdministratorAccount(std::forward<HybridAdministratorAccountT>(value)); return *this;}
    template<typename HybridAdministratorAccountT = HybridUpdateInfoEntry>
    HybridUpdateActivities& AddHybridAdministratorAccount(HybridAdministratorAccountT&& value) { m_hybridAdministratorAccountHasBeenSet = true; m_hybridAdministratorAccount.emplace_back(std::forward<HybridAdministratorAccountT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<HybridUpdateInfoEntry> m_selfManagedInstances;
    bool m_selfManagedInstancesHasBeenSet = false;

    Aws::Vector<HybridUpdateInfoEntry> m_hybridAdministratorAccount;
    bool m_hybridAdministratorAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
