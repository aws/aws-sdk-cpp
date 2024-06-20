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
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline const Aws::String& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const Aws::String& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(Aws::String&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline void SetAccountScope(const char* value) { m_accountScopeHasBeenSet = true; m_accountScope.assign(value); }
    inline RdsReservedInstancesConfiguration& WithAccountScope(const Aws::String& value) { SetAccountScope(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithAccountScope(Aws::String&& value) { SetAccountScope(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithAccountScope(const char* value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline RdsReservedInstancesConfiguration& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetNormalizedUnitsToPurchase() const{ return m_normalizedUnitsToPurchase; }
    inline bool NormalizedUnitsToPurchaseHasBeenSet() const { return m_normalizedUnitsToPurchaseHasBeenSet; }
    inline void SetNormalizedUnitsToPurchase(const Aws::String& value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase = value; }
    inline void SetNormalizedUnitsToPurchase(Aws::String&& value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase = std::move(value); }
    inline void SetNormalizedUnitsToPurchase(const char* value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase.assign(value); }
    inline RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(const Aws::String& value) { SetNormalizedUnitsToPurchase(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(Aws::String&& value) { SetNormalizedUnitsToPurchase(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(const char* value) { SetNormalizedUnitsToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const{ return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    inline void SetTerm(const Aws::String& value) { m_termHasBeenSet = true; m_term = value; }
    inline void SetTerm(Aws::String&& value) { m_termHasBeenSet = true; m_term = std::move(value); }
    inline void SetTerm(const char* value) { m_termHasBeenSet = true; m_term.assign(value); }
    inline RdsReservedInstancesConfiguration& WithTerm(const Aws::String& value) { SetTerm(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithTerm(Aws::String&& value) { SetTerm(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithTerm(const char* value) { SetTerm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const Aws::String& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(Aws::String&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline void SetPaymentOption(const char* value) { m_paymentOptionHasBeenSet = true; m_paymentOption.assign(value); }
    inline RdsReservedInstancesConfiguration& WithPaymentOption(const Aws::String& value) { SetPaymentOption(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithPaymentOption(Aws::String&& value) { SetPaymentOption(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithPaymentOption(const char* value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetNumberOfInstancesToPurchase() const{ return m_numberOfInstancesToPurchase; }
    inline bool NumberOfInstancesToPurchaseHasBeenSet() const { return m_numberOfInstancesToPurchaseHasBeenSet; }
    inline void SetNumberOfInstancesToPurchase(const Aws::String& value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase = value; }
    inline void SetNumberOfInstancesToPurchase(Aws::String&& value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase = std::move(value); }
    inline void SetNumberOfInstancesToPurchase(const char* value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase.assign(value); }
    inline RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(const Aws::String& value) { SetNumberOfInstancesToPurchase(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(Aws::String&& value) { SetNumberOfInstancesToPurchase(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(const char* value) { SetNumberOfInstancesToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline RdsReservedInstancesConfiguration& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline RdsReservedInstancesConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline const Aws::String& GetReservedInstancesRegion() const{ return m_reservedInstancesRegion; }
    inline bool ReservedInstancesRegionHasBeenSet() const { return m_reservedInstancesRegionHasBeenSet; }
    inline void SetReservedInstancesRegion(const Aws::String& value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion = value; }
    inline void SetReservedInstancesRegion(Aws::String&& value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion = std::move(value); }
    inline void SetReservedInstancesRegion(const char* value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion.assign(value); }
    inline RdsReservedInstancesConfiguration& WithReservedInstancesRegion(const Aws::String& value) { SetReservedInstancesRegion(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithReservedInstancesRegion(Aws::String&& value) { SetReservedInstancesRegion(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithReservedInstancesRegion(const char* value) { SetReservedInstancesRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }
    inline RdsReservedInstancesConfiguration& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline const Aws::String& GetCurrentGeneration() const{ return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    inline void SetCurrentGeneration(const Aws::String& value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }
    inline void SetCurrentGeneration(Aws::String&& value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = std::move(value); }
    inline void SetCurrentGeneration(const char* value) { m_currentGenerationHasBeenSet = true; m_currentGeneration.assign(value); }
    inline RdsReservedInstancesConfiguration& WithCurrentGeneration(const Aws::String& value) { SetCurrentGeneration(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithCurrentGeneration(Aws::String&& value) { SetCurrentGeneration(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithCurrentGeneration(const char* value) { SetCurrentGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }
    inline RdsReservedInstancesConfiguration& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetMonthlyRecurringCost() const{ return m_monthlyRecurringCost; }
    inline bool MonthlyRecurringCostHasBeenSet() const { return m_monthlyRecurringCostHasBeenSet; }
    inline void SetMonthlyRecurringCost(const Aws::String& value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost = value; }
    inline void SetMonthlyRecurringCost(Aws::String&& value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost = std::move(value); }
    inline void SetMonthlyRecurringCost(const char* value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost.assign(value); }
    inline RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(const Aws::String& value) { SetMonthlyRecurringCost(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(Aws::String&& value) { SetMonthlyRecurringCost(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(const char* value) { SetMonthlyRecurringCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline RdsReservedInstancesConfiguration& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEdition() const{ return m_databaseEdition; }
    inline bool DatabaseEditionHasBeenSet() const { return m_databaseEditionHasBeenSet; }
    inline void SetDatabaseEdition(const Aws::String& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = value; }
    inline void SetDatabaseEdition(Aws::String&& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = std::move(value); }
    inline void SetDatabaseEdition(const char* value) { m_databaseEditionHasBeenSet = true; m_databaseEdition.assign(value); }
    inline RdsReservedInstancesConfiguration& WithDatabaseEdition(const Aws::String& value) { SetDatabaseEdition(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithDatabaseEdition(Aws::String&& value) { SetDatabaseEdition(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithDatabaseEdition(const char* value) { SetDatabaseEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const{ return m_databaseEngine; }
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }
    inline void SetDatabaseEngine(const Aws::String& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = value; }
    inline void SetDatabaseEngine(Aws::String&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::move(value); }
    inline void SetDatabaseEngine(const char* value) { m_databaseEngineHasBeenSet = true; m_databaseEngine.assign(value); }
    inline RdsReservedInstancesConfiguration& WithDatabaseEngine(const Aws::String& value) { SetDatabaseEngine(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithDatabaseEngine(Aws::String&& value) { SetDatabaseEngine(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithDatabaseEngine(const char* value) { SetDatabaseEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline const Aws::String& GetDeploymentOption() const{ return m_deploymentOption; }
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }
    inline void SetDeploymentOption(const Aws::String& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }
    inline void SetDeploymentOption(Aws::String&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }
    inline void SetDeploymentOption(const char* value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption.assign(value); }
    inline RdsReservedInstancesConfiguration& WithDeploymentOption(const Aws::String& value) { SetDeploymentOption(value); return *this;}
    inline RdsReservedInstancesConfiguration& WithDeploymentOption(Aws::String&& value) { SetDeploymentOption(std::move(value)); return *this;}
    inline RdsReservedInstancesConfiguration& WithDeploymentOption(const char* value) { SetDeploymentOption(value); return *this;}
    ///@}
  private:

    Aws::String m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_normalizedUnitsToPurchase;
    bool m_normalizedUnitsToPurchaseHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_numberOfInstancesToPurchase;
    bool m_numberOfInstancesToPurchaseHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_reservedInstancesRegion;
    bool m_reservedInstancesRegionHasBeenSet = false;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet = false;

    Aws::String m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_monthlyRecurringCost;
    bool m_monthlyRecurringCostHasBeenSet = false;

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
