/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The RDS reserved instances configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/RdsReservedInstancesConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsReservedInstancesConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope for which you want recommendations.</p>
     */
    inline const Aws::String& GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    template<typename AccountScopeT = Aws::String>
    void SetAccountScope(AccountScopeT&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::forward<AccountScopeT>(value); }
    template<typename AccountScopeT = Aws::String>
    RdsReservedInstancesConfiguration& WithAccountScope(AccountScopeT&& value) { SetAccountScope(std::forward<AccountScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service for which you want recommendations.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    RdsReservedInstancesConfiguration& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    template<typename TermT = Aws::String>
    void SetTerm(TermT&& value) { m_termHasBeenSet = true; m_term = std::forward<TermT>(value); }
    template<typename TermT = Aws::String>
    RdsReservedInstancesConfiguration& WithTerm(TermT&& value) { SetTerm(std::forward<TermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    template<typename PaymentOptionT = Aws::String>
    void SetPaymentOption(PaymentOptionT&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::forward<PaymentOptionT>(value); }
    template<typename PaymentOptionT = Aws::String>
    RdsReservedInstancesConfiguration& WithPaymentOption(PaymentOptionT&& value) { SetPaymentOption(std::forward<PaymentOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline const Aws::String& GetReservedInstancesRegion() const { return m_reservedInstancesRegion; }
    inline bool ReservedInstancesRegionHasBeenSet() const { return m_reservedInstancesRegionHasBeenSet; }
    template<typename ReservedInstancesRegionT = Aws::String>
    void SetReservedInstancesRegion(ReservedInstancesRegionT&& value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion = std::forward<ReservedInstancesRegionT>(value); }
    template<typename ReservedInstancesRegionT = Aws::String>
    RdsReservedInstancesConfiguration& WithReservedInstancesRegion(ReservedInstancesRegionT&& value) { SetReservedInstancesRegion(std::forward<ReservedInstancesRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const { return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    template<typename UpfrontCostT = Aws::String>
    void SetUpfrontCost(UpfrontCostT&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::forward<UpfrontCostT>(value); }
    template<typename UpfrontCostT = Aws::String>
    RdsReservedInstancesConfiguration& WithUpfrontCost(UpfrontCostT&& value) { SetUpfrontCost(std::forward<UpfrontCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetMonthlyRecurringCost() const { return m_monthlyRecurringCost; }
    inline bool MonthlyRecurringCostHasBeenSet() const { return m_monthlyRecurringCostHasBeenSet; }
    template<typename MonthlyRecurringCostT = Aws::String>
    void SetMonthlyRecurringCost(MonthlyRecurringCostT&& value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost = std::forward<MonthlyRecurringCostT>(value); }
    template<typename MonthlyRecurringCostT = Aws::String>
    RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(MonthlyRecurringCostT&& value) { SetMonthlyRecurringCost(std::forward<MonthlyRecurringCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetNormalizedUnitsToPurchase() const { return m_normalizedUnitsToPurchase; }
    inline bool NormalizedUnitsToPurchaseHasBeenSet() const { return m_normalizedUnitsToPurchaseHasBeenSet; }
    template<typename NormalizedUnitsToPurchaseT = Aws::String>
    void SetNormalizedUnitsToPurchase(NormalizedUnitsToPurchaseT&& value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase = std::forward<NormalizedUnitsToPurchaseT>(value); }
    template<typename NormalizedUnitsToPurchaseT = Aws::String>
    RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(NormalizedUnitsToPurchaseT&& value) { SetNormalizedUnitsToPurchase(std::forward<NormalizedUnitsToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetNumberOfInstancesToPurchase() const { return m_numberOfInstancesToPurchase; }
    inline bool NumberOfInstancesToPurchaseHasBeenSet() const { return m_numberOfInstancesToPurchaseHasBeenSet; }
    template<typename NumberOfInstancesToPurchaseT = Aws::String>
    void SetNumberOfInstancesToPurchase(NumberOfInstancesToPurchaseT&& value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase = std::forward<NumberOfInstancesToPurchaseT>(value); }
    template<typename NumberOfInstancesToPurchaseT = Aws::String>
    RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(NumberOfInstancesToPurchaseT&& value) { SetNumberOfInstancesToPurchase(std::forward<NumberOfInstancesToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    RdsReservedInstancesConfiguration& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    RdsReservedInstancesConfiguration& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const { return m_sizeFlexEligible; }
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }
    inline RdsReservedInstancesConfiguration& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline const Aws::String& GetCurrentGeneration() const { return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    template<typename CurrentGenerationT = Aws::String>
    void SetCurrentGeneration(CurrentGenerationT&& value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = std::forward<CurrentGenerationT>(value); }
    template<typename CurrentGenerationT = Aws::String>
    RdsReservedInstancesConfiguration& WithCurrentGeneration(CurrentGenerationT&& value) { SetCurrentGeneration(std::forward<CurrentGenerationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    RdsReservedInstancesConfiguration& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEdition() const { return m_databaseEdition; }
    inline bool DatabaseEditionHasBeenSet() const { return m_databaseEditionHasBeenSet; }
    template<typename DatabaseEditionT = Aws::String>
    void SetDatabaseEdition(DatabaseEditionT&& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = std::forward<DatabaseEditionT>(value); }
    template<typename DatabaseEditionT = Aws::String>
    RdsReservedInstancesConfiguration& WithDatabaseEdition(DatabaseEditionT&& value) { SetDatabaseEdition(std::forward<DatabaseEditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const { return m_databaseEngine; }
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }
    template<typename DatabaseEngineT = Aws::String>
    void SetDatabaseEngine(DatabaseEngineT&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::forward<DatabaseEngineT>(value); }
    template<typename DatabaseEngineT = Aws::String>
    RdsReservedInstancesConfiguration& WithDatabaseEngine(DatabaseEngineT&& value) { SetDatabaseEngine(std::forward<DatabaseEngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline const Aws::String& GetDeploymentOption() const { return m_deploymentOption; }
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }
    template<typename DeploymentOptionT = Aws::String>
    void SetDeploymentOption(DeploymentOptionT&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::forward<DeploymentOptionT>(value); }
    template<typename DeploymentOptionT = Aws::String>
    RdsReservedInstancesConfiguration& WithDeploymentOption(DeploymentOptionT&& value) { SetDeploymentOption(std::forward<DeploymentOptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_reservedInstancesRegion;
    bool m_reservedInstancesRegionHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_monthlyRecurringCost;
    bool m_monthlyRecurringCostHasBeenSet = false;

    Aws::String m_normalizedUnitsToPurchase;
    bool m_normalizedUnitsToPurchaseHasBeenSet = false;

    Aws::String m_numberOfInstancesToPurchase;
    bool m_numberOfInstancesToPurchaseHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_sizeFlexEligible{false};
    bool m_sizeFlexEligibleHasBeenSet = false;

    Aws::String m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_databaseEdition;
    bool m_databaseEditionHasBeenSet = false;

    Aws::String m_databaseEngine;
    bool m_databaseEngineHasBeenSet = false;

    Aws::String m_deploymentOption;
    bool m_deploymentOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
