/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/RootCauseImpact.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The combination of Amazon Web Services service, linked account, linked
   * account name, Region, and usage type where a cost anomaly is observed, along
   * with the dollar and percentage amount of the anomaly impact. The linked account
   * name will only be available when the account name can be
   * identified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RootCause">AWS API
   * Reference</a></p>
   */
  class RootCause
  {
  public:
    AWS_COSTEXPLORER_API RootCause() = default;
    AWS_COSTEXPLORER_API RootCause(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services service name that's associated with the cost anomaly.
     * </p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    RootCause& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that's associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RootCause& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member account value that's associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetLinkedAccount() const { return m_linkedAccount; }
    inline bool LinkedAccountHasBeenSet() const { return m_linkedAccountHasBeenSet; }
    template<typename LinkedAccountT = Aws::String>
    void SetLinkedAccount(LinkedAccountT&& value) { m_linkedAccountHasBeenSet = true; m_linkedAccount = std::forward<LinkedAccountT>(value); }
    template<typename LinkedAccountT = Aws::String>
    RootCause& WithLinkedAccount(LinkedAccountT&& value) { SetLinkedAccount(std::forward<LinkedAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member account name value that's associated with the cost anomaly.</p>
     */
    inline const Aws::String& GetLinkedAccountName() const { return m_linkedAccountName; }
    inline bool LinkedAccountNameHasBeenSet() const { return m_linkedAccountNameHasBeenSet; }
    template<typename LinkedAccountNameT = Aws::String>
    void SetLinkedAccountName(LinkedAccountNameT&& value) { m_linkedAccountNameHasBeenSet = true; m_linkedAccountName = std::forward<LinkedAccountNameT>(value); }
    template<typename LinkedAccountNameT = Aws::String>
    RootCause& WithLinkedAccountName(LinkedAccountNameT&& value) { SetLinkedAccountName(std::forward<LinkedAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>UsageType</code> value that's associated with the cost anomaly.
     * </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    RootCause& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar impact for the root cause.</p>
     */
    inline const RootCauseImpact& GetImpact() const { return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    template<typename ImpactT = RootCauseImpact>
    void SetImpact(ImpactT&& value) { m_impactHasBeenSet = true; m_impact = std::forward<ImpactT>(value); }
    template<typename ImpactT = RootCauseImpact>
    RootCause& WithImpact(ImpactT&& value) { SetImpact(std::forward<ImpactT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_linkedAccount;
    bool m_linkedAccountHasBeenSet = false;

    Aws::String m_linkedAccountName;
    bool m_linkedAccountNameHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    RootCauseImpact m_impact;
    bool m_impactHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
