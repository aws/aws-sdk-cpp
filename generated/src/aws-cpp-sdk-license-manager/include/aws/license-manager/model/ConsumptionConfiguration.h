/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/RenewType.h>
#include <aws/license-manager/model/ProvisionalConfiguration.h>
#include <aws/license-manager/model/BorrowConfiguration.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details about a consumption configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ConsumptionConfiguration">AWS
   * API Reference</a></p>
   */
  class ConsumptionConfiguration
  {
  public:
    AWS_LICENSEMANAGER_API ConsumptionConfiguration() = default;
    AWS_LICENSEMANAGER_API ConsumptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ConsumptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Renewal frequency.</p>
     */
    inline RenewType GetRenewType() const { return m_renewType; }
    inline bool RenewTypeHasBeenSet() const { return m_renewTypeHasBeenSet; }
    inline void SetRenewType(RenewType value) { m_renewTypeHasBeenSet = true; m_renewType = value; }
    inline ConsumptionConfiguration& WithRenewType(RenewType value) { SetRenewType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a provisional configuration.</p>
     */
    inline const ProvisionalConfiguration& GetProvisionalConfiguration() const { return m_provisionalConfiguration; }
    inline bool ProvisionalConfigurationHasBeenSet() const { return m_provisionalConfigurationHasBeenSet; }
    template<typename ProvisionalConfigurationT = ProvisionalConfiguration>
    void SetProvisionalConfiguration(ProvisionalConfigurationT&& value) { m_provisionalConfigurationHasBeenSet = true; m_provisionalConfiguration = std::forward<ProvisionalConfigurationT>(value); }
    template<typename ProvisionalConfigurationT = ProvisionalConfiguration>
    ConsumptionConfiguration& WithProvisionalConfiguration(ProvisionalConfigurationT&& value) { SetProvisionalConfiguration(std::forward<ProvisionalConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a borrow configuration.</p>
     */
    inline const BorrowConfiguration& GetBorrowConfiguration() const { return m_borrowConfiguration; }
    inline bool BorrowConfigurationHasBeenSet() const { return m_borrowConfigurationHasBeenSet; }
    template<typename BorrowConfigurationT = BorrowConfiguration>
    void SetBorrowConfiguration(BorrowConfigurationT&& value) { m_borrowConfigurationHasBeenSet = true; m_borrowConfiguration = std::forward<BorrowConfigurationT>(value); }
    template<typename BorrowConfigurationT = BorrowConfiguration>
    ConsumptionConfiguration& WithBorrowConfiguration(BorrowConfigurationT&& value) { SetBorrowConfiguration(std::forward<BorrowConfigurationT>(value)); return *this;}
    ///@}
  private:

    RenewType m_renewType{RenewType::NOT_SET};
    bool m_renewTypeHasBeenSet = false;

    ProvisionalConfiguration m_provisionalConfiguration;
    bool m_provisionalConfigurationHasBeenSet = false;

    BorrowConfiguration m_borrowConfiguration;
    bool m_borrowConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
